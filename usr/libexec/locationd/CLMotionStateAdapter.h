//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLMotionStateProtocol-Protocol.h"

@class NSString;

@interface CLMotionStateAdapter : CLNotifierServiceAdapter <CLMotionStateProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100200af4
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100200ad0
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100200a4c
- (void)fetchVehicularFalsePositiveSuppressionStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001002010cc
- (void)queryMotionStatesWithStartTime:(double)arg1 endTime:(double)arg2 isFromInternalClient:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100200f40
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100200f04
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100200ec0
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100200e8c
- (struct CLMotionState *)adaptee;	// IMP=0x0000000100200e54
- (void)endService;	// IMP=0x0000000100200e30
- (void)beginService;	// IMP=0x0000000100200bb8
- (id)init;	// IMP=0x0000000100200b74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

