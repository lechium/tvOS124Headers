/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned field1 : 4;
	unsigned field2 : 4;
	unsigned char field3;
	unsigned char field4[0];
} SCD_Struct_Lo0;

typedef struct {
	unsigned field1;
	BOOL field2;
} SCD_Struct_OS1;

typedef struct mach_timebase_info {
	unsigned numer;
	unsigned denom;
} mach_timebase_info;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct timezone {
	int tz_minuteswest;
	int tz_dsttime;
} timezone;

typedef struct {
	unsigned long long creator_aid;
	unsigned long long unique_pid;
} SCD_Struct_OS5;

typedef struct {
	unsigned long long transition_id;
} SCD_Struct_OS6;

typedef struct {
	char* action;
	BOOL persisted;
} SCD_Struct_OS7;

typedef struct {
	unsigned char boot_uuid[16];
	unsigned long long flags;
	unsigned long long continuous_time;
	unsigned long long wallclock_nsec;
	unsigned char ttl;
} SCD_Struct_OS8;

typedef struct {
	unsigned long long message_size;
	unsigned char ttl;
} SCD_Struct_OS9;

typedef struct {
	unsigned long long stamp;
	timeval tv_gmt;
	timezone tz;
} SCD_Struct_OS10;

typedef struct {
	SCD_Struct_OS10 start;
	SCD_Struct_OS10 end;
	unsigned count;
} SCD_Struct_OS11;

typedef struct {
	char* buffer;
	unsigned long long buffer_sz;
	os_log_fmt_hdr_s hdr;
	void pubdata;
	unsigned short pubdata_sz;
	char* privdata;
	unsigned long long privdata_sz;
	char* subsystem;
	char* category;
	unsigned oversize_id;
	unsigned char ttl;
	BOOL persisted;
	unsigned char signpost_scope;
	unsigned char signpost_type;
	unsigned long long signpost_id;
	unsigned signpost_name_offset;
	char* signpost_name;
	BOOL has_context_data;
} SCD_Struct_OS12;

typedef struct {
	unsigned long long trace_id;
	unsigned long long timestamp;
	unsigned long long thread;
	mach_timebase_info timebase;
	char* dsc_uuid;
	char* image_uuid;
	char* image_path;
	timeval tv_gmt;
	timezone tz;
	unsigned offset;
	unsigned opaque_flags;
	char* message;
	unsigned long long sz;
} SCD_Struct_OS13;

typedef struct {
	unsigned long long type;
	int pid;
	unsigned long long proc_id;
	unsigned pidversion;
	char* proc_imageuuid;
	char* proc_imagepath;
	unsigned long long activity_id;
	unsigned long long parent_id;
	SCD_Struct_OS13 common;
	/*function pointer*/void* ;
	SCD_Struct_OS5 activity_create;
	SCD_Struct_OS6 activity_transition;
	SCD_Struct_OS12 log_message;
	SCD_Struct_OS7 useraction;
	SCD_Struct_OS8 timesync;
	SCD_Struct_OS11) loss;
	SCD_Struct_OS9 statedump;
} SCD_Struct_OS14;

typedef struct os_activity_map_s* os_activity_map_sRef;

typedef struct {
	unsigned char field1[16];
	unsigned char field2;
	BOOL field3;
} SCD_Struct_OS16;

typedef struct {
	unsigned char field1[16];
	o field2;
	short field3;
	_ field4;
	t field5;
	int field6;
	m field7;
	e field8;
	short field9;
	y field10;
	n field11;
	char field12;
	_ field13;
	t field14;
	int field15;
	m field16;
	e field17;
	_ field18;
	e field19;
	n field20;
	t field21;
	const  field22;
	y field23;
	_ field24;
	short field25;
} SCD_Struct_OS17;

typedef struct {
	t field1;
	const  field2;
	a field3;
	char field4;
	e field5;
	void field6;
	3 field7;
	_ field8;
	char field9;
	h field10;
	u field11;
	n field12;
	k field13;
	_ field14;
	short field15;
	char field16;
	a field17;
	t field18;
	a field19;
	long field20;
	o field21;
	g field22;
	_ field23;
	short field24;
	_ field25;
	O field26;
	unsigned short field27;
	unsigned long field28;
	o field29;
	g field30;
	E field31;
	void field32;
	e field33;
	n field34;
	t field35;
	unsigned char field36;
	h field37;
	u field38;
	n field39;
	k field40;
	unsigned char field41;
	o field42;
	n field43;
	t field44;
	e field45;
	x field46;
	t field47;
	_ field48;
	float field49;
	int field50;
	const  field51;
	e field52;
	h field53;
	o field54;
	short field55;
	e field56;
	_ field57;
	u field58;
	n field59;
	a field60;
	long field61;
	int field62;
	g field63;
	n field64;
	e field65;
	double field66;
	_ field67;
	t field68;
	const  field69;
	a field70;
	char field71;
	e field72;
	p field73;
	o field74;
	int field75;
	n field76;
	t field77;
	_ field78;
	short field79;
} SCD_Struct_OS18;

