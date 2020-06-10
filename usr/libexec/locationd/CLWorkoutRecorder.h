//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloService.h"

#import "CLWorkoutRecorderProtocol-Protocol.h"
#import "CLWorkoutRecorderPublisherDelegate-Protocol.h"
#import "CLWorkoutRecordingDelegate-Protocol.h"

@class CLDispatchSilo, CLServiceVendor, CLWorkoutRecorderPublisher, CLWorkoutRecording, NSObject, NSString, NSURL;
@protocol OS_dispatch_source;

@interface CLWorkoutRecorder : CLIntersiloService <CLWorkoutRecorderProtocol, CLWorkoutRecorderPublisherDelegate, CLWorkoutRecordingDelegate>
{
    NSURL *_workingDirectory;	// 8 = 0x8
    _Bool _deviceUnlocked;	// 16 = 0x10
    CLWorkoutRecorderPublisher *_publisher;	// 24 = 0x18
    struct unique_ptr<CLDataProtectionManager_Type::Client, std::__1::default_delete<CLDataProtectionManager_Type::Client>> _dataProtectionClient;	// 32 = 0x20
    unsigned char _workoutSession[16];	// 40 = 0x28
    NSObject<OS_dispatch_source> *_deferredStopTimer;	// 56 = 0x38
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::__1::default_delete<CLMotionStateMediator_Type::Client>> _motionStateMediatorClient;	// 64 = 0x40
    struct unique_ptr<CLPowerAssertion, std::__1::default_delete<CLPowerAssertion>> _powerAssertion;	// 72 = 0x48
    CLWorkoutRecording *_recording;	// 80 = 0x50
}

+ (_Bool)isSupported;	// IMP=0x0000000100046ca8
+ (id)getSilo;	// IMP=0x0000000100046b44
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100046b20
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100046a9c
@property(readonly, retain, nonatomic) CLWorkoutRecorderPublisher *publisher; // @synthesize publisher=_publisher;
- (id).cxx_construct;	// IMP=0x000000010004941c
- (void).cxx_destruct;	// IMP=0x0000000100049398
- (void)handleResponse:(id)arg1;	// IMP=0x00000001000491e4
- (_Bool)workingDirectoryHasSufficientFreeSpace;	// IMP=0x0000000100048f30
- (_Bool)createWorkingDirectory;	// IMP=0x0000000100048ad8
- (_Bool)acquireToken;	// IMP=0x00000001000486c4
- (void)onDeferredStopTimerShouldPublish:(_Bool)arg1;	// IMP=0x0000000100048678
- (void)cancelDeferredStopTimer;	// IMP=0x000000010004863c
- (void)scheduleStop;	// IMP=0x0000000100048268
- (void)onMotionStateMediatorNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0000000100047f50
- (void)onDataProtectionNotification:(const int *)arg1 data:(const struct NotificationData *)arg2;	// IMP=0x0000000100047ea8
- (void)publishRecording;	// IMP=0x0000000100047a44
- (void)stopRecordingShouldPublish:(_Bool)arg1;	// IMP=0x0000000100047878
- (void)startRecording;	// IMP=0x0000000100047034
- (void)endService;	// IMP=0x0000000100046f2c
- (void)beginService;	// IMP=0x0000000100046cb0
- (void)dealloc;	// IMP=0x0000000100046c08
- (id)init;	// IMP=0x0000000100046bc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;
@property(readonly, nonatomic) CLServiceVendor *vendor;

@end

