/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: dnsmessage.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "dnsmessage.pb-c.h"
void pbdnsmessage__dnsquestion__init(PBDNSMessage__DNSQuestion * message) {
    static PBDNSMessage__DNSQuestion init_value = PBDNSMESSAGE__DNSQUESTION__INIT;
    *message = init_value;
}
void pbdnsmessage__dnsresponse__dnsrr__init(PBDNSMessage__DNSResponse__DNSRR * message) {
    static PBDNSMessage__DNSResponse__DNSRR init_value = PBDNSMESSAGE__DNSRESPONSE__DNSRR__INIT;
    *message = init_value;
}
void pbdnsmessage__dnsresponse__init(PBDNSMessage__DNSResponse * message) {
    static PBDNSMessage__DNSResponse init_value = PBDNSMESSAGE__DNSRESPONSE__INIT;
    *message = init_value;
}
void pbdnsmessage__init(PBDNSMessage * message) {
    static PBDNSMessage init_value = PBDNSMESSAGE__INIT;
    *message = init_value;
}
size_t pbdnsmessage__get_packed_size(const PBDNSMessage * message) {
    assert(message->base.descriptor == &pbdnsmessage__descriptor);
    return protobuf_c_message_get_packed_size((const ProtobufCMessage *) (message));
}
size_t pbdnsmessage__pack(const PBDNSMessage * message, uint8_t * out) {
    assert(message->base.descriptor == &pbdnsmessage__descriptor);
    return protobuf_c_message_pack((const ProtobufCMessage *) message, out);
}
size_t pbdnsmessage__pack_to_buffer(const PBDNSMessage * message, ProtobufCBuffer * buffer) {
    assert(message->base.descriptor == &pbdnsmessage__descriptor);
    return protobuf_c_message_pack_to_buffer((const ProtobufCMessage *) message, buffer);
}
PBDNSMessage *pbdnsmessage__unpack(ProtobufCAllocator * allocator, size_t len, const uint8_t * data) {
    return (PBDNSMessage *)
        protobuf_c_message_unpack(&pbdnsmessage__descriptor, allocator, len, data);
}
void pbdnsmessage__free_unpacked(PBDNSMessage * message, ProtobufCAllocator * allocator) {
    assert(message->base.descriptor == &pbdnsmessage__descriptor);
    protobuf_c_message_free_unpacked((ProtobufCMessage *) message, allocator);
}

