/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface VECSchedulingRequest : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	int _requestID;
	NSObject*<OS_dispatch_group> _doneOrCancelGroup;
	/*^block*/id _taskHandler;
	BOOL _queued;
	BOOL _cancelled;
	/*^block*/id _dellocHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> doneOrCancelGroup;              //@synthesize doneOrCancelGroup=_doneOrCancelGroup - In the implementation block
@property (nonatomic,readonly) id taskHandler;                                              //@synthesize taskHandler=_taskHandler - In the implementation block
@property (nonatomic,readonly) id dellocHandler;                                            //@synthesize dellocHandler=_dellocHandler - In the implementation block
@property (nonatomic,readonly) int requestID;                                               //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
-(int)requestID;
-(NSObject*<OS_dispatch_group>)doneOrCancelGroup;
-(id)initWithDoneOrCancelGroup:(id)arg1 taskHandler:(/*^block*/id)arg2 dellocHandler:(/*^block*/id)arg3 ;
-(void)markAsQueued;
-(void)markAsCompletedOrCancelled:(BOOL)arg1 ;
-(id)taskHandler;
-(id)dellocHandler;
-(void)dealloc;
-(id)description;
-(BOOL)isCancelled;
@end

