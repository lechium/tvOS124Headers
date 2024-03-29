/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSOperation, NSOperationQueue, NSMutableArray, NSHashTable;

@interface __NSOperationInternal : NSObject {

	os_unfair_lock_s __lock;
	NSOperation* __prevOp;
	NSOperation* __nextOp;
	NSOperation* __nextPriOp;
	NSOperationQueue* __queue;
	NSMutableArray* __dependencies;
	NSHashTable* __down_dependencies;
	long long __unfinished_deps;
	/*^block*/id __completion;
	void* __obsInfo;
	void* __implicitObsInfo;
	double __thread_prio;
	AC __state;
	char __prio;
	AB __cached_isReady;
	AB __isCancelled;
	AC __propertyQoS;
	opaque_pthread_mutex_t __wait_mutex;
	opaque_pthread_cond_t __wait_cond;
	char* __nameBuffer;
	id __activity;
	/*^block*/id __schedule;
	AC __isExecutingObserverCount;
	AC __isFinishedObserverCount;
	AC __isReadyObserverCount;
	AC __isCancelledObserverCount;
	BOOL _shouldRemoveDependenciesAfterFinish;

}
+(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7 ;
-(id)_activity;
-(void)_removeAllDependencies:(id)arg1 ;
-(/*^block*/id)_copyCompletionBlock;
-(BOOL)_isCancelled;
-(void)_cancel:(id)arg1 ;
-(BOOL)_isExecuting;
-(BOOL)_isReady;
-(long long)_queuePriority;
-(void)_setQueuePriority:(long long)arg1 outer:(id)arg2 ;
-(double)_threadPriority;
-(void)_setThreadPriority:(double)arg1 outer:(id)arg2 ;
-(void)_setCompletionBlock:(/*^block*/id)arg1 outer:(id)arg2 ;
-(void)_setName:(id)arg1 outer:(id)arg2 ;
-(void)_waitUntilFinished:(id)arg1 ;
-(void)_waitUntilFinishedOrTimeout:(double)arg1 outer:(id)arg2 ;
-(void)_addDependency:(id)arg1 outer:(id)arg2 ;
-(void)_removeDependency:(id)arg1 outer:(id)arg2 ;
-(id)_dependencies;
-(void)_start:(id)arg1 ;
-(id)init:(id)arg1 ;
-(void)dealloc;
-(BOOL)_isFinished;
-(id)_name;
-(void)_invalidate;
-(/*^block*/id)_completionBlock;
@end

