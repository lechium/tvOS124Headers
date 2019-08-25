//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DADeviceWithUIDelegate.h"
#import "DKViewControllerDelegate.h"
#import "TVDMainViewDelegate.h"

@class DASessionSettings, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, TVDAppDelegate, TVDMainView, UIVisualEffectView, _UIContentUnavailableView;

@interface TVDViewController : UIViewController <TVDMainViewDelegate, DKViewControllerDelegate, DADeviceWithUIDelegate>
{
    _Bool _termsAndConditionsStarted;	// 8 = 0x8
    id <DADevice> _device;	// 16 = 0x10
    TVDAppDelegate *_appDelegate;	// 24 = 0x18
    TVDMainView *_mainView;	// 32 = 0x20
    _UIContentUnavailableView *_noFreeSpaceView;	// 40 = 0x28
    _UIContentUnavailableView *_failureView;	// 48 = 0x30
    _UIContentUnavailableView *_networkRequiredView;	// 56 = 0x38
    unsigned long long _currentViewControllerState;	// 64 = 0x40
    NSMutableArray *_history;	// 72 = 0x48
    NSMutableSet *_errorsShowing;	// 80 = 0x50
    DASessionSettings *_sessionSettings;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_stagingQueue;	// 96 = 0x60
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stagingQueue; // @synthesize stagingQueue=_stagingQueue;
@property(retain, nonatomic) DASessionSettings *sessionSettings; // @synthesize sessionSettings=_sessionSettings;
@property(retain, nonatomic) NSMutableSet *errorsShowing; // @synthesize errorsShowing=_errorsShowing;
@property(retain, nonatomic) NSMutableArray *history; // @synthesize history=_history;
@property(nonatomic) _Bool termsAndConditionsStarted; // @synthesize termsAndConditionsStarted=_termsAndConditionsStarted;
@property(nonatomic) unsigned long long currentViewControllerState; // @synthesize currentViewControllerState=_currentViewControllerState;
@property(retain, nonatomic) _UIContentUnavailableView *networkRequiredView; // @synthesize networkRequiredView=_networkRequiredView;
@property(retain, nonatomic) _UIContentUnavailableView *failureView; // @synthesize failureView=_failureView;
@property(retain, nonatomic) _UIContentUnavailableView *noFreeSpaceView; // @synthesize noFreeSpaceView=_noFreeSpaceView;
@property(retain, nonatomic) TVDMainView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) TVDAppDelegate *appDelegate; // @synthesize appDelegate=_appDelegate;
@property(retain, nonatomic) id <DADevice> device; // @synthesize device=_device;
- (void).cxx_destruct;	// IMP=0x0000000100016198
- (void)_enqueueUIUpdateWithMinimumExecution:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015e94
- (void)updateViewConstraints;	// IMP=0x0000000100015c10
- (void)setupView;	// IMP=0x0000000100014f84
- (void)showDiagosticsErrorWithReason:(id)arg1;	// IMP=0x0000000100014e70
- (void)openSettings;	// IMP=0x0000000100014df0
- (void)hideEverything;	// IMP=0x0000000100014d3c
- (void)mainViewDidReceiveHistoryAction:(id)arg1;	// IMP=0x0000000100014a04
- (void)mainViewDidReceiveDoneAction:(id)arg1;	// IMP=0x00000001000149c4
- (void)mainViewDidReceiveCloseAction:(id)arg1;	// IMP=0x0000000100014770
- (void)_hideFailure;	// IMP=0x00000001000146cc
- (void)_hideNetworkRequired;	// IMP=0x0000000100014628
- (void)_showNetworkRequired;	// IMP=0x000000010001453c
- (void)_showFailureWithMessage:(id)arg1;	// IMP=0x00000001000143f0
- (void)_updateErrors:(id)arg1;	// IMP=0x0000000100014068
- (void)_updateHistory:(id)arg1;	// IMP=0x0000000100013f14
- (void)_updateSessionSettings:(id)arg1;	// IMP=0x0000000100013db8
- (void)_updateProgress:(id)arg1;	// IMP=0x0000000100013ba0
- (void)_updateTestSuiteName:(id)arg1 description:(id)arg2;	// IMP=0x0000000100013a50
- (void)_inactive;	// IMP=0x000000010001380c
- (void)_idle;	// IMP=0x0000000100013694
- (void)_updatePhase:(long long)arg1;	// IMP=0x0000000100013620
- (void)updateWithInfo:(id)arg1;	// IMP=0x00000001000132ec
- (void)checkForSession;	// IMP=0x000000010001301c
- (void)hideOutOfSpace;	// IMP=0x0000000100012f78
- (void)displayOutOfSpace;	// IMP=0x0000000100012e8c
- (_Bool)checkIfFreeSpaceAvailable;	// IMP=0x0000000100012d6c
- (void)updateViewsIfSpaceAvailable;	// IMP=0x0000000100012cf8
- (unsigned long long)getFreeUserSpaceThreshold;	// IMP=0x0000000100012c20
- (unsigned long long)getFreeSystemSpaceThreshold;	// IMP=0x0000000100012b48
- (void)device:(id)arg1 shouldStartTestWithTestId:(id)arg2 fullscreen:(_Bool)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x0000000100012b38
- (void)diagnosticManager:(id)arg1 dismissViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012ae8
- (void)diagnosticManager:(id)arg1 presentViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012a5c
- (void)didDisagreeToTerms;	// IMP=0x0000000100012a1c
- (void)didAgreeToTerms;	// IMP=0x0000000100012608
- (void)presentSecondaryConsent;	// IMP=0x00000001000123a4
- (void)presentTermsAndConditions;	// IMP=0x000000010001218c
- (id)_preferredFocusedItem;	// IMP=0x0000000100012084
- (id)preferredFocusEnvironments;	// IMP=0x0000000100011fbc
- (void)applicationDidResume;	// IMP=0x0000000100011f6c
- (void)viewDidLoad;	// IMP=0x0000000100011ea4
- (id)init;	// IMP=0x0000000100011d54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIVisualEffectView *view; // @dynamic view;

@end

