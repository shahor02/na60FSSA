#if !defined(__CINT__) || defined(__MAKECINT__)
#include "KMCDetectorFwd.h"
#include "KMCProbeFwd.h"
#include "TLorentzVector.h"
#include "TGenPhaseSpace.h"
#include "TRandom.h"
#include "TF1.h"
#include "TH1.h"
#include "TH2.h"
#include "TFile.h"
#include "TROOT.h"
#include "GenMUONLMR.h"
#include "TStopwatch.h"
#include "TTree.h"
#include "TTreeStream.h"
#endif

//TRandom *rnd;

// Track Chi2Tot cut
double ChiTot = 1.5; 

// settings for signal generation
double MotherMass;
int generYPtPar, ProcType;
double y0SG   = 1.9;   // gaussian y mean - 20 GeV
double sigySG = 1.;   // .. sigma
double yminSG = -10.;   // min y to generate 
double ymaxSG = 10.;   // 
double TSG = 0.3;     // inv.slope of thermal pt distribution
double ptminSG = 0.01;
double ptmaxSG = 3;

double vX=0,vY=0,vZ=0; // event vertex
KMCDetectorFwd* det = 0;

void SetProcessParameters(const Char_t *Process, Double_t E);

void runDimuTest(int nev=10000,     // n events to generate
		 const Char_t *Process = "omega",
		 double EInt = 20, // beam lab energey in GEV 
		 int Seed=12345,
		 const char* setup="setup/setup.txt" // setup to load
		 )
{

  //  rnd = new TRandom(Seed);
  gRandom->SetSeed(Seed);

  TTreeSRedirector outStream("dimu.root","recreate"); // the output stream trees will go here
  
  //
  det = new KMCDetectorFwd();
  det->ReadSetup(setup,setup);

  det->ForceLastActiveLayer(det->GetLastActiveLayerITS()); // will not propagate beyond VertexTelescope
  det->SetMinITSHits(det->GetNumberOfActiveLayersITS()); // require hit in every layer
  det->SetMinMSHits(0); // we don't have muon spectrometer
  det->SetMinTRHits(0); // we don't have muon trigger stations

  // max number of seeds on each layer to propagate (per muon track)
  det->SetMaxSeedToPropagate(3000); // relevant only if backgrount is considered
  //
  // set chi2 cuts
  det->SetMaxChi2Cl(10.);  // max track to cluster chi2
  det->SetMaxChi2NDF(3.5); // max total chi2/ndf
  det->SetMaxChi2Vtx(20e9);  // fiducial cut on chi2 of convergence to vtx

  // IMPORTANT FOR NON-UNIFORM FIELDS
  det->SetDefStepAir(1);
  //  det->SetMinP2Propagate(1); //NA60+
  //
  det->SetIncludeVertex(kFALSE); // count vertex as an extra measured point
  //
  // det->SetApplyBransonPCorrection(); // Branson correction, only relevant for setup with MS

  SetProcessParameters(Process,TMath::Abs(EInt));
  GenMUONLMR *gener = new GenMUONLMR(7,1);
  //      0         1        2         3         4        5           6         7
  //  "fPtPion","fPtKaon","fPtEta","fPtRho","fPtOmega","fPtPhi","fPtEtaPrime"  "fPtJPsi"
  gener->SetYParams(generYPtPar,1.,y0SG,sigySG,0.);
  gener->SetPtParams(generYPtPar,1.,TSG,MotherMass,0.);
  // 2 = rho
  // 3 = omega 2 body
  // 4 = omega Dalitz
  //
  // Processes eta 2B=0  eta D=1  rho =2   omega 2B=3  omega D=4  phi=5    eta p=6       pi=7      K=8      J/psi=9
  //           kEtaLMR   kEtaLMR  kRhoLMR  kOmegaLMR   kOmegaLMR  kPhiLMR  kEtaPrimeLMR  kPionLMR  kK        kJPsi
  //	      
  //  BR       5.8e-6    3.1e-4   4.55e-5  7.28e-5     1.3e-4     2.86e-4  1.04e-4       1         0.6344    0.05

  gener->GenerateSingleProcess(ProcType);
  printf("LMR generator initialization completed\n"); 

  Double_t prodM[2] = {KMCDetectorFwd::kMassMu, KMCDetectorFwd::kMassMu};
  const int crgMu[2] = {-1,1};
  //
  //  det->BookControlHistos();
  
  int outN = 100;
  for (int iev=0;iev<nev;iev++) {
    //
    int npix[2]={0}, nfake[2]={0};
    float chiGlo[2] = {999.,999.};
    //
    if ((iev%outN)==0) printf("Done %d out of %d\n",iev,nev);
    //
    gener->Generate();
    int crgOrd = gRandom->Rndm() > 0.5 ? -1:1;
    //
    int nrec = 0;
    int nfakeHits = 0;
    double pxyz[3];

    TParticle* fMu[2];
    fMu[0] = gener->GetMuon(0);
    fMu[1] = gener->GetMuon(1);

    TLorentzVector dimuGen, muGen[2], muRec[2], dimuRec;
    
    for (int imu=0;imu<2;imu++) {
      muGen[imu].SetXYZM(fMu[imu]->Px(),fMu[imu]->Py(),fMu[imu]->Pz(),0.105658369);
    }
    dimuGen  = muGen[0];
    dimuGen += muGen[1];

    for (int imu=0;imu<2;imu++) {
      TLorentzVector* pDecMu = new TLorentzVector(0.,0.,0.,0.);
      pDecMu->SetXYZM(fMu[imu]->Px(),fMu[imu]->Py(),fMu[imu]->Pz(),fMu[imu]->GetMass());
      int crg = crgOrd*crgMu[imu];
      bool res = det->SolveSingleTrack(muGen[imu].Pt(),muGen[imu].Rapidity(),muGen[imu].Phi(), prodM[imu], crg, vX,vY,vZ, 0,1,99);
      if (!res) continue; // gerenation or reconstruction failed

      KMCProbeFwd* trw = det->GetLayer(0)->GetWinnerMCTrack(); // this should give the reconstructed propagated to the vertex 
      if (!trw) break; // track was not reconstructed
      nrec++;
      nfakeHits += trw->GetNFakeITSHits(); // in absence of background, there should be no fake hits, but we count just in case...
      trw->GetPXYZ(pxyz);
      muRec[imu].SetXYZM(pxyz[0],pxyz[1],pxyz[2],prodM[imu]);
      npix[imu] = trw->GetNITSHits();
      nfake[imu] = trw->GetNFakeITSHits();
      chiGlo[imu] = trw->GetNormChi2(kTRUE);
    }

    //    if (nrec<2) continue;
    dimuRec  = muRec[0];
    dimuRec += muRec[1];

    outStream << "res" << "gen=" << &dimuGen << "rec=" << &dimuRec
	      << "nrec="<< nrec
	      << "genMu0=" << &muGen[0] << "genMu1=" << &muGen[1]
	      << "recMu0=" << &muRec[0] << "recMu1=" << &muRec[1]
	      << "npix0=" << npix[0] << "npix1=" << npix[1]
	      << "nfake0=" << nfake[0] << "nfake1=" << nfake[1]
	      << "chi0=" << chiGlo[0] << "chi1=" << chiGlo[1] << "\n";
  }
  outStream.Close();
}

