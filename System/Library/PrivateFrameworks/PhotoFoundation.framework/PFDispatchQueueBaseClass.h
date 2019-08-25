/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFDispatchQueue.h>
#import <libobjc.A.dylib/PFDispatchQueueMethods.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface PFDispatchQueueBaseClass : PFDispatchQueue <PFDispatchQueueMethods> {

	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(unsigned)qualityOfService;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(BOOL)assertOnQueue;
-(BOOL)assertNotOnQueue;
-(void)dispatchAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)setTargetQueue:(id)arg1 ;
-(void)dispatchBarrierSync:(/*^block*/id)arg1 ;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1 ;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2 ;
-(id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)extensionMatching:(/*^block*/id)arg1 ;
-(void)setSpecific:(void*)arg1 forKey:(void*)arg2 ;
-(void*)getSpecific:(void*)arg1 ;
-(id)_dispatchQueueForSetTargetQueue;
-(BOOL)assertQueueBarrier;
-(void)dispatchAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)dispatchCancellable:(/*^block*/id)arg1 ;
-(id)dispatchCancellableAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)dispatchCancellableGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(id)_extensionsForTargetingQueue;
-(id)_extensionManager;
-(id)description;
-(const char*)label;
-(void)resume;
-(id)initWithQueue:(id)arg1 ;
-(void)suspend;
@end
