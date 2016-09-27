// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Base.proto

#ifndef PROTOBUF_Base_2eproto__INCLUDED
#define PROTOBUF_Base_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Base_2eproto();
void protobuf_AssignDesc_Base_2eproto();
void protobuf_ShutdownFile_Base_2eproto();

<<<<<<< HEAD
class PBMsg;
class PBPackage;

// ===================================================================

class PBMsg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PBMsg) */ {
 public:
  PBMsg();
  virtual ~PBMsg();

  PBMsg(const PBMsg& from);

  inline PBMsg& operator=(const PBMsg& from) {
=======
class Msg;
class Package;

// ===================================================================

class Msg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Msg) */ {
 public:
  Msg();
  virtual ~Msg();

  Msg(const Msg& from);

  inline Msg& operator=(const Msg& from) {
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
<<<<<<< HEAD
  static const PBMsg& default_instance();

  void Swap(PBMsg* other);

  // implements Message ----------------------------------------------

  inline PBMsg* New() const { return New(NULL); }

  PBMsg* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBMsg& from);
  void MergeFrom(const PBMsg& from);
=======
  static const Msg& default_instance();

  void Swap(Msg* other);

  // implements Message ----------------------------------------------

  inline Msg* New() const { return New(NULL); }

  Msg* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Msg& from);
  void MergeFrom(const Msg& from);
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
<<<<<<< HEAD
  void InternalSwap(PBMsg* other);
=======
  void InternalSwap(Msg* other);
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 d = 1;
  void clear_d();
  static const int kDFieldNumber = 1;
  ::google::protobuf::int32 d() const;
  void set_d(::google::protobuf::int32 value);

<<<<<<< HEAD
  // @@protoc_insertion_point(class_scope:PBMsg)
=======
  // @@protoc_insertion_point(class_scope:Msg)
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 d_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Base_2eproto();
  friend void protobuf_AssignDesc_Base_2eproto();
  friend void protobuf_ShutdownFile_Base_2eproto();

  void InitAsDefaultInstance();
<<<<<<< HEAD
  static PBMsg* default_instance_;
};
// -------------------------------------------------------------------

class PBPackage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PBPackage) */ {
 public:
  PBPackage();
  virtual ~PBPackage();

  PBPackage(const PBPackage& from);

  inline PBPackage& operator=(const PBPackage& from) {
=======
  static Msg* default_instance_;
};
// -------------------------------------------------------------------

class Package : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Package) */ {
 public:
  Package();
  virtual ~Package();

  Package(const Package& from);

  inline Package& operator=(const Package& from) {
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
<<<<<<< HEAD
  static const PBPackage& default_instance();

  enum PBAirMessageCase {
    kMsg = 1,
    PBAIRMESSAGE_NOT_SET = 0,
  };

  void Swap(PBPackage* other);

  // implements Message ----------------------------------------------

  inline PBPackage* New() const { return New(NULL); }

  PBPackage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBPackage& from);
  void MergeFrom(const PBPackage& from);
=======
  static const Package& default_instance();

  enum AirMessageCase {
    kMsg = 1,
    AIRMESSAGE_NOT_SET = 0,
  };

  void Swap(Package* other);

  // implements Message ----------------------------------------------

  inline Package* New() const { return New(NULL); }

  Package* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Package& from);
  void MergeFrom(const Package& from);
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
<<<<<<< HEAD
  void InternalSwap(PBPackage* other);
=======
  void InternalSwap(Package* other);
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

<<<<<<< HEAD
  // optional .PBMsg msg = 1;
  bool has_msg() const;
  void clear_msg();
  static const int kMsgFieldNumber = 1;
  const ::PBMsg& msg() const;
  ::PBMsg* mutable_msg();
  ::PBMsg* release_msg();
  void set_allocated_msg(::PBMsg* msg);

  PBAirMessageCase PBAirMessage_case() const;
  // @@protoc_insertion_point(class_scope:PBPackage)
 private:
  inline void set_has_msg();

  inline bool has_PBAirMessage() const;
  void clear_PBAirMessage();
  inline void clear_has_PBAirMessage();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  union PBAirMessageUnion {
    PBAirMessageUnion() {}
    ::PBMsg* msg_;
  } PBAirMessage_;
=======
  // optional .Msg msg = 1;
  bool has_msg() const;
  void clear_msg();
  static const int kMsgFieldNumber = 1;
  const ::Msg& msg() const;
  ::Msg* mutable_msg();
  ::Msg* release_msg();
  void set_allocated_msg(::Msg* msg);

  AirMessageCase AirMessage_case() const;
  // @@protoc_insertion_point(class_scope:Package)
 private:
  inline void set_has_msg();

  inline bool has_AirMessage() const;
  void clear_AirMessage();
  inline void clear_has_AirMessage();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  union AirMessageUnion {
    AirMessageUnion() {}
    ::Msg* msg_;
  } AirMessage_;
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_Base_2eproto();
  friend void protobuf_AssignDesc_Base_2eproto();
  friend void protobuf_ShutdownFile_Base_2eproto();

  void InitAsDefaultInstance();
