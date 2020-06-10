//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSMutableArray, NSString, SDAutoUnlockWiFiRequest;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockWiFiManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _awdlStartFailed;	// 8 = 0x8
    _Bool _awdlStarting;	// 9 = 0x9
    _Bool _awdlTimerFired;	// 10 = 0xa
    NSObject<OS_dispatch_source> *_awdlTimer;	// 16 = 0x10
    id _awdlNetwork;	// 24 = 0x18
    SDAutoUnlockWiFiRequest *_currentRequest;	// 32 = 0x20
    CLLocationManager *_locationManager;	// 40 = 0x28
    NSMutableArray *_wifiRequestQueue;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x00000001000104e0
@property(retain, nonatomic) NSMutableArray *wifiRequestQueue; // @synthesize wifiRequestQueue=_wifiRequestQueue;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain) SDAutoUnlockWiFiRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) _Bool awdlTimerFired; // @synthesize awdlTimerFired=_awdlTimerFired;
@property(nonatomic) _Bool awdlStarting; // @synthesize awdlStarting=_awdlStarting;
@property(nonatomic) _Bool awdlStartFailed; // @synthesize awdlStartFailed=_awdlStartFailed;
@property(retain) id awdlNetwork; // @synthesize awdlNetwork=_awdlNetwork;
@property(retain) NSObject<OS_dispatch_source> *awdlTimer; // @synthesize awdlTimer=_awdlTimer;
- (void).cxx_destruct;	// IMP=0x00000001000129cc
- (void)_handleNetworkStoppedWithError:(long long)arg1;	// IMP=0x0000000100012850
- (void)handleNetworkStoppedWithError:(long long)arg1;	// IMP=0x00000001000127f0
- (void)_handleNetworkStarted:(struct __WiFiNetwork *)arg1 error:(long long)arg2;	// IMP=0x0000000100012424
- (void)handleNetworkStarted:(struct __WiFiNetwork *)arg1 error:(long long)arg2;	// IMP=0x00000001000123b4
- (void)handleAWDLTimerFired;	// IMP=0x0000000100012280
- (void)invalidateAWDLTimer;	// IMP=0x00000001000121a8
- (void)restartAWDLTimer;	// IMP=0x0000000100011fa4
- (void)_handleAWDLDisabledIfNeeded;	// IMP=0x0000000100011e54
- (void)_stopAWDL;	// IMP=0x0000000100011c78
- (void)_startAWDLWithInfo:(id)arg1;	// IMP=0x00000001000118b4
- (void)locationManager:(id)arg1 rangingDidFailForPeer:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100011770
- (void)locationManager:(id)arg1 didRangePeers:(id)arg2;	// IMP=0x0000000100011644
- (void)_disableRangeable;	// IMP=0x0000000100011444
- (void)_enableRangeableIfNeeded;	// IMP=0x0000000100011214
- (void)_startRanging;	// IMP=0x000000010001102c
- (void)_invalidateCurrentRequest;	// IMP=0x0000000100010f88
- (void)_processRequestQueue;	// IMP=0x0000000100010c80
- (void)cancelWiFiRequest:(id)arg1;	// IMP=0x0000000100010980
- (_Bool)addWiFiRequest:(id)arg1;	// IMP=0x0000000100010884
- (void)_removeObservers;	// IMP=0x0000000100010834
- (void)_addObservers;	// IMP=0x0000000100010830
- (void)_createWiFiObserver;	// IMP=0x000000010001082c
- (void)_createLocationManager;	// IMP=0x000000010001064c
- (void)start;	// IMP=0x00000001000105d4
- (id)init;	// IMP=0x0000000100010560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

