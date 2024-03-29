/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UINavigationInteractiveTransitionBaseDelegate;
@class UIView, UIPanGestureRecognizer, UIViewController, CADisplayLink, _UINavigationParallaxTransition, UIGestureRecognizer, NSString;

@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate> {

	UIView* _gestureRecognizerView;
	UIPanGestureRecognizer* _gestureRecognizer;
	long long __interactionState;
	BOOL __transitionWasStopped;
	BOOL __stoppedTransitionWasCancelled;
	UIViewController* __parent;
	BOOL __useAugmentedShouldPopDecisionProcedure;
	BOOL __completesTransitionOnEnd;
	CADisplayLink* _displayLink;
	double _timestamps[3];
	double _velocities[3];
	double _accelerations[3];
	BOOL _shouldReverseTranslation;
	BOOL __shouldReverseLayoutDirection;
	BOOL _springAnimationIsPending;
	BOOL _inSpringAnimation;
	_UINavigationParallaxTransition* _animationController;
	id<_UINavigationInteractiveTransitionBaseDelegate> _delegate;
	unsigned long long _sampleCount;
	double _totalDistance;
	double _skipTimeStamp;
	double _previousTimeStamp;
	double _previousDisplacement;
	double _previousVelocity;
	double _previousAcceleration;
	double _averageVelocity;
	double _averageAcceleration;

}

