/*****************************************************************************
Copyright (c) 2018 Qualcomm Technologies International, Ltd.
*********************************************************************************/

/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: media.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "media.pb-c.h"
void   issue_media_control__init
                     (IssueMediaControl         *message)
{
  static const IssueMediaControl init_value = ISSUE_MEDIA_CONTROL__INIT;
  *message = init_value;
}
size_t issue_media_control__get_packed_size
                     (const IssueMediaControl *message)
{
  assert(message->base.descriptor == &issue_media_control__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t issue_media_control__pack
                     (const IssueMediaControl *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &issue_media_control__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t issue_media_control__pack_to_buffer
                     (const IssueMediaControl *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &issue_media_control__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
IssueMediaControl *
       issue_media_control__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (IssueMediaControl *)
     protobuf_c_message_unpack (&issue_media_control__descriptor,
                                allocator, len, data);
}
void   issue_media_control__free_unpacked
                     (IssueMediaControl *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &issue_media_control__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor issue_media_control__field_descriptors[1] =
{
  {
    "control",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(IssueMediaControl, control),
    &media_control__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned issue_media_control__field_indices_by_name[] = {
  0,   /* field[0] = control */
};
static const ProtobufCIntRange issue_media_control__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor issue_media_control__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "IssueMediaControl",
  "IssueMediaControl",
  "IssueMediaControl",
  "",
  sizeof(IssueMediaControl),
  1,
  issue_media_control__field_descriptors,
  issue_media_control__field_indices_by_name,
  1,  issue_media_control__number_ranges,
  (ProtobufCMessageInit) issue_media_control__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue media_control__enum_values_by_number[5] =
{
  { "PLAY", "MEDIA_CONTROL__PLAY", 0 },
  { "PAUSE", "MEDIA_CONTROL__PAUSE", 1 },
  { "NEXT", "MEDIA_CONTROL__NEXT", 2 },
  { "PREVIOUS", "MEDIA_CONTROL__PREVIOUS", 3 },
  { "PLAY_PAUSE", "MEDIA_CONTROL__PLAY_PAUSE", 4 },
};
static const ProtobufCIntRange media_control__value_ranges[] = {
{0, 0},{0, 5}
};
static const ProtobufCEnumValueIndex media_control__enum_values_by_name[5] =
{
  { "NEXT", 2 },
  { "PAUSE", 1 },
  { "PLAY", 0 },
  { "PLAY_PAUSE", 4 },
  { "PREVIOUS", 3 },
};
const ProtobufCEnumDescriptor media_control__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "MediaControl",
  "MediaControl",
  "MediaControl",
  "",
  5,
  media_control__enum_values_by_number,
  5,
  media_control__enum_values_by_name,
  1,
  media_control__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
