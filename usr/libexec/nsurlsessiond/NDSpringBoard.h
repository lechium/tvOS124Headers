//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, BKSSystemService, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NDSpringBoard : NSObject
{
    BKSApplicationStateMonitor *_monitor;	// 8 = 0x8
    BKSSystemService *_service;	// 16 = 0x10
    NSMutableDictionary *_assertions;	// 24 = 0x18
    NSMutableDictionary *_observers;	// 32 = 0x20
    NSMutableDictionary *_appStates;	// 40 = 0x28
    NSMutableDictionary *_observedBackgroundSettings;	// 48 = 0x30
    _Bool _backgroundUpdatesAllowed;	// 56 = 0x38
    NSMutableSet *_monitoredBundleIDs;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
}

+ (id)sharedSpringBoard;	// IMP=0x0000000100045754
- (void).cxx_destruct;	// IMP=0x0000000100048940
- (_Bool)identifierIsForSpringBoardApplication:(id)arg1;	// IMP=0x00000001000488a4
- (_Bool)wakeUpApp:(id)arg1 forSession:(id)arg2;	// IMP=0x00000001000483e4
- (_Bool)takeAssertionForBundleID:(id)arg1 sessionID:(id)arg2;	// IMP=0x0000000100047fa8
- (id)assertionNameForIdentifier:(id)arg1;	// IMP=0x0000000100047f68
- (void)removePendingLaunchTasksForBundleID:(id)arg1 sessionID:(id)arg2 cancel:(_Bool)arg3;	// IMP=0x0000000100047f64
- (void)releaseAssertionForBundleID:(id)arg1 sessionID:(id)arg2;	// IMP=0x0000000100047e80
- (void)_onqueue_releaseAssertionForBundleID:(id)arg1 sessionID:(id)arg2;	// IMP=0x0000000100047c4c
- (_Bool)application:(id)arg1 isHandlingBackgroundSessionWithIdentifier:(id)arg2;	// IMP=0x0000000100047b9c
- (_Bool)applicationHasBackgroundTaskCompletion:(id)arg1;	// IMP=0x0000000100047b78
- (_Bool)application:(id)arg1 hasAssertion:(unsigned int)arg2 withName:(id)arg3;	// IMP=0x0000000100047734
- (_Bool)applicationIsBeingDebugged:(id)arg1;	// IMP=0x000000010004770c
- (_Bool)applicationIsSuspended:(id)arg1;	// IMP=0x00000001000476e8
- (_Bool)applicationIsAwake:(id)arg1;	// IMP=0x00000001000476a0
- (_Bool)applicationIsForeground:(id)arg1;	// IMP=0x0000000100047670
- (unsigned int)applicationStateForBundleID:(id)arg1;	// IMP=0x000000010004749c
- (void)stopMonitoringBundleID:(id)arg1;	// IMP=0x000000010004733c
- (void)startMonitoringBundleID:(id)arg1;	// IMP=0x0000000100047050
- (void)removeObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0000000100046f1c
- (void)addObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0000000100046d6c
- (void)handleApplicationStateChange:(id)arg1;	// IMP=0x00000001000464b4
- (void)handleBackgroundSettingsChange;	// IMP=0x0000000100045da4
- (id)getBackgroundSettingsAppList;	// IMP=0x0000000100045cd8
- (void)setupMonitor;	// IMP=0x0000000100045bac
- (void)dealloc;	// IMP=0x0000000100045ad0
- (id)init;	// IMP=0x00000001000457ec

@end