@property (assign,nonatomic) BOOL springAnimationIsPending;                                                                                //@synthesize springAnimationIsPending=_springAnimationIsPending - In the implementation block
@property (assign,nonatomic) BOOL inSpringAnimation;                                                                                       //@synthesize inSpringAnimation=_inSpringAnimation - In the implementation block
@property (assign,nonatomic) unsigned long long sampleCount;                                                                               //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) double totalDistance;                                                                                         //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign,nonatomic) double skipTimeStamp;                                                                                         //@synthesize skipTimeStamp=_skipTimeStamp - In the implementation block
@property (assign,nonatomic) double previousTimeStamp;                                                                                     //@synthesize previousTimeStamp=_previousTimeStamp - In the implementation block
@property (assign,nonatomic) double previousDisplacement;                                                                                  //@synthesize previousDisplacement=_previousDisplacement - In the implementation block
@property (assign,nonatomic) double previousVelocity;                                                                                      //@synthesize previousVelocity=_previousVelocity - In the implementation block
@property (assign,nonatomic) double previousAcceleration;                                                                                  //@synthesize previousAcceleration=_previousAcceleration - In the implementation block
@property (assign,nonatomic) double averageVelocity;                                                                                       //@synthesize averageVelocity=_averageVelocity - In the implementation block
@property (assign,nonatomic) double averageAcceleration;                                                                                   //@synthesize averageAcceleration=_averageAcceleration - In the implementation block
@property (assign,nonatomic,__weak) UIPanGestureRecognizer * gestureRecognizer;                                                            //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL shouldReverseTranslation;                                                                                //@synthesize shouldReverseTranslation=_shouldReverseTranslation - In the implementation block
@property (nonatomic,retain) _UINavigationParallaxTransition * animationController;                                                        //@synthesize animationController=_animationController - In the implementation block
@property (assign,setter=_setInteractionState:,nonatomic) long long _interactionState;                                                     //@synthesize _interactionState=__interactionState - In the implementation block
@property (assign,setter=_setTransitionWasStopped:,nonatomic) BOOL _transitionWasStopped;                                                  //@synthesize _transitionWasStopped=__transitionWasStopped - In the implementation block
@property (assign,setter=_setStoppedTransitionWasCancelled:,nonatomic) BOOL _stoppedTransitionWasCancelled;                                //@synthesize _stoppedTransitionWasCancelled=__stoppedTransitionWasCancelled - In the implementation block
@property (assign,setter=_setParent:,nonatomic,__weak) UIViewController * _parent;                                                         //@synthesize _parent=__parent - In the implementation block
@property (assign,setter=_setUseAugmentedShouldPopDecisionProcedure:,nonatomic) BOOL _useAugmentedShouldPopDecisionProcedure;              //@synthesize _useAugmentedShouldPopDecisionProcedure=__useAugmentedShouldPopDecisionProcedure - In the implementation block
@property (assign,setter=_setCompletesTransitionOnEnd:,nonatomic) BOOL _completesTransitionOnEnd;                                          //@synthesize _completesTransitionOnEnd=__completesTransitionOnEnd - In the implementation block
@property (getter=_navigationGesture,nonatomic,readonly) UIGestureRecognizer * navigationGesture; 
@property (assign,nonatomic,__weak) id<_UINavigationInteractiveTransitionBaseDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setShouldReverseLayoutDirection:,nonatomic) BOOL _shouldReverseLayoutDirection;                                  //@synthesize _shouldReverseLayoutDirection=__shouldReverseLayoutDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<_UINavigationInteractiveTransitionBaseDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id<_UINavigationInteractiveTransitionBaseDelegate>)delegate;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(BOOL)_shouldReverseLayoutDirection;
-(void)startInteractiveTransition;
-(void)_resetInteractionController;
-(void)_setShouldReverseLayoutDirection:(BOOL)arg1 ;
-(void)setAnimationController:(_UINavigationParallaxTransition *)arg1 ;
-(void)_stopInteractiveTransition;
-(UIViewController *)_parent;
-(void)_setInteractionState:(long long)arg1 ;
-(void)_setCompletesTransitionOnEnd:(BOOL)arg1 ;
-(void)handleNavigationTransition:(id)arg1 ;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(double)_translationCoefficient;
-(_UINavigationParallaxTransition *)animationController;
-(void)_updateStatistics:(id)arg1 firstSample:(BOOL)arg2 finalSample:(BOOL)arg3 ;
-(BOOL)springAnimationIsPending;
-(BOOL)popGesture:(id)arg1 withRemainingDuration:(double)arg2 shouldPopWithVelocity:(double*)arg3 ;
-(BOOL)_completesTransitionOnEnd;
-(void)setNotInteractiveTransition;
-(id)gestureRecognizerView;
-(id)initWithGestureRecognizerView:(id)arg1 animator:(id)arg2 delegate:(id)arg3 ;
-(id)_navigationGesture;
-(void)_completeStoppedInteractiveTransition;
-(BOOL)shouldReverseTranslation;
-(void)setShouldReverseTranslation:(BOOL)arg1 ;
-(long long)_interactionState;
-(BOOL)_transitionWasStopped;
-(void)_setTransitionWasStopped:(BOOL)arg1 ;
-(BOOL)_stoppedTransitionWasCancelled;
-(void)_setStoppedTransitionWasCancelled:(BOOL)arg1 ;
-(void)_setParent:(id)arg1 ;
-(BOOL)_useAugmentedShouldPopDecisionProcedure;
-(void)_setUseAugmentedShouldPopDecisionProcedure:(BOOL)arg1 ;
-(void)setSpringAnimationIsPending:(BOOL)arg1 ;
-(BOOL)inSpringAnimation;
-(void)setInSpringAnimation:(BOOL)arg1 ;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(double)totalDistance;
-(void)setTotalDistance:(double)arg1 ;
-(double)skipTimeStamp;
-(void)setSkipTimeStamp:(double)arg1 ;
-(double)previousTimeStamp;
-(void)setPreviousTimeStamp:(double)arg1 ;
-(double)previousDisplacement;
-(void)setPreviousDisplacement:(double)arg1 ;
-(double)previousVelocity;
-(void)setPreviousVelocity:(double)arg1 ;
-(double)previousAcceleration;
-(void)setPreviousAcceleration:(double)arg1 ;
-(double)averageVelocity;
-(void)setAverageVelocity:(double)arg1 ;
-(double)averageAcceleration;
-(void)setAverageAcceleration:(double)arg1 ;
@end