typedef struct {
	unsigned field1;
	unsigned long long( field2;
	/*function pointer*/void* field3;
	= field4;
	SCD_Struct_OS1 field5;
	8 field6;
	SCD_Struct_OS1 field7;
	7 field8;
	SCD_Struct_OS1 field9;
	6) field10;
} SCD_Struct_OS19;

typedef struct _os_timesync_db_s* os_timesync_db_sRef;

typedef struct os_activity_stream_s* os_activity_stream_sRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	_ field1;
	o field2;
	short field3;
	_ field4;
	long field5;
	o field6;
	g field7;
	_ field8;
	int field9;
	n field10;
	double field11;
	e field12;
	x field13;
	_ field14;
	t field15;
	int field16;
	m field17;
	e field18;
	const  field19;
	e field20;
	float field21;
	unsigned char field22;
} SCD_Struct_OS23;

typedef struct {
	_os_log_index_timeref field1;
	_ field2;
	o field3;
	short field4;
	_ field5;
	long field6;
	o field7;
	g field8;
	_ field9;
	int field10;
	n field11;
	double field12;
	e field13;
	x field14;
	_ field15;
	t field16;
	int field17;
	m field18;
	e field19;
	const  field20;
	e field21;
	float field22;
	_ field23;
	o field24;
	short field25;
	_ field26;
	long field27;
	o field28;
	g field29;
	_ field30;
	int field31;
	n field32;
	double field33;
	e field34;
	x field35;
	_ field36;
	t field37;
	int field38;
	m field39;
	e field40;
	const  field41;
	e field42;
	float field43;
	_ field44;
	o field45;
	short field46;
	_ field47;
	long field48;
	o field49;
	g field50;
	_ field51;
	int field52;
	n field53;
	double field54;
	e field55;
	x field56;
	_ field57;
	t field58;
	int field59;
	m field60;
	e field61;
	const  field62;
	e field63;
	float field64;
	_ field65;
	o field66;
	short field67;
	_ field68;
	long field69;
	o field70;
	g field71;
	_ field72;
	int field73;
	n field74;
	double field75;
	e field76;
	x field77;
	_ field78;
	t field79;
	int field80;
	m field81;
	e field82;
	const  field83;
	e field84;
	float field85;
	_ field86;
	o field87;
	short field88;
	_ field89;
	long field90;
	o field91;
	g field92;
	_ field93;
	int field94;
	n field95;
	double field96;
	e field97;
	x field98;
	_ field99;
	t field100;
	int field101;
	m field102;
	e field103;
	const  field104;
	e field105;
	float field106;
	_ field107;
	o field108;
	short field109;
	_ field110;
	long field111;
	o field112;
	g field113;
	_ field114;
	int field115;
	n field116;
	double field117;
	e field118;
	x field119;
	_ field120;
	t field121;
	int field122;
	m field123;
	e field124;
	const  field125;
	e field126;
	float field127;
	SCD_Struct_OS23 field128[5];
} SCD_Struct_OS24;

typedef struct os_log_index_timeref {
	unsigned char uuid[16];
	unsigned long long continuous;
} os_log_index_timeref;

typedef struct {
	os_log_index_timeref timeref;
	unsigned char ttl;
} SCD_Struct_OS26;

typedef struct {
	os_log_index_timeref olim_oldestpersist;
	os_log_index_timeref olim_oldestspecial;
	os_log_index_timeref olim_oldestsignpost;
	os_log_index_timeref olim_oldesthighvol;
	os_log_index_timeref olim_oldestlive;
	os_log_index_timeref olim_end;
	_os_log_index_timeref olim_oldest;
	SCD_Struct_OS26 olim_ttl[5];
} SCD_Struct_OS27;

typedef struct os_trace_blob_s {
	/*function pointer*/void* ;
	char* ob_b;
	void ob_v;
	char* ob_s;
	*) ob_c;
	unsigned ob_len;
	unsigned ob_size;
	unsigned ob_maxsize;
	unsigned short ob_flags;
	BOOL ob_binary;
} os_trace_blob_s;

