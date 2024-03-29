//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKResourceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_syncQueue;	// 8 = 0x8
    NSMutableDictionary *_groupForResources;	// 16 = 0x10
    NSMutableDictionary *_resourceQueues;	// 24 = 0x18
}

- (void)readResources:(id)arg1 group:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000010006a448
- (void)writeResources:(id)arg1 group:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000001000693c8
- (id)_queueForResource:(id)arg1;	// IMP=0x000000010006920c
- (void)group:(id)arg1 joinResources:(id)arg2 queue:(id)arg3 performBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000689fc
- (id)_remainingResourceAfterJoiningResources:(id)arg1 group:(id)arg2 queue:(id)arg3;	// IMP=0x00000001000683e0
- (void)_deregisterForResources:(id)arg1 group:(id)arg2;	// IMP=0x0000000100068294
- (void)_registerForResources:(id)arg1 group:(id)arg2;	// IMP=0x0000000100067db8
- (void)dealloc;	// IMP=0x0000000100067d38
- (id)init;	// IMP=0x0000000100067c7c

@end

