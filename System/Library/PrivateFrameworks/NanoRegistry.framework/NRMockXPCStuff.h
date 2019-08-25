/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface NRMockXPCStuff : NSObject {

	NSMutableDictionary* _mockListeners;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableDictionary * mockListeners;              //@synthesize mockListeners=_mockListeners - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)mockListeners;
-(void)setMockListeners:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end
