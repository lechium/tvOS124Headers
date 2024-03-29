/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@class UIDimmingView, UIDropShadowView;

@interface _UIFormSheetPresentationController : UIPresentationController {

	UIDimmingView* _dimmingView;
	UIDropShadowView* _dropShadowView;
	BOOL _layoutStateShouldAvoidKeyboard;
	double _keyboardYOrigin;
	BOOL _shouldDismissWhenTappedOutside;

}

@property (assign,setter=_setShouldDismissWhenTappedOutside:,getter=_shouldDismissWhenTappedOutside,nonatomic) BOOL shouldDismissWhenTappedOutside;              //@synthesize shouldDismissWhenTappedOutside=_shouldDismissWhenTappedOutside - In the implementation block
-(long long)presentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)containerViewDidLayoutSubviews;
-(id)presentedView;
-(void)containerViewWillLayoutSubviews;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)shouldRemovePresentersView;
-(void)presentationTransitionWillBegin;
-(BOOL)_shouldOccludeDuringPresentation;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)dismissalTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(id)_presentationView;
-(void)_transitionFromWillBegin;
-(void)_transitionFromDidEnd;
-(void)_transitionToWillBegin;
-(void)_transitionToDidEnd;
-(long long)_defaultPresentationStyleForTraitCollection:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(unsigned long long)dropShadowAutoresizingMask;
-(BOOL)shouldSubscribeToKeyboardNotifications;
-(void)_changeLayoutModeToAvoidKeyboard:(BOOL)arg1 withOrigin:(double)arg2 ;
-(BOOL)_shouldHideBottomCorner;
-(double)_dropShadowCornerRadius;
-(id)dropShadowView;
-(BOOL)_shouldDismissWhenTappedOutside;
-(void)_setShouldDismissWhenTappedOutside:(BOOL)arg1 ;
@end

