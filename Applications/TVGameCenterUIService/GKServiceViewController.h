//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKNavigationController.h"

#import "GKDaemonProxyDataUpdateDelegate.h"
#import "GKDashboardServiceInterface.h"
#import "GKExtensionProtocol.h"

@class GKGame, NSString, UIViewController;

@interface GKServiceViewController : GKNavigationController <GKExtensionProtocol, GKDaemonProxyDataUpdateDelegate, GKDashboardServiceInterface>
{
    _Bool _alwaysShowDoneButton;	// 8 = 0x8
    int _hostPID;	// 12 = 0xc
    GKGame *_game;	// 16 = 0x10
    UIViewController *_privateViewController;	// 24 = 0x18
    double _statusBarHeight;	// 32 = 0x20
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010000bfb8
+ (id)_exportedInterface;	// IMP=0x000000010000bfa4
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property(nonatomic) _Bool alwaysShowDoneButton; // @synthesize alwaysShowDoneButton=_alwaysShowDoneButton;
@property(retain, nonatomic) UIViewController *privateViewController; // @synthesize privateViewController=_privateViewController;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (double)_statusBarHeightForCurrentInterfaceOrientation;	// IMP=0x000000010000f680
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x000000010000f1d0
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000f008
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000ef8c
- (void)_addDoneButtonToViewController:(id)arg1;	// IMP=0x000000010000eec0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010000ec94
- (void)_stopObservingChangesToProperties;	// IMP=0x000000010000eb70
- (void)_startObservingChangesToProperties;	// IMP=0x000000010000e898
- (id)observedKeyPaths;	// IMP=0x000000010000e884
- (void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;	// IMP=0x000000010000e838
- (void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2;	// IMP=0x000000010000e7fc
- (void)performSelectorOnHostController:(SEL)arg1;	// IMP=0x000000010000e7c8
- (void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e7ac
- (void)requestImagesForLeaderboardSetsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e794
- (void)requestDashboardLogoImageWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e77c
- (void)dashboardDidChangeToLeaderboardIdentifier:(id)arg1;	// IMP=0x000000010000e764
- (void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1;	// IMP=0x000000010000e718
- (void)dashboardDidChangeToViewState:(long long)arg1;	// IMP=0x000000010000e6cc
- (void)quitTurnBasedMatch:(id)arg1;	// IMP=0x000000010000e684
- (void)finishWithTurnBasedMatch:(id)arg1;	// IMP=0x000000010000e63c
- (void)finishAndPlayChallenge:(id)arg1;	// IMP=0x000000010000e5f4
- (void)finish;	// IMP=0x000000010000e5e8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010000e1c4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000dde8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000da0c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000d518
- (_Bool)_useBackdropViewForWindowBackground;	// IMP=0x000000010000d510
- (void)resetPrivateViewController;	// IMP=0x000000010000d4b0
- (void)constructPrivateViewController;	// IMP=0x000000010000d114
- (void)presentInitialViewController:(id)arg1;	// IMP=0x000000010000d104
- (void)messageFromClient:(id)arg1;	// IMP=0x000000010000d0ac
- (void)nudge;	// IMP=0x000000010000ce94
- (void)serviceViewControllerCreated:(id)arg1;	// IMP=0x000000010000ce14
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ca10
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c7f8
- (void)donePressed:(id)arg1;	// IMP=0x000000010000c7ec
- (void)cancelServiceViewController;	// IMP=0x000000010000c7b4
- (void)remoteViewControllerDidCancel;	// IMP=0x000000010000c5b8
- (void)remoteViewControllerIsCanceling;	// IMP=0x000000010000c3c0
- (void)remoteViewControllerDidFinish;	// IMP=0x000000010000c1c4
- (void)remoteViewControllerIsFinishing;	// IMP=0x000000010000bfcc
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x000000010000bf98
- (void)dealloc;	// IMP=0x000000010000bef4
- (id)init;	// IMP=0x000000010000bda8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

