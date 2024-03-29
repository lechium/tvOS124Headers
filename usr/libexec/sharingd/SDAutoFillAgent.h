//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSRemoteAlertHandleObserver-Protocol.h"
#import "SDSharedRemoteTextInputDelegate-Protocol.h"

@class NSArray, NSString, SBSRemoteAlertHandle, SDNotificationManager, SDStatusMonitor, SFBLEScanner, SFDevice, SFDeviceDiscovery, SFRemoteAutoFillService, SFRemoteAutoFillSession, SFSiriRemoteMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoFillAgent : NSObject <SBSRemoteAlertHandleObserver, SDSharedRemoteTextInputDelegate>
{
    SBSRemoteAlertHandle *_alertHandle;	// 8 = 0x8
    _Bool _autoFillContext;	// 16 = 0x10
    _Bool _bulletinsDisabled;	// 17 = 0x11
    int _cleanKeysState;	// 20 = 0x14
    CDUnknownBlockType _credentialsHandler;	// 24 = 0x18
    SFDeviceDiscovery *_deviceDiscovery;	// 32 = 0x20
    struct NSMutableDictionary *_devices;	// 40 = 0x28
    struct NSMutableDictionary *_btDevices;	// 48 = 0x30
    SFRemoteAutoFillSession *_grantingSession;	// 56 = 0x38
    struct NSMutableDictionary *_grantedDevices;	// 64 = 0x40
    struct NSMutableSet *_helpers;	// 72 = 0x48
    struct NSMutableSet *_ignoredTVs;	// 80 = 0x50
    SDNotificationManager *_notificationManager;	// 88 = 0x58
    struct NSMutableDictionary *_proximityDevices;	// 96 = 0x60
    SFBLEScanner *_proximityDiscovery;	// 104 = 0x68
    _Bool _proximityEnabled;	// 112 = 0x70
    NSString *_requestingAppLocalizedName;	// 120 = 0x78
    NSString *_requestingAppUnlocalizedName;	// 128 = 0x80
    NSArray *_requestingAssociatedDomains;	// 136 = 0x88
    NSString *_requestingBundleID;	// 144 = 0x90
    SFRemoteAutoFillService *_requestingService;	// 152 = 0x98
    _Bool _requestingServiceTimedOut;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_requestingServiceTimer;	// 168 = 0xa8
    int _requestingServiceState;	// 176 = 0xb0
    _Bool _remoteMonitoringEnabled;	// 180 = 0xb4
    _Bool _rtiActivated;	// 181 = 0xb5
    _Bool _scanningEnabled;	// 182 = 0xb6
    SFSiriRemoteMonitor *_siriRemoteMonitor;	// 184 = 0xb8
    int _siriRemoteMonitorState;	// 192 = 0xc0
    SDStatusMonitor *_statusMonitor;	// 200 = 0xc8
    struct NSMutableDictionary *_triggeredDevices;	// 208 = 0xd0
    _Bool _uiDelayActive;	// 216 = 0xd8
    SFDevice *_uiDelayDevice;	// 224 = 0xe0
    NSObject<OS_dispatch_source> *_uiDelayTimer;	// 232 = 0xe8
    _Bool _prefGrantingEnabled;	// 240 = 0xf0
    _Bool _prefPairedTVAllowed;	// 241 = 0xf1
    _Bool _prefRateLimitDisabled;	// 242 = 0xf2
    _Bool _prefRequestingEnabled;	// 243 = 0xf3
    _Bool _prefRequiresProx;	// 244 = 0xf4
    _Bool _testingService;	// 245 = 0xf5
    _Bool _preventNotifications;	// 246 = 0xf6
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 248 = 0xf8
}

