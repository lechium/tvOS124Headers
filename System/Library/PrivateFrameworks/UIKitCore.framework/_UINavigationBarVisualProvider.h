/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UINavigationBar, _UINavigationBarItemStack, NSDictionary, _UINavigationControllerRefreshControlHost;

@interface _UINavigationBarVisualProvider : NSObject {

	UINavigationBar* _navigationBar;
	_UINavigationBarItemStack* _stack;
	NSDictionary* _overrides;
	BOOL _usesLegacyUI;
	_UINavigationControllerRefreshControlHost* _refreshControlHost;

}

@property (nonatomic,readonly) UINavigationBar * navigationBar;                                           //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) _UINavigationBarItemStack * stack;                                           //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) long long currentContentSize; 
@property (nonatomic,retain) _UINavigationControllerRefreshControlHost * refreshControlHost;              //@synthesize refreshControlHost=_refreshControlHost - In the implementation block
@property (nonatomic,readonly) BOOL wantsLargeTitleDisplayed; 
+(BOOL)supportsRefreshControlHosting;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(id)preferredFocusedView;
-(CGSize)intrinsicContentSize;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)safeAreaInsetsDidChange;
-(UINavigationBar *)navigationBar;
-(void)_updateBackground;
-(id)_shim_compatibilityBackgroundView;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(double)_shim_shadowAlpha;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(void)_updateTitleViewForOpacityChange;
-(BOOL)_shim_disableBlurTinting;
-(void)_shim_setDisableBlurTinting:(BOOL)arg1 ;
-(double)_shim_backgroundHeight;
-(id)_shim_backdropGroupName;
-(void)_shim_setBackdropGroupName:(id)arg1 ;
-(void)changeAppearance;
-(id)_shim_userContentGuide;
-(void)teardown;
-(void)_shim_setUseContentView:(BOOL)arg1 ;
-(void)prepare;
-(void)setStack:(_UINavigationBarItemStack *)arg1 ;
-(void)updateTopNavigationItemAnimated:(BOOL)arg1 ;
-(void)updateTopNavigationItemTitleView;
-(id)_shim_promptText;
-(id)initWithNavigationBar:(id)arg1 ;
-(id)_shim_contentView;
-(void)setupTopNavigationItem;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)prepareForPush;
-(void)pushAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareForPop;
-(void)popAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)changeLayout;
-(long long)currentContentSize;
-(BOOL)shouldUseHeightRangeFittingWidth;
-(CGPoint)heightRangeFittingWidth:(double)arg1 ;
-(BOOL)canHandleStatusBarTouchAtPoint:(CGPoint)arg1 ;
-(id)_shim_customHitTest:(CGPoint)arg1 forView:(id)arg2 ;
-(void)_shim_pressBackIndicator:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(void)_shim_popForCarplayPressAtFakePoint:(CGPoint)arg1 ;
-(BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)arg1 ;
-(void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_updateBackIndicator;
-(BOOL)_shim_throwConstraintExceptions;
-(long long)statusBarStyle;
-(void)setRefreshControlHost:(_UINavigationControllerRefreshControlHost *)arg1 ;
-(_UINavigationControllerRefreshControlHost *)refreshControlHost;
-(BOOL)wantsLargeTitleDisplayed;
-(void)animateForSearchPresentation:(BOOL)arg1 ;
-(BOOL)_shim_34415965;
-(void)_shim_setPromptText:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBackButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)_shim_backgroundAlpha;
-(void)recordBarSize:(CGSize)arg1 ;
-(void)barSizeChanged;
-(void)_shim_updateBackgroundViewIgnoringFlag;
-(id)_shim_displayViewsIncludingHiddenBackButtonViews:(BOOL)arg1 ;
-(void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2 ;
-(void)_shim_30244716;
-(long long)_shim_backdropStyle;
-(void)intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3 ;
-(id)_accessibility_HUDItemForPoint:(CGPoint)arg1 ;
-(id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(CGPoint)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(/*^block*/id)arg2 ;
-(_UINavigationBarItemStack *)stack;
-(void)stackDidChangeFrom:(id)arg1 ;
-(id)_shim_layoutView;
-(void)_shim_updateBackdropView;
-(id)_shim_backIndicatorView;
@end

