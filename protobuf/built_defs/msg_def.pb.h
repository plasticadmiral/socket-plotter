// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_def.proto

#ifndef PROTOBUF_msg_5fdef_2eproto__INCLUDED
#define PROTOBUF_msg_5fdef_2eproto__INCLUDED

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

namespace data_pipe {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_msg_5fdef_2eproto();
void protobuf_AssignDesc_msg_5fdef_2eproto();
void protobuf_ShutdownFile_msg_5fdef_2eproto();

class msg;

// ===================================================================

class msg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:data_pipe.msg) */ {
 public:
  msg();
  virtual ~msg();

  msg(const msg& from);

  inline msg& operator=(const msg& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const msg& default_instance();

  void Swap(msg* other);

  // implements Message ----------------------------------------------

  inline msg* New() const { return New(NULL); }

  msg* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const msg& from);
  void MergeFrom(const msg& from);
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
  void InternalSwap(msg* other);
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

  // required int32 type1 = 1;
  bool has_type1() const;
  void clear_type1();
  static const int kType1FieldNumber = 1;
  ::google::protobuf::int32 type1() const;
  void set_type1(::google::protobuf::int32 value);

  // required int32 type2 = 2;
  bool has_type2() const;
  void clear_type2();
  static const int kType2FieldNumber = 2;
  ::google::protobuf::int32 type2() const;
  void set_type2(::google::protobuf::int32 value);

  // required int32 type3 = 3;
  bool has_type3() const;
  void clear_type3();
  static const int kType3FieldNumber = 3;
  ::google::protobuf::int32 type3() const;
  void set_type3(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:data_pipe.msg)
 private:
  inline void set_has_type1();
  inline void clear_has_type1();
  inline void set_has_type2();
  inline void clear_has_type2();
  inline void set_has_type3();
  inline void clear_has_type3();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 type1_;
  ::google::protobuf::int32 type2_;
  ::google::protobuf::int32 type3_;
  friend void  protobuf_AddDesc_msg_5fdef_2eproto();
  friend void protobuf_AssignDesc_msg_5fdef_2eproto();
  friend void protobuf_ShutdownFile_msg_5fdef_2eproto();

  void InitAsDefaultInstance();
  static msg* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// msg

// required int32 type1 = 1;
inline bool msg::has_type1() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void msg::set_has_type1() {
  _has_bits_[0] |= 0x00000001u;
}
inline void msg::clear_has_type1() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void msg::clear_type1() {
  type1_ = 0;
  clear_has_type1();
}
inline ::google::protobuf::int32 msg::type1() const {
  // @@protoc_insertion_point(field_get:data_pipe.msg.type1)
  return type1_;
}
inline void msg::set_type1(::google::protobuf::int32 value) {
  set_has_type1();
  type1_ = value;
  // @@protoc_insertion_point(field_set:data_pipe.msg.type1)
}

// required int32 type2 = 2;
inline bool msg::has_type2() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void msg::set_has_type2() {
  _has_bits_[0] |= 0x00000002u;
}
inline void msg::clear_has_type2() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void msg::clear_type2() {
  type2_ = 0;
  clear_has_type2();
}
inline ::google::protobuf::int32 msg::type2() const {
  // @@protoc_insertion_point(field_get:data_pipe.msg.type2)
  return type2_;
}
inline void msg::set_type2(::google::protobuf::int32 value) {
  set_has_type2();
  type2_ = value;
  // @@protoc_insertion_point(field_set:data_pipe.msg.type2)
}

// required int32 type3 = 3;
inline bool msg::has_type3() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void msg::set_has_type3() {
  _has_bits_[0] |= 0x00000004u;
}
inline void msg::clear_has_type3() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void msg::clear_type3() {
  type3_ = 0;
  clear_has_type3();
}
inline ::google::protobuf::int32 msg::type3() const {
  // @@protoc_insertion_point(field_get:data_pipe.msg.type3)
  return type3_;
}
inline void msg::set_type3(::google::protobuf::int32 value) {
  set_has_type3();
  type3_ = value;
  // @@protoc_insertion_point(field_set:data_pipe.msg.type3)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace data_pipe

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_5fdef_2eproto__INCLUDED
