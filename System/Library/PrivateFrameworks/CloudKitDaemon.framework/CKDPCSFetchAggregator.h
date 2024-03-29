/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class CKDClientContext, NSObject, NSOperationQueue, NSMutableArray;

@interface CKDPCSFetchAggregator : NSObject {

	CKDClientContext* _context;
	NSObject*<OS_dispatch_queue> _opQueue;
	NSOperationQueue* _queue;
	NSMutableArray* _queuedFetches;
	NSMutableArray* _runningFetches;
	NSObject*<OS_dispatch_source> _fetchSource;
	NSObject*<OS_dispatch_source> _timerSource;

}

@property (assign,nonatomic,__weak) CKDClientContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> opQueue;                   //@synthesize opQueue=_opQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedFetches;                         //@synthesize queuedFetches=_queuedFetches - In the implementation block
@property (nonatomic,retain) NSMutableArray * runningFetches;                        //@synthesize runningFetches=_runningFetches - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> fetchSource;              //@synthesize fetchSource=_fetchSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;              //@synthesize timerSource=_timerSource - In the implementation block
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(BOOL)fetchRequestForExistingOperation:(id)arg1 isDependentOnOperation:(id)arg2 ;
-(void)requestFetchOfZoneWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)opQueue;
-(void)setOpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)fetchSource;
-(void)setFetchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)requestFetchOfShareWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_lockedFetchesAreReady;
-(NSMutableArray *)runningFetches;
-(NSMutableArray *)queuedFetches;
-(void)_lockedRescheduleFetchTimer;
-(void)_lockedTearDownFetchTimer;
-(NSObject*<OS_dispatch_source>)timerSource;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)_lockedGetQueuedFetchForOperation:(id)arg1 ofClass:(Class)arg2 ;
-(void)setQueuedFetches:(NSMutableArray *)arg1 ;
-(void)setRunningFetches:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setContext:(CKDClientContext *)arg1 ;
-(CKDClientContext *)context;
-(id)initWithContext:(id)arg1 ;
-(NSOperationQueue *)queue;
@end

