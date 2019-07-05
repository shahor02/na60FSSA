// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME KMCDetFwdDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "GenMUONLMR.h"
#include "KMCClusterFwd.h"
#include "KMCDetectorFwd.h"
#include "KMCFlukaParser.h"
#include "KMCLayerFwd.h"
#include "KMCProbeFwd.h"
#include "KMCUtils.h"
#include "NaMaterial.h"
#include "AliLog.h"
#include "TrackPar.h"
#include "TTreeStream.h"
#include "GenMUONLMR.h"
#include "KMCClusterFwd.h"
#include "KMCDetectorFwd.h"
#include "KMCFlukaParser.h"
#include "KMCLayerFwd.h"
#include "KMCProbeFwd.h"
#include "KMCUtils.h"
#include "NaMaterial.h"
#include "AliLog.h"
#include "TrackPar.h"
#include "TTreeStream.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_GenMUONLMR(void *p = 0);
   static void *newArray_GenMUONLMR(Long_t size, void *p);
   static void delete_GenMUONLMR(void *p);
   static void deleteArray_GenMUONLMR(void *p);
   static void destruct_GenMUONLMR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GenMUONLMR*)
   {
      ::GenMUONLMR *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GenMUONLMR >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GenMUONLMR", ::GenMUONLMR::Class_Version(), "GenMUONLMR.h", 11,
                  typeid(::GenMUONLMR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GenMUONLMR::Dictionary, isa_proxy, 4,
                  sizeof(::GenMUONLMR) );
      instance.SetNew(&new_GenMUONLMR);
      instance.SetNewArray(&newArray_GenMUONLMR);
      instance.SetDelete(&delete_GenMUONLMR);
      instance.SetDeleteArray(&deleteArray_GenMUONLMR);
      instance.SetDestructor(&destruct_GenMUONLMR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GenMUONLMR*)
   {
      return GenerateInitInstanceLocal((::GenMUONLMR*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GenMUONLMR*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KMCClusterFwd(void *p = 0);
   static void *newArray_KMCClusterFwd(Long_t size, void *p);
   static void delete_KMCClusterFwd(void *p);
   static void deleteArray_KMCClusterFwd(void *p);
   static void destruct_KMCClusterFwd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KMCClusterFwd*)
   {
      ::KMCClusterFwd *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KMCClusterFwd >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KMCClusterFwd", ::KMCClusterFwd::Class_Version(), "KMCClusterFwd.h", 6,
                  typeid(::KMCClusterFwd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KMCClusterFwd::Dictionary, isa_proxy, 4,
                  sizeof(::KMCClusterFwd) );
      instance.SetNew(&new_KMCClusterFwd);
      instance.SetNewArray(&newArray_KMCClusterFwd);
      instance.SetDelete(&delete_KMCClusterFwd);
      instance.SetDeleteArray(&deleteArray_KMCClusterFwd);
      instance.SetDestructor(&destruct_KMCClusterFwd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KMCClusterFwd*)
   {
      return GenerateInitInstanceLocal((::KMCClusterFwd*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KMCClusterFwd*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MagField(void *p);
   static void deleteArray_MagField(void *p);
   static void destruct_MagField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MagField*)
   {
      ::MagField *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MagField >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MagField", ::MagField::Class_Version(), "KMCUtils.h", 7,
                  typeid(::MagField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MagField::Dictionary, isa_proxy, 4,
                  sizeof(::MagField) );
      instance.SetDelete(&delete_MagField);
      instance.SetDeleteArray(&deleteArray_MagField);
      instance.SetDestructor(&destruct_MagField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MagField*)
   {
      return GenerateInitInstanceLocal((::MagField*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MagField*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TrackPar(void *p = 0);
   static void *newArray_TrackPar(Long_t size, void *p);
   static void delete_TrackPar(void *p);
   static void deleteArray_TrackPar(void *p);
   static void destruct_TrackPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrackPar*)
   {
      ::TrackPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TrackPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TrackPar", ::TrackPar::Class_Version(), "TrackPar.h", 34,
                  typeid(::TrackPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TrackPar::Dictionary, isa_proxy, 4,
                  sizeof(::TrackPar) );
      instance.SetNew(&new_TrackPar);
      instance.SetNewArray(&newArray_TrackPar);
      instance.SetDelete(&delete_TrackPar);
      instance.SetDeleteArray(&deleteArray_TrackPar);
      instance.SetDestructor(&destruct_TrackPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrackPar*)
   {
      return GenerateInitInstanceLocal((::TrackPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TrackPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KMCProbeFwd(void *p = 0);
   static void *newArray_KMCProbeFwd(Long_t size, void *p);
   static void delete_KMCProbeFwd(void *p);
   static void deleteArray_KMCProbeFwd(void *p);
   static void destruct_KMCProbeFwd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KMCProbeFwd*)
   {
      ::KMCProbeFwd *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KMCProbeFwd >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KMCProbeFwd", ::KMCProbeFwd::Class_Version(), "KMCProbeFwd.h", 11,
                  typeid(::KMCProbeFwd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KMCProbeFwd::Dictionary, isa_proxy, 4,
                  sizeof(::KMCProbeFwd) );
      instance.SetNew(&new_KMCProbeFwd);
      instance.SetNewArray(&newArray_KMCProbeFwd);
      instance.SetDelete(&delete_KMCProbeFwd);
      instance.SetDeleteArray(&deleteArray_KMCProbeFwd);
      instance.SetDestructor(&destruct_KMCProbeFwd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KMCProbeFwd*)
   {
      return GenerateInitInstanceLocal((::KMCProbeFwd*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KMCProbeFwd*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_NaMaterial(void *p = 0);
   static void *newArray_NaMaterial(Long_t size, void *p);
   static void delete_NaMaterial(void *p);
   static void deleteArray_NaMaterial(void *p);
   static void destruct_NaMaterial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NaMaterial*)
   {
      ::NaMaterial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NaMaterial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("NaMaterial", ::NaMaterial::Class_Version(), "NaMaterial.h", 7,
                  typeid(::NaMaterial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NaMaterial::Dictionary, isa_proxy, 4,
                  sizeof(::NaMaterial) );
      instance.SetNew(&new_NaMaterial);
      instance.SetNewArray(&newArray_NaMaterial);
      instance.SetDelete(&delete_NaMaterial);
      instance.SetDeleteArray(&deleteArray_NaMaterial);
      instance.SetDestructor(&destruct_NaMaterial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NaMaterial*)
   {
      return GenerateInitInstanceLocal((::NaMaterial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::NaMaterial*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_NaMixture(void *p = 0);
   static void *newArray_NaMixture(Long_t size, void *p);
   static void delete_NaMixture(void *p);
   static void deleteArray_NaMixture(void *p);
   static void destruct_NaMixture(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NaMixture*)
   {
      ::NaMixture *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NaMixture >(0);
      static ::ROOT::TGenericClassInfo 
         instance("NaMixture", ::NaMixture::Class_Version(), "NaMaterial.h", 33,
                  typeid(::NaMixture), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NaMixture::Dictionary, isa_proxy, 4,
                  sizeof(::NaMixture) );
      instance.SetNew(&new_NaMixture);
      instance.SetNewArray(&newArray_NaMixture);
      instance.SetDelete(&delete_NaMixture);
      instance.SetDeleteArray(&deleteArray_NaMixture);
      instance.SetDestructor(&destruct_NaMixture);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NaMixture*)
   {
      return GenerateInitInstanceLocal((::NaMixture*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::NaMixture*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_KMCLayerFwd(void *p);
   static void deleteArray_KMCLayerFwd(void *p);
   static void destruct_KMCLayerFwd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KMCLayerFwd*)
   {
      ::KMCLayerFwd *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KMCLayerFwd >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KMCLayerFwd", ::KMCLayerFwd::Class_Version(), "KMCLayerFwd.h", 10,
                  typeid(::KMCLayerFwd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KMCLayerFwd::Dictionary, isa_proxy, 4,
                  sizeof(::KMCLayerFwd) );
      instance.SetDelete(&delete_KMCLayerFwd);
      instance.SetDeleteArray(&deleteArray_KMCLayerFwd);
      instance.SetDestructor(&destruct_KMCLayerFwd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KMCLayerFwd*)
   {
      return GenerateInitInstanceLocal((::KMCLayerFwd*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KMCLayerFwd*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BeamPipe(void *p);
   static void deleteArray_BeamPipe(void *p);
   static void destruct_BeamPipe(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BeamPipe*)
   {
      ::BeamPipe *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BeamPipe >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BeamPipe", ::BeamPipe::Class_Version(), "KMCLayerFwd.h", 154,
                  typeid(::BeamPipe), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BeamPipe::Dictionary, isa_proxy, 4,
                  sizeof(::BeamPipe) );
      instance.SetDelete(&delete_BeamPipe);
      instance.SetDeleteArray(&deleteArray_BeamPipe);
      instance.SetDestructor(&destruct_BeamPipe);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BeamPipe*)
   {
      return GenerateInitInstanceLocal((::BeamPipe*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BeamPipe*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KMCDetectorFwd(void *p = 0);
   static void *newArray_KMCDetectorFwd(Long_t size, void *p);
   static void delete_KMCDetectorFwd(void *p);
   static void deleteArray_KMCDetectorFwd(void *p);
   static void destruct_KMCDetectorFwd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KMCDetectorFwd*)
   {
      ::KMCDetectorFwd *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KMCDetectorFwd >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KMCDetectorFwd", ::KMCDetectorFwd::Class_Version(), "KMCDetectorFwd.h", 25,
                  typeid(::KMCDetectorFwd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KMCDetectorFwd::Dictionary, isa_proxy, 4,
                  sizeof(::KMCDetectorFwd) );
      instance.SetNew(&new_KMCDetectorFwd);
      instance.SetNewArray(&newArray_KMCDetectorFwd);
      instance.SetDelete(&delete_KMCDetectorFwd);
      instance.SetDeleteArray(&deleteArray_KMCDetectorFwd);
      instance.SetDestructor(&destruct_KMCDetectorFwd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KMCDetectorFwd*)
   {
      return GenerateInitInstanceLocal((::KMCDetectorFwd*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KMCDetectorFwd*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *NaCardsInput_Dictionary();
   static void NaCardsInput_TClassManip(TClass*);
   static void *new_NaCardsInput(void *p = 0);
   static void *newArray_NaCardsInput(Long_t size, void *p);
   static void delete_NaCardsInput(void *p);
   static void deleteArray_NaCardsInput(void *p);
   static void destruct_NaCardsInput(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NaCardsInput*)
   {
      ::NaCardsInput *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::NaCardsInput));
      static ::ROOT::TGenericClassInfo 
         instance("NaCardsInput", "KMCDetectorFwd.h", 287,
                  typeid(::NaCardsInput), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NaCardsInput_Dictionary, isa_proxy, 4,
                  sizeof(::NaCardsInput) );
      instance.SetNew(&new_NaCardsInput);
      instance.SetNewArray(&newArray_NaCardsInput);
      instance.SetDelete(&delete_NaCardsInput);
      instance.SetDeleteArray(&deleteArray_NaCardsInput);
      instance.SetDestructor(&destruct_NaCardsInput);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NaCardsInput*)
   {
      return GenerateInitInstanceLocal((::NaCardsInput*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::NaCardsInput*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NaCardsInput_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::NaCardsInput*)0x0)->GetClass();
      NaCardsInput_TClassManip(theClass);
   return theClass;
   }

   static void NaCardsInput_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_KMCFlukaParser(void *p = 0);
   static void *newArray_KMCFlukaParser(Long_t size, void *p);
   static void delete_KMCFlukaParser(void *p);
   static void deleteArray_KMCFlukaParser(void *p);
   static void destruct_KMCFlukaParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KMCFlukaParser*)
   {
      ::KMCFlukaParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KMCFlukaParser >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KMCFlukaParser", ::KMCFlukaParser::Class_Version(), "KMCFlukaParser.h", 49,
                  typeid(::KMCFlukaParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KMCFlukaParser::Dictionary, isa_proxy, 4,
                  sizeof(::KMCFlukaParser) );
      instance.SetNew(&new_KMCFlukaParser);
      instance.SetNewArray(&newArray_KMCFlukaParser);
      instance.SetDelete(&delete_KMCFlukaParser);
      instance.SetDeleteArray(&deleteArray_KMCFlukaParser);
      instance.SetDestructor(&destruct_KMCFlukaParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KMCFlukaParser*)
   {
      return GenerateInitInstanceLocal((::KMCFlukaParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KMCFlukaParser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliLog*)
   {
      ::AliLog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliLog >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliLog", ::AliLog::Class_Version(), "AliLog.h", 27,
                  typeid(::AliLog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliLog::Dictionary, isa_proxy, 4,
                  sizeof(::AliLog) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliLog*)
   {
      return GenerateInitInstanceLocal((::AliLog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliLog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTreeDataElement(void *p);
   static void deleteArray_TTreeDataElement(void *p);
   static void destruct_TTreeDataElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeDataElement*)
   {
      ::TTreeDataElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeDataElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeDataElement", ::TTreeDataElement::Class_Version(), "TTreeStream.h", 16,
                  typeid(::TTreeDataElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeDataElement::Dictionary, isa_proxy, 4,
                  sizeof(::TTreeDataElement) );
      instance.SetDelete(&delete_TTreeDataElement);
      instance.SetDeleteArray(&deleteArray_TTreeDataElement);
      instance.SetDestructor(&destruct_TTreeDataElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeDataElement*)
   {
      return GenerateInitInstanceLocal((::TTreeDataElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeDataElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTreeStream(void *p);
   static void deleteArray_TTreeStream(void *p);
   static void destruct_TTreeStream(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeStream*)
   {
      ::TTreeStream *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeStream >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeStream", ::TTreeStream::Class_Version(), "TTreeStream.h", 36,
                  typeid(::TTreeStream), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeStream::Dictionary, isa_proxy, 4,
                  sizeof(::TTreeStream) );
      instance.SetDelete(&delete_TTreeStream);
      instance.SetDeleteArray(&deleteArray_TTreeStream);
      instance.SetDestructor(&destruct_TTreeStream);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeStream*)
   {
      return GenerateInitInstanceLocal((::TTreeStream*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeStream*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeSRedirector(void *p = 0);
   static void *newArray_TTreeSRedirector(Long_t size, void *p);
   static void delete_TTreeSRedirector(void *p);
   static void deleteArray_TTreeSRedirector(void *p);
   static void destruct_TTreeSRedirector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeSRedirector*)
   {
      ::TTreeSRedirector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeSRedirector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeSRedirector", ::TTreeSRedirector::Class_Version(), "TTreeStream.h", 85,
                  typeid(::TTreeSRedirector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeSRedirector::Dictionary, isa_proxy, 4,
                  sizeof(::TTreeSRedirector) );
      instance.SetNew(&new_TTreeSRedirector);
      instance.SetNewArray(&newArray_TTreeSRedirector);
      instance.SetDelete(&delete_TTreeSRedirector);
      instance.SetDeleteArray(&deleteArray_TTreeSRedirector);
      instance.SetDestructor(&destruct_TTreeSRedirector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeSRedirector*)
   {
      return GenerateInitInstanceLocal((::TTreeSRedirector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTreeSRedirector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr GenMUONLMR::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GenMUONLMR::Class_Name()
{
   return "GenMUONLMR";
}

//______________________________________________________________________________
const char *GenMUONLMR::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GenMUONLMR*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GenMUONLMR::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GenMUONLMR*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GenMUONLMR::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GenMUONLMR*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GenMUONLMR::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GenMUONLMR*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KMCClusterFwd::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KMCClusterFwd::Class_Name()
{
   return "KMCClusterFwd";
}

//______________________________________________________________________________
const char *KMCClusterFwd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMCClusterFwd*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KMCClusterFwd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMCClusterFwd*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KMCClusterFwd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMCClusterFwd*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KMCClusterFwd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMCClusterFwd*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MagField::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MagField::Class_Name()
{
   return "MagField";
}

//______________________________________________________________________________
const char *MagField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MagField*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MagField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MagField*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MagField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MagField*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MagField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MagField*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TrackPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrackPar::Class_Name()
{
   return "TrackPar";
}

//______________________________________________________________________________
const char *TrackPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrackPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrackPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrackPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KMCProbeFwd::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KMCProbeFwd::Class_Name()
{
   return "KMCProbeFwd";
}

//______________________________________________________________________________
const char *KMCProbeFwd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMCProbeFwd*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KMCProbeFwd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMCProbeFwd*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KMCProbeFwd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMCProbeFwd*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KMCProbeFwd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMCProbeFwd*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr NaMaterial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *NaMaterial::Class_Name()
{
   return "NaMaterial";
}

//______________________________________________________________________________
const char *NaMaterial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NaMaterial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int NaMaterial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NaMaterial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NaMaterial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NaMaterial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NaMaterial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NaMaterial*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr NaMixture::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *NaMixture::Class_Name()
{
   return "NaMixture";
}

//______________________________________________________________________________
const char *NaMixture::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NaMixture*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int NaMixture::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NaMixture*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NaMixture::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NaMixture*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NaMixture::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NaMixture*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KMCLayerFwd::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KMCLayerFwd::Class_Name()
{
   return "KMCLayerFwd";
}

//______________________________________________________________________________
const char *KMCLayerFwd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMCLayerFwd*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KMCLayerFwd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMCLayerFwd*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KMCLayerFwd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMCLayerFwd*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KMCLayerFwd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMCLayerFwd*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BeamPipe::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BeamPipe::Class_Name()
{
   return "BeamPipe";
}

//______________________________________________________________________________
const char *BeamPipe::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BeamPipe*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BeamPipe::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BeamPipe*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BeamPipe::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BeamPipe*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BeamPipe::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BeamPipe*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KMCDetectorFwd::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KMCDetectorFwd::Class_Name()
{
   return "KMCDetectorFwd";
}

//______________________________________________________________________________
const char *KMCDetectorFwd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMCDetectorFwd*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KMCDetectorFwd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMCDetectorFwd*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KMCDetectorFwd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMCDetectorFwd*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KMCDetectorFwd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMCDetectorFwd*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KMCFlukaParser::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KMCFlukaParser::Class_Name()
{
   return "KMCFlukaParser";
}

//______________________________________________________________________________
const char *KMCFlukaParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMCFlukaParser*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KMCFlukaParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KMCFlukaParser*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KMCFlukaParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMCFlukaParser*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KMCFlukaParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KMCFlukaParser*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliLog::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliLog::Class_Name()
{
   return "AliLog";
}

//______________________________________________________________________________
const char *AliLog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliLog*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliLog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliLog*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliLog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliLog*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliLog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliLog*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeDataElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeDataElement::Class_Name()
{
   return "TTreeDataElement";
}

//______________________________________________________________________________
const char *TTreeDataElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeDataElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeDataElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeDataElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeDataElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeDataElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeDataElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeDataElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeStream::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeStream::Class_Name()
{
   return "TTreeStream";
}

//______________________________________________________________________________
const char *TTreeStream::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeStream*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeStream::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeStream*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeStream::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeStream*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeStream::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeStream*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeSRedirector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeSRedirector::Class_Name()
{
   return "TTreeSRedirector";
}

//______________________________________________________________________________
const char *TTreeSRedirector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeSRedirector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeSRedirector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeSRedirector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeSRedirector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeSRedirector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeSRedirector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeSRedirector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void GenMUONLMR::Streamer(TBuffer &R__b)
{
   // Stream an object of class GenMUONLMR.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GenMUONLMR::Class(),this);
   } else {
      R__b.WriteClassBuffer(GenMUONLMR::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GenMUONLMR(void *p) {
      return  p ? new(p) ::GenMUONLMR : new ::GenMUONLMR;
   }
   static void *newArray_GenMUONLMR(Long_t nElements, void *p) {
      return p ? new(p) ::GenMUONLMR[nElements] : new ::GenMUONLMR[nElements];
   }
   // Wrapper around operator delete
   static void delete_GenMUONLMR(void *p) {
      delete ((::GenMUONLMR*)p);
   }
   static void deleteArray_GenMUONLMR(void *p) {
      delete [] ((::GenMUONLMR*)p);
   }
   static void destruct_GenMUONLMR(void *p) {
      typedef ::GenMUONLMR current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GenMUONLMR

//______________________________________________________________________________
void KMCClusterFwd::Streamer(TBuffer &R__b)
{
   // Stream an object of class KMCClusterFwd.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KMCClusterFwd::Class(),this);
   } else {
      R__b.WriteClassBuffer(KMCClusterFwd::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KMCClusterFwd(void *p) {
      return  p ? new(p) ::KMCClusterFwd : new ::KMCClusterFwd;
   }
   static void *newArray_KMCClusterFwd(Long_t nElements, void *p) {
      return p ? new(p) ::KMCClusterFwd[nElements] : new ::KMCClusterFwd[nElements];
   }
   // Wrapper around operator delete
   static void delete_KMCClusterFwd(void *p) {
      delete ((::KMCClusterFwd*)p);
   }
   static void deleteArray_KMCClusterFwd(void *p) {
      delete [] ((::KMCClusterFwd*)p);
   }
   static void destruct_KMCClusterFwd(void *p) {
      typedef ::KMCClusterFwd current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KMCClusterFwd

//______________________________________________________________________________
void MagField::Streamer(TBuffer &R__b)
{
   // Stream an object of class MagField.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MagField::Class(),this);
   } else {
      R__b.WriteClassBuffer(MagField::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MagField(void *p) {
      delete ((::MagField*)p);
   }
   static void deleteArray_MagField(void *p) {
      delete [] ((::MagField*)p);
   }
   static void destruct_MagField(void *p) {
      typedef ::MagField current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MagField

//______________________________________________________________________________
void TrackPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TrackPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TrackPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(TrackPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrackPar(void *p) {
      return  p ? new(p) ::TrackPar : new ::TrackPar;
   }
   static void *newArray_TrackPar(Long_t nElements, void *p) {
      return p ? new(p) ::TrackPar[nElements] : new ::TrackPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrackPar(void *p) {
      delete ((::TrackPar*)p);
   }
   static void deleteArray_TrackPar(void *p) {
      delete [] ((::TrackPar*)p);
   }
   static void destruct_TrackPar(void *p) {
      typedef ::TrackPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrackPar

//______________________________________________________________________________
void KMCProbeFwd::Streamer(TBuffer &R__b)
{
   // Stream an object of class KMCProbeFwd.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KMCProbeFwd::Class(),this);
   } else {
      R__b.WriteClassBuffer(KMCProbeFwd::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KMCProbeFwd(void *p) {
      return  p ? new(p) ::KMCProbeFwd : new ::KMCProbeFwd;
   }
   static void *newArray_KMCProbeFwd(Long_t nElements, void *p) {
      return p ? new(p) ::KMCProbeFwd[nElements] : new ::KMCProbeFwd[nElements];
   }
   // Wrapper around operator delete
   static void delete_KMCProbeFwd(void *p) {
      delete ((::KMCProbeFwd*)p);
   }
   static void deleteArray_KMCProbeFwd(void *p) {
      delete [] ((::KMCProbeFwd*)p);
   }
   static void destruct_KMCProbeFwd(void *p) {
      typedef ::KMCProbeFwd current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KMCProbeFwd

//______________________________________________________________________________
void NaMaterial::Streamer(TBuffer &R__b)
{
   // Stream an object of class NaMaterial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NaMaterial::Class(),this);
   } else {
      R__b.WriteClassBuffer(NaMaterial::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_NaMaterial(void *p) {
      return  p ? new(p) ::NaMaterial : new ::NaMaterial;
   }
   static void *newArray_NaMaterial(Long_t nElements, void *p) {
      return p ? new(p) ::NaMaterial[nElements] : new ::NaMaterial[nElements];
   }
   // Wrapper around operator delete
   static void delete_NaMaterial(void *p) {
      delete ((::NaMaterial*)p);
   }
   static void deleteArray_NaMaterial(void *p) {
      delete [] ((::NaMaterial*)p);
   }
   static void destruct_NaMaterial(void *p) {
      typedef ::NaMaterial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::NaMaterial

//______________________________________________________________________________
void NaMixture::Streamer(TBuffer &R__b)
{
   // Stream an object of class NaMixture.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NaMixture::Class(),this);
   } else {
      R__b.WriteClassBuffer(NaMixture::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_NaMixture(void *p) {
      return  p ? new(p) ::NaMixture : new ::NaMixture;
   }
   static void *newArray_NaMixture(Long_t nElements, void *p) {
      return p ? new(p) ::NaMixture[nElements] : new ::NaMixture[nElements];
   }
   // Wrapper around operator delete
   static void delete_NaMixture(void *p) {
      delete ((::NaMixture*)p);
   }
   static void deleteArray_NaMixture(void *p) {
      delete [] ((::NaMixture*)p);
   }
   static void destruct_NaMixture(void *p) {
      typedef ::NaMixture current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::NaMixture

//______________________________________________________________________________
void KMCLayerFwd::Streamer(TBuffer &R__b)
{
   // Stream an object of class KMCLayerFwd.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KMCLayerFwd::Class(),this);
   } else {
      R__b.WriteClassBuffer(KMCLayerFwd::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_KMCLayerFwd(void *p) {
      delete ((::KMCLayerFwd*)p);
   }
   static void deleteArray_KMCLayerFwd(void *p) {
      delete [] ((::KMCLayerFwd*)p);
   }
   static void destruct_KMCLayerFwd(void *p) {
      typedef ::KMCLayerFwd current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KMCLayerFwd

//______________________________________________________________________________
void BeamPipe::Streamer(TBuffer &R__b)
{
   // Stream an object of class BeamPipe.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BeamPipe::Class(),this);
   } else {
      R__b.WriteClassBuffer(BeamPipe::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BeamPipe(void *p) {
      delete ((::BeamPipe*)p);
   }
   static void deleteArray_BeamPipe(void *p) {
      delete [] ((::BeamPipe*)p);
   }
   static void destruct_BeamPipe(void *p) {
      typedef ::BeamPipe current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BeamPipe

//______________________________________________________________________________
void KMCDetectorFwd::Streamer(TBuffer &R__b)
{
   // Stream an object of class KMCDetectorFwd.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KMCDetectorFwd::Class(),this);
   } else {
      R__b.WriteClassBuffer(KMCDetectorFwd::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KMCDetectorFwd(void *p) {
      return  p ? new(p) ::KMCDetectorFwd : new ::KMCDetectorFwd;
   }
   static void *newArray_KMCDetectorFwd(Long_t nElements, void *p) {
      return p ? new(p) ::KMCDetectorFwd[nElements] : new ::KMCDetectorFwd[nElements];
   }
   // Wrapper around operator delete
   static void delete_KMCDetectorFwd(void *p) {
      delete ((::KMCDetectorFwd*)p);
   }
   static void deleteArray_KMCDetectorFwd(void *p) {
      delete [] ((::KMCDetectorFwd*)p);
   }
   static void destruct_KMCDetectorFwd(void *p) {
      typedef ::KMCDetectorFwd current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KMCDetectorFwd

namespace ROOT {
   // Wrappers around operator new
   static void *new_NaCardsInput(void *p) {
      return  p ? new(p) ::NaCardsInput : new ::NaCardsInput;
   }
   static void *newArray_NaCardsInput(Long_t nElements, void *p) {
      return p ? new(p) ::NaCardsInput[nElements] : new ::NaCardsInput[nElements];
   }
   // Wrapper around operator delete
   static void delete_NaCardsInput(void *p) {
      delete ((::NaCardsInput*)p);
   }
   static void deleteArray_NaCardsInput(void *p) {
      delete [] ((::NaCardsInput*)p);
   }
   static void destruct_NaCardsInput(void *p) {
      typedef ::NaCardsInput current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::NaCardsInput

//______________________________________________________________________________
void KMCFlukaParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class KMCFlukaParser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KMCFlukaParser::Class(),this);
   } else {
      R__b.WriteClassBuffer(KMCFlukaParser::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KMCFlukaParser(void *p) {
      return  p ? new(p) ::KMCFlukaParser : new ::KMCFlukaParser;
   }
   static void *newArray_KMCFlukaParser(Long_t nElements, void *p) {
      return p ? new(p) ::KMCFlukaParser[nElements] : new ::KMCFlukaParser[nElements];
   }
   // Wrapper around operator delete
   static void delete_KMCFlukaParser(void *p) {
      delete ((::KMCFlukaParser*)p);
   }
   static void deleteArray_KMCFlukaParser(void *p) {
      delete [] ((::KMCFlukaParser*)p);
   }
   static void destruct_KMCFlukaParser(void *p) {
      typedef ::KMCFlukaParser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KMCFlukaParser

//______________________________________________________________________________
void AliLog::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliLog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliLog::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliLog::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::AliLog

//______________________________________________________________________________
void TTreeDataElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeDataElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreeDataElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreeDataElement::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTreeDataElement(void *p) {
      delete ((::TTreeDataElement*)p);
   }
   static void deleteArray_TTreeDataElement(void *p) {
      delete [] ((::TTreeDataElement*)p);
   }
   static void destruct_TTreeDataElement(void *p) {
      typedef ::TTreeDataElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeDataElement

//______________________________________________________________________________
void TTreeStream::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeStream.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreeStream::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreeStream::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTreeStream(void *p) {
      delete ((::TTreeStream*)p);
   }
   static void deleteArray_TTreeStream(void *p) {
      delete [] ((::TTreeStream*)p);
   }
   static void destruct_TTreeStream(void *p) {
      typedef ::TTreeStream current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeStream

//______________________________________________________________________________
void TTreeSRedirector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeSRedirector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreeSRedirector::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreeSRedirector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeSRedirector(void *p) {
      return  p ? new(p) ::TTreeSRedirector : new ::TTreeSRedirector;
   }
   static void *newArray_TTreeSRedirector(Long_t nElements, void *p) {
      return p ? new(p) ::TTreeSRedirector[nElements] : new ::TTreeSRedirector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreeSRedirector(void *p) {
      delete ((::TTreeSRedirector*)p);
   }
   static void deleteArray_TTreeSRedirector(void *p) {
      delete [] ((::TTreeSRedirector*)p);
   }
   static void destruct_TTreeSRedirector(void *p) {
      typedef ::TTreeSRedirector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTreeSRedirector

namespace {
  void TriggerDictionaryInitialization_KMCDetFwdDict_Impl() {
    static const char* headers[] = {
"GenMUONLMR.h",
"KMCClusterFwd.h",
"KMCDetectorFwd.h",
"KMCFlukaParser.h",
"KMCLayerFwd.h",
"KMCProbeFwd.h",
"KMCUtils.h",
"NaMaterial.h",
"AliLog.h",
"TrackPar.h",
"TTreeStream.h",
"GenMUONLMR.h",
"KMCClusterFwd.h",
"KMCDetectorFwd.h",
"KMCFlukaParser.h",
"KMCLayerFwd.h",
"KMCProbeFwd.h",
"KMCUtils.h",
"NaMaterial.h",
"AliLog.h",
"TrackPar.h",
"TTreeStream.h",
0
    };
    static const char* includePaths[] = {
"/home/shahoian/alice/sw/ubuntu1804_x86-64/ROOT/v6-16-00-3/include",
"/usr/include",
"./",
"/home/shahoian/alice/sw/ubuntu1804_x86-64/ROOT/v6-16-00-3/include",
"/home/shahoian/dev/na60fsSA/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "KMCDetFwdDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(low mass dimuons parametric generator)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$GenMUONLMR.h")))  GenMUONLMR;
class __attribute__((annotate("$clingAutoload$KMCClusterFwd.h")))  KMCClusterFwd;
class __attribute__((annotate(R"ATTRDUMP(custom magfield)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$KMCUtils.h")))  __attribute__((annotate("$clingAutoload$KMCDetectorFwd.h")))  MagField;
class __attribute__((annotate("$clingAutoload$TrackPar.h")))  __attribute__((annotate("$clingAutoload$KMCDetectorFwd.h")))  TrackPar;
class __attribute__((annotate("$clingAutoload$KMCProbeFwd.h")))  __attribute__((annotate("$clingAutoload$KMCDetectorFwd.h")))  KMCProbeFwd;
class __attribute__((annotate(R"ATTRDUMP(Material Object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$NaMaterial.h")))  __attribute__((annotate("$clingAutoload$KMCDetectorFwd.h")))  NaMaterial;
class __attribute__((annotate(R"ATTRDUMP(Mixture Class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$NaMaterial.h")))  __attribute__((annotate("$clingAutoload$KMCDetectorFwd.h")))  NaMixture;
class __attribute__((annotate("$clingAutoload$KMCLayerFwd.h")))  __attribute__((annotate("$clingAutoload$KMCDetectorFwd.h")))  KMCLayerFwd;
class __attribute__((annotate("$clingAutoload$KMCLayerFwd.h")))  __attribute__((annotate("$clingAutoload$KMCDetectorFwd.h")))  BeamPipe;
class __attribute__((annotate("$clingAutoload$KMCDetectorFwd.h")))  KMCDetectorFwd;
class __attribute__((annotate("$clingAutoload$KMCDetectorFwd.h")))  NaCardsInput;
class __attribute__((annotate("$clingAutoload$KMCFlukaParser.h")))  KMCFlukaParser;
class __attribute__((annotate(R"ATTRDUMP(class for logging debug, info and error messages)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$AliLog.h")))  AliLog;
class __attribute__((annotate("$clingAutoload$TTreeStream.h")))  TTreeDataElement;
class __attribute__((annotate("$clingAutoload$TTreeStream.h")))  TTreeStream;
class __attribute__((annotate("$clingAutoload$TTreeStream.h")))  TTreeSRedirector;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "KMCDetFwdDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "GenMUONLMR.h"
#include "KMCClusterFwd.h"
#include "KMCDetectorFwd.h"
#include "KMCFlukaParser.h"
#include "KMCLayerFwd.h"
#include "KMCProbeFwd.h"
#include "KMCUtils.h"
#include "NaMaterial.h"
#include "AliLog.h"
#include "TrackPar.h"
#include "TTreeStream.h"
#include "GenMUONLMR.h"
#include "KMCClusterFwd.h"
#include "KMCDetectorFwd.h"
#include "KMCFlukaParser.h"
#include "KMCLayerFwd.h"
#include "KMCProbeFwd.h"
#include "KMCUtils.h"
#include "NaMaterial.h"
#include "AliLog.h"
#include "TrackPar.h"
#include "TTreeStream.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"AliLog", payloadCode, "@",
"AliLog::EType_t", payloadCode, "@",
"BeamPipe", payloadCode, "@",
"GenMUONLMR", payloadCode, "@",
"KMCClusterFwd", payloadCode, "@",
"KMCDetectorFwd", payloadCode, "@",
"KMCFlukaParser", payloadCode, "@",
"KMCLayerFwd", payloadCode, "@",
"KMCProbeFwd", payloadCode, "@",
"MagField", payloadCode, "@",
"NaCardsInput", payloadCode, "@",
"NaMaterial", payloadCode, "@",
"NaMixture", payloadCode, "@",
"TTreeDataElement", payloadCode, "@",
"TTreeSRedirector", payloadCode, "@",
"TTreeStream", payloadCode, "@",
"TrackPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("KMCDetFwdDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_KMCDetFwdDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_KMCDetFwdDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_KMCDetFwdDict() {
  TriggerDictionaryInitialization_KMCDetFwdDict_Impl();
}
