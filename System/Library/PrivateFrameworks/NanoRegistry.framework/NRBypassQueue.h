/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NanoRegistry/NanoRegistry-Structs.h>
@class NSObject;

@interface NRBypassQueue : NSObject {

	NSObject*<OS_dispatch_queue> _suspendableQueue;
	NSObject*<OS_dispatch_queue> _bypassQueue;
	BOOL _suspended;
	os_unfair_lock_s _lock;

}
-(void)enqueueBlockAsync:(/*^block*/id)arg1 ;
-(void)enqueueBypassBlock:(/*^block*/id)arg1 ;
-(void)enqueueBypassBlockAsync:(/*^block*/id)arg1 ;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)assertOnQueue;
-(id)init;
-(void)invalidate;
-(void)resume;
-(void)suspend;
@end
