//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationStats : NSObject
{
    struct CLStrideCalibrationSessionMetrics fSessionMetrics;	// 8 = 0x8
    long long fHeightCM;	// 104 = 0x68
    struct CMFixedSizeQueue<double, 2> fLastAWDTimestamps;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x000000010039bc38
- (void).cxx_destruct;	// IMP=0x000000010039bc34
- (void)updateUserHeight:(long long)arg1;	// IMP=0x000000010039bc24
- (void)storeLastAWDTimestamps;	// IMP=0x000000010039bbb0
- (void)loadLastAWDTimestamps;	// IMP=0x000000010039baa8
- (void)awdMotionFitnessStrideCalibration:(const struct CLStrideCalEntry *)arg1;	// IMP=0x000000010039b5c0
- (void)activityLoggerLogStrideCalEntry:(const struct CLStrideCalEntry *)arg1;	// IMP=0x000000010039b330
- (void)awdLogDistance:(double)arg1 status:(int)arg2 description:(id)arg3;	// IMP=0x000000010039af90
- (void)setReadyForSubmission;	// IMP=0x000000010039af7c
- (void)endSessionMetrics:(double)arg1;	// IMP=0x000000010039ac6c
- (void)startSessionMetricsWithTime:(double)arg1 session:(int)arg2;	// IMP=0x000000010039ac18
- (id)init;	// IMP=0x000000010039aba8

@end

