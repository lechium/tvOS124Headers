//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKAssertion.h"

@class BKProcess, BKSProcessAssertionUpdateEvent;

@interface BKProcessAssertion : BKAssertion
{
    BKSProcessAssertionUpdateEvent *_pendingUpdate;	// 8 = 0x8
    unsigned int _reason;	// 16 = 0x10
    unsigned int _flags;	// 20 = 0x14
    unsigned long long _state;	// 24 = 0x18
    BKProcess *_owningProcess;	// 32 = 0x20
    BKProcess *_targetProcess;	// 40 = 0x28
}

+ (id)_callOutQueue;	// IMP=0x000000010000af3c
+ (double)maximumTaskCompletionInterval;	// IMP=0x0000000100009ad0
- (void).cxx_destruct;	// IMP=0x000000010000b850
- (void)appendDescriptionWithMultilinePrefix:(id)arg1 toBodySectionOfBuilder:(id)arg2;	// IMP=0x000000010000b778
- (void)appendSuccinctDescriptionToBuilder:(id)arg1;	// IMP=0x000000010000b6b8
- (void)_queue_resume;	// IMP=0x000000010000b648
- (void)_queue_suspend;	// IMP=0x000000010000b5d8
- (void)_queue_relinquish;	// IMP=0x000000010000b4dc
- (void)_queue_buildPrettyDescription;	// IMP=0x000000010000b36c
- (void)_queue_updateFlags:(unsigned int)arg1;	// IMP=0x000000010000b2e4
- (void)_queue_synchronizeUpdateWithProcessIfNeeded;	// IMP=0x000000010000b0ec
- (void)_queue_performProcessCallout:(CDUnknownBlockType)arg1;	// IMP=0x000000010000afc8
- (void)updateWithEvent:(id)arg1;	// IMP=0x000000010000adec
- (void)acquireForProcess:(id)arg1 owningProcess:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000a944
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) _Bool preventSuspendOnSleep; // @dynamic preventSuspendOnSleep;
@property(readonly, nonatomic) _Bool wantsForegroundResourcePriority; // @dynamic wantsForegroundResourcePriority;
@property(readonly, nonatomic) _Bool preventIdleSleep; // @dynamic preventIdleSleep;
@property(readonly, nonatomic) _Bool preventThrottleDownUI; // @dynamic preventThrottleDownUI;
@property(readonly, nonatomic) _Bool preventThrottleDownCPU; // @dynamic preventThrottleDownCPU;
@property(readonly, nonatomic) _Bool preventSuspend; // @dynamic preventSuspend;
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) __weak BKProcess *targetProcess; // @synthesize targetProcess=_targetProcess;
@property(readonly, nonatomic) __weak BKProcess *owningProcess; // @synthesize owningProcess=_owningProcess;
@property(readonly, nonatomic) double permittedBackgroundDuration;
- (void)dealloc;	// IMP=0x0000000100009d78
- (id)initWithCreateEvent:(id)arg1 ownerHandle:(id)arg2 queue:(id)arg3;	// IMP=0x0000000100009b1c

@end

