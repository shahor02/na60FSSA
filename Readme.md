
Builing the library requires ROOT installed and sources (Makefile assumes
ROOT 6, but 5 also should work (some compiliation options may require change)

Build the library by calling ``make``

One can run a simple test: muons from omega->mu+ mu- decays at {0,0,0} propagated
through the dipole field towards 5 silicon planes in field-free region.

Run the test as

root -b -q load.C runDimuTest.C+

The output for every generated omega is streamed into the root tree, storing
the generated and reconstructed single track and dimuons kinematics
(as a TLorentzVector), number of muon traks reconstructed as well as their
fit chi2's etc.

root [1] auto* tr = (TTree*)gFile->Get("res");
root [2] tr->Draw("rec.M() - gen.M()","nrec==2"); // difference in rec. and gen. masses

Very incomplete description of the code: https://cernbox.cern.ch/index.php/s/flL3gcDe9W6pJ3V
