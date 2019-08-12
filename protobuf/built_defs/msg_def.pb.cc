// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_def.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg_def.pb.h"

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

namespace data_pipe {

namespace {

const ::google::protobuf::Descriptor* msg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  msg_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_msg_5fdef_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_msg_5fdef_2eproto() {
  protobuf_AddDesc_msg_5fdef_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msg_def.proto");
  GOOGLE_CHECK(file != NULL);
  msg_descriptor_ = file->message_type(0);
  static const int msg_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(msg, type1_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(msg, type2_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(msg, type3_),
  };
  msg_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      msg_descriptor_,
      msg::default_instance_,
      msg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(msg, _has_bits_[0]),
      -1,
      -1,
      sizeof(msg),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(msg, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msg_5fdef_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      msg_descriptor_, &msg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_msg_5fdef_2eproto() {
  delete msg::default_instance_;
  delete msg_reflection_;
}

void protobuf_AddDesc_msg_5fdef_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_msg_5fdef_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rmsg_def.proto\022\tdata_pipe\"2\n\003msg\022\r\n\005typ"
    "e1\030\001 \002(\005\022\r\n\005type2\030\002 \002(\005\022\r\n\005type3\030\003 \002(\005", 78);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msg_def.proto", &protobuf_RegisterTypes);
  msg::default_instance_ = new msg();
  msg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msg_5fdef_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msg_5fdef_2eproto {
  StaticDescriptorInitializer_msg_5fdef_2eproto() {
    protobuf_AddDesc_msg_5fdef_2eproto();
  }
} static_descriptor_initializer_msg_5fdef_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int msg::kType1FieldNumber;
const int msg::kType2FieldNumber;
const int msg::kType3FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

msg::msg()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:data_pipe.msg)
}

void msg::InitAsDefaultInstance() {
}

msg::msg(const msg& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:data_pipe.msg)
}

void msg::SharedCtor() {
  _cached_size_ = 0;
  type1_ = 0;
  type2_ = 0;
  type3_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

msg::~msg() {
  // @@protoc_insertion_point(destructor:data_pipe.msg)
  SharedDtor();
}

void msg::SharedDtor() {
  if (this != default_instance_) {
  }
}

void msg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* msg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return msg_descriptor_;
}

const msg& msg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_5fdef_2eproto();
  return *default_instance_;
}

msg* msg::default_instance_ = NULL;

msg* msg::New(::google::protobuf::Arena* arena) const {
  msg* n = new msg;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void msg::Clear() {
// @@protoc_insertion_point(message_clear_start:data_pipe.msg)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(msg, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<msg*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(type1_, type3_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool msg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:data_pipe.msg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 type1 = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type1_)));
          set_has_type1();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_type2;
        break;
      }

      // required int32 type2 = 2;
      case 2: {
        if (tag == 16) {
         parse_type2:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type2_)));
          set_has_type2();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_type3;
        break;
      }

      // required int32 type3 = 3;
      case 3: {
        if (tag == 24) {
         parse_type3:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type3_)));
          set_has_type3();
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:data_pipe.msg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:data_pipe.msg)
  return false;
#undef DO_
}

void msg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:data_pipe.msg)
  // required int32 type1 = 1;
  if (has_type1()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type1(), output);
  }

  // required int32 type2 = 2;
  if (has_type2()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->type2(), output);
  }

  // required int32 type3 = 3;
  if (has_type3()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->type3(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:data_pipe.msg)
}

::google::protobuf::uint8* msg::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:data_pipe.msg)
  // required int32 type1 = 1;
  if (has_type1()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type1(), target);
  }

  // required int32 type2 = 2;
  if (has_type2()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->type2(), target);
  }

  // required int32 type3 = 3;
  if (has_type3()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->type3(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:data_pipe.msg)
  return target;
}

int msg::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:data_pipe.msg)
  int total_size = 0;

  if (has_type1()) {
    // required int32 type1 = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type1());
  }

  if (has_type2()) {
    // required int32 type2 = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type2());
  }

  if (has_type3()) {
    // required int32 type3 = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type3());
  }

  return total_size;
}
int msg::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:data_pipe.msg)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required int32 type1 = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type1());

    // required int32 type2 = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type2());

    // required int32 type3 = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type3());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void msg::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:data_pipe.msg)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const msg* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const msg>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:data_pipe.msg)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:data_pipe.msg)
    MergeFrom(*source);
  }
}

void msg::MergeFrom(const msg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:data_pipe.msg)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type1()) {
      set_type1(from.type1());
    }
    if (from.has_type2()) {
      set_type2(from.type2());
    }
    if (from.has_type3()) {
      set_type3(from.type3());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void msg::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:data_pipe.msg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void msg::CopyFrom(const msg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:data_pipe.msg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool msg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void msg::Swap(msg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void msg::InternalSwap(msg* other) {
  std::swap(type1_, other->type1_);
  std::swap(type2_, other->type2_);
  std::swap(type3_, other->type3_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata msg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = msg_descriptor_;
  metadata.reflection = msg_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// msg

// required int32 type1 = 1;
bool msg::has_type1() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void msg::set_has_type1() {
  _has_bits_[0] |= 0x00000001u;
}
void msg::clear_has_type1() {
  _has_bits_[0] &= ~0x00000001u;
}
void msg::clear_type1() {
  type1_ = 0;
  clear_has_type1();
}
 ::google::protobuf::int32 msg::type1() const {
  // @@protoc_insertion_point(field_get:data_pipe.msg.type1)
  return type1_;
}
 void msg::set_type1(::google::protobuf::int32 value) {
  set_has_type1();
  type1_ = value;
  // @@protoc_insertion_point(field_set:data_pipe.msg.type1)
}

// required int32 type2 = 2;
bool msg::has_type2() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void msg::set_has_type2() {
  _has_bits_[0] |= 0x00000002u;
}
void msg::clear_has_type2() {
  _has_bits_[0] &= ~0x00000002u;
}
void msg::clear_type2() {
  type2_ = 0;
  clear_has_type2();
}
 ::google::protobuf::int32 msg::type2() const {
  // @@protoc_insertion_point(field_get:data_pipe.msg.type2)
  return type2_;
}
 void msg::set_type2(::google::protobuf::int32 value) {
  set_has_type2();
  type2_ = value;
  // @@protoc_insertion_point(field_set:data_pipe.msg.type2)
}

// required int32 type3 = 3;
bool msg::has_type3() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void msg::set_has_type3() {
  _has_bits_[0] |= 0x00000004u;
}
void msg::clear_has_type3() {
  _has_bits_[0] &= ~0x00000004u;
}
void msg::clear_type3() {
  type3_ = 0;
  clear_has_type3();
}
 ::google::protobuf::int32 msg::type3() const {
  // @@protoc_insertion_point(field_get:data_pipe.msg.type3)
  return type3_;
}
 void msg::set_type3(::google::protobuf::int32 value) {
  set_has_type3();
  type3_ = value;
  // @@protoc_insertion_point(field_set:data_pipe.msg.type3)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace data_pipe

// @@protoc_insertion_point(global_scope)
