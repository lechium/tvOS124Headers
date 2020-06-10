//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKGSEventClient.h"

@interface BKAccelerometerClient : BKGSEventClient
{
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
    _Bool _passiveOrientationEvents;
    _Bool _wantsOrientationEvents;
    _Bool _wantsAccelerometerEvents;
    double _accelerometerUpdateInterval;
    double _lastAccelerometerEventTimestamp;
}

@property(nonatomic, getter=_lastAccelerometerEventTimestamp, setter=_setLastAccelerometerEventTimestamp:) double lastAccelerometerEventTimestamp; // @synthesize lastAccelerometerEventTimestamp=_lastAccelerometerEventTimestamp;
@property(nonatomic) double accelerometerUpdateInterval; // @synthesize accelerometerUpdateInterval=_accelerometerUpdateInterval;
@property(nonatomic) _Bool wantsAccelerometerEvents; // @synthesize wantsAccelerometerEvents=_wantsAccelerometerEvents;
@property(nonatomic) _Bool wantsOrientationEvents; // @synthesize wantsOrientationEvents=_wantsOrientationEvents;
@property(nonatomic) _Bool passiveOrientationEvents; // @synthesize passiveOrientationEvents=_passiveOrientationEvents;
@property(nonatomic) float zThreshold; // @synthesize zThreshold=_zThreshold;
@property(nonatomic) float yThreshold; // @synthesize yThreshold=_yThreshold;
@property(nonatomic) float xThreshold; // @synthesize xThreshold=_xThreshold;
- (_Bool)_shouldSendSampleEventWithTimestamp:(double)arg1 samplingInterval:(double)arg2;
- (_Bool)_passesThresholdForX:(float)arg1 y:(float)arg2 z:(float)arg3;
- (void)_queue_invalidate;
- (void)handleOrientationEvent:(long long)arg1 orientationLocked:(_Bool)arg2;
- (void)handleAccelerometerEventWithTimestamp:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 samplingInterval:(double)arg5;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
