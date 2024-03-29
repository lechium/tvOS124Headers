//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, PBRemoteViewController, TVSStateMachine;

@interface PBNowPlayingManager : NSObject
{
    _Bool _nowPlayingAppFocused;	// 8 = 0x8
    _Bool _systemNowPlayingActive;	// 9 = 0x9
    NSMutableArray *_pendingNowPlayingRequests;	// 16 = 0x10
    TVSStateMachine *_nowPlayingStateMachine;	// 24 = 0x18
    PBRemoteViewController *_nowPlayingViewController;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100088620
@property(retain, nonatomic) PBRemoteViewController *nowPlayingViewController; // @synthesize nowPlayingViewController=_nowPlayingViewController;
@property(readonly, nonatomic) TVSStateMachine *nowPlayingStateMachine; // @synthesize nowPlayingStateMachine=_nowPlayingStateMachine;
@property(readonly, nonatomic) NSMutableArray *pendingNowPlayingRequests; // @synthesize pendingNowPlayingRequests=_pendingNowPlayingRequests;
@property(nonatomic, getter=isSystemNowPlayingActive) _Bool systemNowPlayingActive; // @synthesize systemNowPlayingActive=_systemNowPlayingActive;
@property(readonly, nonatomic) _Bool nowPlayingAppFocused; // @synthesize nowPlayingAppFocused=_nowPlayingAppFocused;
- (void).cxx_destruct;	// IMP=0x000000010008acd8
- (void)_nowPlayingDismissedRemotely;	// IMP=0x000000010008ab60
- (_Bool)_sendFocusedAppMessagePresentNowPlayingUI;	// IMP=0x000000010008aad0
- (_Bool)_launchNowPlayingApp;	// IMP=0x000000010008a9c0
- (void)_getNowPlayingViewControllerClassName:(id *)arg1 serviceIdentifier:(id *)arg2 preferredBundleID:(id)arg3;	// IMP=0x000000010008a594
- (_Bool)_nowPlayingViewControllerWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008a3dc
- (void)_initializeNowPlayingStateMachine;	// IMP=0x0000000100088d44
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100088c80
- (_Bool)dismissNowPlaying;	// IMP=0x0000000100088b98
- (void)activateNowPlayingForReason:(unsigned long long)arg1 options:(id)arg2;	// IMP=0x0000000100088a38
- (void)_updateNowPlayingAppFocused;	// IMP=0x0000000100088880
- (void)startObservingFocusedProcess;	// IMP=0x0000000100088774
- (id)init;	// IMP=0x00000001000886d4

@end

