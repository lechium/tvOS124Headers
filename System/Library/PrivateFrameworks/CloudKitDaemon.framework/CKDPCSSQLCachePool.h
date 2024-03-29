/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKDPCSSQLCachePool : NSObject {

	NSMutableDictionary* _cachesByPath;
	NSMutableDictionary* _checkoutsByPath;

}

@property (nonatomic,retain) NSMutableDictionary * cachesByPath;                 //@synthesize cachesByPath=_cachesByPath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * checkoutsByPath;              //@synthesize checkoutsByPath=_checkoutsByPath - In the implementation block
+(id)sharedPool;
-(id)cacheForContext:(id)arg1 ;
-(void)releaseCache:(id)arg1 forContext:(id)arg2 ;
-(NSMutableDictionary *)cachesByPath;
-(NSMutableDictionary *)checkoutsByPath;
-(void)setCachesByPath:(NSMutableDictionary *)arg1 ;
-(void)setCheckoutsByPath:(NSMutableDictionary *)arg1 ;
-(id)_init;
@end

