//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSBulletinServiceDelegate.h"
#import "TVPABluetoothRemotePairingDelegate.h"
#import "TVSBluetoothManagerDelegate.h"

@class NSString, PBSBulletin, TVPABluetoothRemotePairingAgent, TVPADeviceEnforcementAgent;

@interface TVPeripheralAgentService : NSObject <PBSBulletinServiceDelegate, TVPABluetoothRemotePairingDelegate, TVSBluetoothManagerDelegate>
{
    int _proximityNotifyToken;	// 8 = 0x8
    _Bool _proximityNotifyTokenIsValid;	// 12 = 0xc
    int _mfiAuthNotifyToken;	// 16 = 0x10
    _Bool _mfiAuthNotifyTokenIsValid;	// 20 = 0x14
    struct __IOHIDManager *_externalDeviceHIDManager;	// 24 = 0x18
    id <PBSBulletinServiceInterface> _bulletinService;	// 32 = 0x20
    PBSBulletin *_bulletin;	// 40 = 0x28
    TVPABluetoothRemotePairingAgent *_bluetoothRemotePairingAgent;	// 48 = 0x30
    TVPADeviceEnforcementAgent *_deviceEnforcementAgent;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x000000010000a02c
@property(retain, nonatomic) TVPADeviceEnforcementAgent *deviceEnforcementAgent; // @synthesize deviceEnforcementAgent=_deviceEnforcementAgent;
@property(retain, nonatomic) TVPABluetoothRemotePairingAgent *bluetoothRemotePairingAgent; // @synthesize bluetoothRemotePairingAgent=_bluetoothRemotePairingAgent;
@property(retain) PBSBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(retain, nonatomic) id <PBSBulletinServiceInterface> bulletinService; // @synthesize bulletinService=_bulletinService;
- (void).cxx_destruct;	// IMP=0x000000010000c310
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x000000010000c224
- (void)_presentPeripheralHUD:(long long)arg1;	// IMP=0x000000010000bd9c
- (void)_startListeningForExternalDeviceConnection;	// IMP=0x000000010000bb48
- (void)_enforcementAgentWillDisconnectDeviceNotification:(id)arg1;	// IMP=0x000000010000bad4
- (void)_bluetoothRemotePowerSourceLimitedSourceNotification:(id)arg1;	// IMP=0x000000010000ba3c
- (void)_checkBatteryLevelForRemote:(id)arg1;	// IMP=0x000000010000b594
- (void)_bluetoothRemoteDidDetectUserPresenceNotification:(id)arg1;	// IMP=0x000000010000b510
- (void)_bluetoothRemoteDidDisconnectNotification:(id)arg1;	// IMP=0x000000010000afdc
- (void)_bluetoothRemoteDidConnectNotification:(id)arg1;	// IMP=0x000000010000aab0
- (void)_dismissPairingAgent;	// IMP=0x000000010000a9d0
- (void)pairingAgentDidTimeout:(id)arg1;	// IMP=0x000000010000a9c4
- (void)pairingAgentDidPairRemote:(id)arg1;	// IMP=0x000000010000a9b8
- (void)bluetoothManager:(id)arg1 didCompleteDeviceDisconnection:(id)arg2 error:(id)arg3;	// IMP=0x000000010000a898
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x000000010000a7a8
- (void)start;	// IMP=0x000000010000a1e8
- (void)dealloc;	// IMP=0x000000010000a114

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
