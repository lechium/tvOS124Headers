//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIApplicationDelegate.h"

@class NSString, PREStackViewController, UIViewController, UIWindow;

@interface PREAppDelegate : UIResponder <UIApplicationDelegate>
{
    UIWindow *_window;	// 8 = 0x8
    UIViewController *_mainViewController;	// 16 = 0x10
    PREStackViewController *_stackViewController;	// 24 = 0x18
}

+ (id)sharedAppDelegate;	// IMP=0x0000000100005a68
@property(retain, nonatomic) PREStackViewController *stackViewController; // @synthesize stackViewController=_stackViewController;
@property(retain, nonatomic) UIViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x00000001000068ac
- (void)_clearBootCount;	// IMP=0x0000000100006614
- (void)_resetIdleTimerForReason:(id)arg1;	// IMP=0x000000010000651c
- (void)_menuHomeButtonTriplePressUp:(id)arg1;	// IMP=0x0000000100006488
- (void)_setupButtonRecognition;	// IMP=0x0000000100006320
- (void)_setMainViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100006224
- (void)_setMainViewController:(id)arg1;	// IMP=0x00000001000061a4
- (void)failedBootCountObliterate;	// IMP=0x0000000100005fac
- (void)clearFailedBootCountAndRestart;	// IMP=0x0000000100005ef0
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100005e98
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100005e94
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100005e90
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100005e8c
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100005e88
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100005ac4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

