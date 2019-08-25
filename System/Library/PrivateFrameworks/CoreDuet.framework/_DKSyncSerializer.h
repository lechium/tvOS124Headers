/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSOperation;

@interface _DKSyncSerializer : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _underlyingQueue;
	NSOperation* _previousOperation;

}

@property (readonly) NSOperationQueue * operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> underlyingQueue;              //@synthesize underlyingQueue=_underlyingQueue - In the implementation block
@property (__weak) NSOperation * previousOperation;                             //@synthesize previousOperation=_previousOperation - In the implementation block
+(void)performAfter:(double)arg1 block:(/*^block*/id)arg2 ;
+(void)performAsyncBlock:(/*^block*/id)arg1 ;
+(void)performSyncBlock:(/*^block*/id)arg1 ;
+(void)addDependentOperation:(id)arg1 ;
+(void)addDependentOperationWithBlock:(/*^block*/id)arg1 ;
+(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
+(id)sharedInstance;
+(id)operationQueue;
+(void)addOperationWithBlock:(/*^block*/id)arg1 ;
+(id)underlyingQueue;
+(void)addOperation:(id)arg1 ;
-(void)performAfter:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)performAsyncBlock:(/*^block*/id)arg1 ;
-(void)performSyncBlock:(/*^block*/id)arg1 ;
-(void)addDependentOperation:(id)arg1 ;
-(void)addDependentOperationWithBlock:(/*^block*/id)arg1 ;
-(NSOperation *)previousOperation;
-(void)setPreviousOperation:(NSOperation *)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSOperationQueue *)operationQueue;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)addOperation:(id)arg1 ;
@end