static const ProtobufCFieldDescriptor pbdnsmessage__dnsquestion__field_descriptors[3] = {
    {
     "qName",
     1,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_STRING,
     0,                         /* quantifier_offset */
     offsetof(PBDNSMessage__DNSQuestion, qname),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "qType",
     2,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT32,
     offsetof(PBDNSMessage__DNSQuestion, has_qtype),
     offsetof(PBDNSMessage__DNSQuestion, qtype),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "qClass",
     3,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT32,
     offsetof(PBDNSMessage__DNSQuestion, has_qclass),
     offsetof(PBDNSMessage__DNSQuestion, qclass),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
};
static const unsigned pbdnsmessage__dnsquestion__field_indices_by_name[] = {
    2,                          /* field[2] = qClass */
    0,                          /* field[0] = qName */
    1,                          /* field[1] = qType */
};
static const ProtobufCIntRange pbdnsmessage__dnsquestion__number_ranges[1 + 1] = {
    {1, 0},
    {0, 3}
};
const ProtobufCMessageDescriptor pbdnsmessage__dnsquestion__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "PBDNSMessage.DNSQuestion",
    "DNSQuestion",
    "PBDNSMessage__DNSQuestion",
    "",
    sizeof(PBDNSMessage__DNSQuestion),
    3,
    pbdnsmessage__dnsquestion__field_descriptors,
    pbdnsmessage__dnsquestion__field_indices_by_name,
    1, pbdnsmessage__dnsquestion__number_ranges,
    (ProtobufCMessageInit) pbdnsmessage__dnsquestion__init,
    NULL, NULL, NULL            /* reserved[123] */
};
static const ProtobufCFieldDescriptor pbdnsmessage__dnsresponse__dnsrr__field_descriptors[5] = {
    {
     "name",
     1,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_STRING,
     0,                         /* quantifier_offset */
     offsetof(PBDNSMessage__DNSResponse__DNSRR, name),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "type",
     2,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT32,
     offsetof(PBDNSMessage__DNSResponse__DNSRR, has_type),
     offsetof(PBDNSMessage__DNSResponse__DNSRR, type),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "class",
     3,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT32,
     offsetof(PBDNSMessage__DNSResponse__DNSRR, has_class_),
     offsetof(PBDNSMessage__DNSResponse__DNSRR, class_),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "ttl",
     4,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT32,
     offsetof(PBDNSMessage__DNSResponse__DNSRR, has_ttl),
     offsetof(PBDNSMessage__DNSResponse__DNSRR, ttl),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "rdata",
     5,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_BYTES,
     offsetof(PBDNSMessage__DNSResponse__DNSRR, has_rdata),
     offsetof(PBDNSMessage__DNSResponse__DNSRR, rdata),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
};
static const unsigned pbdnsmessage__dnsresponse__dnsrr__field_indices_by_name[] = {
    2,                          /* field[2] = class */
    0,                          /* field[0] = name */
    4,                          /* field[4] = rdata */
    3,                          /* field[3] = ttl */
    1,                          /* field[1] = type */
};
static const ProtobufCIntRange pbdnsmessage__dnsresponse__dnsrr__number_ranges[1 + 1] = {
    {1, 0},
    {0, 5}
};
const ProtobufCMessageDescriptor pbdnsmessage__dnsresponse__dnsrr__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "PBDNSMessage.DNSResponse.DNSRR",
    "DNSRR",
    "PBDNSMessage__DNSResponse__DNSRR",
    "",
    sizeof(PBDNSMessage__DNSResponse__DNSRR),
    5,
    pbdnsmessage__dnsresponse__dnsrr__field_descriptors,
    pbdnsmessage__dnsresponse__dnsrr__field_indices_by_name,
    1, pbdnsmessage__dnsresponse__dnsrr__number_ranges,
    (ProtobufCMessageInit) pbdnsmessage__dnsresponse__dnsrr__init,
    NULL, NULL, NULL            /* reserved[123] */
};
static const ProtobufCFieldDescriptor pbdnsmessage__dnsresponse__field_descriptors[6] = {
    {
     "rcode",
     1,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT32,
     offsetof(PBDNSMessage__DNSResponse, has_rcode),
     offsetof(PBDNSMessage__DNSResponse, rcode),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "rrs",
     2,
     PROTOBUF_C_LABEL_REPEATED,
     PROTOBUF_C_TYPE_MESSAGE,
     offsetof(PBDNSMessage__DNSResponse, n_rrs),
     offsetof(PBDNSMessage__DNSResponse, rrs),
     &pbdnsmessage__dnsresponse__dnsrr__descriptor,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "appliedPolicy",
     3,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_STRING,
     0,                         /* quantifier_offset */
     offsetof(PBDNSMessage__DNSResponse, appliedpolicy),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "tags",
     4,
     PROTOBUF_C_LABEL_REPEATED,
     PROTOBUF_C_TYPE_STRING,
     offsetof(PBDNSMessage__DNSResponse, n_tags),
     offsetof(PBDNSMessage__DNSResponse, tags),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "queryTimeSec",
     5,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT32,
     offsetof(PBDNSMessage__DNSResponse, has_querytimesec),
     offsetof(PBDNSMessage__DNSResponse, querytimesec),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "queryTimeUsec",
     6,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT32,
     offsetof(PBDNSMessage__DNSResponse, has_querytimeusec),
     offsetof(PBDNSMessage__DNSResponse, querytimeusec),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
};
static const unsigned pbdnsmessage__dnsresponse__field_indices_by_name[] = {
    2,                          /* field[2] = appliedPolicy */
    4,                          /* field[4] = queryTimeSec */
    5,                          /* field[5] = queryTimeUsec */
    0,                          /* field[0] = rcode */
    1,                          /* field[1] = rrs */
    3,                          /* field[3] = tags */
};
static const ProtobufCIntRange pbdnsmessage__dnsresponse__number_ranges[1 + 1] = {
    {1, 0},
    {0, 6}
};
const ProtobufCMessageDescriptor pbdnsmessage__dnsresponse__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "PBDNSMessage.DNSResponse",
    "DNSResponse",
    "PBDNSMessage__DNSResponse",
    "",
    sizeof(PBDNSMessage__DNSResponse),
    6,
    pbdnsmessage__dnsresponse__field_descriptors,
    pbdnsmessage__dnsresponse__field_indices_by_name,
    1, pbdnsmessage__dnsresponse__number_ranges,
    (ProtobufCMessageInit) pbdnsmessage__dnsresponse__init,
    NULL, NULL, NULL            /* reserved[123] */
};
static const ProtobufCEnumValue pbdnsmessage__type__enum_values_by_number[4] = {
    {"DNSQueryType", "PBDNSMESSAGE__TYPE__DNSQueryType", 1},
    {"DNSResponseType", "PBDNSMESSAGE__TYPE__DNSResponseType", 2},
    {"DNSOutgoingQueryType", "PBDNSMESSAGE__TYPE__DNSOutgoingQueryType", 3},
    {"DNSIncomingResponseType", "PBDNSMESSAGE__TYPE__DNSIncomingResponseType", 4},
};
static const ProtobufCIntRange pbdnsmessage__type__value_ranges[] = {
    {1, 0}, {0, 4}
};
static const ProtobufCEnumValueIndex pbdnsmessage__type__enum_values_by_name[4] = {
    {"DNSIncomingResponseType", 3},
    {"DNSOutgoingQueryType", 2},
    {"DNSQueryType", 0},
    {"DNSResponseType", 1},
};
const ProtobufCEnumDescriptor pbdnsmessage__type__descriptor = {
    PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
    "PBDNSMessage.Type",
    "Type",
    "PBDNSMessage__Type",
    "",
    4,
    pbdnsmessage__type__enum_values_by_number,
    4,
    pbdnsmessage__type__enum_values_by_name,
    1,
    pbdnsmessage__type__value_ranges,
    NULL, NULL, NULL, NULL      /* reserved[1234] */
};
static const ProtobufCEnumValue pbdnsmessage__socket_family__enum_values_by_number[2] = {
    {"INET", "PBDNSMESSAGE__SOCKET_FAMILY__INET", 1},
    {"INET6", "PBDNSMESSAGE__SOCKET_FAMILY__INET6", 2},
};
static const ProtobufCIntRange pbdnsmessage__socket_family__value_ranges[] = {
    {1, 0}, {0, 2}
};
static const ProtobufCEnumValueIndex pbdnsmessage__socket_family__enum_values_by_name[2] = {
    {"INET", 0},
    {"INET6", 1},
};
const ProtobufCEnumDescriptor pbdnsmessage__socket_family__descriptor = {
    PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
    "PBDNSMessage.SocketFamily",
    "SocketFamily",
    "PBDNSMessage__SocketFamily",
    "",
    2,
    pbdnsmessage__socket_family__enum_values_by_number,
    2,
    pbdnsmessage__socket_family__enum_values_by_name,
    1,
    pbdnsmessage__socket_family__value_ranges,
    NULL, NULL, NULL, NULL      /* reserved[1234] */
};
static const ProtobufCEnumValue pbdnsmessage__socket_protocol__enum_values_by_number[2] = {
    {"UDP", "PBDNSMESSAGE__SOCKET_PROTOCOL__UDP", 1},
    {"TCP", "PBDNSMESSAGE__SOCKET_PROTOCOL__TCP", 2},
};
static const ProtobufCIntRange pbdnsmessage__socket_protocol__value_ranges[] = {
    {1, 0}, {0, 2}
};
static const ProtobufCEnumValueIndex pbdnsmessage__socket_protocol__enum_values_by_name[2] = {
    {"TCP", 1},
    {"UDP", 0},
};
const ProtobufCEnumDescriptor pbdnsmessage__socket_protocol__descriptor = {
    PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
    "PBDNSMessage.SocketProtocol",
    "SocketProtocol",
    "PBDNSMessage__SocketProtocol",
    "",
    2,
    pbdnsmessage__socket_protocol__enum_values_by_number,
    2,
    pbdnsmessage__socket_protocol__enum_values_by_name,
    1,
    pbdnsmessage__socket_protocol__value_ranges,
    NULL, NULL, NULL, NULL      /* reserved[1234] */
};
static const ProtobufCFieldDescriptor pbdnsmessage__field_descriptors[16] = {
    {
     "type",
     1,
     PROTOBUF_C_LABEL_REQUIRED,
     PROTOBUF_C_TYPE_ENUM,
     0,                         /* quantifier_offset */
     offsetof(PBDNSMessage, type),
     &pbdnsmessage__type__descriptor,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "messageId",
     2,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_BYTES,
     offsetof(PBDNSMessage, has_messageid),
     offsetof(PBDNSMessage, messageid),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "serverIdentity",
     3,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_BYTES,
     offsetof(PBDNSMessage, has_serveridentity),
     offsetof(PBDNSMessage, serveridentity),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "socketFamily",
     4,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_ENUM,
     offsetof(PBDNSMessage, has_socketfamily),
     offsetof(PBDNSMessage, socketfamily),
     &pbdnsmessage__socket_family__descriptor,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "socketProtocol",
     5,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_ENUM,
     offsetof(PBDNSMessage, has_socketprotocol),
     offsetof(PBDNSMessage, socketprotocol),
     &pbdnsmessage__socket_protocol__descriptor,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "from",
     6,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_BYTES,
     offsetof(PBDNSMessage, has_from),
     offsetof(PBDNSMessage, from),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "to",
     7,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_BYTES,
     offsetof(PBDNSMessage, has_to),
     offsetof(PBDNSMessage, to),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "inBytes",
     8,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT64,
     offsetof(PBDNSMessage, has_inbytes),
     offsetof(PBDNSMessage, inbytes),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "timeSec",
     9,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT32,
     offsetof(PBDNSMessage, has_timesec),
     offsetof(PBDNSMessage, timesec),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "timeUsec",
     10,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT32,
     offsetof(PBDNSMessage, has_timeusec),
     offsetof(PBDNSMessage, timeusec),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "id",
     11,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_UINT32,
     offsetof(PBDNSMessage, has_id),
     offsetof(PBDNSMessage, id),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "question",
     12,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_MESSAGE,
     0,                         /* quantifier_offset */
     offsetof(PBDNSMessage, question),
     &pbdnsmessage__dnsquestion__descriptor,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "response",
     13,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_MESSAGE,
     0,                         /* quantifier_offset */
     offsetof(PBDNSMessage, response),
     &pbdnsmessage__dnsresponse__descriptor,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "originalRequestorSubnet",
     14,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_BYTES,
     offsetof(PBDNSMessage, has_originalrequestorsubnet),
     offsetof(PBDNSMessage, originalrequestorsubnet),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "requestorId",
     15,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_STRING,
     0,                         /* quantifier_offset */
     offsetof(PBDNSMessage, requestorid),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
    {
     "initialRequestId",
     16,
     PROTOBUF_C_LABEL_OPTIONAL,
     PROTOBUF_C_TYPE_BYTES,
     offsetof(PBDNSMessage, has_initialrequestid),
     offsetof(PBDNSMessage, initialrequestid),
     NULL,
     NULL,
     0,                         /* flags */
     0, NULL, NULL              /* reserved1,reserved2, etc */
     },
};
static const unsigned pbdnsmessage__field_indices_by_name[] = {
    5,                          /* field[5] = from */
    10,                         /* field[10] = id */
    7,                          /* field[7] = inBytes */
    15,                         /* field[15] = initialRequestId */
    1,                          /* field[1] = messageId */
    13,                         /* field[13] = originalRequestorSubnet */
    11,                         /* field[11] = question */
    14,                         /* field[14] = requestorId */
    12,                         /* field[12] = response */
    2,                          /* field[2] = serverIdentity */
    3,                          /* field[3] = socketFamily */
    4,                          /* field[4] = socketProtocol */
    8,                          /* field[8] = timeSec */
    9,                          /* field[9] = timeUsec */
    6,                          /* field[6] = to */
    0,                          /* field[0] = type */
};
static const ProtobufCIntRange pbdnsmessage__number_ranges[1 + 1] = {
    {1, 0},
    {0, 16}
};
const ProtobufCMessageDescriptor pbdnsmessage__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "PBDNSMessage",
    "PBDNSMessage",
    "PBDNSMessage",
    "",
    sizeof(PBDNSMessage),
    16,
    pbdnsmessage__field_descriptors,
    pbdnsmessage__field_indices_by_name,
    1, pbdnsmessage__number_ranges,
    (ProtobufCMessageInit) pbdnsmessage__init,
    NULL, NULL, NULL            /* reserved[123] */
};