<<<<<<< HEAD
  static PBPackage* default_instance_;
=======
  static Package* default_instance_;
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
<<<<<<< HEAD
// PBMsg

// optional int32 d = 1;
inline void PBMsg::clear_d() {
  d_ = 0;
}
inline ::google::protobuf::int32 PBMsg::d() const {
  // @@protoc_insertion_point(field_get:PBMsg.d)
  return d_;
}
inline void PBMsg::set_d(::google::protobuf::int32 value) {
  
  d_ = value;
  // @@protoc_insertion_point(field_set:PBMsg.d)
=======
// Msg

// optional int32 d = 1;
inline void Msg::clear_d() {
  d_ = 0;
}
inline ::google::protobuf::int32 Msg::d() const {
  // @@protoc_insertion_point(field_get:Msg.d)
  return d_;
}
inline void Msg::set_d(::google::protobuf::int32 value) {
  
  d_ = value;
  // @@protoc_insertion_point(field_set:Msg.d)
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
}

// -------------------------------------------------------------------

<<<<<<< HEAD
// PBPackage

// optional .PBMsg msg = 1;
inline bool PBPackage::has_msg() const {
  return PBAirMessage_case() == kMsg;
}
inline void PBPackage::set_has_msg() {
  _oneof_case_[0] = kMsg;
}
inline void PBPackage::clear_msg() {
  if (has_msg()) {
    delete PBAirMessage_.msg_;
    clear_has_PBAirMessage();
  }
}
inline  const ::PBMsg& PBPackage::msg() const {
  // @@protoc_insertion_point(field_get:PBPackage.msg)
  return has_msg()
      ? *PBAirMessage_.msg_
      : ::PBMsg::default_instance();
}
inline ::PBMsg* PBPackage::mutable_msg() {
  if (!has_msg()) {
    clear_PBAirMessage();
    set_has_msg();
    PBAirMessage_.msg_ = new ::PBMsg;
  }
  // @@protoc_insertion_point(field_mutable:PBPackage.msg)
  return PBAirMessage_.msg_;
}
inline ::PBMsg* PBPackage::release_msg() {
  // @@protoc_insertion_point(field_release:PBPackage.msg)
  if (has_msg()) {
    clear_has_PBAirMessage();
    ::PBMsg* temp = PBAirMessage_.msg_;
    PBAirMessage_.msg_ = NULL;
=======
// Package

// optional .Msg msg = 1;
inline bool Package::has_msg() const {
  return AirMessage_case() == kMsg;
}
inline void Package::set_has_msg() {
  _oneof_case_[0] = kMsg;
}
inline void Package::clear_msg() {
  if (has_msg()) {
    delete AirMessage_.msg_;
    clear_has_AirMessage();
  }
}
inline  const ::Msg& Package::msg() const {
  // @@protoc_insertion_point(field_get:Package.msg)
  return has_msg()
      ? *AirMessage_.msg_
      : ::Msg::default_instance();
}
inline ::Msg* Package::mutable_msg() {
  if (!has_msg()) {
    clear_AirMessage();
    set_has_msg();
    AirMessage_.msg_ = new ::Msg;
  }
  // @@protoc_insertion_point(field_mutable:Package.msg)
  return AirMessage_.msg_;
}
inline ::Msg* Package::release_msg() {
  // @@protoc_insertion_point(field_release:Package.msg)
  if (has_msg()) {
    clear_has_AirMessage();
    ::Msg* temp = AirMessage_.msg_;
    AirMessage_.msg_ = NULL;
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
    return temp;
  } else {
    return NULL;
  }
}
<<<<<<< HEAD
inline void PBPackage::set_allocated_msg(::PBMsg* msg) {
  clear_PBAirMessage();
  if (msg) {
    set_has_msg();
    PBAirMessage_.msg_ = msg;
  }
  // @@protoc_insertion_point(field_set_allocated:PBPackage.msg)
}

inline bool PBPackage::has_PBAirMessage() const {
  return PBAirMessage_case() != PBAIRMESSAGE_NOT_SET;
}
inline void PBPackage::clear_has_PBAirMessage() {
  _oneof_case_[0] = PBAIRMESSAGE_NOT_SET;
}
inline PBPackage::PBAirMessageCase PBPackage::PBAirMessage_case() const {
  return PBPackage::PBAirMessageCase(_oneof_case_[0]);
=======
inline void Package::set_allocated_msg(::Msg* msg) {
  clear_AirMessage();
  if (msg) {
    set_has_msg();
    AirMessage_.msg_ = msg;
  }
  // @@protoc_insertion_point(field_set_allocated:Package.msg)
}

inline bool Package::has_AirMessage() const {
  return AirMessage_case() != AIRMESSAGE_NOT_SET;
}
inline void Package::clear_has_AirMessage() {
  _oneof_case_[0] = AIRMESSAGE_NOT_SET;
}
inline Package::AirMessageCase Package::AirMessage_case() const {
  return Package::AirMessageCase(_oneof_case_[0]);
>>>>>>> e4bdcbc1cdbe18472274b2dffc28334825527857
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Base_2eproto__INCLUDED
