/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "WM.end.pb-c.h"
void   wm__end__init
                     (Wm__End         *message)
{
  static Wm__End init_value = WM__END__INIT;
  *message = init_value;
}
size_t wm__end__get_packed_size
                     (const Wm__End *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &wm__end__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t wm__end__pack
                     (const Wm__End *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &wm__end__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t wm__end__pack_to_buffer
                     (const Wm__End *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &wm__end__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Wm__End *
       wm__end__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Wm__End *)
     protobuf_c_message_unpack (&wm__end__descriptor,
                                allocator, len, data);
}
void   wm__end__free_unpacked
                     (Wm__End *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &wm__end__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor wm__end__field_descriptors[3] =
{
  {
    "s_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Wm__End, s_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "d_id",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Wm__End, d_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "state",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Wm__End, state),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wm__end__field_indices_by_name[] = {
  1,   /* field[1] = d_id */
  0,   /* field[0] = s_id */
  2,   /* field[2] = state */
};
static const ProtobufCIntRange wm__end__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor wm__end__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "wm.end",
  "End",
  "Wm__End",
  "wm",
  sizeof(Wm__End),
  3,
  wm__end__field_descriptors,
  wm__end__field_indices_by_name,
  1,  wm__end__number_ranges,
  (ProtobufCMessageInit) wm__end__init,
  NULL,NULL,NULL    /* reserved[123] */
};
