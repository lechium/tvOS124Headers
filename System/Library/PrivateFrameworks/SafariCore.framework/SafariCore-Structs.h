/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned result : 1;
	unsigned timestamp : 1;
} SCD_Struct_WB1;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_WB4;

typedef struct {
	unsigned configurationID : 1;
	unsigned errorCode : 1;
	unsigned pageID : 1;
	unsigned pageLoadTime : 1;
	unsigned timestamp : 1;
} SCD_Struct_WB5;

typedef struct {
	unsigned configurationID : 1;
	unsigned pageID : 1;
	unsigned timestamp : 1;
} SCD_Struct_WB6;

typedef struct malloc_statistics_t {
	unsigned blocks_in_use;
	unsigned long long size_in_use;
	unsigned long long max_size_in_use;
	unsigned long long size_allocated;
} malloc_statistics_t;

typedef struct task_vm_info {
	unsigned long long virtual_size;
	int region_count;
	int page_size;
	unsigned long long resident_size;
	unsigned long long resident_size_peak;
	unsigned long long device;
	unsigned long long device_peak;
	unsigned long long internal;
	unsigned long long internal_peak;
	unsigned long long external;
	unsigned long long external_peak;
	unsigned long long reusable;
	unsigned long long reusable_peak;
	unsigned long long purgeable_volatile_pmap;
	unsigned long long purgeable_volatile_resident;
	unsigned long long purgeable_volatile_virtual;
	unsigned long long compressed;
	unsigned long long compressed_peak;
	unsigned long long compressed_lifetime;
	unsigned long long phys_footprint;
	unsigned long long min_address;
	unsigned long long max_address;
} task_vm_info;

typedef struct {
	unsigned itemsPerRow : 1;
	unsigned row : 1;
	unsigned sectionIndex : 1;
	unsigned timestamp : 1;
	unsigned displayContext : 1;
	unsigned section : 1;
	unsigned type : 1;
} SCD_Struct_WB9;

typedef struct {
	unsigned duration : 1;
	unsigned timestamp : 1;
	unsigned migratorType : 1;
	unsigned result : 1;
} SCD_Struct_WB10;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_WB11;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

