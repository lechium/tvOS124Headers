/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSMutableArray, NSString, NSObject, BSEventQueueEvent, NSArray;

@interface BSEventQueue : NSObject <BSDescriptionProviding> {

	NSHashTable* _eventQueueLocks;
	NSMutableArray* _eventQueue;
	BOOL _processingEvents;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _queue;
	BSEventQueueEvent* _executingEvent;

}

@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) BSEventQueueEvent * executingEvent;              //@synthesize executingEvent=_executingEvent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (getter=isLocked,nonatomic,readonly) BOOL locked; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,copy,readonly) NSArray * pendingEvents;                  //@synthesize eventQueue=_eventQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_addEventQueueLock:(id)arg1 ;
-(void)_removeEventQueueLock:(id)arg1 ;
-(void)_executeOrPendEvents:(id)arg1 position:(int)arg2 ;
-(void)setExecutingEvent:(BSEventQueueEvent *)arg1 ;
-(void)flushPendingEvents;
-(void)cancelEventsWithName:(id)arg1 ;
-(BOOL)hasEventWithPrefix:(id)arg1 ;
-(BOOL)hasEventWithName:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithName:(id)arg1 onQueue:(id)arg2 ;
-(void)executeOrInsertEvents:(id)arg1 atPosition:(int)arg2 ;
-(BOOL)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2 ;
-(void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2 ;
-(void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2 ;
-(void)_noteWillExecuteEvent:(id)arg1 ;
-(void)_noteQueueDidLock;
-(void)_noteQueueDidUnlock;
-(NSArray *)pendingEvents;
-(id)acquireLockForReason:(id)arg1 ;
-(void)flushEvents:(id)arg1 ;
-(void)flushAllEvents;
-(void)relinquishLock:(id)arg1 ;
-(void)executeOrInsertEvent:(id)arg1 atPosition:(int)arg2 ;
-(BSEventQueueEvent *)executingEvent;
-(void)_noteQueueDidDrain;
-(void)_processNextEvent;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
-(BOOL)isLocked;
-(BOOL)isEmpty;
-(NSObject*<OS_dispatch_queue>)queue;
@end

