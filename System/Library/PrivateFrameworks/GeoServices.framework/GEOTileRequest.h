/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOTileKeyList, GEOResourceManifestConfiguration, NSLocale, GEOTileKeyMap, NSString, GEOApplicationAuditToken;

@interface GEOTileRequest : NSObject {

	GEOTileKeyList* _keyList;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	GEOTileKeyMap* _cachedEtags;
	GEOTileKeyMap* _cachedData;
	GEOTileKeyMap* _priorities;
	GEOTileKeyMap* _signpostIDs;
	GEOTileKeyMap* _additionalInfos;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	GEOApplicationAuditToken* _auditToken;
	BOOL _requireWiFi;
	BOOL _requirePowerPluggedIn;
	NSString* _backgroundSessionIdentifier;
	BOOL _shouldParticipateInBalancer;
	unsigned char _loadReason;

}

@property (nonatomic,readonly) GEOTileKeyList * keyList;                                              //@synthesize keyList=_keyList - In the implementation block
@property (nonatomic,readonly) GEOResourceManifestConfiguration * manifestConfiguration;              //@synthesize manifestConfiguration=_manifestConfiguration - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * cachedEtags;                                           //@synthesize cachedEtags=_cachedEtags - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * cachedData;                                            //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * priorities;                                            //@synthesize priorities=_priorities - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * signpostIDs;                                           //@synthesize signpostIDs=_signpostIDs - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * additionalInfos;                                       //@synthesize additionalInfos=_additionalInfos - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion;                                              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;                                 //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) unsigned char loadReason;                                              //@synthesize loadReason=_loadReason - In the implementation block
@property (nonatomic,readonly) BOOL requireWiFi;                                                      //@synthesize requireWiFi=_requireWiFi - In the implementation block
@property (nonatomic,readonly) BOOL requirePowerPluggedIn;                                            //@synthesize requirePowerPluggedIn=_requirePowerPluggedIn - In the implementation block
@property (nonatomic,readonly) NSString * backgroundSessionIdentifier;                                //@synthesize backgroundSessionIdentifier=_backgroundSessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldParticipateInBalancer;                                      //@synthesize shouldParticipateInBalancer=_shouldParticipateInBalancer - In the implementation block
-(GEOTileKeyMap *)signpostIDs;
-(GEOTileKeyList *)keyList;
-(GEOTileKeyMap *)priorities;
-(GEOTileKeyMap *)cachedData;
-(GEOTileKeyMap *)cachedEtags;
-(unsigned char)loadReason;
-(BOOL)requireWiFi;
-(BOOL)requirePowerPluggedIn;
-(NSString *)backgroundSessionIdentifier;
-(BOOL)shouldParticipateInBalancer;
-(GEOResourceManifestConfiguration *)manifestConfiguration;
-(NSString *)bundleVersion;
-(id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6 signpostIDs:(id)arg7 additionalInfos:(id)arg8 bundleIdentifier:(id)arg9 bundleVersion:(id)arg10 auditToken:(id)arg11 requireWiFi:(BOOL)arg12 requirePowerPluggedIn:(BOOL)arg13 backgroundSessionIdentifier:(id)arg14 shouldParticipateInBalancer:(BOOL)arg15 reason:(unsigned char)arg16 ;
-(id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 ;
-(GEOTileKeyMap *)additionalInfos;
-(id)init;
-(NSString *)bundleIdentifier;
-(id)description;
-(NSLocale *)locale;
-(GEOApplicationAuditToken *)auditToken;
@end

