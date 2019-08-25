/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __CFString* CFStringRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	long long field4;
	long long field5;
	long long field6;
	long long field7;
	long long field8;
	long long field9;
} SCD_Struct_GK5;

typedef struct {
	unsigned _platform : 8;
	unsigned _prerendered : 1;
	unsigned _supportsLeaderboards : 1;
	unsigned _supportsLeaderboardSets : 1;
	unsigned _hasAggregateLeaderboard : 1;
	unsigned _supportsAchievements : 1;
	unsigned _supportsMultiplayer : 1;
	unsigned _valid : 1;
	unsigned _unused : 1;
	unsigned _supportsTurnBasedMultiplayer : 1;
	unsigned _reserved : 13;
} SCD_Struct_GK6;

typedef union {
	SCD_Struct_GK6 field1;
	unsigned _value;
} SCD_Union_GK7;

typedef struct {
	unsigned _unused : 8;
	unsigned _purpleBuddyAccount : 1;
	unsigned _underage : 1;
	unsigned _photoPending : 1;
	unsigned _findable : 1;
	unsigned _reserved : 18;
} SCD_Struct_GK8;

typedef union {
	SCD_Struct_GK8 field1;
	unsigned _value;
} SCD_Union_GK9;

typedef struct {
	unsigned _maximumPoints : 16;
	unsigned _hidden : 1;
	unsigned _replayable : 1;
	unsigned _reserved : 14;
} SCD_Struct_GK10;

typedef union {
	SCD_Struct_GK10 field1;
	unsigned _value;
} SCD_Union_GK11;

