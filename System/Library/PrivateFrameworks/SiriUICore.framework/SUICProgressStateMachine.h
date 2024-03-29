/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUStateMachine, NSDictionary, CUState, NSPointerArray;

@interface SUICProgressStateMachine : NSObject {

	CUStateMachine* _underlyingStateMachine;
	NSDictionary* _stateForStateName;
	unsigned long long _currentState;
	CUState* _abstractState;
	NSPointerArray* _stateMachineObservers;

}

@property (setter=_setStateMachineObservers:,getter=_stateMachineObservers,nonatomic,retain) NSPointerArray * stateMachineObservers;              //@synthesize stateMachineObservers=_stateMachineObservers - In the implementation block
@property (readonly) unsigned long long state; 
-(void)_transitionToState:(unsigned long long)arg1 forEvent:(unsigned long long)arg2 ;
-(void)_ignoreEvent:(unsigned long long)arg1 ;
-(void)addObservers:(id)arg1 ;
-(id)_stateMachineObservers;
-(void)_setStateMachineObservers:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)state;
-(void)setObservers:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)handleEvent:(unsigned long long)arg1 ;
@end

