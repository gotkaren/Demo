// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Base.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Base.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Msg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Msg_reflection_ = NULL;
const ::google::protobuf::Descriptor* Package_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Package_reflection_ = NULL;
struct PackageOneofInstance {
  const ::Msg* msg_;
}* Package_default_oneof_instance_ = NULL;

}  // namespace


void protobuf_AssignDesc_Base_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_Base_2eproto() {
  protobuf_AddDesc_Base_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Base.proto");
  GOOGLE_CHECK(file != NULL);
  Msg_descriptor_ = file->message_type(0);
  static const int Msg_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Msg, d_),
  };
  Msg_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Msg_descriptor_,
      Msg::default_instance_,
      Msg_offsets_,
      -1,
      -1,
      -1,
      sizeof(Msg),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Msg, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Msg, _is_default_instance_));
  Package_descriptor_ = file->message_type(1);
  static const int Package_offsets_[2] = {
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Package_default_oneof_instance_, msg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Package, AirMessage_),
  };
  Package_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Package_descriptor_,
      Package::default_instance_,
      Package_offsets_,
      -1,
      -1,
      -1,
      Package_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Package, _oneof_case_[0]),
      sizeof(Package),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Package, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Package, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Base_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Msg_descriptor_, &Msg::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Package_descriptor_, &Package::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Base_2eproto() {
  delete Msg::default_instance_;
  delete Msg_reflection_;
  delete Package::default_instance_;
  delete Package_default_oneof_instance_;
  delete Package_reflection_;
}

void protobuf_AddDesc_Base_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_Base_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nBase.proto\"\020\n\003Msg\022\t\n\001d\030\001 \001(\005\",\n\007Packag"
    "e\022\023\n\003msg\030\001 \001(\0132\004.MsgH\000B\014\n\nAirMessageb\006pr"
    "oto3", 84);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Base.proto", &protobuf_RegisterTypes);
  Msg::default_instance_ = new Msg();
  Package::default_instance_ = new Package();
  Package_default_oneof_instance_ = new PackageOneofInstance();
  Msg::default_instance_->InitAsDefaultInstance();
  Package::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Base_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Base_2eproto {
  StaticDescriptorInitializer_Base_2eproto() {
    protobuf_AddDesc_Base_2eproto();
  }
} static_descriptor_initializer_Base_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Msg::kDFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Msg::Msg()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Msg)
}

void Msg::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Msg::Msg(const Msg& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Msg)
}

void Msg::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  d_ = 0;
}

Msg::~Msg() {
  // @@protoc_insertion_point(destructor:Msg)
  SharedDtor();
}

void Msg::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Msg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Msg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Msg_descriptor_;
}

const Msg& Msg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Base_2eproto();
  return *default_instance_;
}

Msg* Msg::default_instance_ = NULL;

Msg* Msg::New(::google::protobuf::Arena* arena) const {
  Msg* n = new Msg;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Msg::Clear() {
// @@protoc_insertion_point(message_clear_start:Msg)
  d_ = 0;
}

bool Msg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Msg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 d = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &d_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Msg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Msg)
  return false;
#undef DO_
}

void Msg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Msg)
  // optional int32 d = 1;
  if (this->d() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->d(), output);
  }

  // @@protoc_insertion_point(serialize_end:Msg)
}

::google::protobuf::uint8* Msg::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Msg)
  // optional int32 d = 1;
  if (this->d() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->d(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Msg)
  return target;
}

int Msg::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:Msg)
  int total_size = 0;

  // optional int32 d = 1;
  if (this->d() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->d());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Msg::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Msg)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Msg* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Msg>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Msg)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Msg)
    MergeFrom(*source);
  }
}

void Msg::MergeFrom(const Msg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Msg)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.d() != 0) {
    set_d(from.d());
  }
}

