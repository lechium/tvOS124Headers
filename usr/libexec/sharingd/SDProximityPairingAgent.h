//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSRemoteAlertHandleObserver-Protocol.h"

@class NSMutableSet, NSString, SBSRemoteAlertHandle, SDStatusMonitor, SFDeviceDiscovery;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDProximityPairingAgent : NSObject <SBSRemoteAlertHandleObserver>
{
    _Bool _autoPairEnabled;	// 8 = 0x8
    int _autoPairRSSI;	// 12 = 0xc
    _Bool _autoStatusEnabled;	// 16 = 0x10
    _Bool _autoStatusUnpaired;	// 17 = 0x11
    int _autoStatusRSSI;	// 20 = 0x14
    NSMutableSet *_bluetoothUserInteractionClients;	// 24 = 0x18
    SFDeviceDiscovery *_deviceDiscovery;	// 32 = 0x20
    struct NSMutableDictionary *_devices;	// 40 = 0x28
    _Bool _enabled;	// 48 = 0x30
    int _exitRSSI;	// 52 = 0x34
    _Bool _fastScanAlways;	// 56 = 0x38
    unsigned long long _fastScanLastEndTicks;	// 64 = 0x40
    _Bool _fastScanPair;	// 72 = 0x48
    _Bool _fastScanStatusMine;	// 73 = 0x49
    _Bool _fastScanStatusOthers;	// 74 = 0x4a
    NSObject<OS_dispatch_source> *_fastScanTimer;	// 80 = 0x50
    _Bool _forceFastScan;	// 88 = 0x58
    SBSRemoteAlertHandle *_pairingAlertHandle;	// 96 = 0x60
    _Bool _phoneOnly;	// 104 = 0x68
    struct NSMutableSet *_powerSourceContainers;	// 112 = 0x70
    _Bool _scanAlways;	// 120 = 0x78
    SBSRemoteAlertHandle *_statusAlertHandle;	// 128 = 0x80
    SDStatusMonitor *_statusMonitor;	// 136 = 0x88
    struct NSMutableDictionary *_triggeredDevices;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 152 = 0x98
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;	// IMP=0x00000001001b31a8
- (id)_testDeviceWithParams:(id)arg1;	// IMP=0x00000001001b24bc
- (void)testStatusUI:(id)arg1;	// IMP=0x00000001001b2398
- (void)testPairingUI:(id)arg1;	// IMP=0x00000001001b2158
- (void)_uiLockStatusChanged:(id)arg1;	// IMP=0x00000001001b201c
- (_Bool)_uiShowing;	// IMP=0x00000001001b1fec
- (_Bool)_supportedDevice:(id)arg1;	// IMP=0x00000001001b1ef8
- (int)_startStatusUI:(id)arg1;	// IMP=0x00000001001b1264
- (int)_startPairingUI:(id)arg1 autoStart:(_Bool)arg2 repair:(_Bool)arg3;	// IMP=0x00000001001b0494
- (void)_screenStateChanged:(id)arg1;	// IMP=0x00000001001b0358
- (void)retriggerProximityPairing:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b0014
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00000001001afde4
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x00000001001afc40
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x00000001001afa9c
- (void)_powerSourceContainerUpdate:(id)arg1 device:(id)arg2 batteryInfo:(id)arg3;	// IMP=0x00000001001af154
- (void)_powerSourcesUpdateForDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x00000001001ae91c
- (id)_createNewPowerSourceContainer;	// IMP=0x00000001001ae804
- (void)_powerSourceEnsureStopped;	// IMP=0x00000001001ae674
- (void)_fastScanStop:(const char *)arg1 reset:(_Bool)arg2;	// IMP=0x00000001001ae424
- (void)_fastScanStart:(id)arg1;	// IMP=0x00000001001ae11c
- (void)_deviceChanged:(id)arg1;	// IMP=0x00000001001ad478
- (void)_deviceLost:(id)arg1;	// IMP=0x00000001001ad384
- (void)_deviceFound:(id)arg1;	// IMP=0x00000001001ad228
- (void)_ensureStopped;	// IMP=0x00000001001ad008
- (void)_ensureStarted;	// IMP=0x00000001001ac9b8
- (void)_update;	// IMP=0x00000001001ac94c
- (void)prefsChanged;	// IMP=0x00000001001ac008
- (void)bluetoothUserInteractionStop:(id)arg1;	// IMP=0x00000001001abed4
- (void)bluetoothUserInteractionStart:(id)arg1;	// IMP=0x00000001001abd54
- (void)_invalidate;	// IMP=0x00000001001abccc
- (void)invalidate;	// IMP=0x00000001001abc5c
- (void)_activate;	// IMP=0x00000001001abbd4
- (void)activate;	// IMP=0x00000001001abb64
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000001001ab2dc
- (id)init;	// IMP=0x00000001001ab270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
