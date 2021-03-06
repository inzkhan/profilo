/*
 * Copyright (C) 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_RUNTIME_MIRROR_ABSTRACT_METHOD_H_
#define ART_RUNTIME_MIRROR_ABSTRACT_METHOD_H_

#include <museum/7.1.2/art/runtime/mirror/accessible_object.h>
#include <museum/7.1.2/art/runtime/gc_root.h>
#include <museum/7.1.2/art/runtime/mirror/object.h>
#include <museum/7.1.2/art/runtime/object_callbacks.h>
#include <museum/7.1.2/art/runtime/read_barrier_option.h>

namespace facebook { namespace museum { namespace MUSEUM_VERSION { namespace art {

struct AbstractMethodOffsets;
class ArtMethod;

namespace mirror {

// C++ mirror of java.lang.reflect.AbstractMethod.
class MANAGED AbstractMethod : public AccessibleObject {
 public:
  // Called from Constructor::CreateFromArtMethod, Method::CreateFromArtMethod.
  template <bool kTransactionActive = false>
  bool CreateFromArtMethod(ArtMethod* method) SHARED_REQUIRES(Locks::mutator_lock_)
      REQUIRES(!Roles::uninterruptible_);

  ArtMethod* GetArtMethod() SHARED_REQUIRES(Locks::mutator_lock_);
  // Only used by the image writer.
  template <bool kTransactionActive = false>
  void SetArtMethod(ArtMethod* method) SHARED_REQUIRES(Locks::mutator_lock_);
  mirror::Class* GetDeclaringClass() SHARED_REQUIRES(Locks::mutator_lock_);

 private:
  static MemberOffset ArtMethodOffset() {
    return MemberOffset(OFFSETOF_MEMBER(AbstractMethod, art_method_));
  }
  static MemberOffset DeclaringClassOffset() {
    return MemberOffset(OFFSETOF_MEMBER(AbstractMethod, declaring_class_));
  }
  static MemberOffset DeclaringClassOfOverriddenMethodOffset() {
    return MemberOffset(OFFSETOF_MEMBER(AbstractMethod, declaring_class_of_overridden_method_));
  }
  static MemberOffset AccessFlagsOffset() {
    return MemberOffset(OFFSETOF_MEMBER(AbstractMethod, access_flags_));
  }
  static MemberOffset DexMethodIndexOffset() {
    return MemberOffset(OFFSETOF_MEMBER(AbstractMethod, dex_method_index_));
  }

  HeapReference<mirror::Class> declaring_class_;
  HeapReference<mirror::Class> declaring_class_of_overridden_method_;
  uint32_t access_flags_;
  uint64_t art_method_;
  uint32_t dex_method_index_;

  friend struct facebook::museum::MUSEUM_VERSION::art::AbstractMethodOffsets;  // for verifying offset information
  DISALLOW_IMPLICIT_CONSTRUCTORS(AbstractMethod);
};

}  // namespace mirror
} } } } // namespace facebook::museum::MUSEUM_VERSION::art

#endif  // ART_RUNTIME_MIRROR_ABSTRACT_METHOD_H_
