# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: msg_def.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='msg_def.proto',
  package='data_pipe',
  syntax='proto2',
  serialized_pb=_b('\n\rmsg_def.proto\x12\tdata_pipe\"2\n\x03msg\x12\r\n\x05type1\x18\x01 \x02(\x05\x12\r\n\x05type2\x18\x02 \x02(\x05\x12\r\n\x05type3\x18\x03 \x02(\x05')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_MSG = _descriptor.Descriptor(
  name='msg',
  full_name='data_pipe.msg',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type1', full_name='data_pipe.msg.type1', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type2', full_name='data_pipe.msg.type2', index=1,
      number=2, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type3', full_name='data_pipe.msg.type3', index=2,
      number=3, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=28,
  serialized_end=78,
)

DESCRIPTOR.message_types_by_name['msg'] = _MSG

msg = _reflection.GeneratedProtocolMessageType('msg', (_message.Message,), dict(
  DESCRIPTOR = _MSG,
  __module__ = 'msg_def_pb2'
  # @@protoc_insertion_point(class_scope:data_pipe.msg)
  ))
_sym_db.RegisterMessage(msg)


# @@protoc_insertion_point(module_scope)
