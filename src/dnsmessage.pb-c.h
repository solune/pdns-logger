/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: dnsmessage.proto */

#ifndef PROTOBUF_C_dnsmessage_2eproto__INCLUDED
#define PROTOBUF_C_dnsmessage_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS
#if PROTOBUF_C_VERSION_NUMBER < 1000000
#error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
#error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif
typedef struct _PBDNSMessage PBDNSMessage;
typedef struct _PBDNSMessage__DNSQuestion PBDNSMessage__DNSQuestion;
typedef struct _PBDNSMessage__DNSResponse PBDNSMessage__DNSResponse;
typedef struct _PBDNSMessage__DNSResponse__DNSRR PBDNSMessage__DNSResponse__DNSRR;

/* --- enums --- */

typedef enum _PBDNSMessage__Type {
    PBDNSMESSAGE__TYPE__DNSQueryType = 1,
    PBDNSMESSAGE__TYPE__DNSResponseType = 2,
    PBDNSMESSAGE__TYPE__DNSOutgoingQueryType = 3,
    PBDNSMESSAGE__TYPE__DNSIncomingResponseType = 4 PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PBDNSMESSAGE__TYPE)
} PBDNSMessage__Type;
typedef enum _PBDNSMessage__SocketFamily {
    /*
     * IPv4 (RFC 791)
     */
    PBDNSMESSAGE__SOCKET_FAMILY__INET = 1,
    /*
     * IPv6 (RFC 2460)
     */
    PBDNSMESSAGE__SOCKET_FAMILY__INET6 = 2 PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PBDNSMESSAGE__SOCKET_FAMILY)
} PBDNSMessage__SocketFamily;
typedef enum _PBDNSMessage__SocketProtocol {
    /*
     * User Datagram Protocol (RFC 768)
     */
    PBDNSMESSAGE__SOCKET_PROTOCOL__UDP = 1,
    /*
     * Transmission Control Protocol (RFC 793)
     */
    PBDNSMESSAGE__SOCKET_PROTOCOL__TCP = 2 PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PBDNSMESSAGE__SOCKET_PROTOCOL)
} PBDNSMessage__SocketProtocol;

/* --- messages --- */

struct _PBDNSMessage__DNSQuestion {
    ProtobufCMessage base;
    char *qname;
    protobuf_c_boolean has_qtype;
    uint32_t qtype;
    protobuf_c_boolean has_qclass;
    uint32_t qclass;
};
#define PBDNSMESSAGE__DNSQUESTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbdnsmessage__dnsquestion__descriptor) \
    , NULL, 0,0, 0,0 }

struct _PBDNSMessage__DNSResponse__DNSRR {
    ProtobufCMessage base;
    char *name;
    protobuf_c_boolean has_type;
    uint32_t type;
    protobuf_c_boolean has_class_;
    uint32_t class_;
    protobuf_c_boolean has_ttl;
    uint32_t ttl;
    protobuf_c_boolean has_rdata;
    ProtobufCBinaryData rdata;
};
#define PBDNSMESSAGE__DNSRESPONSE__DNSRR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbdnsmessage__dnsresponse__dnsrr__descriptor) \
    , NULL, 0,0, 0,0, 0,0, 0,{0,NULL} }

struct _PBDNSMessage__DNSResponse {
    ProtobufCMessage base;
    protobuf_c_boolean has_rcode;
    uint32_t rcode;
    size_t n_rrs;
    PBDNSMessage__DNSResponse__DNSRR **rrs;
    /*
     * Filtering policy (RPZ or Lua) applied
     */
    char *appliedpolicy;
    /*
     * Additional tags
     */
    size_t n_tags;
    char **tags;
    /*
     * Time of the corresponding query reception (seconds since epoch)
     */
    protobuf_c_boolean has_querytimesec;
    uint32_t querytimesec;
    /*
     * Time of the corresponding query reception (additional micro-seconds)
     */
    protobuf_c_boolean has_querytimeusec;
    uint32_t querytimeusec;
};
#define PBDNSMESSAGE__DNSRESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbdnsmessage__dnsresponse__descriptor) \
    , 0,0, 0,NULL, NULL, 0,NULL, 0,0, 0,0 }

