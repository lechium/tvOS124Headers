/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned changeInUsage : 1;
	unsigned daysSinceCreationDate : 1;
	unsigned noCreationDate : 1;
} SCD_Struct_RM1;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_RM5;

typedef struct {
	unsigned daysBeforeDisable : 1;
	unsigned timestamp : 1;
} SCD_Struct_RM6;

typedef struct {
	unsigned timestamp : 1;
	unsigned hasPasscode : 1;
	unsigned isManaged : 1;
	unsigned isManaging : 1;
} SCD_Struct_RM7;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_RM8;

typedef struct {
	unsigned alwaysAllowedAppsCount : 1;
	unsigned daysWithScreenTimeEnabled : 1;
	unsigned numberOfLimits : 1;
	unsigned timestamp : 1;
	unsigned contentPrivacyRestrictionsEnabled : 1;
	unsigned customDowntimeEnabled : 1;
	unsigned downtimeEnabled : 1;
	unsigned hasPasscode : 1;
	unsigned isManaged : 1;
	unsigned isManaging : 1;
	unsigned screenTimeEnabled : 1;
} SCD_Struct_RM9;

typedef struct {
	unsigned daysSinceLastView : 1;
	unsigned timestamp : 1;
	unsigned hasPasscode : 1;
	unsigned isManaged : 1;
	unsigned remoteUser : 1;
} SCD_Struct_RM10;

