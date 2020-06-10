//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NDApplicationObserver-Protocol.h"

@class NDAVAssetDownloadSessionWrapper, NDApplication, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NDAVThroughputMonitor : NSObject <NDApplicationObserver>
{
    NDAVAssetDownloadSessionWrapper *_wrapper;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_throughputTimer;	// 24 = 0x18
    NSMutableArray *_progressTimestamps;	// 32 = 0x20
    NSMutableArray *_progressValues;	// 40 = 0x28
    unsigned long long _throughputInterval;	// 48 = 0x30
    double _throughputMonitoringStartTime;	// 56 = 0x38
    _Bool _hasTransferredData;	// 64 = 0x40
    _Bool _discretionary;	// 65 = 0x41
    _Bool _explicitlyDiscretionary;	// 66 = 0x42
    _Bool _performsNonDiscretionaryThroughputMonitoring;	// 67 = 0x43
    NDApplication *_monitoredApplication;	// 72 = 0x48
    long long _basePriority;	// 80 = 0x50
}

@property long long basePriority; // @synthesize basePriority=_basePriority;
- (void).cxx_destruct;	// IMP=0x0000000100049624
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0000000100049570
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x0000000100049478
- (void)setThroughputTimerForCurrentInterval;	// IMP=0x0000000100049360
- (double)currentIntervalThroughputThreshold;	// IMP=0x0000000100049338
- (long long)currentIntervalDuration;	// IMP=0x00000001000492f0
- (void)calculateThroughput;	// IMP=0x0000000100048fa4
- (void)stopThroughputMonitoring;	// IMP=0x0000000100048f34
- (void)startThroughputMonitoring;	// IMP=0x0000000100048e3c
- (void)startThroughputMonitoringIfAppropriate;	// IMP=0x0000000100048db4
- (void)wrapperTransferredData:(unsigned long long)arg1;	// IMP=0x0000000100048bcc
- (void)cancel;	// IMP=0x0000000100048b8c
- (void)wrapperWillSuspend;	// IMP=0x0000000100048b80
- (id)initWithWrapper:(id)arg1 monitoredApplication:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 queue:(id)arg5;	// IMP=0x00000001000489f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

