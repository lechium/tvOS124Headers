//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NDStatusMonitor : NSObject
{
    struct __CFRunLoopSource *_dynamicStoreSource;	// 8 = 0x8
    NSMutableArray *_blocksToExecuteAfterNetworkChange;	// 16 = 0x10
    unsigned long long _networkChangeEventCount;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    int _symptomToken;	// 40 = 0x28
}

+ (id)sharedMonitor;	// IMP=0x000000010002f064
- (void).cxx_destruct;	// IMP=0x000000010002fc00
- (void)stop;	// IMP=0x000000010002fbcc
- (void)start;	// IMP=0x000000010002fb44
- (void)stopMonitoringDynamicStore;	// IMP=0x000000010002fb08
- (void)startMonitoringDynamicStore;	// IMP=0x000000010002f7e8
- (void)handleBetterNetworkEvent;	// IMP=0x000000010002f5d4
- (void)handleDynamicStoreCallback:(struct __SCDynamicStore *)arg1 changedKeys:(struct __CFArray *)arg2;	// IMP=0x000000010002f5d0
- (void)performBlockAfterNetworkChangedEvent:(CDUnknownBlockType)arg1 delay:(long long)arg2;	// IMP=0x000000010002f2b8
- (void)performBlockAfterNetworkChangedEvent:(CDUnknownBlockType)arg1 numberOfPreviousRetries:(unsigned long long)arg2;	// IMP=0x000000010002f26c
- (void)dealloc;	// IMP=0x000000010002f1e4
- (id)init;	// IMP=0x000000010002f0e4

@end

