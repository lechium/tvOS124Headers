/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface AXAccessQueue : NSObject {

	NSString* _threadLocalStorageKey;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	unsigned long long _specialBehaviors;

}

@property (nonatomic,copy) NSString * threadLocalStorageKey;                            //@synthesize threadLocalStorageKey=_threadLocalStorageKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (assign,nonatomic) unsigned long long specialBehaviors;                       //@synthesize specialBehaviors=_specialBehaviors - In the implementation block
@property (nonatomic,readonly) BOOL behavesAsMainQueue; 
@property (nonatomic,readonly) BOOL behavesWithoutErrorReporting; 
@property (nonatomic,copy,readonly) NSString * label; 
+(id)mainAccessQueue;
+(id)backgroundAccessQueue;
-(id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 ;
-(void)afterDelay:(double)arg1 processWritingBlock:(/*^block*/id)arg2 ;
-(id)initWithParentClass:(Class)arg1 description:(id)arg2 appendUUIDToLabel:(BOOL)arg3 ;
-(void)performAsynchronousWritingBlock:(/*^block*/id)arg1 ;
-(BOOL)canWriteInCurrentExecutionThread;
-(void)performSynchronousWritingBlock:(/*^block*/id)arg1 ;
-(void)performAsynchronousReadingBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(void)performSynchronousReadingBlock:(/*^block*/id)arg1 ;
-(BOOL)canOnlyReadInCurrentExecutionThread;
-(void)afterDelay:(double)arg1 processReadingBlock:(/*^block*/id)arg2 ;
-(id)_initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 specialBehaviors:(unsigned long long)arg3 ;
-(void)setSpecialBehaviors:(unsigned long long)arg1 ;
-(void)setThreadLocalStorageKey:(NSString *)arg1 ;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)behavesAsMainQueue;
-(unsigned long long)specialBehaviors;
-(void)_performBlock:(/*^block*/id)arg1 withDispatchFunction:(/*function pointer*/void*)arg2 synchronously:(BOOL)arg3 accessQueueContext:(unsigned long long)arg4 ;
-(unsigned long long)_accessQueueContextInCurrentExecutionThread;
-(BOOL)behavesWithoutErrorReporting;
-(NSString *)threadLocalStorageKey;
-(BOOL)canReadInCurrentExecutionThread;
-(id)init;
-(id)description;
-(NSString *)label;
@end

