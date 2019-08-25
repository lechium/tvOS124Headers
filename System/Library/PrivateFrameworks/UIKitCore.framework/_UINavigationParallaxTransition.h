/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBasicAnimationFactory.h>
#import <UIKit/UIViewControllerAnimatedTransitioningEx.h>

@protocol UIViewControllerContextTransitioning;
@class NSUUID, _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView, UIView, UIColor, NSString;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx> {

	NSUUID* _currentRunningAnimationsUUID;
	NSUUID* _currentTrackingAnimatorsAnimationsUUID;
	BOOL _interactionAborted;
	BOOL _clipUnderlapWhileTransitioning;
	BOOL __shouldReverseLayoutDirection;
	long long _operation;
	id<UIViewControllerContextTransitioning> _transitionContext;
	_UINavigationInteractiveTransitionBase* _interactionController;
	_UIParallaxDimmingView* _borderDimmingView;
	_UIParallaxDimmingView* _contentDimmingView;
	UIView* _containerFromView;
	UIView* _containerToView;
	UIView* _clipUnderView;
	long long _transitionStyle;
	double _transitionGap;
	UIColor* _overrideDimmingColor;

}

@property (assign,nonatomic) long long operation;                                                                      //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> transitionContext;                               //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,nonatomic) BOOL interactionAborted;                                                                  //@synthesize interactionAborted=_interactionAborted - In the implementation block
@property (assign,nonatomic) _UINavigationInteractiveTransitionBase * interactionController;                           //@synthesize interactionController=_interactionController - In the implementation block
@property (nonatomic,retain) _UIParallaxDimmingView * borderDimmingView;                                               //@synthesize borderDimmingView=_borderDimmingView - In the implementation block
@property (nonatomic,retain) _UIParallaxDimmingView * contentDimmingView;                                              //@synthesize contentDimmingView=_contentDimmingView - In the implementation block
@property (nonatomic,retain) UIView * containerFromView;                                                               //@synthesize containerFromView=_containerFromView - In the implementation block
@property (nonatomic,retain) UIView * containerToView;                                                                 //@synthesize containerToView=_containerToView - In the implementation block
@property (nonatomic,retain) UIView * clipUnderView;                                                                   //@synthesize clipUnderView=_clipUnderView - In the implementation block
@property (assign,nonatomic) BOOL clipUnderlapWhileTransitioning;                                                      //@synthesize clipUnderlapWhileTransitioning=_clipUnderlapWhileTransitioning - In the implementation block
@property (assign,nonatomic) long long transitionStyle;                                                                //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (assign,nonatomic) double transitionGap;                                                                     //@synthesize transitionGap=_transitionGap - In the implementation block
@property (assign,setter=_setShouldReverseLayoutDirection:,nonatomic) BOOL _shouldReverseLayoutDirection;              //@synthesize _shouldReverseLayoutDirection=__shouldReverseLayoutDirection - In the implementation block
@property (nonatomic,retain) UIColor * overrideDimmingColor;                                                           //@synthesize overrideDimmingColor=_overrideDimmingColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDefaultSlidingTransitionDuration:(double)arg1 ;
+(double)defaultSlidingTransitionDuration;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(BOOL)_shouldReverseLayoutDirection;
-(id)resizedFromContainerView;
-(id)resizedToContainerView;
-(void)setTransitionStyle:(long long)arg1 ;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(long long)transitionStyle;
-(void)setOperation:(long long)arg1 ;
-(_UINavigationInteractiveTransitionBase *)interactionController;
-(void)setInteractionController:(_UINavigationInteractiveTransitionBase *)arg1 ;
-(BOOL)interactionAborted;
-(void)setInteractionAborted:(BOOL)arg1 ;
-(long long)operation;
-(void)setTransitionGap:(double)arg1 ;
-(void)_setShouldReverseLayoutDirection:(BOOL)arg1 ;
-(id)initWithCurrentOperation:(long long)arg1 ;
-(void)setClipUnderlapWhileTransitioning:(BOOL)arg1 ;
-(void)setOverrideDimmingColor:(UIColor *)arg1 ;
-(void)_stopTransitionImmediately;
-(double)gapBetweenViews;
-(double)parallaxOffset;
-(UIColor *)overrideDimmingColor;
-(_UIParallaxDimmingView *)contentDimmingView;
-(_UIParallaxDimmingView *)borderDimmingView;
-(void)setClipUnderView:(UIView *)arg1 ;
-(void)setBorderDimmingView:(_UIParallaxDimmingView *)arg1 ;
-(void)setContentDimmingView:(_UIParallaxDimmingView *)arg1 ;
-(id)shadowContainerForKeyboardTransition:(id)arg1 ;
-(void)resizeShadow:(id)arg1 ;
-(void)prepareToAnimateKeyboard:(id)arg1 ;
-(void)animateKeyboard:(id)arg1 ;
-(void)completeKeyboard:(id)arg1 ;
-(UIView *)containerFromView;
-(void)setContainerFromView:(UIView *)arg1 ;
-(UIView *)containerToView;
-(void)setContainerToView:(UIView *)arg1 ;
-(UIView *)clipUnderView;
-(BOOL)clipUnderlapWhileTransitioning;
-(double)transitionGap;
@end

