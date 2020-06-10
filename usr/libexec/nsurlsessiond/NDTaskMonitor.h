//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NDApplicationObserver-Protocol.h"

@class NDApplication, NSMutableArray, NSString, NSURLSessionTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NDTaskMonitor : NSObject <NDApplicationObserver>
{
    NSURLSessionTask *_task;	// 8 = 0x8
    NSString *_clientBundleIdentifier;	// 16 = 0x10
    NSString *_clientSecondaryIdentifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_throughputTimer;	// 40 = 0x28
    NSMutableArray *_progressTimestamps;	// 48 = 0x30
    NSMutableArray *_progressValues;	// 56 = 0x38
    unsigned long long _throughputInterval;	// 64 = 0x40
    NDApplication *_monitoredApplication;	// 72 = 0x48
    double _throughputMonitoringStartTime;	// 80 = 0x50
    _Bool _startedDuetReporter;	// 88 = 0x58
    _Bool _connectionIsCellular;	// 89 = 0x59
    _Bool _hasTransferredData;	// 90 = 0x5a
    _Bool _discretionary;	// 91 = 0x5b
    _Bool _explicitlyDiscretionary;	// 92 = 0x5c
    _Bool _performsNonDiscretionaryThrougputMonitoring;	// 93 = 0x5d
    _Bool _mayBeDemotedToDiscretionary;	// 94 = 0x5e
    int _powerMonitorToken;	// 96 = 0x60
    long long _basePriority;	// 104 = 0x68
}

@property long long basePriority; // @synthesize basePriority=_basePriority;
- (void).cxx_destruct;	// IMP=0x000000010003f734
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x000000010003f634
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x000000010003f494
- (void)backgroundUpdatesDisabledForApplication:(id)arg1;	// IMP=0x000000010003f308
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x000000010003f190
- (void)cancel;	// IMP=0x000000010003f12c
- (void)taskWillSuspend;	// IMP=0x000000010003f120
- (void)startThroughputMonitoringIfAppropriate;	// IMP=0x000000010003f098
- (void)taskWillResume;	// IMP=0x000000010003efc8
- (void)stopThroughputMonitoring;	// IMP=0x000000010003ef58
- (void)startThroughputMonitoring;	// IMP=0x000000010003ee60
- (void)taskTransferredData:(unsigned long long)arg1 countOfBytesReceived:(unsigned long long)arg2;	// IMP=0x000000010003ec7c
- (void)setThroughputTimerForCurrentInterval;	// IMP=0x000000010003eb64
- (void)calculateThroughput;	// IMP=0x000000010003e82c
- (long long)currentIntervalEndDelta;	// IMP=0x000000010003e7e4
- (double)currentThroughputThreshold;	// IMP=0x000000010003e7bc
- (id)initWithTask:(id)arg1 taskInfo:(id)arg2 clientBundleIdentifier:(id)arg3 secondaryIdentifier:(id)arg4 monitoredApplication:(id)arg5 priority:(long long)arg6 options:(unsigned long long)arg7 queue:(id)arg8;	// IMP=0x000000010003e588

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