void Msg::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Msg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Msg::CopyFrom(const Msg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Msg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Msg::IsInitialized() const {

  return true;
}

void Msg::Swap(Msg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Msg::InternalSwap(Msg* other) {
  std::swap(d_, other->d_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Msg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Msg_descriptor_;
  metadata.reflection = Msg_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Msg

// optional int32 d = 1;
void Msg::clear_d() {
  d_ = 0;
}
 ::google::protobuf::int32 Msg::d() const {
  // @@protoc_insertion_point(field_get:Msg.d)
  return d_;
}
 void Msg::set_d(::google::protobuf::int32 value) {
  
  d_ = value;
  // @@protoc_insertion_point(field_set:Msg.d)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Package::kMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Package::Package()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Package)
}

void Package::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  Package_default_oneof_instance_->msg_ = const_cast< ::Msg*>(&::Msg::default_instance());
}

Package::Package(const Package& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Package)
}

void Package::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  clear_has_AirMessage();
}

Package::~Package() {
  // @@protoc_insertion_point(destructor:Package)
  SharedDtor();
}

void Package::SharedDtor() {
  if (has_AirMessage()) {
    clear_AirMessage();
  }
  if (this != default_instance_) {
  }
}

void Package::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Package::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Package_descriptor_;
}

const Package& Package::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Base_2eproto();
  return *default_instance_;
}

Package* Package::default_instance_ = NULL;

Package* Package::New(::google::protobuf::Arena* arena) const {
  Package* n = new Package;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Package::clear_AirMessage() {
// @@protoc_insertion_point(one_of_clear_start:Package)
  switch(AirMessage_case()) {
    case kMsg: {
      delete AirMessage_.msg_;
      break;
    }
    case AIRMESSAGE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = AIRMESSAGE_NOT_SET;
}


void Package::Clear() {
// @@protoc_insertion_point(message_clear_start:Package)
  clear_AirMessage();
}

bool Package::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Package)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .Msg msg = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_msg()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Package)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Package)
  return false;
#undef DO_
}

void Package::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Package)
  // optional .Msg msg = 1;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *AirMessage_.msg_, output);
  }

  // @@protoc_insertion_point(serialize_end:Package)
}

::google::protobuf::uint8* Package::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Package)
  // optional .Msg msg = 1;
  if (has_msg()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *AirMessage_.msg_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Package)
  return target;
}

int Package::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:Package)
  int total_size = 0;

  switch (AirMessage_case()) {
    // optional .Msg msg = 1;
    case kMsg: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *AirMessage_.msg_);
      break;
    }
    case AIRMESSAGE_NOT_SET: {
      break;
    }
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Package::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Package)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Package* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Package>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Package)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Package)
    MergeFrom(*source);
  }
}

void Package::MergeFrom(const Package& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Package)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  switch (from.AirMessage_case()) {
    case kMsg: {
      mutable_msg()->::Msg::MergeFrom(from.msg());
      break;
    }
    case AIRMESSAGE_NOT_SET: {
      break;
    }
  }
}

void Package::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Package)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Package::CopyFrom(const Package& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Package)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Package::IsInitialized() const {

  return true;
}

void Package::Swap(Package* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Package::InternalSwap(Package* other) {
  std::swap(AirMessage_, other->AirMessage_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Package::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Package_descriptor_;
  metadata.reflection = Package_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Package

// optional .Msg msg = 1;
bool Package::has_msg() const {
  return AirMessage_case() == kMsg;
}
void Package::set_has_msg() {
  _oneof_case_[0] = kMsg;
}
void Package::clear_msg() {
  if (has_msg()) {
    delete AirMessage_.msg_;
    clear_has_AirMessage();
  }
}
 const ::Msg& Package::msg() const {
  // @@protoc_insertion_point(field_get:Package.msg)
  return has_msg()
      ? *AirMessage_.msg_
      : ::Msg::default_instance();
}
::Msg* Package::mutable_msg() {
  if (!has_msg()) {
    clear_AirMessage();
    set_has_msg();
    AirMessage_.msg_ = new ::Msg;
  }
  // @@protoc_insertion_point(field_mutable:Package.msg)
  return AirMessage_.msg_;
}
::Msg* Package::release_msg() {
  // @@protoc_insertion_point(field_release:Package.msg)
  if (has_msg()) {
    clear_has_AirMessage();
    ::Msg* temp = AirMessage_.msg_;
    AirMessage_.msg_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void Package::set_allocated_msg(::Msg* msg) {
  clear_AirMessage();
  if (msg) {
    set_has_msg();
    AirMessage_.msg_ = msg;
  }
  // @@protoc_insertion_point(field_set_allocated:Package.msg)
}

bool Package::has_AirMessage() const {
  return AirMessage_case() != AIRMESSAGE_NOT_SET;
}
void Package::clear_has_AirMessage() {
  _oneof_case_[0] = AIRMESSAGE_NOT_SET;
}
Package::AirMessageCase Package::AirMessage_case() const {
  return Package::AirMessageCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)