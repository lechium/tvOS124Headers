/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol AKSignInViewControllerDelegate;
@class AKAppleIDAuthenticationController, AKAppleIDAuthenticationInAppContext;

@interface AKBaseSignInViewController : UIViewController {

	AKAppleIDAuthenticationController* _authenticationController;
	BOOL _usesDarkMode;
	BOOL _authInProgress;
	AKAppleIDAuthenticationInAppContext* _context;
	id<AKSignInViewControllerDelegate> _delegate;

}

@property (assign,getter=isAuthInProgress,nonatomic) BOOL authInProgress;                       //@synthesize authInProgress=_authInProgress - In the implementation block
@property (assign,nonatomic) BOOL usesDarkMode;                                                 //@synthesize usesDarkMode=_usesDarkMode - In the implementation block
@property (retain) AKAppleIDAuthenticationInAppContext * context;                               //@synthesize context=_context - In the implementation block
@property (__weak) id<AKSignInViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) AKAppleIDAuthenticationController * authenticationController; 
-(AKAppleIDAuthenticationController *)authenticationController;
-(id)_initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_isAccountModificationRestricted;
-(BOOL)_isSignInAllowed;
-(void)_startBusyWorkUI;
-(void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)arg1 withUsername:(id)arg2 password:(id)arg3 ;
-(void)_hidebusyWorkUI;
-(void)_setPasswordFieldHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUsesDarkMode:(BOOL)arg1 ;
-(BOOL)usesDarkMode;
-(void)_setPasswordFieldHiddenIfNeeded;
-(BOOL)isAuthInProgress;
-(BOOL)_canBeginAuthenticationWithOption:(unsigned long long)arg1 ;
-(void)setAuthInProgress:(BOOL)arg1 ;
-(void)_provideDelegateWithAuthResults:(id)arg1 error:(id)arg2 ;
-(id)_initWithAuthController:(id)arg1 ;
-(void)setDelegate:(id<AKSignInViewControllerDelegate>)arg1 ;
-(id<AKSignInViewControllerDelegate>)delegate;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

