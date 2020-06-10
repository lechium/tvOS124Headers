//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLMotionSyncStoreProtocol-Protocol.h"

@class NSString;

@interface CLMotionSyncStoreAdapter : CLNotifierServiceAdapter <CLMotionSyncStoreProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001006e2b04
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001006e2ae0
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001006e2a5c
- (void)resetStoredCalibrations;	// IMP=0x00000001006e2f50
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006e2f14
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001006e2ed0
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006e2e9c
- (struct CLMotionSyncStore *)adaptee;	// IMP=0x00000001006e2e64
- (void)endService;	// IMP=0x00000001006e2e40
- (void)beginService;	// IMP=0x00000001006e2bc8
- (id)init;	// IMP=0x00000001006e2b84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

