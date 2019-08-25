/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PFStateMachineGraph, PFStateMachineNode, NSString, NSMutableArray;

@interface PFStateMachine : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id _uuid;
	PFStateMachineGraph* _graph;
	PFStateMachineNode* _previousNode;
	PFStateMachineNode* _currentNode;
	id _owner;
	NSString* _name;
	id _delayedEventCancelToken;
	NSMutableArray* _subflowStack;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) id uuid;                      //@synthesize uuid=_uuid - In the implementation block
+(void)initialize;
-(id)graph;
-(void)_handleEvent:(id)arg1 ;
-(id)previousNode;
-(id)currentNode;
-(void)_cancelLastDelayedEvent;
-(id)initWithGraph:(id)arg1 name:(id)arg2 owner:(id)arg3 ;
-(void)_pushReturnTransition:(id)arg1 ;
-(id)_popReturnTransition;
-(void)postEvent:(id)arg1 afterTimeout:(double)arg2 ;
-(void)atomicHandleEvent:(/*^block*/id)arg1 ;
-(void)atomicHandleEventAsync:(/*^block*/id)arg1 ;
-(id)atomicQueue;
-(void)trace:(id)arg1 ;
-(void)traceObject:(id)arg1 state:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(id)description;
-(id)uuid;
-(id)owner;
-(void)handleEvent:(id)arg1 ;
@end
