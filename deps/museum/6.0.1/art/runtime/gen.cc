// Copyright 2004-present Facebook. All Rights Reserved.
// Generated by: //native/museum/run_codegen.sh
// This is generated code -- do not modify manually.

// @generated SignedSource<<b9757643150595199d26dc381183fa14>>
// @model md5 dc17768584c63304c2d3b6679fd6a796


#include <museum/6.0.1/art/runtime/dex_file.h>
#include <museum/6.0.1/art/runtime/base/logging.h>
#include <museum/6.0.1/art/runtime/base/logging-inl.h>
#include <museum/6.0.1/art/runtime/base/mutex.h>
#include <museum/6.0.1/art/runtime/class_linker.h>
#include <museum/6.0.1/art/runtime/indirect_reference_table.h>
#include <museum/6.0.1/art/runtime/jni_env_ext.h>
#include <museum/6.0.1/art/runtime/runtime.h>
#include <museum/6.0.1/art/runtime/stack_map.h>
#include <museum/6.0.1/art/runtime/thread.h>
#include <museum/6.0.1/art/runtime/utf.h>
#include <new>

#include <museum/libs.h>

namespace facebook { namespace museum { namespace MUSEUM_VERSION {



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZNK3art7DexFile12FindClassDefEPKcj() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZNK3art7DexFile12FindClassDefEPKcj",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  DexFile::ClassDef const* DexFile::FindClassDef(char const* p1, size_t p2) const  {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art7DexFile12FindClassDefEPKcj
      <DexFile::ClassDef const*
        (DexFile const*, char const*, size_t)>()
      (this, p1, p2);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZNK3art7DexFile12FindClassDefEt() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZNK3art7DexFile12FindClassDefEt",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  DexFile::ClassDef const* DexFile::FindClassDef(uint16_t p1) const  {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art7DexFile12FindClassDefEt
      <DexFile::ClassDef const*
        (DexFile const*, uint16_t)>()
      (this, p1);
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art10LogMessageC1EPKcjNS_11LogSeverityEi() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art10LogMessageC1EPKcjNS_11LogSeverityEi",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
   LogMessage::LogMessage(char const* p1, unsigned int p2, LogSeverity p3, int p4)   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art10LogMessageC1EPKcjNS_11LogSeverityEi
      <void
        (LogMessage *, char const*, unsigned int, LogSeverity, int)>()
      (this, p1, p2, p3, p4);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art10LogMessageD1Ev() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art10LogMessageD1Ev",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
   LogMessage::~LogMessage()   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art10LogMessageD1Ev
      <void
        (LogMessage *)>()
      (this);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art10LogMessage6streamEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art10LogMessage6streamEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  std::ostream& LogMessage::stream()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art10LogMessage6streamEv
      <std::ostream&
        (LogMessage *)>()
      (this);
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art5Mutex13ExclusiveLockEPNS_6ThreadE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art5Mutex13ExclusiveLockEPNS_6ThreadE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void Mutex::ExclusiveLock(Thread* p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Mutex13ExclusiveLockEPNS_6ThreadE
      <void
        (Mutex *, Thread*)>()
      (this, p1);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art5Mutex15ExclusiveUnlockEPNS_6ThreadE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art5Mutex15ExclusiveUnlockEPNS_6ThreadE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void Mutex::ExclusiveUnlock(Thread* p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Mutex15ExclusiveUnlockEPNS_6ThreadE
      <void
        (Mutex *, Thread*)>()
      (this, p1);
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art17ConditionVariable4WaitEPNS_6ThreadE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art17ConditionVariable4WaitEPNS_6ThreadE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void ConditionVariable::Wait(Thread* p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art17ConditionVariable4WaitEPNS_6ThreadE
      <void
        (ConditionVariable *, Thread*)>()
      (this, p1);
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art5Locks13mutator_lock_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art5Locks13mutator_lock_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef mutator_lock_
  #undef mutator_lock_
#else
  #error "mutator_lock_ is not method-wrapped and will not be proxied correctly"
#endif
  
  ReaderWriterMutex*& Locks::mutator_lock_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Locks13mutator_lock_E
      <ReaderWriterMutex*
        >()
      ;
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art5Locks26thread_suspend_count_lock_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art5Locks26thread_suspend_count_lock_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef thread_suspend_count_lock_
  #undef thread_suspend_count_lock_
#else
  #error "thread_suspend_count_lock_ is not method-wrapped and will not be proxied correctly"
#endif
  
  Mutex*& Locks::thread_suspend_count_lock_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Locks26thread_suspend_count_lock_E
      <Mutex*
        >()
      ;
  }
} // namespace art::


#if ART_USE_FUTEXES
namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art17ReaderWriterMutex26HandleSharedLockContentionEPNS_6ThreadEi() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art17ReaderWriterMutex26HandleSharedLockContentionEPNS_6ThreadEi",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void ReaderWriterMutex::HandleSharedLockContention(Thread* p1, int32_t p2)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art17ReaderWriterMutex26HandleSharedLockContentionEPNS_6ThreadEi
      <void
        (ReaderWriterMutex *, Thread*, int32_t)>()
      (this, p1, p2);
  }
} // namespace art::
#endif


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art11ClassLinker11LookupClassEPNS_6ThreadEPKcjPNS_6mirror11ClassLoaderE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art11ClassLinker11LookupClassEPNS_6ThreadEPKcjPNS_6mirror11ClassLoaderE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  mirror::Class* ClassLinker::LookupClass(Thread* p1, char const* p2, size_t p3, mirror::ClassLoader* p4)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker11LookupClassEPNS_6ThreadEPKcjPNS_6mirror11ClassLoaderE
      <mirror::Class*
        (ClassLinker *, Thread*, char const*, size_t, mirror::ClassLoader*)>()
      (this, p1, p2, p3, p4);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art11ClassLinker15RegisterDexFileERKNS_7DexFileE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art11ClassLinker15RegisterDexFileERKNS_7DexFileE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void ClassLinker::RegisterDexFile(DexFile const& p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker15RegisterDexFileERKNS_7DexFileE
      <void
        (ClassLinker *, DexFile const&)>()
      (this, p1);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art11ClassLinker15RegisterDexFileERKNS_7DexFileENS_6HandleINS_6mirror8DexCacheEEE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art11ClassLinker15RegisterDexFileERKNS_7DexFileENS_6HandleINS_6mirror8DexCacheEEE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void ClassLinker::RegisterDexFile(DexFile const& p1, Handle<mirror::DexCache> p2)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker15RegisterDexFileERKNS_7DexFileENS_6HandleINS_6mirror8DexCacheEEE
      <void
        (ClassLinker *, DexFile const&, Handle<mirror::DexCache>)>()
      (this, p1, p2);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art11ClassLinker11DefineClassEPNS_6ThreadEPKcjNS_6HandleINS_6mirror11ClassLoaderEEERKNS_7DexFileERKNS9_8ClassDefE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art11ClassLinker11DefineClassEPNS_6ThreadEPKcjNS_6HandleINS_6mirror11ClassLoaderEEERKNS_7DexFileERKNS9_8ClassDefE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  mirror::Class* ClassLinker::DefineClass(Thread* p1, char const* p2, size_t p3, Handle<mirror::ClassLoader> p4, DexFile const& p5, DexFile::ClassDef const& p6)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker11DefineClassEPNS_6ThreadEPKcjNS_6HandleINS_6mirror11ClassLoaderEEERKNS_7DexFileERKNS9_8ClassDefE
      <mirror::Class*
        (ClassLinker *, Thread*, char const*, size_t, Handle<mirror::ClassLoader>, DexFile const&, DexFile::ClassDef const&)>()
      (this, p1, p2, p3, p4, p5, p6);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art11ClassLinker14EnsureResolvedEPNS_6ThreadEPKcPNS_6mirror5ClassE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art11ClassLinker14EnsureResolvedEPNS_6ThreadEPKcPNS_6mirror5ClassE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  mirror::Class* ClassLinker::EnsureResolved(Thread* p1, char const* p2, mirror::Class* p3)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker14EnsureResolvedEPNS_6ThreadEPKcPNS_6mirror5ClassE
      <mirror::Class*
        (ClassLinker *, Thread*, char const*, mirror::Class*)>()
      (this, p1, p2, p3);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art11ClassLinker26FindClassInPathClassLoaderERNS_33ScopedObjectAccessAlreadyRunnableEPNS_6ThreadEPKcjNS_6HandleINS_6mirror11ClassLoaderEEEPPNS8_5ClassE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art11ClassLinker26FindClassInPathClassLoaderERNS_33ScopedObjectAccessAlreadyRunnableEPNS_6ThreadEPKcjNS_6HandleINS_6mirror11ClassLoaderEEEPPNS8_5ClassE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  bool ClassLinker::FindClassInPathClassLoader(ScopedObjectAccessAlreadyRunnable& p1, Thread* p2, const char* p3, size_t p4, Handle<mirror::ClassLoader> p5, mirror::Class** p6)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker26FindClassInPathClassLoaderERNS_33ScopedObjectAccessAlreadyRunnableEPNS_6ThreadEPKcjNS_6HandleINS_6mirror11ClassLoaderEEEPPNS8_5ClassE
      <bool
        (ClassLinker *, ScopedObjectAccessAlreadyRunnable&, Thread*, const char*, size_t, Handle<mirror::ClassLoader>, mirror::Class**)>()
      (this, p1, p2, p3, p4, p5, p6);
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art22IndirectReferenceTable3AddEjPNS_6mirror6ObjectE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art22IndirectReferenceTable3AddEjPNS_6mirror6ObjectE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  IndirectRef IndirectReferenceTable::Add(uint32_t p1, mirror::Object* p2)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art22IndirectReferenceTable3AddEjPNS_6mirror6ObjectE
      <IndirectRef
        (IndirectReferenceTable *, uint32_t, mirror::Object*)>()
      (this, p1, p2);
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art9JNIEnvExt11NewLocalRefEPNS_6mirror6ObjectE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art9JNIEnvExt11NewLocalRefEPNS_6mirror6ObjectE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  jobject JNIEnvExt::NewLocalRef(mirror::Object* p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art9JNIEnvExt11NewLocalRefEPNS_6mirror6ObjectE
      <jobject
        (JNIEnvExt *, mirror::Object*)>()
      (this, p1);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art9JNIEnvExt14DeleteLocalRefEP8_jobject() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art9JNIEnvExt14DeleteLocalRefEP8_jobject",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void JNIEnvExt::DeleteLocalRef(jobject p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art9JNIEnvExt14DeleteLocalRefEP8_jobject
      <void
        (JNIEnvExt *, jobject)>()
      (this, p1);
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  bool Runtime::IsShuttingDown(Thread* p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE
      <bool
        (Runtime *, Thread*)>()
      (this, p1);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art7Runtime9instance_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art7Runtime9instance_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  Runtime*& Runtime::instance_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime9instance_E
      <Runtime*
        >()
      ;
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZNK3art6Thread13DecodeJObjectEP8_jobject() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZNK3art6Thread13DecodeJObjectEP8_jobject",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  mirror::Object* Thread::DecodeJObject(jobject p1) const  {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art6Thread13DecodeJObjectEP8_jobject
      <mirror::Object*
        (Thread const*, jobject)>()
      (this, p1);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZNK3art6Thread24AssertNoPendingExceptionEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZNK3art6Thread24AssertNoPendingExceptionEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void Thread::AssertNoPendingException() const  {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art6Thread24AssertNoPendingExceptionEv
      <void
        (Thread const*)>()
      (this);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread15GetFlipFunctionEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread15GetFlipFunctionEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  Closure* Thread::GetFlipFunction()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread15GetFlipFunctionEv
      <Closure*
        (Thread *)>()
      (this);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread21RunCheckpointFunctionEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread21RunCheckpointFunctionEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  void Thread::RunCheckpointFunction()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread21RunCheckpointFunctionEv
      <void
        (Thread *)>()
      (this);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread12resume_cond_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread12resume_cond_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef resume_cond_
  #undef resume_cond_
#else
  #error "resume_cond_ is not method-wrapped and will not be proxied correctly"
#endif
  
  ConditionVariable*& Thread::resume_cond_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread12resume_cond_E
      <ConditionVariable*
        >()
      ;
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread11is_started_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread11is_started_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef is_started_
  #undef is_started_
#else
  #error "is_started_ is not method-wrapped and will not be proxied correctly"
#endif
  
  bool& Thread::is_started_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread11is_started_E
      <bool
        >()
      ;
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread17pthread_key_self_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread17pthread_key_self_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef pthread_key_self_
  #undef pthread_key_self_
#else
  #error "pthread_key_self_ is not method-wrapped and will not be proxied correctly"
#endif
  
  pthread_key_t& Thread::pthread_key_self_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread17pthread_key_self_E
      <pthread_key_t
        >()
      ;
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZNK3art8StackMap8GetDexPcERKNS_8CodeInfoE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZNK3art8StackMap8GetDexPcERKNS_8CodeInfoE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  uint32_t StackMap::GetDexPc(CodeInfo const& p1) const  {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art8StackMap8GetDexPcERKNS_8CodeInfoE
      <uint32_t
        (StackMap const*, CodeInfo const&)>()
      (this, p1);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZNK3art8StackMap17GetNativePcOffsetERKNS_8CodeInfoE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZNK3art8StackMap17GetNativePcOffsetERKNS_8CodeInfoE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  uint32_t StackMap::GetNativePcOffset(CodeInfo const& p1) const  {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art8StackMap17GetNativePcOffsetERKNS_8CodeInfoE
      <uint32_t
        (StackMap const*, CodeInfo const&)>()
      (this, p1);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art8StackMap27ComputeStackMapSizeInternalEjjjjjj() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art8StackMap27ComputeStackMapSizeInternalEjjjjjj",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  size_t StackMap::ComputeStackMapSizeInternal(size_t p1, size_t p2, size_t p3, size_t p4, size_t p5, size_t p6)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art8StackMap27ComputeStackMapSizeInternalEjjjjjj
      <size_t
        (size_t, size_t, size_t, size_t, size_t, size_t)>()
      (p1, p2, p3, p4, p5, p6);
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZNK3art12StackVisitor13GetThisObjectEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZNK3art12StackVisitor13GetThisObjectEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  mirror::Object* StackVisitor::GetThisObject() const  {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art12StackVisitor13GetThisObjectEv
      <mirror::Object*
        (StackVisitor const*)>()
      (this);
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art23ComputeModifiedUtf8HashEPKc() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art23ComputeModifiedUtf8HashEPKc",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  size_t ComputeModifiedUtf8Hash(char const* p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art23ComputeModifiedUtf8HashEPKc
      <size_t
        (char const*)>()
      (p1);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art15DescriptorToDotEPKc() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art15DescriptorToDotEPKc",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  std::string DescriptorToDot(char const* p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art15DescriptorToDotEPKc
      <std::string
        (char const*)>()
      (p1);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art12PrettyMethodEPNS_9ArtMethodEb() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art12PrettyMethodEPNS_9ArtMethodEb",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  std::string PrettyMethod(ArtMethod* p1, bool p2)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art12PrettyMethodEPNS_9ArtMethodEb
      <std::string
        (ArtMethod*, bool)>()
      (p1, p2);
  }
} // namespace art::


namespace libart {
  void preinitSymbols() {
    using namespace ::facebook::museum::MUSEUM_VERSION::art;
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art7DexFile12FindClassDefEPKcj
        <DexFile::ClassDef const*
          (DexFile const*, char const*, size_t)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art7DexFile12FindClassDefEt
        <DexFile::ClassDef const*
          (DexFile const*, uint16_t)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art10LogMessageC1EPKcjNS_11LogSeverityEi
        <void
          (LogMessage *, char const*, unsigned int, LogSeverity, int)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art10LogMessageD1Ev
        <void
          (LogMessage *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art10LogMessage6streamEv
        <std::ostream&
          (LogMessage *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Mutex13ExclusiveLockEPNS_6ThreadE
        <void
          (Mutex *, Thread*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Mutex15ExclusiveUnlockEPNS_6ThreadE
        <void
          (Mutex *, Thread*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art17ConditionVariable4WaitEPNS_6ThreadE
        <void
          (ConditionVariable *, Thread*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Locks13mutator_lock_E
        <ReaderWriterMutex*
          >();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art5Locks26thread_suspend_count_lock_E
        <Mutex*
          >();
    
    #if ART_USE_FUTEXES
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art17ReaderWriterMutex26HandleSharedLockContentionEPNS_6ThreadEi
        <void
          (ReaderWriterMutex *, Thread*, int32_t)>();
    #endif
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker11LookupClassEPNS_6ThreadEPKcjPNS_6mirror11ClassLoaderE
        <mirror::Class*
          (ClassLinker *, Thread*, char const*, size_t, mirror::ClassLoader*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker15RegisterDexFileERKNS_7DexFileE
        <void
          (ClassLinker *, DexFile const&)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker15RegisterDexFileERKNS_7DexFileENS_6HandleINS_6mirror8DexCacheEEE
        <void
          (ClassLinker *, DexFile const&, Handle<mirror::DexCache>)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker11DefineClassEPNS_6ThreadEPKcjNS_6HandleINS_6mirror11ClassLoaderEEERKNS_7DexFileERKNS9_8ClassDefE
        <mirror::Class*
          (ClassLinker *, Thread*, char const*, size_t, Handle<mirror::ClassLoader>, DexFile const&, DexFile::ClassDef const&)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker14EnsureResolvedEPNS_6ThreadEPKcPNS_6mirror5ClassE
        <mirror::Class*
          (ClassLinker *, Thread*, char const*, mirror::Class*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art11ClassLinker26FindClassInPathClassLoaderERNS_33ScopedObjectAccessAlreadyRunnableEPNS_6ThreadEPKcjNS_6HandleINS_6mirror11ClassLoaderEEEPPNS8_5ClassE
        <bool
          (ClassLinker *, ScopedObjectAccessAlreadyRunnable&, Thread*, const char*, size_t, Handle<mirror::ClassLoader>, mirror::Class**)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art22IndirectReferenceTable3AddEjPNS_6mirror6ObjectE
        <IndirectRef
          (IndirectReferenceTable *, uint32_t, mirror::Object*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art9JNIEnvExt11NewLocalRefEPNS_6mirror6ObjectE
        <jobject
          (JNIEnvExt *, mirror::Object*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art9JNIEnvExt14DeleteLocalRefEP8_jobject
        <void
          (JNIEnvExt *, jobject)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE
        <bool
          (Runtime *, Thread*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime9instance_E
        <Runtime*
          >();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art6Thread13DecodeJObjectEP8_jobject
        <mirror::Object*
          (Thread const*, jobject)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art6Thread24AssertNoPendingExceptionEv
        <void
          (Thread const*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread15GetFlipFunctionEv
        <Closure*
          (Thread *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread21RunCheckpointFunctionEv
        <void
          (Thread *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread12resume_cond_E
        <ConditionVariable*
          >();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread11is_started_E
        <bool
          >();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread17pthread_key_self_E
        <pthread_key_t
          >();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art8StackMap8GetDexPcERKNS_8CodeInfoE
        <uint32_t
          (StackMap const*, CodeInfo const&)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art8StackMap17GetNativePcOffsetERKNS_8CodeInfoE
        <uint32_t
          (StackMap const*, CodeInfo const&)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art8StackMap27ComputeStackMapSizeInternalEjjjjjj
        <size_t
          (size_t, size_t, size_t, size_t, size_t, size_t)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZNK3art12StackVisitor13GetThisObjectEv
        <mirror::Object*
          (StackVisitor const*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art23ComputeModifiedUtf8HashEPKc
        <size_t
          (char const*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art15DescriptorToDotEPKc
        <std::string
          (char const*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art12PrettyMethodEPNS_9ArtMethodEb
        <std::string
          (ArtMethod*, bool)>();
    
  }
} // namespace libart

} } } // namespace facebook::museum::MUSEUM_VERSION