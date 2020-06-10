//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKEventClientDelegate-Protocol.h"
#import "BKOrientationManagerObserver-Protocol.h"

@class BKAccelerometerClient, BKOrientationManager, NSLock, NSMutableSet, NSString;

@interface BKAccelerometerInterface : NSObject <BKEventClientDelegate, BKOrientationManagerObserver>
{
    NSLock *_lock;	// 8 = 0x8
    NSMutableSet *_lock_accelerometerClients;	// 16 = 0x10
    NSMutableSet *_lock_cachedClients;	// 24 = 0x18
    BKAccelerometerClient *_lock_systemAppOrientationClient;	// 32 = 0x20
    BKOrientationManager *_lock_orientationManager;	// 40 = 0x28
    double _lock_samplingInterval;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000010003f5d8
- (void).cxx_destruct;	// IMP=0x0000000100040b24
- (void)orientationManager:(id)arg1 deviceOrientationMayHaveChanged:(long long)arg2 isDeviceOrientationLocked:(_Bool)arg3;	// IMP=0x00000001000409c0
- (void)_lock_systemAppSetOrientationEventsClient:(id)arg1 wantsOrientationEvents:(_Bool)arg2 auditToken:(const CDStruct_6ad76789 *)arg3;	// IMP=0x00000001000406b4
- (void)_lock_clearSystemAppOrientationClient;	// IMP=0x000000010004065c
- (id)_lock_existingClientForPort:(unsigned int)arg1;	// IMP=0x00000001000404b8
- (void)_updateSettings;	// IMP=0x0000000100040174
- (void)_handleAccelerometerRequestForPort:(id)arg1 auditToken:(const CDStruct_6ad76789 *)arg2 updateBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010004000c
- (void)clientDied:(id)arg1;	// IMP=0x000000010003ff20
@property(readonly, copy) NSString *description;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010003fbd0
- (void)systemAppSetOrientationEventsClient:(id)arg1 wantsOrientationEvents:(_Bool)arg2 auditToken:(const CDStruct_6ad76789 *)arg3;	// IMP=0x000000010003fa84
- (void)bksAccelerometerClientRequestedOrientationEvents:(id)arg1 enabled:(_Bool)arg2 passiveEvents:(_Bool)arg3 auditToken:(const CDStruct_6ad76789 *)arg4;	// IMP=0x000000010003f9b4
- (void)bksAccelerometerClientRequestedAccelerometerEvents:(id)arg1 updateInterval:(double)arg2 xThreshold:(float)arg3 yThreshold:(float)arg4 zThreshold:(float)arg5 auditToken:(const CDStruct_6ad76789 *)arg6;	// IMP=0x000000010003f8b4
- (void)dealloc;	// IMP=0x000000010003f7cc
- (id)init;	// IMP=0x000000010003f658

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

