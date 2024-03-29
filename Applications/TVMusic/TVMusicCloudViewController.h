//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVSignInLandingViewDelegate.h"

@class NSString, TVMusicCloudProgressView, TVMusicLibraryManager, TVMusicLibraryTopMenuViewController, TVSStateMachine, TVSignInLandingView, UIActivityIndicatorView, UIView;

@interface TVMusicCloudViewController : UIViewController <TVSignInLandingViewDelegate>
{
    _Bool _viewVisible;	// 8 = 0x8
    TVSStateMachine *_stateMachine;	// 16 = 0x10
    TVMusicLibraryTopMenuViewController *_topMenuViewController;	// 24 = 0x18
    TVMusicCloudProgressView *_cloudProgressView;	// 32 = 0x20
    UIActivityIndicatorView *_activityIndicatorView;	// 40 = 0x28
    TVSignInLandingView *_loginPromptView;	// 48 = 0x30
    UIView *_errorMessageView;	// 56 = 0x38
    UIView *_noMusicView;	// 64 = 0x40
    UIView *_currentDisplayedView;	// 72 = 0x48
    TVMusicLibraryManager *_libraryManager;	// 80 = 0x50
}

+ (void)initialize;	// IMP=0x0000000100004a38
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(retain, nonatomic) TVMusicLibraryManager *libraryManager; // @synthesize libraryManager=_libraryManager;
@property(nonatomic) __weak UIView *currentDisplayedView; // @synthesize currentDisplayedView=_currentDisplayedView;
@property(retain, nonatomic) UIView *noMusicView; // @synthesize noMusicView=_noMusicView;
@property(retain, nonatomic) UIView *errorMessageView; // @synthesize errorMessageView=_errorMessageView;
@property(retain, nonatomic) TVSignInLandingView *loginPromptView; // @synthesize loginPromptView=_loginPromptView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) TVMusicCloudProgressView *cloudProgressView; // @synthesize cloudProgressView=_cloudProgressView;
@property(retain, nonatomic) TVMusicLibraryTopMenuViewController *topMenuViewController; // @synthesize topMenuViewController=_topMenuViewController;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void).cxx_destruct;	// IMP=0x000000010000880c
- (void)_libraryDidUpdate:(id)arg1;	// IMP=0x00000001000085d4
- (void)_musicLibrarySyncProgress:(id)arg1;	// IMP=0x0000000100008504
- (void)_musicLibraryStateChanged:(id)arg1;	// IMP=0x00000001000082c8
- (void)_appDidBecomeActiveNotification:(id)arg1;	// IMP=0x00000001000082a8
- (void)authenticateUserOnSelectSignIn;	// IMP=0x0000000100008288
- (void)_updateTopMenu;	// IMP=0x0000000100007ea4
- (void)_updateUIForStyle:(long long)arg1;	// IMP=0x0000000100007d3c
- (void)_registerStateMachineHandlers;	// IMP=0x0000000100007440
- (void)_removeCurrentView;	// IMP=0x00000001000073cc
- (void)_showSyncingView;	// IMP=0x0000000100007308
- (void)_clickedErrorRetryButton:(id)arg1;	// IMP=0x0000000100007244
- (void)_removeErrorMessageView;	// IMP=0x0000000100007134
- (void)_showErrorView;	// IMP=0x0000000100006a9c
- (void)_removeWaitingView;	// IMP=0x000000010000698c
- (void)_showWaitingView;	// IMP=0x0000000100006668
- (void)_removeLoginPromptView;	// IMP=0x0000000100006528
- (void)_showLoginPromptView;	// IMP=0x000000010000626c
- (id)_menuItems;	// IMP=0x0000000100005f8c
- (void)_showAuthenticationDialog;	// IMP=0x0000000100005d00
- (void)_removeTopMenu;	// IMP=0x0000000100005bc4
- (void)_setScreenSaverEnabledForCloudLibrary;	// IMP=0x0000000100005978
- (void)_removeNoMusicView;	// IMP=0x0000000100005868
- (void)_showNoMusicView;	// IMP=0x00000001000055fc
- (void)_removeCloudProgressView;	// IMP=0x00000001000054ec
- (void)_showCloudProgressView;	// IMP=0x0000000100005320
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000051e4
- (id)preferredFocusEnvironments;	// IMP=0x0000000100005110
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010000503c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100004fe8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100004e40
- (void)viewDidLoad;	// IMP=0x0000000100004c48
- (void)dealloc;	// IMP=0x0000000100004bd0
- (id)init;	// IMP=0x0000000100004a6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

