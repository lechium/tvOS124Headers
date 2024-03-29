/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __CFSocket* CFSocketRef;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

typedef struct __CFSet* CFSetRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFURLStorageSession* CFURLStorageSessionRef;

typedef struct _CFURLCache* CFURLCacheRef;

typedef struct {
	unsigned storeAccountID : 1;
	unsigned systemReleaseType : 1;
	unsigned privateListeningEnabled : 1;
	unsigned sBEnabled : 1;
} SCD_Struct_SS6;

typedef const struct _CFCachedURLResponse* CFCachedURLResponseRef;

typedef struct CGImage* CGImageRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CFBundle* CFBundleRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct FPSAPContextOpaque_* FPSAPContextOpaque_Ref;

typedef struct FairPlayHWInfo_ {
	unsigned IDLength;
	unsigned char ID[20];
} FairPlayHWInfo_;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct SecCmsMessageStr* SecCmsMessageStrRef;

typedef struct SecCmsSignedDataStr* SecCmsSignedDataStrRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct dispatch_source_type_s* dispatch_source_type_sRef;

typedef struct {
	unsigned cloudPlaylistID : 1;
	unsigned containerAdamID : 1;
	unsigned equivalencySourceAdamID : 1;
	unsigned eventDateTimestamp : 1;
	unsigned eventSecondsFromGMT : 1;
	unsigned itemCloudID : 1;
	unsigned itemDuration : 1;
	unsigned itemEndTime : 1;
	unsigned itemStartTime : 1;
	unsigned persistentID : 1;
	unsigned purchasedAdamID : 1;
	unsigned radioAdamID : 1;
	unsigned stationID : 1;
	unsigned storeAccountID : 1;
	unsigned subscriptionAdamID : 1;
	unsigned tvShowPurchasedAdamID : 1;
	unsigned tvShowSubscriptionAdamID : 1;
	unsigned containerType : 1;
	unsigned endReasonType : 1;
	unsigned eventType : 1;
	unsigned itemType : 1;
	unsigned mediaType : 1;
	unsigned reasonHintType : 1;
	unsigned sourceType : 1;
	unsigned systemReleaseType : 1;
	unsigned internalBuild : 1;
	unsigned offline : 1;
	unsigned privateListeningEnabled : 1;
	unsigned sBEnabled : 1;
	unsigned siriInitiated : 1;
} SCD_Struct_SS23;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

