/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarContentView.h>
#import <UIKitCore/_UIBarButtonItemViewOwner.h>
#import <UIKitCore/_UINavigationBarTitleViewDataSource.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant.h>
#import <UIKitCore/_UIButtonBarButtonChangeObserver.h>

@protocol _UINavigationBarContentViewDelegate;
@class _UINavigationBarContentViewLayout, _UINavigationBarTransitionContext, UIImage, NSMutableArray, UIBarButtonItem, NSArray, NSString, UIView, NSDictionary, UIColor;

@interface _UINavigationBarContentView : _UIBarContentView <_UIBarButtonItemViewOwner, _UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant, _UIButtonBarButtonChangeObserver> {

	_UINavigationBarContentViewLayout* _layout;
	_UINavigationBarTransitionContext* _transitionContext;
	BOOL _deferResolvedSizeChange;
	BOOL _outstandingDeferredResolvedSizeChange;
	UIImage* _backIndicatorImage;
	BOOL _needsBackButtonUpdate;
	double _backButtonMargin;
	double _backButtonMaximumWidth;
	BOOL _hitTestingExtensionsAreValid;
	BOOL _isHidingBackButton;
	BOOL _isShowingBackButton;
	BOOL _isHidingLeadingBar;
	NSMutableArray* _currentAnimations;
	NSMutableArray* _currentCompletions;
	BOOL _backButtonHidden;
	BOOL _leadingItemsSupplementBackItem;
	long long _barMetrics;
	id<_UINavigationBarContentViewDelegate> _delegate;
	UIBarButtonItem* _backButtonItem;
	NSArray* _leadingBarButtonItems;
	NSArray* _trailingBarButtonItems;
	NSString* _title;
	UIView* _titleView;
	double _titleViewAlpha;
	NSDictionary* _titleAttributes;
	double _titleVerticalPositionAdjustment;
	UIColor* _textColor;
	double _overrideSize;
	long long _requestedContentSize;

}

