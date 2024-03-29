/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libboringssl.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct nw_protocol {
	unsigned char flow_id[16];
	nw_protocol_identifier identifier;
	nw_protocol_callbacks callbacks;
	nw_protocol output_handler;
	void handle;
	nw_protocol default_input_handler;
	void output_handler_context;
} nw_protocol;

typedef struct nw_frame_array_s {
	nw_frame tqh_first;
	nw_frame tqh_last;
} nw_frame_array_s;

typedef struct {
	unsigned long long length;
	char* data;
} SCD_Struct_bo2;

typedef struct nw_protocol_boringssl_private_key_methods {
	/*function pointer*/void* type;
	/*function pointer*/void* max_signature_len;
	/*function pointer*/void* sign;
	/*function pointer*/void* decrypt;
} nw_protocol_boringssl_private_key_methods;

typedef struct boringssl_ctx_alert {
	int ssl_alert_type;
	unsigned char ssl_alert_code;
	unsigned char ssl_warning_count;
} boringssl_ctx_alert;

typedef struct __CFArray* CFArrayRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct ssl_st* ssl_stRef;

typedef struct ssl_ctx_st* ssl_ctx_stRef;