struct _PBDNSMessage {
    ProtobufCMessage base;
    PBDNSMessage__Type type;
    /*
     * UUID, shared by the query and the response
     */
    protobuf_c_boolean has_messageid;
    ProtobufCBinaryData messageid;
    /*
     * UUID of the server emitting the protobuf message
     */
    protobuf_c_boolean has_serveridentity;
    ProtobufCBinaryData serveridentity;
    protobuf_c_boolean has_socketfamily;
    PBDNSMessage__SocketFamily socketfamily;
    protobuf_c_boolean has_socketprotocol;
    PBDNSMessage__SocketProtocol socketprotocol;
    /*
     * DNS requestor (client)
     */
    protobuf_c_boolean has_from;
    ProtobufCBinaryData from;
    /*
     * DNS responder (server)
     */
    protobuf_c_boolean has_to;
    ProtobufCBinaryData to;
    /*
     * Size of the query or response on the wire
     */
    protobuf_c_boolean has_inbytes;
    uint64_t inbytes;
    /*
     * Time of message reception (seconds since epoch)
     */
    protobuf_c_boolean has_timesec;
    uint32_t timesec;
    /*
     * Time of message reception (additional micro-seconds)
     */
    protobuf_c_boolean has_timeusec;
    uint32_t timeusec;
    /*
     * ID of the query/response as found in the DNS header
     */
    protobuf_c_boolean has_id;
    uint32_t id;
    PBDNSMessage__DNSQuestion *question;
    PBDNSMessage__DNSResponse *response;
    /*
     * EDNS Client Subnet value
     */
    protobuf_c_boolean has_originalrequestorsubnet;
    ProtobufCBinaryData originalrequestorsubnet;
    /*
     * Username of the requestor
     */
    char *requestorid;
    /*
     * UUID of the incoming query that initiated this outgoing query or incoming response
     */
    protobuf_c_boolean has_initialrequestid;
    ProtobufCBinaryData initialrequestid;
};
#define PBDNSMESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pbdnsmessage__descriptor) \
    , 0, 0,{0,NULL}, 0,{0,NULL}, 0,0, 0,0, 0,{0,NULL}, 0,{0,NULL}, 0,0, 0,0, 0,0, 0,0, NULL, NULL, 0,{0,NULL}, NULL, 0,{0,NULL} }

/* PBDNSMessage__DNSQuestion methods */
void pbdnsmessage__dnsquestion__init(PBDNSMessage__DNSQuestion * message);
/* PBDNSMessage__DNSResponse__DNSRR methods */
void pbdnsmessage__dnsresponse__dnsrr__init(PBDNSMessage__DNSResponse__DNSRR * message);
/* PBDNSMessage__DNSResponse methods */
void pbdnsmessage__dnsresponse__init(PBDNSMessage__DNSResponse * message);
/* PBDNSMessage methods */
void pbdnsmessage__init(PBDNSMessage * message);
size_t pbdnsmessage__get_packed_size(const PBDNSMessage * message);
size_t pbdnsmessage__pack(const PBDNSMessage * message, uint8_t * out);
size_t pbdnsmessage__pack_to_buffer(const PBDNSMessage * message, ProtobufCBuffer * buffer);
PBDNSMessage *pbdnsmessage__unpack(ProtobufCAllocator * allocator, size_t len, const uint8_t * data);
void pbdnsmessage__free_unpacked(PBDNSMessage * message, ProtobufCAllocator * allocator);
/* --- per-message closures --- */

typedef void (*PBDNSMessage__DNSQuestion_Closure)
 (const PBDNSMessage__DNSQuestion * message, void *closure_data);
typedef void (*PBDNSMessage__DNSResponse__DNSRR_Closure)
 (const PBDNSMessage__DNSResponse__DNSRR * message, void *closure_data);
typedef void (*PBDNSMessage__DNSResponse_Closure)
 (const PBDNSMessage__DNSResponse * message, void *closure_data);
typedef void (*PBDNSMessage_Closure)
 (const PBDNSMessage * message, void *closure_data);

/* --- services --- */

/* --- descriptors --- */

extern const ProtobufCMessageDescriptor pbdnsmessage__descriptor;
extern const ProtobufCMessageDescriptor pbdnsmessage__dnsquestion__descriptor;
extern const ProtobufCMessageDescriptor pbdnsmessage__dnsresponse__descriptor;
extern const ProtobufCMessageDescriptor pbdnsmessage__dnsresponse__dnsrr__descriptor;
extern const ProtobufCEnumDescriptor pbdnsmessage__type__descriptor;
extern const ProtobufCEnumDescriptor pbdnsmessage__socket_family__descriptor;
extern const ProtobufCEnumDescriptor pbdnsmessage__socket_protocol__descriptor;

PROTOBUF_C__END_DECLS
#endif                          /* PROTOBUF_C_dnsmessage_2eproto__INCLUDED */
