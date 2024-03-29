/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSNumber;

@interface CUTDeferredTaskQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _originalBlock;
	NSMutableArray* _pendingDispatchBlocks;
	NSNumber* _capacity;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id originalBlock;                                    //@synthesize originalBlock=_originalBlock - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingDispatchBlocks;              //@synthesize pendingDispatchBlocks=_pendingDispatchBlocks - In the implementation block
@property (nonatomic,readonly) NSNumber * capacity;                                 //@synthesize capacity=_capacity - In the implementation block
-(id)initWithNumberCapacity:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSMutableArray *)pendingDispatchBlocks;
-(id)originalBlock;
-(id)initWithCapacity:(long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)enqueueExecutionWithTarget:(id)arg1 afterDelay:(double)arg2 ;
-(void)cancelPendingExecutions;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSNumber *)capacity;
@end

