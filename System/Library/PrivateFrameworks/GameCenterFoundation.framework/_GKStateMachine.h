/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GKStateMachineDelegate;
#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class NSString, NSDictionary;

@interface _GKStateMachine : NSObject {

	os_unfair_lock_s _lock;
	NSString* _currentState;
	NSDictionary* _validTransitions;
	id<_GKStateMachineDelegate> _delegate;
	BOOL _shouldLogStateTransitions;

}

@property (retain) NSString * currentState;                               //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSDictionary * validTransitions;                       //@synthesize validTransitions=_validTransitions - In the implementation block
@property (assign) id<_GKStateMachineDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldLogStateTransitions;              //@synthesize shouldLogStateTransitions=_shouldLogStateTransitions - In the implementation block
-(BOOL)_setCurrentState:(id)arg1 ;
-(BOOL)shouldLogStateTransitions;
-(id)_validateTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)_performTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(NSDictionary *)validTransitions;
-(BOOL)applyState:(id)arg1 ;
-(void)setValidTransitions:(NSDictionary *)arg1 ;
-(void)setShouldLogStateTransitions:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<_GKStateMachineDelegate>)arg1 ;
-(id<_GKStateMachineDelegate>)delegate;
-(NSString *)currentState;
-(void)setCurrentState:(NSString *)arg1 ;
@end

