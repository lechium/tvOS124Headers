/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPlatterMenuPanningTransformerDelegate.h>

@protocol _UIPlatterMenuDynamicsControllerDelegate, UIDynamicItem;
@class UIView, _UIPlatterMenuPanningTransformer, UIDynamicAnimator, UIDynamicItemBehavior, UIAttachmentBehavior, _UIPlatterMenuSnapBehavior, UICollisionBehavior, _UIDynamicItemObservingBehavior, NSString;

@interface _UIPlatterMenuDynamicsController : NSObject <_UIPlatterMenuPanningTransformerDelegate> {

	BOOL _leadingSwipeActionViewSelected;
	BOOL _trailingSwipeActionViewSelected;
	BOOL _isCurrentlyUnderDirectManipulation;
	id<_UIPlatterMenuDynamicsControllerDelegate> _delegate;
	UIView* _containerView;
	UIView* _platterView;
	UIView* _menuView;
	id<UIDynamicItem> _platterItem;
	_UIPlatterMenuPanningTransformer* _panningLockTransformer;
	long long _state;
	double _leadingSwipeEdgeMultiplier;
	double _trailingSwipeEdgeMultiplier;
	UIDynamicAnimator* _animator;
	UIDynamicItemBehavior* _menuItemBehavior;
	UIDynamicItemBehavior* _platterItemBehavior;
	UIAttachmentBehavior* _platterMenuSlidingAttachmentBehavior;
	UIAttachmentBehavior* _platterMenuAttachmentBehavior;
	UIAttachmentBehavior* _gestureAttachmentBehavior;
	_UIPlatterMenuSnapBehavior* _platterSnapBehavior;
	_UIPlatterMenuSnapBehavior* _menuPresentedSnapBehavior;
	_UIPlatterMenuSnapBehavior* _menuDismissedSnapBehavior;
	UIDynamicItemBehavior* _noRotationBehavior;
	UIAttachmentBehavior* _menuVerticalLockAttachment;
	UICollisionBehavior* _platterMenuCollisionBounds;
	_UIDynamicItemObservingBehavior* _observingBehavior;
	long long _didPresentCount;
	CGPoint _initialTouchPoint;

}

