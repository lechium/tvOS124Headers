/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScreen, _UIFocusEngineScrollableContainerOffsets, NSMapTable, CADisplayLink, NSTimer;

@interface _UIFocusDisplayLinkScrollAnimator : NSObject {

	UIScreen* _screen;
	_UIFocusEngineScrollableContainerOffsets* _singleScrollableContainerEntry;
	NSMapTable* _scrollableContainers;
	CADisplayLink* _displayLink;
	NSTimer* _timer;
	double _lastTimerFireDate;
	double _defaultConvergenceRate;

}

@property (assign,nonatomic) double defaultConvergenceRate; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithScreen:(id)arg1 ;
-(CGPoint)targetContentOffsetForScrollableContainer:(id)arg1 ;
-(void)cancelScrollingForScrollableContainer:(id)arg1 ;
-(id)_entryForScrollableContainer:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_updateHeartbeatConfiguration;
-(void)_switchToTimerScrolling;
-(BOOL)_canCreateDisplayLink;
-(void)_displayLinkHeartbeat:(id)arg1 ;
-(void)_timerHeartbeat:(id)arg1 ;
-(BOOL)_shouldPushAndPopRunLoopModes;
-(void)_commonHeartbeat:(double)arg1 ;
-(void)_processEntry:(id)arg1 timeDelta:(long long)arg2 completed:(id)arg3 ;
-(CGPoint)_applyAccelerationLimitToAcceleration:(CGPoint)arg1 currentOffset:(CGPoint)arg2 targetOffset:(CGPoint)arg3 ;
-(double)defaultConvergenceRate;
-(void)setDefaultConvergenceRate:(double)arg1 ;
-(void)setTargetContentOffset:(CGPoint)arg1 forScrollableContainer:(id)arg2 convergenceRate:(double)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isAnimatingScrollableContainer:(id)arg1 ;
-(CGPoint)currentVelocityForScrollableContainer:(id)arg1 ;
-(CGPoint)velocityToScrollFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 ;
@end

