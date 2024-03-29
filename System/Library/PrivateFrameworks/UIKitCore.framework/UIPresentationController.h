/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIAppearanceContainer.h>
#import <UIKitCore/_UITraitEnvironmentInternal.h>
#import <UIKitCore/_UIContentContainerInternal.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAppearanceContainer.h>
#import <UIKit/UITraitEnvironment.h>
#import <UIKit/UIContentContainer.h>
#import <UIKit/UIFocusEnvironment.h>

@protocol UIAdaptivePresentationControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitionCoordinator, UIViewControllerTransitionCoordinatorContext;
@class UITraitCollection, UIView, UITapGestureRecognizer, NSUUID, UIBarButtonItem, UIViewController, NSString, NSArray;

@interface UIPresentationController : NSObject <_UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIGestureRecognizerDelegate, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment> {

	BOOL _isDisconnectedRoot;
	BOOL _transitionAsDisconnectedRoot;
	BOOL _needsDidAppear;
	BOOL _needsDidDisappear;
	BOOL _monitorsSystemLayoutFittingSize;
	BOOL _didUpdateLayoutForStatusBarAndInterfaceOrientation;
	id _target;
	SEL _didEndSelector;
	UITraitCollection* _lastNotifiedTraitCollection;
	UIView* _snapshotOverlayView;
	UITapGestureRecognizer* _backGestureRecognizer;
	NSUUID* _currentRunningAnimationsUUID;
	BOOL _changedPresentingViewControllerDuringAdaptation;
	BOOL _shouldContinueTouchesOnTargetViewController;
	BOOL _containerIgnoresDirectTouchEvents;
	BOOL _isCurrentStateCancelled;
	UIView* _sourceView;
	UIBarButtonItem* _barButtonItem;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;
	UIView* _containerView;
	id<UIAdaptivePresentationControllerDelegate> _delegate;
	UITraitCollection* _overrideTraitCollection;
	id<UIViewControllerAnimatedTransitioning> _currentTransitionController;
	id<UIViewControllerInteractiveTransitioning> _currentInteractionController;
	UIView* _presentationView;
	UIView* __currentPresentationSuperview;
	long long _state;
	id<UIViewControllerTransitionCoordinator> _adaptiveTransitionCoordinator;
	id<UIViewControllerTransitionCoordinatorContext> _adaptiveTransitionContext;
	/*^block*/id __transitionViewForCurrentTransition;
	/*^block*/id __fromViewForCurrentTransition;
	/*^block*/id __toViewForCurrentTransition;
	/*^block*/id __customFromViewForCurrentTransition;
	/*^block*/id __customToViewForCurrentTransition;
	/*^block*/id __computeToEndFrameForCurrentTransition;
	/*^block*/id __currentTransitionDidComplete;
	UIView* _customViewForTouchContinuation;
	CGSize _preferredContentSize;
	CGRect _sourceRect;

}

