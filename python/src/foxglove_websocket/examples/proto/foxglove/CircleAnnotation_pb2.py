# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: foxglove/CircleAnnotation.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from foxglove import Color_pb2 as foxglove_dot_Color__pb2
from foxglove import Point2_pb2 as foxglove_dot_Point2__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='foxglove/CircleAnnotation.proto',
  package='foxglove',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x1f\x66oxglove/CircleAnnotation.proto\x12\x08\x66oxglove\x1a\x14\x66oxglove/Color.proto\x1a\x15\x66oxglove/Point2.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xd7\x01\n\x10\x43ircleAnnotation\x12-\n\ttimestamp\x18\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\"\n\x08position\x18\x02 \x01(\x0b\x32\x10.foxglove.Point2\x12\x10\n\x08\x64iameter\x18\x03 \x01(\x01\x12\x11\n\tthickness\x18\x04 \x01(\x01\x12#\n\nfill_color\x18\x05 \x01(\x0b\x32\x0f.foxglove.Color\x12&\n\routline_color\x18\x06 \x01(\x0b\x32\x0f.foxglove.Colorb\x06proto3'
  ,
  dependencies=[foxglove_dot_Color__pb2.DESCRIPTOR,foxglove_dot_Point2__pb2.DESCRIPTOR,google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,])




_CIRCLEANNOTATION = _descriptor.Descriptor(
  name='CircleAnnotation',
  full_name='foxglove.CircleAnnotation',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='timestamp', full_name='foxglove.CircleAnnotation.timestamp', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='position', full_name='foxglove.CircleAnnotation.position', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='diameter', full_name='foxglove.CircleAnnotation.diameter', index=2,
      number=3, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='thickness', full_name='foxglove.CircleAnnotation.thickness', index=3,
      number=4, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='fill_color', full_name='foxglove.CircleAnnotation.fill_color', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='outline_color', full_name='foxglove.CircleAnnotation.outline_color', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=124,
  serialized_end=339,
)

_CIRCLEANNOTATION.fields_by_name['timestamp'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_CIRCLEANNOTATION.fields_by_name['position'].message_type = foxglove_dot_Point2__pb2._POINT2
_CIRCLEANNOTATION.fields_by_name['fill_color'].message_type = foxglove_dot_Color__pb2._COLOR
_CIRCLEANNOTATION.fields_by_name['outline_color'].message_type = foxglove_dot_Color__pb2._COLOR
DESCRIPTOR.message_types_by_name['CircleAnnotation'] = _CIRCLEANNOTATION
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

CircleAnnotation = _reflection.GeneratedProtocolMessageType('CircleAnnotation', (_message.Message,), {
  'DESCRIPTOR' : _CIRCLEANNOTATION,
  '__module__' : 'foxglove.CircleAnnotation_pb2'
  # @@protoc_insertion_point(class_scope:foxglove.CircleAnnotation)
  })
_sym_db.RegisterMessage(CircleAnnotation)


# @@protoc_insertion_point(module_scope)
