//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKEventClientDelegate-Protocol.h"
#import "BKOrientationManagerObserver-Protocol.h"

@class BKAccelerometerClient, BKOrientationManager, NSLock, NSMutableSet, NSString;

@interface BKAccelerometerInterface : NSObject <BKEventClientDelegate, BKOrientationManagerObserver>
{
    NSLock *_lock;
    NSMutableSet *_lock_accelerometerClients;
    NSMutableSet *_lock_cachedClients;
    BKAccelerometerClient *_lock_systemAppOrientationClient;
    BKOrientationManager *_lock_orientationManager;
    double _lock_samplingInterval;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)orientationManager:(id)arg1 deviceOrientationMayHaveChanged:(long long)arg2 isDeviceOrientationLocked:(_Bool)arg3;
- (void)_lock_systemAppSetOrientationEventsClient:(id)arg1 wantsOrientationEvents:(_Bool)arg2 auditToken:(const CDStruct_6ad76789 *)arg3;
- (void)_lock_clearSystemAppOrientationClient;
- (id)_lock_existingClientForPort:(unsigned int)arg1;
- (void)_updateSettings;
- (void)_handleAccelerometerRequestForPort:(id)arg1 auditToken:(const CDStruct_6ad76789 *)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (void)clientDied:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (void)systemAppSetOrientationEventsClient:(id)arg1 wantsOrientationEvents:(_Bool)arg2 auditToken:(const CDStruct_6ad76789 *)arg3;
- (void)bksAccelerometerClientRequestedOrientationEvents:(id)arg1 enabled:(_Bool)arg2 passiveEvents:(_Bool)arg3 auditToken:(const CDStruct_6ad76789 *)arg4;
- (void)bksAccelerometerClientRequestedAccelerometerEvents:(id)arg1 updateInterval:(double)arg2 xThreshold:(float)arg3 yThreshold:(float)arg4 zThreshold:(float)arg5 auditToken:(const CDStruct_6ad76789 *)arg6;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

