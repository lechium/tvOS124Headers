//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __CFN_DiskMetricsCollector : NSObject
{
    double _reportTimeInterval;	// 8 = 0x8
    double _stageTimeInterval;	// 16 = 0x10
    NSURL *_stageURL;	// 24 = 0x18
    CDUnknownBlockType _reportHandler;	// 32 = 0x20
    NSMutableDictionary *_diskUsage;	// 40 = 0x28
    NSDate *_lastSubmissionDate;	// 48 = 0x30
    NSDate *_lastSaveDate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_metricsQueue;	// 64 = 0x40
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property(retain, nonatomic) NSDate *lastSaveDate; // @synthesize lastSaveDate=_lastSaveDate;
@property(retain, nonatomic) NSDate *lastSubmissionDate; // @synthesize lastSubmissionDate=_lastSubmissionDate;
@property(retain, nonatomic) NSMutableDictionary *diskUsage; // @synthesize diskUsage=_diskUsage;
@property(copy, nonatomic) CDUnknownBlockType reportHandler; // @synthesize reportHandler=_reportHandler;
@property(retain, nonatomic) NSURL *stageURL; // @synthesize stageURL=_stageURL;
@property double stageTimeInterval; // @synthesize stageTimeInterval=_stageTimeInterval;
@property double reportTimeInterval; // @synthesize reportTimeInterval=_reportTimeInterval;
- (void).cxx_destruct;	// IMP=0x000000010000aa84
- (void)recordBytes:(unsigned long long)arg1 bundleID:(id)arg2;	// IMP=0x000000010000a288
- (void)deleteMetrics;	// IMP=0x000000010000a1ac
- (void)saveMetrics;	// IMP=0x0000000100009f60
- (void)readMetrics;	// IMP=0x0000000100009c4c
- (id)initWithStageURL:(id)arg1 reportHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000099b0

@end

