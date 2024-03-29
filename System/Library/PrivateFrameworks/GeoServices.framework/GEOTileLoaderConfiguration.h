/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOResourceManifestConfiguration, NSLocale;

@interface GEOTileLoaderConfiguration : NSObject <NSCopying> {

	Class _serverProxyClass;
	BOOL _trackUsage;
	unsigned long long _memoryCacheCountLimit;
	unsigned long long _memoryCacheCostLimit;
	NSString* _diskCacheLocation;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;

}

@property (assign,nonatomic) Class serverProxyClass;                                                //@synthesize serverProxyClass=_serverProxyClass - In the implementation block
@property (assign,nonatomic) BOOL trackUsage;                                                       //@synthesize trackUsage=_trackUsage - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCacheCountLimit;                              //@synthesize memoryCacheCountLimit=_memoryCacheCountLimit - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCacheCostLimit;                               //@synthesize memoryCacheCostLimit=_memoryCacheCostLimit - In the implementation block
@property (nonatomic,copy) NSString * diskCacheLocation;                                            //@synthesize diskCacheLocation=_diskCacheLocation - In the implementation block
@property (nonatomic,retain) GEOResourceManifestConfiguration * manifestConfiguration;              //@synthesize manifestConfiguration=_manifestConfiguration - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                                     //@synthesize locale=_locale - In the implementation block
-(Class)serverProxyClass;
-(void)setServerProxyClass:(Class)arg1 ;
-(BOOL)trackUsage;
-(void)setTrackUsage:(BOOL)arg1 ;
-(unsigned long long)memoryCacheCountLimit;
-(void)setMemoryCacheCountLimit:(unsigned long long)arg1 ;
-(unsigned long long)memoryCacheCostLimit;
-(void)setMemoryCacheCostLimit:(unsigned long long)arg1 ;
-(NSString *)diskCacheLocation;
-(void)setDiskCacheLocation:(NSString *)arg1 ;
-(GEOResourceManifestConfiguration *)manifestConfiguration;
-(void)setManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
@end

