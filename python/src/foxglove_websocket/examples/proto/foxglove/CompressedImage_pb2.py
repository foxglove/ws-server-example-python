# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: foxglove/CompressedImage.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='foxglove/CompressedImage.proto',
  package='foxglove',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x1e\x66oxglove/CompressedImage.proto\x12\x08\x66oxglove\x1a\x1fgoogle/protobuf/timestamp.proto\"^\n\x0f\x43ompressedImage\x12-\n\ttimestamp\x18\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x0c\n\x04\x64\x61ta\x18\x02 \x01(\x0c\x12\x0e\n\x06\x66ormat\x18\x03 \x01(\tb\x06proto3'
  ,
  dependencies=[google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,])




_COMPRESSEDIMAGE = _descriptor.Descriptor(
  name='CompressedImage',
  full_name='foxglove.CompressedImage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='timestamp', full_name='foxglove.CompressedImage.timestamp', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='data', full_name='foxglove.CompressedImage.data', index=1,
      number=2, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=b"",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='format', full_name='foxglove.CompressedImage.format', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=77,
  serialized_end=171,
)

_COMPRESSEDIMAGE.fields_by_name['timestamp'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
DESCRIPTOR.message_types_by_name['CompressedImage'] = _COMPRESSEDIMAGE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

CompressedImage = _reflection.GeneratedProtocolMessageType('CompressedImage', (_message.Message,), {
  'DESCRIPTOR' : _COMPRESSEDIMAGE,
  '__module__' : 'foxglove.CompressedImage_pb2'
  # @@protoc_insertion_point(class_scope:foxglove.CompressedImage)
  })
_sym_db.RegisterMessage(CompressedImage)


# @@protoc_insertion_point(module_scope)
