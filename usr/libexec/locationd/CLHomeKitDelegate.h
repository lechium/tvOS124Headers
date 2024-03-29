//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "WPHomeKitDelegate-Protocol.h"
#import "WPStateTrackerProtocol-Protocol.h"

@class NSString;

@interface CLHomeKitDelegate : NSObject <WPStateTrackerProtocol, WPHomeKitDelegate, CBCentralManagerDelegate>
{
    struct CLHomeKitProvider *_homekitProvider;	// 8 = 0x8
    _Bool _wiproxPower;	// 16 = 0x10
    _Bool _homekitPower;	// 17 = 0x11
    _Bool _cbPower;	// 18 = 0x12
}

- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x00000001001b6fe8
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x00000001001b6f84
- (void)wirelessProximity:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x00000001001b6f38
- (void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2 forType:(long long)arg3;	// IMP=0x00000001001b6dd0
- (void)homeKitStoppedScanning:(id)arg1 forType:(long long)arg2;	// IMP=0x00000001001b6ccc
- (void)homeKitStartedScanning:(id)arg1 forType:(long long)arg2;	// IMP=0x00000001001b6bc8
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 type:(long long)arg5;	// IMP=0x00000001001b6208
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4;	// IMP=0x00000001001b6204
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;	// IMP=0x00000001001b6200
- (void)homeKitDidUpdateState:(id)arg1;	// IMP=0x00000001001b60c4
@property(readonly, nonatomic) _Bool power;
- (id)initWithProvider:(struct CLHomeKitProvider *)arg1;	// IMP=0x00000001001b6008

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