@property(nonatomic) _Bool preventNotifications; // @synthesize preventNotifications=_preventNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;	// IMP=0x00000001000d8cf4
- (_Bool)_uiShowing;	// IMP=0x00000001000d8c38
- (void)_uiStop:(id)arg1;	// IMP=0x00000001000d8ab0
- (void)_uiStart:(id)arg1 extraInfo:(id)arg2;	// IMP=0x00000001000d8a54
- (void)_uiStartIfNeeded:(id)arg1 extraInfo:(id)arg2;	// IMP=0x00000001000d8780
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00000001000d85b4
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x00000001000d8450
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x00000001000d82ec
- (void)passwordPickerStart:(id)arg1 bundleID:(id)arg2 localizedAppName:(id)arg3 unlocalizedAppName:(id)arg4 associatedDomains:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000d7eec
- (void)_deactivateUIDelayTimer;	// IMP=0x00000001000d7e34
- (void)_activateUIDelayTimer;	// IMP=0x00000001000d7c6c
- (void)testUI:(id)arg1;	// IMP=0x00000001000d7980
- (void)testService:(id)arg1;	// IMP=0x00000001000d7888
- (void)testRemote:(id)arg1;	// IMP=0x00000001000d7728
- (void)testKeychain:(id)arg1;	// IMP=0x00000001000d768c
- (void)_sessionHandlePairingSucceededResponse:(id)arg1;	// IMP=0x00000001000d7608
- (void)_sessionStop:(id)arg1;	// IMP=0x00000001000d7384
- (void)_sessionStart:(id)arg1;	// IMP=0x00000001000d6d48
- (void)_serviceTimeoutStop;	// IMP=0x00000001000d6cb0
- (void)_serviceTimeoutStart;	// IMP=0x00000001000d6ab0
- (void)_serviceStopRequestingAutoFill;	// IMP=0x00000001000d6a04
- (void)_serviceStartRequestingAutoFillIfReady;	// IMP=0x00000001000d6894
- (_Bool)_serviceShouldRequestAutoFill;	// IMP=0x00000001000d67d8
- (void)_serviceHandleUsername:(id)arg1 password:(id)arg2 error:(id)arg3;	// IMP=0x00000001000d661c
- (void)_serviceHandleError:(id)arg1;	// IMP=0x00000001000d6598
- (void)_serviceEnsureStopped;	// IMP=0x00000001000d64e4
- (void)_serviceEnsureStarted;	// IMP=0x00000001000d60d0
- (void)_siriRemoteMonitorEnsureStopped;	// IMP=0x00000001000d602c
- (void)_siriRemoteMonitorEnsureStarted;	// IMP=0x00000001000d5e00
- (void)handleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00000001000d5c8c
- (void)handleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00000001000d5a80
- (void)_rtiEnsureStopped;	// IMP=0x00000001000d5a00
- (void)_rtiEnsureStarted;	// IMP=0x00000001000d597c
- (void)_proximityLost:(id)arg1;	// IMP=0x00000001000d5878
- (void)_proximityFound:(id)arg1;	// IMP=0x00000001000d578c
- (void)_proximityChanged:(id)arg1;	// IMP=0x00000001000d538c
- (void)_proximityEnsureStopped;	// IMP=0x00000001000d52c4
- (void)_proximityEnsureStarted;	// IMP=0x00000001000d4fec
- (void)_helpersClientPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x00000001000d4e98
- (void)_helpersClientPairingSucceeded:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d4d30
- (int)helper:(id)arg1 userNotificationDidDismiss:(id)arg2;	// IMP=0x00000001000d4be8
- (int)helper:(id)arg1 userNotificationDidActivate:(id)arg2;	// IMP=0x00000001000d4ac4
- (int)helper:(id)arg1 tryPIN:(id)arg2;	// IMP=0x00000001000d498c
- (int)helper:(id)arg1 didPickUsername:(id)arg2 password:(id)arg3 error:(id)arg4;	// IMP=0x00000001000d46b4
- (void)helperStop:(id)arg1;	// IMP=0x00000001000d45e8
- (int)helperStart:(id)arg1;	// IMP=0x00000001000d44ac
- (void)_deviceStoppedRequesting:(id)arg1;	// IMP=0x00000001000d4328
- (void)_deviceLost:(id)arg1;	// IMP=0x00000001000d4118
- (void)_deviceFound:(id)arg1;	// IMP=0x00000001000d3e68
- (void)_deviceChanged:(id)arg1;	// IMP=0x00000001000d3b08
- (void)_discoveryEnsureStopped;	// IMP=0x00000001000d3968
- (void)_discoveryEnsureStarted;	// IMP=0x00000001000d3624
- (void)notificiationDidDismiss:(id)arg1;	// IMP=0x00000001000d3548
- (void)_bulletinsEnsureStopped;	// IMP=0x00000001000d3530
- (void)_bulletinsEnsureStarted;	// IMP=0x00000001000d34c0
- (void)_uiLockStatusChanged:(id)arg1;	// IMP=0x00000001000d3370
- (void)_screenStateChanged:(id)arg1;	// IMP=0x00000001000d3200
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d2b78
- (void)_postSetupNotificationForDevice:(id)arg1;	// IMP=0x00000001000d294c
- (void)_ensureKeychainCleaned:(_Bool)arg1;	// IMP=0x00000001000d215c
- (void)_commonEnsureStopped;	// IMP=0x00000001000d2094
- (void)_commonEnsureStarted;	// IMP=0x00000001000d1f9c
- (void)_update;	// IMP=0x00000001000d1d58
- (void)prefsChanged;	// IMP=0x00000001000d165c
- (void)_invalidate;	// IMP=0x00000001000d1574
- (void)invalidate;	// IMP=0x00000001000d1504
- (void)_activate;	// IMP=0x00000001000d147c
- (void)activate;	// IMP=0x00000001000d140c
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000001000d0e8c
- (id)init;	// IMP=0x00000001000d0e20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

