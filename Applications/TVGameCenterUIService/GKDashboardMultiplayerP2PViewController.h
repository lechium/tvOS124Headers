//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardMultiplayerViewController.h"

@class GKInvite;

@interface GKDashboardMultiplayerP2PViewController : GKDashboardMultiplayerViewController
{
    _Bool _hosted;	// 8 = 0x8
    id <GKDashboardMultiplayerP2PViewControllerDelegate> _delegateWeak;	// 16 = 0x10
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;	// 24 = 0x18
    long long _mode;	// 32 = 0x20
    GKInvite *_acceptedInvite;	// 40 = 0x28
    double _inviteeConnectionTimeStamp;	// 48 = 0x30
}

@property(nonatomic) double inviteeConnectionTimeStamp; // @synthesize inviteeConnectionTimeStamp=_inviteeConnectionTimeStamp;
@property(copy, nonatomic) GKInvite *acceptedInvite; // @synthesize acceptedInvite=_acceptedInvite;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic, getter=isHosted) _Bool hosted; // @synthesize hosted=_hosted;
- (void)cancelAlertWithoutDelegateCallback;	// IMP=0x000000010002202c
- (void)showAutomatchingErrorAlert;	// IMP=0x0000000100021f4c
- (void)showInviterDisconnectedAlert;	// IMP=0x0000000100021e28
- (void)processStatusUpdateMessageFromBytes:(const char *)arg1 withLength:(unsigned int)arg2;	// IMP=0x00000001000211ec
- (void)sendStatusUpdate;	// IMP=0x0000000100020a74
- (void)playerDisconnected:(id)arg1;	// IMP=0x000000010002092c
- (void)startGameWithDelay;	// IMP=0x0000000100020898
- (void)playerConnected:(id)arg1;	// IMP=0x0000000100020374
- (void)removedPlayer:(id)arg1;	// IMP=0x00000001000202d0
- (void)cancelPendingInvites;	// IMP=0x000000010002013c
- (void)invitePlayers:(id)arg1;	// IMP=0x000000010002004c
- (void)willPresentPlayerPicker:(id)arg1;	// IMP=0x000000010001ffc8
- (void)startGame;	// IMP=0x000000010001fee4
- (void)playNow;	// IMP=0x000000010001fd08
- (void)applicationWillEnterForeground;	// IMP=0x000000010001fbe4
- (void)inviterCancelled;	// IMP=0x000000010001fbd8
- (void)setFailedWithError:(id)arg1;	// IMP=0x000000010001fbcc
- (void)setAutomatchFailedWithError:(id)arg1;	// IMP=0x000000010001fb70
- (void)setInvitesFailedWithError:(id)arg1;	// IMP=0x000000010001fb2c
- (void)setPlayer:(id)arg1 sentData:(id)arg2;	// IMP=0x000000010001f324
- (void)setPlayer:(id)arg1 connected:(_Bool)arg2;	// IMP=0x000000010001f2d0
- (void)setPlayer:(id)arg1 responded:(long long)arg2;	// IMP=0x000000010001f114
- (void)setAutomatchPlayerCount:(long long)arg1;	// IMP=0x000000010001f098
- (void)setExistingPlayers:(id)arg1;	// IMP=0x000000010001ef64
- (_Bool)havePendingPlayers;	// IMP=0x000000010001ef40
- (_Bool)haveInvitedPlayers;	// IMP=0x000000010001ef04
- (void)finishWithError:(id)arg1;	// IMP=0x000000010001ec7c
- (void)cancel;	// IMP=0x000000010001ec08
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010001ea40
- (void)viewDidLoad;	// IMP=0x000000010001e9dc
@property(nonatomic) id <GKDashboardMultiplayerP2PViewControllerDelegate> delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;	// IMP=0x000000010001e93c
- (id)initWithAcceptedInvite:(id)arg1;	// IMP=0x000000010001e810

@end

