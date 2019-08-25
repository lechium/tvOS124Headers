/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef union {
	char* byte_pointer;
	in_addr ipv4_addr;
	in6_addr ipv6_addr;
	char* domain;
} SCD_Union_NW0;

typedef struct nw_protocol_identifier {
	char name[32];
	int level;
	int mapping;
} nw_protocol_identifier;

typedef struct nw_protocol_callbacks {
	/*function pointer*/void* add_input_handler;
	/*function pointer*/void* remove_input_handler;
	/*function pointer*/void* replace_input_handler;
	/*function pointer*/void* connect;
	/*function pointer*/void* disconnect;
	/*function pointer*/void* connected;
	/*function pointer*/void* disconnected;
	/*function pointer*/void* error;
	/*function pointer*/void* input_available;
	/*function pointer*/void* output_available;
	/*function pointer*/void* get_input_frames;
	/*function pointer*/void* get_output_frames;
	/*function pointer*/void* finalize_output_frames;
	/*function pointer*/void* link_state;
	/*function pointer*/void* get_parameters;
	/*function pointer*/void* get_path;
	/*function pointer*/void* get_local_endpoint;
	/*function pointer*/void* get_remote_endpoint;
	/*function pointer*/void* register_notification;
	/*function pointer*/void* unregister_notification;
	/*function pointer*/void* notify;
	/*function pointer*/void* updated_path;
	/*function pointer*/void* supports_external_data;
	/*function pointer*/void* input_finished;
	/*function pointer*/void* output_finished;
	/*function pointer*/void* get_output_local_endpoint;
	/*function pointer*/void* get_output_interface;
	/*function pointer*/void* waiting_for_output;
	/*function pointer*/void* copy_info;
	/*function pointer*/void* add_listen_handler;
	/*function pointer*/void* remove_listen_handler;
	/*function pointer*/void* get_message_properties;
	/*function pointer*/void* reset;
	/*function pointer*/void* input_flush;
} nw_protocol_callbacks;

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

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _DNSServiceRef_t* DNSServiceRef_tRef;

typedef struct __CFURL* CFURLRef;

typedef struct nw_hash_table* nw_hash_tableRef;

typedef struct nw_mem_buffer_manager* nw_mem_buffer_managerRef;

typedef struct nw_endpoint_handler_event_s {
	unsigned domain;
	unsigned event;
} nw_endpoint_handler_event_s;

typedef struct __CFString* CFStringRef;

typedef struct __CFData* CFDataRef;

typedef struct nw_listen_protocol_callbacks {
	/*function pointer*/void* new_flow;
	/*function pointer*/void* disconnected;
} nw_listen_protocol_callbacks;

typedef struct nw_listen_protocol {
	nw_listen_protocol_callbacks callbacks;
	nw_protocol protocol_handler;
	void protocol_handler_context;
	void handle;
} nw_listen_protocol;

typedef struct nw_interface_signature {
	unsigned char signature[20];
	unsigned char signature_len;
	unsigned char __pad[3];
} nw_interface_signature;

typedef struct nw_interface_details {
	nw_interface_signature ipv4_signature;
	nw_interface_signature ipv6_signature;
	int is_active;
	int mtu;
	unsigned expensive : 1;
	unsigned tx_start : 1;
	unsigned ack_priority : 1;
	unsigned carrier_aggregation : 1;
	unsigned __pad_bits : 4;
	unsigned char __pad[3];
} nw_interface_details;

typedef struct {
	unsigned val[8];
} SCD_Struct_NW17;

typedef struct {
	unsigned char proc_uuid[16];
	unsigned char e_proc_uuid[16];
	unsigned char parent_id[16];
	unsigned traffic_class;
	int pid;
	unsigned uid;
	SCD_Struct_NW17 e_audit_token;
	int mtu_override;
	int data_mode;
	int required_interface_type;
	int required_interface_subtype;
	int ecn_mode;
	int multipath_service;
	int service_class;
	int companion_preference;
	int expired_dns_behavior;
	unsigned sleep_keepalive_interval;
	unsigned char address_family;
	unsigned dry_run : 1;
	unsigned prohibit_expensive_paths : 1;
	unsigned prohibit_roaming : 1;
	unsigned no_proxy : 1;
	unsigned no_opaque_proxy : 1;
	unsigned no_transform : 1;
	unsigned fast_open_enabled : 1;
	unsigned use_long_outstanding_queries : 1;
	unsigned use_awdl : 1;
	unsigned use_p2p : 1;
	unsigned resolve_ptr : 1;
	unsigned indefinite : 1;
	unsigned indefinite_set : 1;
	unsigned reuse_local_address : 1;
	unsigned no_fallback : 1;
	unsigned multipath_fallback : 1;
	unsigned receive_any_interface : 1;
	unsigned enable_tls13 : 1;
	unsigned is_probe : 1;
	unsigned custom_protocols_only : 1;
	unsigned discretionary : 1;
	unsigned bundle_id_to_uuid_mapping_failed : 1;
	unsigned pid_to_uuid_mapping_failed : 1;
	unsigned allow_socket_access : 1;
	unsigned local_only : 1;
	unsigned server : 1;
	unsigned is_fallback : 1;
	unsigned desperate_ivan : 1;
	unsigned only_primary_requires_type : 1;
	unsigned allow_unusable_addresses : 1;
	unsigned prefer_no_proxy : 1;
	unsigned https_proxy_is_opaque : 1;
	unsigned https_proxy_over_tls : 1;
	unsigned tls_should_trust_invalid_certificates : 1;
	unsigned __pad_bits : 6;
	unsigned char __pad[2];
} SCD_Struct_NW18;

typedef struct nw_connection_throughput_monitor_s {
	unsigned long long current_bytes;
	unsigned long long current_time;
	unsigned long long last_bytes;
	unsigned long long last_time;
	void timer;
	unsigned minimum;
	unsigned char __pad[4];
} nw_connection_throughput_monitor_s;

typedef struct sockaddr_storage {
	unsigned char ss_len;
	unsigned char ss_family;
	char __ss_pad1[6];
	long long __ss_align;
	char __ss_pad2[112];
} sockaddr_storage;

typedef struct necp_client_result_netagent {
	unsigned generation;
	unsigned char netagent_uuid[16];
} necp_client_result_netagent;

typedef struct necp_client_result_interface {
	unsigned generation;
	unsigned index;
} necp_client_result_interface;

typedef const struct sk_nexusadv* sk_nexusadvRef;

typedef struct nw_path_necp_result {
	unsigned routing_result;
	/*function pointer*/void* routing_result_parameter;
	unsigned tunnel_interface_index;
	unsigned scoped_interface_index;
	unsigned flow_divert_control_unit;
	I) filter_control_unit;
	unsigned filter_control_unit;
	unsigned service_action;
	unsigned char service_uuid[16];
	necp_client_result_netagent netagents;
	necp_client_interface_option interface_options;
	unsigned service_flags;
	unsigned service_data;
	unsigned routed_interface_index;
	unsigned direct_interface_index;
	unsigned direct_interface_generation;
	unsigned delegate_interface_index;
	unsigned delegate_interface_generation;
	unsigned policy_id;
	unsigned num_interface_options;
	unsigned num_netagents;
} nw_path_necp_result;

