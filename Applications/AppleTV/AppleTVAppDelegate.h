//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "TVApplicationControllerPrivateDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "VUIApplicationDelegate.h"
#import "_TVInterfaceCreatingPrivate.h"

@class ATAOpenURLController, ATAParsedOpenURL, ATATabBarController, BKSProcessAssertion, NSArray, NSDictionary, NSString, TVApplicationController, UIWindow, VUIBootURLController, VUINavigateToUpNextHandler, VUIStateMachine;

@interface AppleTVAppDelegate : UIResponder <_TVInterfaceCreatingPrivate, TVApplicationControllerPrivateDelegate, UIGestureRecognizerDelegate, VUIApplicationDelegate>
{
    _Bool _enablePortraitLock;	// 8 = 0x8
    _Bool _shouldTerminateOnEnterBackground;	// 9 = 0x9
    _Bool _overrideOrientation;	// 10 = 0xa
    _Bool _debugGestureSetupDone;	// 11 = 0xb
    UIWindow *_window;	// 16 = 0x10
    TVApplicationController *_appController;	// 24 = 0x18
    BKSProcessAssertion *_launchAssertion;	// 32 = 0x20
    NSDictionary *_launchOptions;	// 40 = 0x28
    ATAParsedOpenURL *_deferredParsedOpenURL;	// 48 = 0x30
    ATAOpenURLController *_openURLController;	// 56 = 0x38
    VUIBootURLController *_bootURLController;	// 64 = 0x40
    ATATabBarController *_tabBarController;	// 72 = 0x48
    NSArray *_tabBarItems;	// 80 = 0x50
    VUIStateMachine *_stateMachine;	// 88 = 0x58
    VUINavigateToUpNextHandler *_navigateToUpNextHandler;	// 96 = 0x60
}

@property(retain, nonatomic) VUINavigateToUpNextHandler *navigateToUpNextHandler; // @synthesize navigateToUpNextHandler=_navigateToUpNextHandler;
@property(nonatomic) _Bool debugGestureSetupDone; // @synthesize debugGestureSetupDone=_debugGestureSetupDone;
@property(nonatomic) _Bool overrideOrientation; // @synthesize overrideOrientation=_overrideOrientation;
@property(retain, nonatomic) VUIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(retain, nonatomic) ATATabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) VUIBootURLController *bootURLController; // @synthesize bootURLController=_bootURLController;
@property(retain, nonatomic) ATAOpenURLController *openURLController; // @synthesize openURLController=_openURLController;
@property(retain, nonatomic) ATAParsedOpenURL *deferredParsedOpenURL; // @synthesize deferredParsedOpenURL=_deferredParsedOpenURL;
@property(copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(nonatomic) _Bool shouldTerminateOnEnterBackground; // @synthesize shouldTerminateOnEnterBackground=_shouldTerminateOnEnterBackground;
@property(retain, nonatomic) BKSProcessAssertion *launchAssertion; // @synthesize launchAssertion=_launchAssertion;
@property(retain, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x000000010000aeec
- (void)_hideLoadingView;	// IMP=0x000000010000acd0
- (void)_showLoadingView;	// IMP=0x000000010000ac70
- (void)_refreshTabBarItems;	// IMP=0x000000010000ab1c
- (void)_accountsChanged:(id)arg1;	// IMP=0x000000010000a7fc
- (void)_presetErrorDialogWithNetworkAvailable:(_Bool)arg1;	// IMP=0x000000010000a4a8
- (void)_handleDeferredParsedOpenURLIfNeeded;	// IMP=0x000000010000a444
- (void)_resetDeferredParsedOpenURL;	// IMP=0x000000010000a434
- (void)_handleParsedOpenURL:(id)arg1;	// IMP=0x0000000100009f60
- (void)_releaseLaunchAssertion;	// IMP=0x0000000100009f08
- (void)_acquireLaunchAssertion;	// IMP=0x0000000100009e80
- (void)_stopApplicationController;	// IMP=0x0000000100009de0
- (void)_startApplicationControllerWithBootURL:(id)arg1;	// IMP=0x00000001000099e4
- (void)_fetchApplicationControllerBootURL;	// IMP=0x0000000100009554
- (void)_fetchFullFeatureFlag:(id)arg1;	// IMP=0x00000001000092d4
- (void)_resetJavascriptState;	// IMP=0x0000000100009270
- (void)_showJavascriptUnavailableUIWithNetworkAvailable:(_Bool)arg1;	// IMP=0x0000000100009168
- (void)_updateTabControllerWithTabBarItems:(id)arg1 setSelectedIndexFromDefaults:(_Bool)arg2;	// IMP=0x0000000100008fdc
- (void)_finishJavascriptSetupWithTabBarItems:(id)arg1 setSelectedIndexFromDefaults:(_Bool)arg2;	// IMP=0x0000000100008dfc
- (void)_startJavascriptSetup;	// IMP=0x0000000100008dc8
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100008dc0
- (void)_handleDebugUIGesture:(id)arg1;	// IMP=0x0000000100008cf0
- (void)_handleNetworkReachabilityDidChangeNotification:(id)arg1;	// IMP=0x0000000100008ba0
- (void)_initializePlayer;	// IMP=0x0000000100008944
- (_Bool)_isActiveMediaLibraryTheDeviceMediaLibrary;	// IMP=0x00000001000088b4
- (void)_initializeMediaLibrary;	// IMP=0x00000001000088a8
- (void)_updateDeviceMediaLibraryFromCloud;	// IMP=0x000000010000883c
- (void)_syncBookmarkServiceIfRequired;	// IMP=0x00000001000087c8
- (void)_initializeBookmarkService;	// IMP=0x0000000100008738
- (void)_registerStateMachineHandlers;	// IMP=0x0000000100006210
- (void)_configureStateMachine;	// IMP=0x0000000100006174
- (void)_javascriptSetTabBarItems:(id)arg1;	// IMP=0x0000000100005f90
- (id)_styleSheetURLForTemplate:(id)arg1;	// IMP=0x0000000100005f0c
- (id)_imageProxyForIKElement:(id)arg1 withLayout:(id)arg2;	// IMP=0x0000000100005e6c
- (void)_parseAppConfigurationForIKElement:(id)arg1;	// IMP=0x0000000100005dfc
- (Class)_collectionViewCellClassForIKElement:(id)arg1;	// IMP=0x0000000100005d78
- (id)_viewControllerForIKElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x0000000100005cd8
- (id)_viewForIKElement:(id)arg1 existingView:(id)arg2;	// IMP=0x0000000100005c38
- (id)imageForResource:(id)arg1;	// IMP=0x0000000100005bb4
- (id)URLForResource:(id)arg1;	// IMP=0x0000000100005b30
- (id)rootViewControllerForAppController:(id)arg1;	// IMP=0x00000001000059e4
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000100005844
- (void)appController:(id)arg1 didStopWithOptions:(id)arg2;	// IMP=0x000000010000574c
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100005654
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010000555c
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;	// IMP=0x0000000100005554
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x000000010000550c
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000001000053b4
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x000000010000532c
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x00000001000052e4
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00000001000052d8
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x000000010000511c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100004da4
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100004ca8
- (_Bool)isDeviceAsleepAndSleptManually:(_Bool *)arg1;	// IMP=0x0000000100004a88
- (void)updateIdleModeVisualEffectsStatus:(_Bool)arg1;	// IMP=0x00000001000049a8
- (void)enablePortraitLock:(_Bool)arg1;	// IMP=0x0000000100004948
- (void)dealloc;	// IMP=0x00000001000048d0
- (id)init;	// IMP=0x0000000100004754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

