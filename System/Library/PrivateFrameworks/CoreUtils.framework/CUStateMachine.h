/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUState, NSMutableArray, NSPointerArray, NSArray;

@interface CUStateMachine : NSObject {

	CUState* _currentState;
	NSMutableArray* _eventQueue;
	BOOL _dispatching;
	NSPointerArray* _lcaPath;
	BOOL _started;
	CUState* _targetState;
	CUState* _initialState;
	NSArray* _states;

}

@property (nonatomic,retain) CUState * initialState;              //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,retain) NSArray * states;                    //@synthesize states=_states - In the implementation block
-(void)setStates:(NSArray *)arg1 ;
-(NSArray *)states;
-(void)transitionToState:(id)arg1 ;
-(void)dispatchEvent:(id)arg1 ;
-(void)_firstTimeInit;
-(CUState *)initialState;
-(void)setInitialState:(CUState *)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)start;
@end

