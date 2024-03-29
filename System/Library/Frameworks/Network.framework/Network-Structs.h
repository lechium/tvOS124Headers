/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct tcp_connection_fallback_watch_s* tcp_connection_fallback_watch_sRef;

typedef struct _NSZone* NSZoneRef;

typedef struct nw_hash_table* nw_hash_tableRef;

typedef struct {
	unsigned active : 1;
	unsigned networkProvider : 1;
	unsigned nexusProvider : 1;
	unsigned userActivated : 1;
	unsigned voluntary : 1;
} SCD_Struct_NW3;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_NW4;

typedef struct {
	unsigned addressFamily : 1;
	unsigned dataMode : 1;
	unsigned ipProtocol : 1;
	unsigned requiredInterfaceType : 1;
	unsigned trafficClass : 1;
	unsigned fastOpen : 1;
	unsigned keepalive : 1;
	unsigned longOutstandingQueries : 1;
	unsigned multipath : 1;
	unsigned noFallback : 1;
	unsigned prohibitExpensive : 1;
	unsigned reduceBuffering : 1;
	unsigned reuseLocalAddress : 1;
	unsigned useAWDL : 1;
	unsigned useP2P : 1;
} SCD_Struct_NW5;

typedef struct {
	unsigned field1[8];
} SCD_Struct_NW6;

typedef struct {
	unsigned command : 1;
} SCD_Struct_NW7;

typedef struct nw_activity_report_s {
	unsigned domain;
	unsigned label;
	unsigned char activity_uuid[16];
	unsigned char parent_activity_uuid[16];
	unsigned retry : 1;
	unsigned __pad_bits : 7;
	unsigned char __pad[3];
} nw_activity_report_s;

typedef struct nw_activity_epilogue_report_s {
	unsigned long long duration_msecs;
	nw_activity_report_s activity;
	unsigned fragments_quenched;
	int completion_reason;
	unsigned char __pad[4];
} nw_activity_epilogue_report_s;

typedef struct netcore_stats_tcp_statistics_report {
	unsigned long long bytes_in;
	unsigned long long bytes_out;
	unsigned long long bytes_duplicate;
	unsigned long long bytes_ooo;
	unsigned long long bytes_retransmitted;
	unsigned long long packets_in;
	unsigned long long packets_out;
	unsigned long long packets_duplicate;
	unsigned long long packets_ooo;
	unsigned long long packets_retransmitted;
	unsigned long long multipath_bytes_in_cell;
	unsigned long long multipath_bytes_out_cell;
	unsigned long long multipath_bytes_in_wifi;
	unsigned long long multipath_bytes_out_wifi;
	unsigned long long multipath_bytes_in_initial;
	unsigned long long multipath_bytes_out_initial;
	unsigned time_to_dns_resolved_msecs;
	unsigned time_to_dns_start_msecs;
	unsigned dns_resolved_time_msecs;
	unsigned time_to_connection_start_msecs;
	unsigned time_to_connection_establishment_msecs;
	unsigned connection_establishment_time_msecs;
	unsigned flow_duration_msecs;
	unsigned traffic_class;
	unsigned current_rtt_msecs;
	unsigned smoothed_rtt_msecs;
	unsigned best_rtt_msecs;
	unsigned rtt_variance;
	unsigned syn_retransmission_count;
	unsigned better_route_event_count;
	unsigned connection_reuse_count;
	unsigned app_reporting_data_stall_count;
	unsigned app_data_stall_timer_msecs;
	int interface_type;
	int connected_interface_type;
	int multipath_service_type;
	unsigned dns_answers_cached : 1;
	unsigned connected : 1;
	unsigned cellular_fallback : 1;
	unsigned cellular_rrc_connected : 1;
	unsigned kernel_reported_stalls : 1;
	unsigned kernel_reporting_connection_stalled : 1;
	unsigned kernel_reporting_read_stalled : 1;
	unsigned kernel_reporting_write_stalled : 1;
	unsigned tcp_fast_open : 1;
	unsigned first_party : 1;
	unsigned tls13_configured : 1;
	unsigned __pad_bits : 5;
	unsigned char __pad[6];
} netcore_stats_tcp_statistics_report;

typedef struct netcore_stats_network_event {
	int network_event_type;
	unsigned time_to_network_event_msecs;
} netcore_stats_network_event;

