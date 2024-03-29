/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMapTable, NSMutableArray;

@interface VECSchedulingManager : NSObject {

	unsigned long long _batchSize;
	int _suspendCount;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_group> _suspendGroup;
	NSMapTable* _lookupTable;
	NSObject*<OS_dispatch_queue> _queue[3];
	NSMutableArray* _taskLIFO[3];
	long long _runingTaskCount[3];
	BOOL _isFIFO;

}
+(id)concurrentScheduler;
+(id)serialScheduler;
+(id)concurrentSchedulerWithBatchSize:(unsigned long long)arg1 ;
+(id)sharedSerialScheduler;
+(id)sharedConcurrentScheduler;
-(void)_processNextBatch;
-(void)registerRequest:(id)arg1 ;
-(unsigned long long)_priorityIndexWithPriority:(unsigned long long)arg1 ;
-(void)deregisterRequest:(int)arg1 ;
-(int)postSchedulingRequest:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(void)setIsFIFO:(BOOL)arg1 ;
-(int)processTaskWithPriority:(unsigned long long)arg1 taskHandler:(/*^block*/id)arg2 ;
-(void)cancelSchedulingRequestWithID:(int)arg1 ;
-(void)cancelAllSchedulingRequests;
-(id)init;
-(id)description;
-(void)resume;
-(void)suspend;
@end

