//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CMStrideCalLocationFSMDelegate-Protocol.h"
#import "CMStrideCalibrationDatabaseDelegate-Protocol.h"

@class CLTimer, CMStrideCalLocationFSM, CMStrideCalibrationActivityBuffer, CMStrideCalibrationDatabase, CMStrideCalibrationElevationBuffer, CMStrideCalibrationStats, CMStrideCalibrationStepCountBuffer, NSMutableArray, NSString;
@protocol CLClientAuthorizationCacheProtocol, CLIntersiloUniverse, CLStreamingAwareLocationProviderProtocol;

@interface CMStrideCalibrator : NSObject <CMStrideCalibrationDatabaseDelegate, CMStrideCalLocationFSMDelegate>
{
    struct unique_ptr<CLOdometerNotifier_Type::Client, std::__1::default_delete<CLOdometerNotifier_Type::Client>> fOdometerClient;	// 8 = 0x8
    struct CLServiceLocationProvider *fServiceLocationProvider;	// 16 = 0x10
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::__1::default_delete<CLServiceLocationProvider_Type::Client>> fServiceLocationClient;	// 24 = 0x18
    id <CLClientAuthorizationCacheProtocol> fClientAuthorizationCache;	// 32 = 0x20
    struct unique_ptr<CLStreamingAwareLocationProvider_Type::Client, std::__1::default_delete<CLStreamingAwareLocationProvider_Type::Client>> fStreamingAwareLocationClient;	// 40 = 0x28
    id <CLStreamingAwareLocationProviderProtocol> fStreamingAwareProxy;	// 48 = 0x30
    struct unique_ptr<CLStepCountNotifier_Type::Client, std::__1::default_delete<CLStepCountNotifier_Type::Client>> fStepCountClient;	// 56 = 0x38
    struct unique_ptr<CLMotionState_Type::Client, std::__1::default_delete<CLMotionState_Type::Client>> fMotionStateClient;	// 64 = 0x40
    struct unique_ptr<CLCompanionNotifier_Type::Client, std::__1::default_delete<CLCompanionNotifier_Type::Client>> fCompanionClient;	// 72 = 0x48
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::__1::default_delete<CLMotionStateMediator_Type::Client>> fMotionStateMediatorClient;	// 80 = 0x50
    id <CLIntersiloUniverse> fUniverse;	// 88 = 0x58
    CLTimer *fStopOpportunisticCalibrationTimer;	// 96 = 0x60
    CMStrideCalibrationActivityBuffer *fActivityBuffer;	// 104 = 0x68
    CMStrideCalibrationElevationBuffer *fElevationBuffer;	// 112 = 0x70
    CMStrideCalibrationStepCountBuffer *fStepsBuffer;	// 120 = 0x78
    CMStrideCalibrationStats *fStats;	// 128 = 0x80
    CMStrideCalibrationDatabase *fDatabase;	// 136 = 0x88
    CMStrideCalLocationFSM *fStrideCalLocationFSM;	// 144 = 0x90
    NSMutableArray *fLatestCalDataArray;	// 152 = 0x98
    shared_ptr_a3117978 fStepCountDb;	// 160 = 0xa0
    double fLastGoodLocFix;	// 176 = 0xb0
    long long fCurrentSession;	// 184 = 0xb8
}

- (id).cxx_construct;	// IMP=0x000000010035a664
- (void).cxx_destruct;	// IMP=0x000000010035a550
- (id)copyHistory;	// IMP=0x000000010035a538
- (void)updateUserHeight:(long long)arg1;	// IMP=0x000000010035a520
- (void)updateCalibrationBins:(double)arg1;	// IMP=0x0000000100359cac
- (_Bool)checkValidTrack:(id)arg1 associatedEntry:(const struct CLStepDistance *)arg2;	// IMP=0x0000000100359628
- (void)fsm:(id)arg1 didUpdateSource:(int)arg2;	// IMP=0x0000000100359624
- (void)fsm:(id)arg1 didUpdateLocationAtTime:(double)arg2;	// IMP=0x0000000100359224
- (void)fsm:(id)arg1 didYieldTrack:(id)arg2;	// IMP=0x0000000100359170
- (void)fsm:(id)arg1 didTransitionFromState:(int)arg2 toState:(int)arg3;	// IMP=0x0000000100358f3c
- (void)strideCalibrationDatabase:(id)arg1 didInsertEntry:(struct CLStrideCalEntry)arg2;	// IMP=0x0000000100358eb4
- (void)quitForcedLocationState;	// IMP=0x0000000100358d8c
- (void)attemptForcedLocation;	// IMP=0x0000000100358814
- (void)checkForLocationStateTransition;	// IMP=0x00000001003583fc
- (_Bool)outOfSession;	// IMP=0x00000001003583e4
- (_Bool)inOutdoorPedestrianSession;	// IMP=0x00000001003583b4
- (long long)currentSession;	// IMP=0x00000001003583a4
- (void)tick:(double)arg1;	// IMP=0x0000000100358370
- (void)addLatestCalData:(id)arg1;	// IMP=0x000000010035820c
- (_Bool)isCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x00000001003581f4
- (void)setSession:(long long)arg1;	// IMP=0x0000000100358084
- (void)dealloc;	// IMP=0x0000000100357ef4
- (id)initInUniverse:(id)arg1 stepCountDb:(shared_ptr_a3117978)arg2;	// IMP=0x0000000100357998
- (void)authorizeLocationInReplay;	// IMP=0x000000010054f454
- (void)onLocationNotification:(const int *)arg1 data:(const struct NotificationData *)arg2;	// IMP=0x000000010054f298
- (void)onOdometerNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x000000010054f208
- (void)onMotionStateNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x000000010054f1d8
- (void)onStepCountNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x000000010054f158
- (_Bool)isAuthorizedForLocation;	// IMP=0x0000000100759c8c
- (void)checkLocationAuthorization;	// IMP=0x0000000100759b50
- (void)tickleArrow;	// IMP=0x0000000100759b3c
- (void)stopLeechingLocation;	// IMP=0x0000000100759b18
- (void)startLeechingLocation;	// IMP=0x0000000100759af0
- (void)stopLocationUpdates;	// IMP=0x0000000100759a8c
- (void)startLocationUpdates;	// IMP=0x0000000100759a20
- (void)stopGpsOdometerUpdates;	// IMP=0x00000001007599fc
- (void)startGpsOdometerUpdates;	// IMP=0x00000001007599d4
- (void)stopGpsOdometerSpectatorUpdates;	// IMP=0x00000001007599b0
- (void)startGpsOdometerSpectatorUpdates;	// IMP=0x0000000100759988
- (void)stopElevationSpectatorUpdates;	// IMP=0x0000000100759964
- (void)startElevationSpectatorUpdates;	// IMP=0x000000010075993c
- (void)stopElevationUpdates;	// IMP=0x0000000100759918
- (void)startElevationUpdates;	// IMP=0x00000001007598f0
- (void)teardownCLNotifiers;	// IMP=0x000000010075984c
- (void)setupCLNotifiers;	// IMP=0x0000000100759220
- (void)onMotionStateMediatorNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0000000100759ebc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