void SetProcessParameters(const Char_t *Process, Double_t E) {
  
  if(E == 20.) {
    y0SG = 1.9;
    sigySG = 1.;
  } else if(E == 30.){
    y0SG = 2.08;
    sigySG = 1.;
  } else if(E == 40.){
    y0SG = 2.22;
    if(strcmp(Process,"jpsi") == 0) sigySG = 0.19; //PYTHIA 50 GeV
    else sigySG = 1.; 
  }  else if(E == 60.){
    y0SG = 2.42;
    sigySG = 1.;
  }  else if(E == 80.){
    y0SG = 2.57;
    sigySG = 1.;
  }  else if(E == 160.){
    y0SG = 2.9;
    if(strcmp(Process,"jpsi") == 0) sigySG = 0.42; //PYTHIA
    else sigySG = 1.2; //NA49
  }  else if(E == 400.){
    y0SG = 3.37;
    sigySG = 1.;
  }


  if(strcmp(Process,"etaDalitz") == 0) { // eta Dalitz
    ProcType    = 1;
    generYPtPar = 2;
    MotherMass  = 0.549;  
    if(E == 40.) {
      TSG = 0.225; 
    }
    else if(E == 160.){
      TSG = 0.24; 
    }
  } else   if(strcmp(Process,"eta2Body") == 0) { // eta Dalitz
    ProcType    = 0;
    generYPtPar = 2;
    MotherMass  = 0.549;  
    if(E == 40.) {
      TSG = 0.225; 
    }
    else if(E == 160.){
      TSG = 0.24; 
    }
  } else if(strcmp(Process,"rho") == 0) { // rho
    ProcType    = 2;
    generYPtPar = 3; 
    MotherMass  = 0.775; 
    if(E == 40.) {
      TSG = 0.25; 
    }
    else if(E == 160.){
      TSG = 0.29; 
    }
  }
  else if(strcmp(Process,"omega2Body") == 0) { // omega 2 body
    ProcType    = 3;
    generYPtPar = 4; 
    MotherMass  = 0.781;  
    if(E == 40.) {
      TSG = 0.25; 
    }
    else if(E == 160.){
      TSG = 0.29; 
    }
  } 
  else if(strcmp(Process,"omegaDalitz") == 0) { // omega Dalitz
    ProcType    = 4;
    generYPtPar = 4; 
    MotherMass  = 0.781;
    if(E == 40.) {
      TSG = 0.25; 
    }
    else if(E == 160.){
      TSG = 0.29; 
    }   
  } 
  else if(strcmp(Process,"phi") == 0) { // phi
    ProcType    = 5;
    generYPtPar = 5; 
    MotherMass  = 1.02; 
    if(E == 40.) {
      TSG =0.25;           
    }
    else if(E == 160.){
      TSG = 0.30; //NA49
    }  
  }   else if(strcmp(Process,"etaPrime") == 0) { // eta prime
    ProcType    = 6;
    generYPtPar = 6; 
    MotherMass  = 0.958;  
    if(E == 40.) {
      TSG = 0.25; 
    }
    else if(E == 160.){
      TSG = 0.29; 
    } 
  }  else if(strcmp(Process,"jpsi") == 0) { // J/psi
    ProcType    = 9;
    generYPtPar = 7; 
    MotherMass  = 3.0969; 
    if(E == 40.) {
      TSG = 0.25; 
    }
    else if(E == 160.){
      TSG = 0.284; //NA50
    }   
  }

  printf("Generating %s\n",Process);
  printf("Particle mass = %f\n",MotherMass);
  printf("Inverse slope = %f\n",TSG);
  printf("rapidity sigma = %f\n",sigySG);

}