typedef struct netcore_stats_data_usage_snapshot {
	unsigned long long bytes_in;
	unsigned long long bytes_out;
	unsigned long long multipath_bytes_in_cell;
	unsigned long long multipath_bytes_out_cell;
	unsigned long long multipath_bytes_in_wifi;
	unsigned long long multipath_bytes_out_wifi;
	unsigned long long multipath_bytes_in_initial;
	unsigned long long multipath_bytes_out_initial;
} netcore_stats_data_usage_snapshot;

typedef struct nw_connection_report_s {
	unsigned long long bytes_in;
	unsigned long long bytes_out;
	unsigned long long bytes_duplicate;
	unsigned long long bytes_ooo;
	unsigned long long bytes_retransmitted;
	unsigned long long packets_in;
	unsigned long long packets_out;
	unsigned long long multipath_bytes_in_cell;
	unsigned long long multipath_bytes_out_cell;
	unsigned long long multipath_bytes_in_wifi;
	unsigned long long multipath_bytes_out_wifi;
	unsigned long long multipath_bytes_in_initial;
	unsigned long long multipath_bytes_out_initial;
	unsigned current_rtt_msecs;
	unsigned smoothed_rtt_msecs;
	unsigned best_rtt_msecs;
	unsigned rtt_variance;
	unsigned syn_retransmission_count;
	unsigned used_proxy_type;
	unsigned traffic_class;
	unsigned path_trigger_milliseconds;
	unsigned resolution_milliseconds;
	unsigned proxy_milliseconds;
	unsigned flow_connect_milliseconds;
	unsigned tls_milliseconds;
	unsigned flow_duration_milliseconds;
	unsigned ipv4_address_count;
	unsigned ipv6_address_count;
	unsigned connected_address_index;
	unsigned connection_reuse_count;
	unsigned data_stall_count;
	unsigned ipv4_dns_server_count;
	unsigned ipv6_dns_server_count;
	unsigned seconds_since_interface_change;
	int failure_reason;
	int connected_interface_type;
	int multipath_service_type;
	int connection_mode;
	int apple_host;
	int apple_app;
	int tls_version;
	int stack_level;
	unsigned char first_address_family;
	unsigned char connected_address_family;
	unsigned char connection_uuid[16];
	unsigned char activities[10][16];
	unsigned triggered_path : 1;
	unsigned system_proxy_configured : 1;
	unsigned custom_proxy_configured : 1;
	unsigned fallback_eligible : 1;
	unsigned weak_fallback : 1;
	unsigned used_fallback : 1;
	unsigned resolution_required : 1;
	unsigned tls_configured : 1;
	unsigned tls13_configured : 1;
	unsigned tfo_configured : 1;
	unsigned multipath_configured : 1;
	unsigned connected : 1;
	unsigned tls_succeeded : 1;
	unsigned synthesized_ipv6_address : 1;
	unsigned synthesized_extra_ipv6_address : 1;
	unsigned ipv4_available : 1;
	unsigned ipv6_available : 1;
	unsigned used_tfo : 1;
	unsigned tls_version_timeout : 1;
	unsigned first_party : 1;
	unsigned is_daemon : 1;
	unsigned tls_handshake_timed_out : 1;
	unsigned __pad_bits : 2;
	unsigned char __pad[7];
} nw_connection_report_s;

typedef struct netcore_stats_tcp_cell_fallback_report {
	netcore_stats_network_event network_events[20];
	netcore_stats_data_usage_snapshot data_usage_snapshots_at_network_events[20];
	int deny_reason;
	unsigned network_event_count;
	unsigned data_usage_snapshots_at_network_events_count;
	unsigned fallback_timer_msecs;
	BOOL fellback;
	unsigned char __pad[7];
} netcore_stats_tcp_cell_fallback_report;

typedef struct {
	netcore_stats_tcp_statistics_report statistics_report;
	netcore_stats_tcp_cell_fallback_report fallback_report;
	netcore_stats_tcp_statistics_report connection_attempts[8];
	int report_reason;
	unsigned ip_address_attempt_count;
} SCD_Struct_NW15;

typedef struct netcore_stats_tcp_report {
	/*function pointer*/void* u;
	SCD_Struct_NW15 legacy;
	nw_connection_report_s) nw_connection_report;
	BOOL delegated;
	BOOL legacy;
	unsigned char __pad[6];
} netcore_stats_tcp_report;

typedef struct {
	unsigned delegateIndex : 1;
	unsigned generation : 1;
	unsigned index : 1;
	unsigned mtu : 1;
	unsigned subtype : 1;
	unsigned type : 1;
	unsigned expensive : 1;
} SCD_Struct_NW17;

