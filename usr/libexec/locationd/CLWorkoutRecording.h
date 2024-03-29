//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSURL;
@protocol CLWorkoutRecordingDelegate;

@interface CLWorkoutRecording : NSObject
{
    NSURL *_workingDirectory;	// 8 = 0x8
    id <CLWorkoutRecordingDelegate> _delegate;	// 16 = 0x10
    struct unique_ptr<CMMsl::WriterManager<CLLegacyFileManager>, std::__1::default_delete<CMMsl::WriterManager<CLLegacyFileManager>>> _writer;	// 24 = 0x18
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::__1::default_delete<CLMotionNotifier::Dispatcher>> _accelerometerDispatcher;	// 32 = 0x20
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::__1::default_delete<CLMotionNotifier::Dispatcher>> _deviceMotionDispatcher;	// 40 = 0x28
    struct unique_ptr<CLCatherineNotifier_Type::Client, std::__1::default_delete<CLCatherineNotifier_Type::Client>> _heartRateObserverClient;	// 48 = 0x30
    struct unique_ptr<CLOdometerNotifier_Type::Client, std::__1::default_delete<CLOdometerNotifier_Type::Client>> _odometerObserverClient;	// 56 = 0x38
    struct unique_ptr<CLWatchOrientationSettingsNotifier_Type::Client, std::__1::default_delete<CLWatchOrientationSettingsNotifier_Type::Client>> _watchOrientationObserverClient;	// 64 = 0x40
    struct unique_ptr<CLNatalimetryNotifier_Type::Client, std::__1::default_delete<CLNatalimetryNotifier_Type::Client>> _bodyMetricsObserverClient;	// 72 = 0x48
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::__1::default_delete<CLMotionStateMediator_Type::Client>> _motionStateMediatorClient;	// 80 = 0x50
    struct unique_ptr<CLWifiService_Type::Client, std::__1::default_delete<CLWifiService_Type::Client>> _wifiClient;	// 88 = 0x58
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::__1::default_delete<CLMotionNotifier::Dispatcher>> _pressureDispatcher;	// 96 = 0x60
    NSMutableDictionary *_metadata;	// 104 = 0x68
    struct CLGizmoOrientation _watchOrientation;	// 112 = 0x70
    struct CLBodyMetrics _bodyMetrics;	// 120 = 0x78
    struct WorkoutRecorderHealthKitInfo _healthKitInfo;	// 168 = 0xa8
    NSMutableArray *_wifiLookupTable;	// 200 = 0xc8
    double _privacyTimeOffset;	// 208 = 0xd0
    double _privacyElevationOffset;	// 216 = 0xd8
    float _privacyPressureOffset;	// 224 = 0xe0
    _Bool _disablePrivacyElevationOffset;	// 228 = 0xe4
    _Bool _disableBodyMetrics;	// 229 = 0xe5
    _Bool _disableWatchOrientation;	// 230 = 0xe6
    _Bool _disableHealthKitInfo;	// 231 = 0xe7
    _Bool _disableWifiScans;	// 232 = 0xe8
    _Bool _disablePressure;	// 233 = 0xe9
    _Bool _disableStrideCalBins;	// 234 = 0xea
    double _startTime;	// 240 = 0xf0
    double _stopTime;	// 248 = 0xf8
}

- (id).cxx_construct;	// IMP=0x0000000100033a88
- (void).cxx_destruct;	// IMP=0x000000010003392c
- (void)deleteWorkingDirectory;	// IMP=0x00000001000337dc
- (void)writeStrideCalBins;	// IMP=0x0000000100033190
- (void)teardownHealthKitQueries;	// IMP=0x000000010003318c
- (void)setupHealthKitQueries;	// IMP=0x0000000100033188
- (void)writeHealthKitInfo;	// IMP=0x000000010003309c
- (void)writeBodyMetrics;	// IMP=0x0000000100032f00
- (void)resetBodyMetrics;	// IMP=0x0000000100032ecc
- (void)onPressureData:(const struct Sample *)arg1;	// IMP=0x0000000100032da0
- (void)onWifiScanNotification:(const int *)arg1 data:(const struct NotificationData *)arg2;	// IMP=0x00000001000328e4
- (void)onNatalimetryNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0000000100032868
- (void)onMotionStateMediatorNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00000001000324c4
- (void)writeWatchOrientation;	// IMP=0x00000001000323b8
- (void)onWatchOrientationNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0000000100032390
- (void)onOdometerNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0000000100032004
- (void)onCatherineNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0000000100031e6c
- (void)onDeviceMotionData:(const struct Sample *)arg1;	// IMP=0x0000000100031d48
- (void)onAccelerometerData:(const struct Sample *)arg1;	// IMP=0x0000000100031c24
- (double)makeSafeAbsoluteElevation:(double)arg1;	// IMP=0x0000000100031acc
- (double)makeSafeCFAbsoluteTime:(double)arg1;	// IMP=0x0000000100031aa8
- (void)teardownListeners;	// IMP=0x0000000100031688
- (void)setupListeners;	// IMP=0x00000001000307ec
@property(readonly, nonatomic) NSArray *recordingURLs;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (_Bool)setWorkingDirectory:(id)arg1;	// IMP=0x0000000100030058
- (void)cleanup;	// IMP=0x000000010003004c
- (void)stop;	// IMP=0x000000010002ff38
- (_Bool)start:(id)arg1;	// IMP=0x000000010002fa28
- (void)dealloc;	// IMP=0x000000010002f938
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010002f5d4

@end