@property (setter=_setCurrentTransitionController:,getter=_currentTransitionController,nonatomic,retain) id<UIViewControllerAnimatedTransitioning> currentTransitionController;                                     //@synthesize currentTransitionController=_currentTransitionController - In the implementation block
@property (setter=_setCurrentInteractionController:,getter=_currentInteractionController,nonatomic,retain) id<UIViewControllerInteractiveTransitioning> currentInteractionController;                               //@synthesize currentInteractionController=_currentInteractionController - In the implementation block
@property (setter=_setPresentingViewController:,nonatomic,retain) UIViewController * presentingViewController;                                                                                                      //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (setter=_setPresentedViewController:,nonatomic,retain) UIViewController * presentedViewController;                                                                                                        //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (setter=_setPresentationView:,getter=_presentationView,nonatomic,retain) UIView * presentationView;                                                                                                       //@synthesize presentationView=_presentationView - In the implementation block
@property (setter=_setCurrentPresentationSuperview:,getter=_currentPresentationSuperview,nonatomic,retain) UIView * _currentPresentationSuperview;                                                                  //@synthesize _currentPresentationSuperview=__currentPresentationSuperview - In the implementation block
@property (assign,nonatomic) long long state;                                                                                                                                                                       //@synthesize state=_state - In the implementation block
@property (setter=_setContainerView:,nonatomic,retain) UIView * containerView;                                                                                                                                      //@synthesize containerView=_containerView - In the implementation block
@property (assign,setter=_setPreferredContentSize:,getter=_preferredContentSize,nonatomic) CGSize _preferredContentSize;                                                                                            //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (setter=_setAdaptiveTransitionCoordinator:,getter=_adaptiveTransitionCoordinator,nonatomic,retain) id<UIViewControllerTransitionCoordinator> adaptiveTransitionCoordinator;                               //@synthesize adaptiveTransitionCoordinator=_adaptiveTransitionCoordinator - In the implementation block
@property (setter=_setAdaptiveTransitionContext:,getter=_adaptiveTransitionContext,nonatomic,retain) id<UIViewControllerTransitionCoordinatorContext> adaptiveTransitionContext;                                    //@synthesize adaptiveTransitionContext=_adaptiveTransitionContext - In the implementation block
@property (assign,setter=_setChangedPresentingViewControllerDuringAdaptation:,getter=_changedPresentingViewControllerDuringAdaptation,nonatomic) BOOL changedPresentingViewControllerDuringAdaptation;              //@synthesize changedPresentingViewControllerDuringAdaptation=_changedPresentingViewControllerDuringAdaptation - In the implementation block
@property (nonatomic,copy) id _transitionViewForCurrentTransition;                                                                                                                                                  //@synthesize _transitionViewForCurrentTransition=__transitionViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _fromViewForCurrentTransition;                                                                                                                                                        //@synthesize _fromViewForCurrentTransition=__fromViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _toViewForCurrentTransition;                                                                                                                                                          //@synthesize _toViewForCurrentTransition=__toViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _customFromViewForCurrentTransition;                                                                                                                                                  //@synthesize _customFromViewForCurrentTransition=__customFromViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _customToViewForCurrentTransition;                                                                                                                                                    //@synthesize _customToViewForCurrentTransition=__customToViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _computeToEndFrameForCurrentTransition;                                                                                                                                               //@synthesize _computeToEndFrameForCurrentTransition=__computeToEndFrameForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _currentTransitionDidComplete;                                                                                                                                                        //@synthesize _currentTransitionDidComplete=__currentTransitionDidComplete - In the implementation block
@property (assign,setter=_setShouldContinueTouchesOnTargetViewController:,getter=_shouldContinueTouchesOnTargetViewController,nonatomic) BOOL shouldContinueTouchesOnTargetViewController;                          //@synthesize shouldContinueTouchesOnTargetViewController=_shouldContinueTouchesOnTargetViewController - In the implementation block
@property (setter=_setCustomViewForTouchContinuation:,getter=_customViewForTouchContinuation,nonatomic,retain) UIView * customViewForTouchContinuation;                                                             //@synthesize customViewForTouchContinuation=_customViewForTouchContinuation - In the implementation block
@property (assign,setter=_setContainerIgnoresDirectTouchEvents:,getter=_containerIgnoresDirectTouchEvents,nonatomic) BOOL containerIgnoresDirectTouchEvents;                                                        //@synthesize containerIgnoresDirectTouchEvents=_containerIgnoresDirectTouchEvents - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                                                                                                                                   //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                                                                                                                                     //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonItem;                                                                                                                                                       //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (assign,nonatomic) BOOL isCurrentStateCancelled;                                                                                                                                                          //@synthesize isCurrentStateCancelled=_isCurrentStateCancelled - In the implementation block
@property (nonatomic,readonly) long long presentationStyle; 
@property (assign,nonatomic,__weak) id<UIAdaptivePresentationControllerDelegate> delegate;                                                                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long adaptivePresentationStyle; 
@property (nonatomic,readonly) UIView * presentedView; 
@property (nonatomic,readonly) CGRect frameOfPresentedViewInContainerView; 
@property (nonatomic,readonly) BOOL shouldPresentInFullscreen; 
@property (nonatomic,readonly) BOOL shouldRemovePresentersView; 
@property (nonatomic,copy) UITraitCollection * overrideTraitCollection;                                                                                                                                             //@synthesize overrideTraitCollection=_overrideTraitCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
+(UIEdgeInsets)_statusBarOverlapAndMarginInfoForView:(id)arg1 ;
+(BOOL)_shouldPostPresentationControllerNotifications;
+(BOOL)_preventsAppearanceProxyCustomization;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<UIAdaptivePresentationControllerDelegate>)arg1 ;
-(long long)state;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id<UIAdaptivePresentationControllerDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(UIViewController *)presentedViewController;
-(CGSize)preferredContentSize;
-(UITraitCollection *)traitCollection;
-(void)setNeedsFocusUpdate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)preferredFocusedView;
-(long long)presentationStyle;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(void)setState:(long long)arg1 ;
-(UIView *)containerView;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(void)containerViewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_setPreferredContentSize:(CGSize)arg1 ;
-(void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg1 ;
-(BOOL)presenting;
-(UIView *)presentedView;
-(BOOL)_preserveResponderAcrossWindows;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)adaptivePresentationStyle;
-(void)containerViewWillLayoutSubviews;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)shouldRemovePresentersView;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(BOOL)_shouldOccludeDuringPresentation;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(Class)_appearanceGuideClass;
-(UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_isAdapted;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)dismissalTransitionWillBegin;
-(BOOL)_forcesPreferredAnimationControllers;
-(id)_preferredAnimationControllerForPresentation;
-(id)_preferredAnimationControllerForDismissal;
-(void)setOverrideTraitCollection:(UITraitCollection *)arg1 ;
-(BOOL)dismissed;
-(void)_setPresentingViewController:(id)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)_containedViewControllerModalStateChanged;
-(void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4 ;
-(BOOL)presented;
-(BOOL)dismissing;
-(BOOL)_isModalWhenContainedInPopover;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_setPresentedViewController:(id)arg1 ;
-(id)_childPresentationController;
-(UIView *)_currentPresentationSuperview;
-(id)_passthroughViews;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(id)_initialPresentationViewControllerForViewController:(id)arg1 ;
-(id)_presentationView;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)_transitionFromWillBegin;
-(void)_transitionFromDidEnd;
-(void)_transitionToWillBegin;
-(void)_transitionToDidEnd;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(long long)_defaultPresentationStyleForTraitCollection:(id)arg1 ;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)_shouldMakePresentedViewControllerFirstResponder;
-(id)_currentTransitionDidComplete;
-(void)_setPresentationView:(id)arg1 ;
-(void)_setContainerView:(id)arg1 ;
-(void)_setCurrentInteractionController:(id)arg1 ;
-(BOOL)_shouldDisablePresentersAppearanceCallbacks;
-(void)_setCurrentTransitionController:(id)arg1 ;
-(void)_cleanup;
-(void)_setCurrentPresentationSuperview:(id)arg1 ;
-(void)set_transitionViewForCurrentTransition:(id)arg1 ;
-(void)set_computeToEndFrameForCurrentTransition:(id)arg1 ;
-(void)set_currentTransitionDidComplete:(id)arg1 ;
-(void)set_fromViewForCurrentTransition:(id)arg1 ;
-(void)set_toViewForCurrentTransition:(id)arg1 ;
-(void)set_customFromViewForCurrentTransition:(id)arg1 ;
-(void)set_customToViewForCurrentTransition:(id)arg1 ;
-(void)_setAdaptiveTransitionContext:(id)arg1 ;
-(void)_setAdaptiveTransitionCoordinator:(id)arg1 ;
-(id)_fullscreenPresentationSuperview;
-(id)_currentContextPresentationSuperview;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(void)_initViewHierarchyForPresentationSuperview:(id)arg1 ;
-(void)runTransitionForCurrentState;
-(void)completeCurrentTransitionImmediately;
-(BOOL)_changedPresentingViewControllerDuringAdaptation;
-(void)_setChangedPresentingViewControllerDuringAdaptation:(BOOL)arg1 ;
-(id)_transitionViewForCurrentTransition;
-(id)_toViewForCurrentTransition;
-(id)_computeToEndFrameForCurrentTransition;
-(id)_parentPresentationControllerImmediate:(BOOL)arg1 ;
-(id)_parentPresentationController;
-(id)_rootPresentingViewControllerForNestedPresentation;
-(id)_currentInteractionController;
-(id)_fromViewForCurrentTransition;
-(void)setIsCurrentStateCancelled:(BOOL)arg1 ;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(void)transitionDidStart;
-(void)_releaseSnapshot;
-(void)_enableOcclusion:(BOOL)arg1 ;
-(BOOL)_containerIgnoresDirectTouchEvents;
-(BOOL)_transitioningTo;
-(BOOL)_transitioningFrom;
-(void)_transplantView:(id)arg1 toSuperview:(id)arg2 ;
-(void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(BOOL)_shouldGrabPresentersView;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(id)_customFromViewForCurrentTransition;
-(id)_customToViewForCurrentTransition;
-(void)_sendPresentationControllerNotification:(id)arg1 ;
-(void)_beginOcclusionIfNecessary:(BOOL)arg1 ;
-(BOOL)_shouldContinueTouchesOnTargetViewController;
-(id)_customViewForTouchContinuation;
-(void)_performBackGesture:(id)arg1 ;
-(long long)adaptivePresentationStyleForTraitCollection:(id)arg1 ;
-(id)_activePresentationController;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)presentedContentContainer;
-(SCD_Struct_UI25)__sizeClassPair;
-(void)_updateTraitsIfNecessary;
-(id)_parentTraitEnvironment;
-(id)_parentTraitCollection;
-(UITraitCollection *)overrideTraitCollection;
-(void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(id)_sharedParent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(long long)_subclassPreferredFocusedViewPrioritizationType;
-(id)_appearanceContainer;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(BOOL)_monitorsSystemLayoutFittingSize;
-(void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2 ;
-(CGSize)_flipSize:(CGSize)arg1 ;
-(void)_setContainerIgnoresDirectTouchEvents:(BOOL)arg1 ;
-(void)_presentWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4 ;
-(id)_firstCurrentContextChildInWindow;
-(id)_descriptionForPrintingViewControllerHierarchy;
-(void)_coverWithSnapshot;
-(void)_containerViewWillLayoutSubviews;
-(BOOL)_shouldAdaptFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 ;
-(void)_sendDelegateWillPresentWithAdaptiveStyle:(long long)arg1 transitionCoordinator:(id)arg2 ;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(id)_viewsParticipatingInNavigationControllerTransition;
-(id)_animatorForContainmentTransition;
-(id)_focusMapContainer;
-(void)_disableMenuPressForBackGesture;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(CGSize)_preferredContentSize;
-(id)_currentTransitionController;
-(id)_adaptiveTransitionCoordinator;
-(id)_adaptiveTransitionContext;
-(void)_setShouldContinueTouchesOnTargetViewController:(BOOL)arg1 ;
-(void)_setCustomViewForTouchContinuation:(id)arg1 ;
-(BOOL)isCurrentStateCancelled;
@end

