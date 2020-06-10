//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloService.h"

#import "CLLocationStreamerServiceProtocol-Protocol.h"
#import "CLLocationStreamingConnectionManagerClientProtocol-Protocol.h"

@class CLTimer, NSString;
@protocol CLLocationStreamingConnectionManagerServiceProtocol;

@interface CLLocationStreamer : CLIntersiloService <CLLocationStreamerServiceProtocol, CLLocationStreamingConnectionManagerClientProtocol>
{
    struct unique_ptr<CLLocationController_Type::Client, std::__1::default_delete<CLLocationController_Type::Client>> _locationClient;	// 8 = 0x8
    struct unique_ptr<RollingPowerAssertion, std::__1::default_delete<RollingPowerAssertion>> _locationAssertion;	// 16 = 0x10
    struct unique_ptr<CLMotionState_Type::Client, std::__1::default_delete<CLMotionState_Type::Client>> _motionStateClient;	// 24 = 0x18
    struct unique_ptr<RollingPowerAssertion, std::__1::default_delete<RollingPowerAssertion>> _motionAlarmAssertion;	// 32 = 0x20
    struct unique_ptr<CLMotionActivity, std::__1::default_delete<CLMotionActivity>> _lastMotionActivity;	// 40 = 0x28
    _Bool _locationUpdatesIncludeMotionState;	// 48 = 0x30
    _Bool _clientActivityTypeFitnessActive;	// 49 = 0x31
    _Bool _clientActivityTypeAirborneActive;	// 50 = 0x32
    _Bool _motionAlarmActive;	// 51 = 0x33
    _Bool _isSubscribedForMotion;	// 52 = 0x34
    _Bool _emergencyEnablementAssertionActive;	// 53 = 0x35
    int _currentGranularity;	// 56 = 0x38
    CLTimer *_resendMotionStateTimer;	// 64 = 0x40
    id <CLLocationStreamingConnectionManagerServiceProtocol> _streamingConnection;	// 72 = 0x48
    CLTimer *_aliveAgainThrottleTimer;	// 80 = 0x50
}

+ (_Bool)isSupported;	// IMP=0x00000001003400b4
+ (id)getSilo;	// IMP=0x0000000100340034
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100340010
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010033ff8c
@property(retain, nonatomic) CLTimer *aliveAgainThrottleTimer; // @synthesize aliveAgainThrottleTimer=_aliveAgainThrottleTimer;
@property(retain, nonatomic) id <CLLocationStreamingConnectionManagerServiceProtocol> streamingConnection; // @synthesize streamingConnection=_streamingConnection;
@property(nonatomic) _Bool emergencyEnablementAssertionActive; // @synthesize emergencyEnablementAssertionActive=_emergencyEnablementAssertionActive;
@property(retain, nonatomic) CLTimer *resendMotionStateTimer; // @synthesize resendMotionStateTimer=_resendMotionStateTimer;
@property(nonatomic) _Bool isSubscribedForMotion; // @synthesize isSubscribedForMotion=_isSubscribedForMotion;
@property(nonatomic) _Bool motionAlarmActive; // @synthesize motionAlarmActive=_motionAlarmActive;
@property(nonatomic, getter=isClientActivityTypeAirborneActive) _Bool clientActivityTypeAirborneActive; // @synthesize clientActivityTypeAirborneActive=_clientActivityTypeAirborneActive;
@property(nonatomic, getter=isClientActivityTypeFitnessActive) _Bool clientActivityTypeFitnessActive; // @synthesize clientActivityTypeFitnessActive=_clientActivityTypeFitnessActive;
@property(nonatomic) _Bool locationUpdatesIncludeMotionState; // @synthesize locationUpdatesIncludeMotionState=_locationUpdatesIncludeMotionState;
@property(nonatomic) int currentGranularity; // @synthesize currentGranularity=_currentGranularity;
- (id).cxx_construct;	// IMP=0x0000000100343128
- (void).cxx_destruct;	// IMP=0x0000000100343084
- (void)pairedDeviceIsNearby:(_Bool)arg1;	// IMP=0x0000000100342dfc
- (void)successfullySentMessage:(id)arg1;	// IMP=0x0000000100342d04
- (void)failedToSendMessage:(id)arg1 withError:(id)arg2 isFatal:(_Bool)arg3;	// IMP=0x0000000100342be4
- (void)receivedMessageOfType:(id)arg1 withPayload:(id)arg2;	// IMP=0x0000000100342830
- (void)onMotionStateNotification:(const int *)arg1 withData:(const union NotificationData *)arg2;	// IMP=0x0000000100342594
- (void)sendMotionState;	// IMP=0x0000000100342378
- (void)stopMotionAlarm;	// IMP=0x0000000100342228
- (void)startMotionAlarm;	// IMP=0x00000001003420ec
- (void)reevaluateMotionSubscription;	// IMP=0x0000000100341ef8
- (void)onLocationNotification:(const int *)arg1 withData:(const struct NotificationData *)arg2;	// IMP=0x0000000100341980
- (void)startUpdatingLocationWithGranularity:(int)arg1 includeMotion:(_Bool)arg2 inFitnessSession:(_Bool)arg3 inAirborneSession:(_Bool)arg4 emergencyEnablementAssertionActive:(_Bool)arg5;	// IMP=0x000000010034155c
- (void)stopLocation;	// IMP=0x0000000100340fec
- (void)unregisterAllLocationNotifications;	// IMP=0x0000000100340f68
- (void)sendAliveAgainMessage;	// IMP=0x0000000100340d68
- (void)endService;	// IMP=0x0000000100340c1c
- (void)beginService;	// IMP=0x000000010034016c
- (id)init;	// IMP=0x0000000100340128

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