@property (assign,nonatomic,__weak) id<_UIPlatterMenuDynamicsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;                                             //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * platterView;                                               //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic,__weak) UIView * menuView;                                                  //@synthesize menuView=_menuView - In the implementation block
@property (assign,nonatomic,__weak) id<UIDynamicItem> platterItem;                                      //@synthesize platterItem=_platterItem - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuPanningTransformer * panningLockTransformer;                 //@synthesize panningLockTransformer=_panningLockTransformer - In the implementation block
@property (assign,nonatomic) long long state;                                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGPoint initialTouchPoint;                                                 //@synthesize initialTouchPoint=_initialTouchPoint - In the implementation block
@property (assign,nonatomic) double leadingSwipeEdgeMultiplier;                                         //@synthesize leadingSwipeEdgeMultiplier=_leadingSwipeEdgeMultiplier - In the implementation block
@property (assign,nonatomic) double trailingSwipeEdgeMultiplier;                                        //@synthesize trailingSwipeEdgeMultiplier=_trailingSwipeEdgeMultiplier - In the implementation block
@property (assign,nonatomic) BOOL isCurrentlyUnderDirectManipulation;                                   //@synthesize isCurrentlyUnderDirectManipulation=_isCurrentlyUnderDirectManipulation - In the implementation block
@property (nonatomic,retain) UIDynamicAnimator * animator;                                              //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) UIDynamicItemBehavior * menuItemBehavior;                                  //@synthesize menuItemBehavior=_menuItemBehavior - In the implementation block
@property (nonatomic,retain) UIDynamicItemBehavior * platterItemBehavior;                               //@synthesize platterItemBehavior=_platterItemBehavior - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * platterMenuSlidingAttachmentBehavior;               //@synthesize platterMenuSlidingAttachmentBehavior=_platterMenuSlidingAttachmentBehavior - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * platterMenuAttachmentBehavior;                      //@synthesize platterMenuAttachmentBehavior=_platterMenuAttachmentBehavior - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * gestureAttachmentBehavior;                          //@synthesize gestureAttachmentBehavior=_gestureAttachmentBehavior - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuSnapBehavior * platterSnapBehavior;                          //@synthesize platterSnapBehavior=_platterSnapBehavior - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuSnapBehavior * menuPresentedSnapBehavior;                    //@synthesize menuPresentedSnapBehavior=_menuPresentedSnapBehavior - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuSnapBehavior * menuDismissedSnapBehavior;                    //@synthesize menuDismissedSnapBehavior=_menuDismissedSnapBehavior - In the implementation block
@property (nonatomic,retain) UIDynamicItemBehavior * noRotationBehavior;                                //@synthesize noRotationBehavior=_noRotationBehavior - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * menuVerticalLockAttachment;                         //@synthesize menuVerticalLockAttachment=_menuVerticalLockAttachment - In the implementation block
@property (nonatomic,retain) UICollisionBehavior * platterMenuCollisionBounds;                          //@synthesize platterMenuCollisionBounds=_platterMenuCollisionBounds - In the implementation block
@property (nonatomic,retain) _UIDynamicItemObservingBehavior * observingBehavior;                       //@synthesize observingBehavior=_observingBehavior - In the implementation block
@property (assign,nonatomic) long long didPresentCount;                                                 //@synthesize didPresentCount=_didPresentCount - In the implementation block
@property (nonatomic,readonly) CGVector currentTranslation; 
@property (nonatomic,readonly) CGVector currentVelocity; 
@property (assign,nonatomic) BOOL leadingSwipeActionViewSelected;                                       //@synthesize leadingSwipeActionViewSelected=_leadingSwipeActionViewSelected - In the implementation block
@property (assign,nonatomic) BOOL trailingSwipeActionViewSelected;                                      //@synthesize trailingSwipeActionViewSelected=_trailingSwipeActionViewSelected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<_UIPlatterMenuDynamicsControllerDelegate>)arg1 ;
-(long long)state;
-(id<_UIPlatterMenuDynamicsControllerDelegate>)delegate;
-(void)setState:(long long)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setAnimator:(UIDynamicAnimator *)arg1 ;
-(UIDynamicAnimator *)animator;
-(void)_configureAnimator;
-(_UIPlatterMenuPanningTransformer *)panningLockTransformer;
-(void)setInitialTouchPoint:(CGPoint)arg1 ;
-(void)setIsCurrentlyUnderDirectManipulation:(BOOL)arg1 ;
-(void)_updateSwipeEdgeMultipliersIfNeededForTouchPosition:(CGPoint)arg1 ;
-(UIView *)platterView;
-(id<UIDynamicItem>)platterItem;
-(void)lockIntoYAxis;
-(void)performActionsAndEnterState:(long long)arg1 velocity:(CGVector)arg2 underDirectManipulation:(BOOL)arg3 ;
-(void)resetAnimator;
-(UIView *)menuView;
-(long long)didPresentCount;
-(void)resetAnimatorToDefaultBehaviors;
-(UIAttachmentBehavior *)gestureAttachmentBehavior;
-(void)addBehaviorIfNotPresent:(id)arg1 ;
-(void)performActionsAndEnterState:(long long)arg1 ;
-(CGVector)modifiedOffsetForPosition:(CGPoint)arg1 offset:(CGVector)arg2 touchPosition:(CGPoint)arg3 axisLock:(int)arg4 ;
-(CGPoint)centerForMenuPresentedRelativeToCurrentPlatter;
-(_UIPlatterMenuSnapBehavior *)menuPresentedSnapBehavior;
-(UIAttachmentBehavior *)platterMenuSlidingAttachmentBehavior;
-(void)_positionSwipeActionViewsForCurrentPlatterViewPosition;
-(long long)_stateForPosition:(CGPoint)arg1 offset:(CGVector)arg2 velocity:(CGVector)arg3 ;
-(void)setPlatterItemBehavior:(UIDynamicItemBehavior *)arg1 ;
-(UIDynamicItemBehavior *)platterItemBehavior;
-(void)setMenuItemBehavior:(UIDynamicItemBehavior *)arg1 ;
-(UIDynamicItemBehavior *)menuItemBehavior;
-(void)setPlatterMenuAttachmentBehavior:(UIAttachmentBehavior *)arg1 ;
-(UIAttachmentBehavior *)platterMenuAttachmentBehavior;
-(void)setGestureAttachmentBehavior:(UIAttachmentBehavior *)arg1 ;
-(void)setPlatterSnapBehavior:(_UIPlatterMenuSnapBehavior *)arg1 ;
-(void)setMenuPresentedSnapBehavior:(_UIPlatterMenuSnapBehavior *)arg1 ;
-(void)setMenuDismissedSnapBehavior:(_UIPlatterMenuSnapBehavior *)arg1 ;
-(_UIPlatterMenuSnapBehavior *)menuDismissedSnapBehavior;
-(void)setNoRotationBehavior:(UIDynamicItemBehavior *)arg1 ;
-(UIDynamicItemBehavior *)noRotationBehavior;
-(void)setMenuVerticalLockAttachment:(UIAttachmentBehavior *)arg1 ;
-(void)setPlatterMenuCollisionBounds:(UICollisionBehavior *)arg1 ;
-(void)setPlatterMenuSlidingAttachmentBehavior:(UIAttachmentBehavior *)arg1 ;
-(UIAttachmentBehavior *)menuVerticalLockAttachment;
-(UICollisionBehavior *)platterMenuCollisionBounds;
-(void)setPlatterItem:(id<UIDynamicItem>)arg1 ;
-(_UIDynamicItemObservingBehavior *)observingBehavior;
-(void)setObservingBehavior:(_UIDynamicItemObservingBehavior *)arg1 ;
-(BOOL)_isPlatterInYLockedPosition;
-(CGPoint)menuCenter;
-(_UIPlatterMenuSnapBehavior *)platterSnapBehavior;
-(void)beginTransitionWithAnimatorUsingBehaviors:(id)arg1 observedItems:(id)arg2 stateIfCompleted:(long long)arg3 ;
-(void)setDidPresentCount:(long long)arg1 ;
-(void)stopObservingBehavior;
-(BOOL)isCurrentlyUnderDirectManipulation;
-(double)leadingSwipeEdgeMultiplier;
-(double)trailingSwipeEdgeMultiplier;
-(CGPoint)centerForCurrentPlatterPosition;
-(BOOL)isDefaultAnimatorBehavior:(id)arg1 ;
-(void)setLeadingSwipeEdgeMultiplier:(double)arg1 ;
-(void)setTrailingSwipeEdgeMultiplier:(double)arg1 ;
-(void)panningTransformer:(id)arg1 didBeginPanToTransformedPosition:(CGPoint)arg2 ;
-(void)panningTransformer:(id)arg1 didPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 touchPosition:(CGPoint)arg4 velocity:(CGVector)arg5 didChangeAxis:(BOOL)arg6 axisLock:(int)arg7 ;
-(void)panningTransformer:(id)arg1 didEndPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 velocity:(CGVector)arg4 ;
-(void)panningTransformer:(id)arg1 didEnterTransitionNotchForTransformedPosition:(CGPoint)arg2 ;
-(id)initWithContainerView:(id)arg1 platterView:(id)arg2 menuView:(id)arg3 delegate:(id)arg4 ;
-(CGVector)currentTranslation;
-(CGVector)currentVelocity;
-(void)didBeginPanningWithPoint:(CGPoint)arg1 ;
-(void)didPanWithPoint:(CGPoint)arg1 ;
-(void)didEndPanningWithPoint:(CGPoint)arg1 ;
-(void)toggleAnimatorDebugState;
-(BOOL)isMenuPresented;
-(BOOL)isMenuPresenting;
-(BOOL)isSelectingSwipeAction;
-(BOOL)platterPanned;
-(void)_beginInYLockedStatePresented;
-(void)_animateToPlatterPresentedWithVelocity:(CGVector)arg1 ;
-(void)_animateToPlatterDismissedWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasBeenPresented;
-(CGPoint)platterCenter;
-(void)setLeadingSwipeActionViewSelected:(BOOL)arg1 ;
-(void)setTrailingSwipeActionViewSelected:(BOOL)arg1 ;
-(BOOL)leadingSwipeActionViewSelected;
-(BOOL)trailingSwipeActionViewSelected;
-(void)setPlatterView:(UIView *)arg1 ;
-(void)setMenuView:(UIView *)arg1 ;
-(void)setPanningLockTransformer:(_UIPlatterMenuPanningTransformer *)arg1 ;
-(CGPoint)initialTouchPoint;
@end

