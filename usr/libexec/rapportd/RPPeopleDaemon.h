//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPSubDaemonable-Protocol.h"

@class CUSystemMonitor, NSString, NSXPCListener, SFDeviceDiscovery;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPPeopleDaemon : NSObject <NSXPCListenerDelegate, RPSubDaemonable>
{
    struct NSMutableArray *_bufferedCloudMessages;	// 8 = 0x8
    SFDeviceDiscovery *_deviceDiscovery;	// 16 = 0x10
    unsigned int _deviceDiscoveryID;	// 24 = 0x18
    struct NSMutableDictionary *_discoveredDevices;	// 32 = 0x20
    struct NSMutableSet *_discoveryClients;	// 40 = 0x28
    _Bool _invalidateCalled;	// 48 = 0x30
    _Bool _invalidateDone;	// 49 = 0x31
    int _prefTrackWhileAsleepState;	// 52 = 0x34
    CUSystemMonitor *_systemMonitor;	// 56 = 0x38
    struct NSMutableSet *_xpcConnections;	// 64 = 0x40
    NSXPCListener *_xpcListener;	// 72 = 0x48
    CUSystemMonitor *_familyMemberMonitor;	// 80 = 0x50
    struct NSMutableDictionary *_familyAccountIdentityMap;	// 88 = 0x58
    struct NSMutableDictionary *_familyDeviceIdentityMap;	// 96 = 0x60
    unsigned long long _familyFlags;	// 104 = 0x68
    int _familyNotifyToken;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_familySyncCheckTimer;	// 120 = 0x78
    _Bool _prefPeopleDiscoveryFamily;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 136 = 0x88
}

+ (id)sharedPeopleDaemon;	// IMP=0x00000001000409b8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;	// IMP=0x00000001000472f8
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x000000010004724c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100046f48
- (void)_updateIdentityType:(int)arg1 idsDeviceID:(id)arg2 appleID:(id)arg3 contactID:(id)arg4 msg:(id)arg5;	// IMP=0x0000000100046550
- (_Bool)_sendCloudIdentityFrameType:(unsigned char)arg1 destinationID:(id)arg2;	// IMP=0x00000001000461f0
- (void)_processBufferedCloudMessages;	// IMP=0x0000000100045e38
- (void)_bufferCloudMessage:(id)arg1 frameType:(unsigned char)arg2 fromID:(id)arg3 appleID:(id)arg4;	// IMP=0x0000000100045ad0
- (void)_updateFamilyNotification;	// IMP=0x0000000100045898
- (void)receivedFamilyIdentityUpdate:(id)arg1 fromID:(id)arg2 appleID:(id)arg3;	// IMP=0x0000000100045574
- (void)receivedFamilyIdentityResponse:(id)arg1 fromID:(id)arg2 appleID:(id)arg3;	// IMP=0x00000001000451cc
- (void)receivedFamilyIdentityRequest:(id)arg1 fromID:(id)arg2 appleID:(id)arg3;	// IMP=0x0000000100044e90
- (void)_updateFamilySyncing;	// IMP=0x0000000100044784
- (_Bool)_updateFamilyDevices;	// IMP=0x00000001000444b0
- (_Bool)_updateFamilyIdentityWithFamilyMember:(id)arg1;	// IMP=0x0000000100044070
- (_Bool)_updateFamilyAccounts;	// IMP=0x00000001000439e4
- (void)_updateFamilyIdentities;	// IMP=0x00000001000438ac
- (void)_familyEnsureStopped;	// IMP=0x0000000100043758
- (void)_familyEnsureStarted;	// IMP=0x00000001000434f0
- (void)_daemonDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x0000000100043298
- (void)_daemonDeviceLost:(id)arg1;	// IMP=0x0000000100043080
- (void)_daemonDeviceFound:(id)arg1;	// IMP=0x0000000100042e34
- (void)_discoveryEnsureStopped;	// IMP=0x0000000100042d50
- (void)_discoveryEnsureStarted;	// IMP=0x0000000100042404
- (void)_update;	// IMP=0x0000000100042388
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x0000000100042380
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100042378
- (void)prefsChanged;	// IMP=0x00000001000421a4
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x0000000100041914
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x00000001000417d0
- (void)_invalidated;	// IMP=0x0000000100041700
- (void)_invalidate;	// IMP=0x00000001000414e0
- (void)invalidate;	// IMP=0x0000000100041470
- (void)_activate;	// IMP=0x000000010004122c
- (void)activate;	// IMP=0x00000001000411bc
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000100040ab8
- (id)init;	// IMP=0x0000000100040a38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

