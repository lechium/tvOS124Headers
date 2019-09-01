//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDXPCInterface-Protocol.h"
#import "UIRemoteTextEditing-Protocol.h"

@class NSMutableSet, NSString, NSUUID, NSXPCConnection, SDXPCServer, SFCoordinatedAlertRequest, SFDeviceDiscovery, SFRemoteAutoFillSessionHelper, SFRemoteInteractionSession, SFService, SFSession, SFUserAlert;

__attribute__((visibility("hidden")))
@interface SDXPCConnection : NSObject <SDXPCInterface, UIRemoteTextEditing>
{
    SFRemoteAutoFillSessionHelper *_afsHelper;	// 8 = 0x8
    NSMutableSet *_assertions;	// 16 = 0x10
    SFCoordinatedAlertRequest *_caRequest;	// 24 = 0x18
    SFDeviceDiscovery *_ddRequest;	// 32 = 0x20
    _Bool _diagnosticBLEModeStarted;	// 40 = 0x28
    _Bool _entitledBluetoothUserInteraction;	// 41 = 0x29
    _Bool _entitledClient;	// 42 = 0x2a
    _Bool _entitledCoordinatedAlerts;	// 43 = 0x2b
    _Bool _entitledDeviceDiscovery;	// 44 = 0x2c
    _Bool _entitledDiagnostics;	// 45 = 0x2d
    _Bool _entitledRemoteInteractionSession;	// 46 = 0x2e
    _Bool _entitledService;	// 47 = 0x2f
    _Bool _entitledSession;	// 48 = 0x30
    SFUserAlert *_notification;	// 56 = 0x38
    NSString *_preventExitForLocaleReason;	// 64 = 0x40
    NSUUID *_remoteTextSessionID;	// 72 = 0x48
    SFRemoteInteractionSession *_riSession;	// 80 = 0x50
    SFService *_service;	// 88 = 0x58
    SFSession *_session;	// 96 = 0x60
    SDXPCServer *_server;	// 104 = 0x68
    _Bool _unlockTestClientStarted;	// 112 = 0x70
    NSXPCConnection *_xpcCnx;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001001d6a1c
- (void)remoteTextEditingSessionWithID:(id)arg1 attributesDidChange:(id)arg2;	// IMP=0x00000001001d692c
- (void)remoteTextEditingSessionWithID:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000001001d67c4
- (void)endRemoteTextEditingSessionWithID:(id)arg1;	// IMP=0x00000001001d666c
- (void)beginRemoteTextEditingSessionWithID:(id)arg1 attributes:(id)arg2 initialText:(id)arg3;	// IMP=0x00000001001d64c0
- (void)userNotificationPresent:(id)arg1;	// IMP=0x00000001001d6448
- (void)pairTLSClient:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d61e4
- (void)sessionSendTLSEncryptedObject:(id)arg1;	// IMP=0x00000001001d60b4
- (void)sessionSendResponse:(id)arg1;	// IMP=0x00000001001d5f58
- (void)sessionSendRequest:(id)arg1;	// IMP=0x00000001001d5dfc
- (void)sessionSendFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x00000001001d5c00
- (void)sessionSendEvent:(id)arg1;	// IMP=0x00000001001d5aa4
- (void)sessionReceivedTLSData:(id)arg1 type:(unsigned char)arg2;	// IMP=0x00000001001d596c
- (void)sessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d5170
- (void)servicePairTLSWithPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d4f54
- (void)serviceSendTLSEncryptedObject:(id)arg1 toPeer:(id)arg2;	// IMP=0x00000001001d4e08
- (void)serviceSendResponse:(id)arg1;	// IMP=0x00000001001d4cc8
- (void)serviceSendRequest:(id)arg1;	// IMP=0x00000001001d4b88
- (void)serviceSendFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;	// IMP=0x00000001001d49c4
- (void)serviceSendEvent:(id)arg1;	// IMP=0x00000001001d4884
- (void)serviceReceivedTLSData:(id)arg1 type:(unsigned char)arg2 peer:(id)arg3;	// IMP=0x00000001001d4728
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;	// IMP=0x00000001001d45dc
- (void)serviceUpdate:(id)arg1;	// IMP=0x00000001001d4490
- (void)serviceActivateTLSWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d4188
- (void)serviceActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d3674
- (void)remoteInteractionSessionSendPayload:(id)arg1;	// IMP=0x00000001001d3544
- (void)remoteInteractionSessionSetText:(id)arg1;	// IMP=0x00000001001d3414
- (void)remoteInteractionSessionInsertText:(id)arg1;	// IMP=0x00000001001d32e4
- (void)remoteInteractionSessionDeleteTextBackward;	// IMP=0x00000001001d31c4
- (void)remoteInteractionSessionCommitText;	// IMP=0x00000001001d30a4
- (void)remoteInteractionSessionClearText;	// IMP=0x00000001001d2f84
- (void)remoteInteractionSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d2998
- (void)nfcTagReaderUIActivateWithEndpoint:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001d26b4
- (void)diagnosticUnlockTestServer;	// IMP=0x00000001001d25b4
- (void)diagnosticUnlockTestClientWithDevice:(id)arg1;	// IMP=0x00000001001d2498
- (void)diagnosticShow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d1d38
- (void)diagnosticMockStop:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d1c80
- (void)diagnosticMockStart:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d1bc8
- (void)diagnosticMock:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001d1a28
- (void)diagnosticLogControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d18d0
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d0e14
- (void)diagnosticBLEModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d0bc8
- (void)bluetoothUserInteraction;	// IMP=0x00000001001d0b04
- (void)deviceDiscoveryFastScanCancel:(id)arg1;	// IMP=0x00000001001d0a84
- (void)deviceDiscoveryFastScanTrigger:(id)arg1;	// IMP=0x00000001001d0a04
- (void)deviceDiscoveryUpdate:(id)arg1;	// IMP=0x00000001001d0568
- (void)deviceDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001cff88
- (void)coordinatedAlertsRequestFinish;	// IMP=0x00000001001cfea4
- (void)coordinatedAlertsRequestStart:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001cfb34
- (void)wifiPasswordSharingAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001cf8b0
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001cf7d4
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001cf5dc
- (void)testContinuityKeyboardBegin:(_Bool)arg1;	// IMP=0x00000001001cf568
- (void)statusInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001cf4d0
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001cf3bc
- (void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001cf28c
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x00000001001cf0b8
- (void)retriggerProximityPairing:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ceefc
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001cee64
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ced48
- (void)reenableProxCardType:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ceb54
- (void)preventExitForLocaleReason:(id)arg1;	// IMP=0x00000001001cea58
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ce9c8
- (void)openSetupURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ce7b8
- (void)findContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001cdb08
- (void)myAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001cd92c
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001cd7c0
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001cd658
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001cd4f0
- (void)appleIDInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001cd180
- (void)accountForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ccf80
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ccda8
- (void)_invalidateAssertions;	// IMP=0x00000001001cca0c
- (void)activateAssertionWithIdentifier:(id)arg1;	// IMP=0x00000001001cc61c
- (void)autoFillHelperUserNotificationDidDismiss:(id)arg1;	// IMP=0x00000001001cc4d0
- (void)autoFillHelperUserNotificationDidActivate:(id)arg1;	// IMP=0x00000001001cc384
- (void)autoFillHelperTryPIN:(id)arg1;	// IMP=0x00000001001cc238
- (void)autoFillHelperDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3;	// IMP=0x00000001001cc0ac
- (void)autoFillHelperActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001cbbac
- (int)_entitledService:(id)arg1 state:(_Bool *)arg2;	// IMP=0x00000001001cba60
- (int)_entitled:(id)arg1 state:(_Bool *)arg2 label:(id)arg3;	// IMP=0x00000001001cb8f8
- (void)connectionInvalidated;	// IMP=0x00000001001cb524
- (id)initWithServer:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x00000001001cb470

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

