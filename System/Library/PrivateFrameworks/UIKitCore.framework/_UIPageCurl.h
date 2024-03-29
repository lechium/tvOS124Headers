/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, _UIPageCurlState, NSMutableArray, NSMutableSet, NSNumber;

@interface _UIPageCurl : NSObject {

	long long _spineLocation;
	CGRect _contentRect;
	UIView* _contentView;
	_UIPageCurlState* _manualPageCurlState;
	NSMutableArray* _pendingStateQueue;
	NSMutableArray* _activeStateQueue;
	NSMutableSet* _completedStates;
	double _delayBetweenSuccessiveAnimations;
	double _pageDiagonalAngle;
	double _pageDiagonalLength;
	double _manualPageCurlMaxDAngle;

}

@property (nonatomic,readonly) long long _spineLocation;                                                                                   //@synthesize spineLocation=_spineLocation - In the implementation block
@property (getter=_isManualPageCurlInProgressAndUncommitted,nonatomic,readonly) BOOL _manualPageCurlInProgressAndUncommitted; 
@property (nonatomic,readonly) NSNumber * _wrappedManualPageCurlDirection; 
@property (assign,setter=_setManualPageCurlMaxDAngle:,nonatomic) double _manualPageCurlMaxDAngle;                                          //@synthesize manualPageCurlMaxDAngle=_manualPageCurlMaxDAngle - In the implementation block
-(void)dealloc;
-(void)_cancelAllActiveTransitionsAndAbandonCallbacks:(BOOL)arg1 ;
-(id)initWithSpineLocation:(long long)arg1 andContentRect:(CGRect)arg2 inContentView:(id)arg3 ;
-(void)_setContentRect:(CGRect)arg1 ;
-(CGRect)_pageViewFrame:(BOOL)arg1 ;
-(BOOL)_areAnimationsInFlightOrPending;
-(BOOL)_isPreviousCurlCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2 ;
-(void)_enqueueCurlOfType:(long long)arg1 fromLocation:(CGPoint)arg2 inDirection:(long long)arg3 withView:(id)arg4 revealingView:(id)arg5 completion:(/*^block*/id)arg6 finally:(/*^block*/id)arg7 ;
-(NSNumber *)_wrappedManualPageCurlDirection;
-(BOOL)_isManualPageCurlInProgressAndUncommitted;
-(void)_updateManualCurlToLocation:(CGPoint)arg1 ;
-(void)_completeManualCurlAtLocation:(CGPoint)arg1 withSuggestedVelocity:(double)arg2 ;
-(void)_abortManualCurlAtLocation:(CGPoint)arg1 withSuggestedVelocity:(double)arg2 ;
-(long long)_spineLocation;
-(void)_ensureCurlFilterOnLayer:(id)arg1 ;
-(void)_pageCurlAnimationDidStop:(id)arg1 withState:(id)arg2 ;
-(BOOL)_populateFromValue:(double*)arg1 toValue:(double*)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4 ;
-(id)_newCurlFilter;
-(double)_distanceToTravelWithCurrentSpineLocation;
-(double)_baseAngleOffsetForState:(id)arg1 ;
-(void)_fromValue:(double*)arg1 toValue:(double*)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4 ;
-(double)_inputTimeForProgress:(double)arg1 distanceToTravel:(double)arg2 radius:(double*)arg3 minRadius:(double)arg4 angle:(double)arg5 dAngle:(double)arg6 touchLocation:(CGPoint)arg7 state:(id)arg8 ;
-(id)_animationKeyPaths;
-(long long)_validatedPageCurlTypeForPageCurlType:(long long)arg1 inDirection:(long long)arg2 ;
-(CGPoint)_referenceLocationForInitialLocation:(CGPoint)arg1 direction:(long long)arg2 ;
-(void)_beginCurlWithState:(id)arg1 previousState:(id)arg2 ;
-(void)_cancelTransitionWithState:(id)arg1 invalidatingPageCurl:(BOOL)arg2 ;
-(void)_updatedInputsFromState:(id)arg1 forLocation:(CGPoint)arg2 time:(double*)arg3 radius:(double*)arg4 angle:(double*)arg5 ;
-(id)_newAnimationForState:(id)arg1 withKeyPath:(id)arg2 duration:(double)arg3 fromValue:(id)arg4 ;
-(void)_updateCurlFromState:(id)arg1 withTime:(double)arg2 radius:(double)arg3 angle:(double)arg4 addingAnimations:(id)arg5 ;
-(void)_forceCleanupState:(id)arg1 finished:(BOOL)arg2 completed:(BOOL)arg3 ;
-(double)_durationForManualCurlEndAnimationWithSuggestedVelocity:(double)arg1 shouldComplete:(BOOL)arg2 ;
-(void)_endManualCurlAtLocation:(CGPoint)arg1 withSuggestedVelocity:(double)arg2 shouldComplete:(BOOL)arg3 ;
-(void)_cleanupState:(id)arg1 ;
-(double)_manualPageCurlMaxDAngle;
-(void)_setManualPageCurlMaxDAngle:(double)arg1 ;
@end

