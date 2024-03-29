/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol TVHKAccountSetupViewControllerDelegate;
@interface TVHKAccountSetupViewController : UIViewController {

	BOOL _authenticationInProgress;
	id<TVHKAccountSetupViewControllerDelegate> _delegate;

}

@property (assign,getter=isAuthenticationInProgress,nonatomic) BOOL authenticationInProgress;              //@synthesize authenticationInProgress=_authenticationInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<TVHKAccountSetupViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(void)_handleApplicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_showSetupUI;
-(void)_showShouldUseAccountDialog:(id)arg1 ;
-(void)_showLoginWithAccount:(id)arg1 ;
-(BOOL)isAuthenticationInProgress;
-(void)setAuthenticationInProgress:(BOOL)arg1 ;
-(void)_enableHomeSharingWithAccountName:(id)arg1 password:(id)arg2 ;
-(void)_notifyDidCancel;
-(void)_presentError;
-(void)_notifyDidSucceedWithAccountName:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TVHKAccountSetupViewControllerDelegate>)arg1 ;
-(id<TVHKAccountSetupViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
@end