@property (assign,nonatomic,__weak) id<_UINavigationBarContentViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backButtonItem;                                              //@synthesize backButtonItem=_backButtonItem - In the implementation block
@property (assign,nonatomic) BOOL backButtonHidden;                                                         //@synthesize backButtonHidden=_backButtonHidden - In the implementation block
@property (assign,nonatomic) double backButtonMargin; 
@property (nonatomic,copy) NSArray * leadingBarButtonItems;                                                 //@synthesize leadingBarButtonItems=_leadingBarButtonItems - In the implementation block
@property (assign,nonatomic) BOOL leadingItemsSupplementBackItem;                                           //@synthesize leadingItemsSupplementBackItem=_leadingItemsSupplementBackItem - In the implementation block
@property (nonatomic,copy) NSArray * trailingBarButtonItems;                                                //@synthesize trailingBarButtonItems=_trailingBarButtonItems - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * titleView;                                                            //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) double titleViewAlpha;                                                         //@synthesize titleViewAlpha=_titleViewAlpha - In the implementation block
@property (nonatomic,copy) NSDictionary * titleAttributes;                                                  //@synthesize titleAttributes=_titleAttributes - In the implementation block
@property (assign,nonatomic) double titleVerticalPositionAdjustment;                                        //@synthesize titleVerticalPositionAdjustment=_titleVerticalPositionAdjustment - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                                             //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double overrideSize;                                                           //@synthesize overrideSize=_overrideSize - In the implementation block
@property (nonatomic,readonly) UIView * accessibilityTitleView; 
@property (nonatomic,readonly) UIView * accessibilityBackButtonView; 
@property (assign,nonatomic) long long requestedContentSize;                                                //@synthesize requestedContentSize=_requestedContentSize - In the implementation block
@property (nonatomic,readonly) long long currentContentSize; 
@property (nonatomic,readonly) double currentHeight; 
@property (assign,nonatomic) long long barMetrics;                                                          //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,setter=_setBackButtonMaximumWidth:,nonatomic) double backButtonMaximumWidth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<_UINavigationBarContentViewDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<_UINavigationBarContentViewDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(void)layoutMarginsDidChange;
-(CGSize)intrinsicContentSize;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(void)_appearanceChanged;
-(BOOL)isRTL;
-(long long)barType;
-(id)defaultFontDescriptor;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1 ;
-(long long)barMetrics;
-(id)backIndicatorImage;
-(double)backButtonMargin;
-(double)defaultEdgeSpacing;
-(double)backButtonMaximumWidth;
-(void)backButtonTitleDidChange;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackIndicatorImage:(id)arg1 ;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(long long)currentContentSize;
-(id)_accessibility_HUDItemForPoint:(CGPoint)arg1 ;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(CGPoint)arg1 ;
-(void)setRequestedContentSize:(long long)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(long long)requestedContentSize;
-(void)titleViewChangedUnderlayContent:(id)arg1 ;
-(void)titleViewChangedHeight:(id)arg1 ;
-(void)titleViewChangedMaximumBackButtonWidth:(id)arg1 ;
-(void)titleViewChangedStandardDisplayItems:(id)arg1 ;
-(void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2 ;
-(void)titleViewChangedPreferredDisplaySize:(id)arg1 ;
-(UIColor *)textColor;
-(long long)_currentContentSize;
-(void)_updateLayoutMarginsForLayout:(id)arg1 ;
-(id)_newLayout;
-(double)currentHeight;
-(void)_addCoordinatedAnimation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)__backButtonAction:(id)arg1 ;
-(void)setNeedsBackButtonUpdate;
-(void)_clearAllAnimations;
-(id)_defaultInlineTitleAttributes;
-(void)_applyTitleAttributesToLabel:(id)arg1 withString:(id)arg2 ;
-(double)titleVerticalPositionAdjustment;
-(BOOL)__setupTitleViewCanSkipUpdates;
-(void)_setBackButtonMaximumWidth:(double)arg1 ;
-(void)setTitleVerticalPositionAdjustment:(double)arg1 ;
-(double)_intrinsicHeight;
-(void)setOverrideSize:(double)arg1 ;
-(void)_setupTitleViewAnimated:(BOOL)arg1 ;
-(void)_setupBackButtonAnimated:(BOOL)arg1 ;
-(void)_setupLeadingButtonBarAnimated:(BOOL)arg1 ;
-(void)_setupTrailingButtonBarAnimated:(BOOL)arg1 ;
-(void)_runAllScheduledAnimations:(BOOL)arg1 ;
-(void)updateContentAnimated:(BOOL)arg1 ;
-(void)updateContent;
-(CGRect)_overlayRectForView:(id)arg1 inTargetView:(id)arg2 ;
-(id)_accessibility_barButtonItemAtPoint:(CGPoint)arg1 ;
-(void)recordFromStateForTransition:(id)arg1 ;
-(void)recordToStateForTransition:(id)arg1 ;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg1 ;
-(void)adoptFinalStateFromTransition:(id)arg1 transitionCompleted:(BOOL)arg2 ;
-(void)setBarMetrics:(long long)arg1 ;
-(void)setBackButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setTitleAttributes:(NSDictionary *)arg1 ;
-(void)setTitleViewAlpha:(double)arg1 ;
-(void)resolvedSizeDidChange;
-(UIView *)accessibilityTitleView;
-(UIView *)accessibilityBackButtonView;
-(void)setBackButtonMargin:(double)arg1 ;
-(UIBarButtonItem *)backButtonItem;
-(BOOL)backButtonHidden;
-(void)setBackButtonHidden:(BOOL)arg1 ;
-(NSArray *)leadingBarButtonItems;
-(void)setLeadingBarButtonItems:(NSArray *)arg1 ;
-(BOOL)leadingItemsSupplementBackItem;
-(void)setLeadingItemsSupplementBackItem:(BOOL)arg1 ;
-(NSArray *)trailingBarButtonItems;
-(void)setTrailingBarButtonItems:(NSArray *)arg1 ;
-(double)titleViewAlpha;
-(NSDictionary *)titleAttributes;
-(double)overrideSize;
@end
