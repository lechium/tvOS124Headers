/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface ATAssetLinkPowerLogger : NSObject {

	NSMutableDictionary* _aggregation;
	NSObject*<OS_dispatch_queue> _loggerQueue;
	NSObject*<OS_dispatch_source> _flushTimer;

}

@property (retain) NSMutableDictionary * aggregation;                     //@synthesize aggregation=_aggregation - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> loggerQueue;              //@synthesize loggerQueue=_loggerQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> flushTimer;              //@synthesize flushTimer=_flushTimer - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)loggerQueue;
-(NSMutableDictionary *)aggregation;
-(void)setAggregation:(NSMutableDictionary *)arg1 ;
-(void)setLoggerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFlushTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)logAssetLinkOfType:(long long)arg1 didBeginDownloadingAsset:(id)arg2 ;
-(void)logAssetLinkOfType:(long long)arg1 didFinishAsset:(id)arg2 withError:(id)arg3 ;
-(NSObject*<OS_dispatch_source>)flushTimer;
-(id)init;
@end

