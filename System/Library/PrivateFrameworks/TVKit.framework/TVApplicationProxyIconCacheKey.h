/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVApplicationProxyIconCacheKey : NSObject <NSCopying> {

	NSString* _applicationIdentifier;
	NSString* _lifetimeCacheKeyString;
	NSString* _applicationIconName;

}

@property (nonatomic,copy) NSString * lifetimeCacheKeyString;                      //@synthesize lifetimeCacheKeyString=_lifetimeCacheKeyString - In the implementation block
@property (nonatomic,copy) NSString * applicationIconName;                         //@synthesize applicationIconName=_applicationIconName - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * filesystemSafeKeyName; 
+(id)iconCacheKeyForProxy:(id)arg1 ;
-(NSString *)filesystemSafeKeyName;
-(NSString *)lifetimeCacheKeyString;
-(NSString *)applicationIconName;
-(void)setLifetimeCacheKeyString:(NSString *)arg1 ;
-(void)setApplicationIconName:(NSString *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(NSString *)applicationIdentifier;
@end
