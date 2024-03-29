/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTNextPredictedLocationsOfInterestCacheDelegate, OS_dispatch_queue;
@class NSObject, NSArray, RTDataProtectionManager, RTStarkManager;

@interface RTNextPredictedLocationsOfInterestCache : NSObject {

	BOOL _enabled;
	id<RTNextPredictedLocationsOfInterestCacheDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _nextPredictedLocationsOfInterest;
	RTDataProtectionManager* _dataProtectionManager;
	RTStarkManager* _starkManager;

}

@property (assign,nonatomic) BOOL enabled;                                                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSArray * nextPredictedLocationsOfInterest;                                       //@synthesize nextPredictedLocationsOfInterest=_nextPredictedLocationsOfInterest - In the implementation block
@property (nonatomic,retain) RTDataProtectionManager * dataProtectionManager;                                  //@synthesize dataProtectionManager=_dataProtectionManager - In the implementation block
@property (nonatomic,retain) RTStarkManager * starkManager;                                                    //@synthesize starkManager=_starkManager - In the implementation block
@property (assign,nonatomic,__weak) id<RTNextPredictedLocationsOfInterestCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)cachePath;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)nextPredictedLocationsOfInterest;
-(id)initWithQueue:(id)arg1 dataProtectionManager:(id)arg2 starkManager:(id)arg3 ;
-(RTDataProtectionManager *)dataProtectionManager;
-(void)setDataProtectionManager:(RTDataProtectionManager *)arg1 ;
-(void)setNextPredictedLocationsOfInterest:(NSArray *)arg1 ;
-(id)getCachedNextPredictedLocationsOfInterest;
-(void)onDataProtectionNotification:(id)arg1 ;
-(void)cacheNextPredictedLocationsOfInterest:(id)arg1 ;
-(void)handleUnlockedSinceBoot:(BOOL)arg1 ;
-(void)onStarkNotification:(id)arg1 ;
-(void)handleStarkTrustedConnectionEstablished:(BOOL)arg1 ;
-(RTStarkManager *)starkManager;
-(void)setStarkManager:(RTStarkManager *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<RTNextPredictedLocationsOfInterestCacheDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id<RTNextPredictedLocationsOfInterestCacheDelegate>)delegate;
-(void)clear;
-(BOOL)enabled;
-(void)purge;
-(NSObject*<OS_dispatch_queue>)queue;
@end

