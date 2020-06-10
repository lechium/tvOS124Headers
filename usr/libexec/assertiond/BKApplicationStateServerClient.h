//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSBasicServerClient.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSSet, NSString;

@interface BKApplicationStateServerClient : BSBasicServerClient <BSDescriptionProviding>
{
    NSSet *_interestedBundleIDs;	// 16 = 0x10
    unsigned int _states;	// 24 = 0x18
    _Atomic unsigned int _messages;	// 28 = 0x1c
    _Atomic unsigned int _barriers;	// 32 = 0x20
    unsigned int _HWM;	// 36 = 0x24
    _Bool _invalid;	// 40 = 0x28
    _Bool _elevatedPriority;	// 41 = 0x29
    unsigned int _interestedStates;	// 44 = 0x2c
    unsigned long long _interestedAssertionReasons;	// 48 = 0x30
}

+ (id)clientWithConnection:(id)arg1;	// IMP=0x000000010000c554
@property(nonatomic) _Bool elevatedPriority; // @synthesize elevatedPriority=_elevatedPriority;
@property(nonatomic) unsigned long long interestedAssertionReasons; // @synthesize interestedAssertionReasons=_interestedAssertionReasons;
@property(nonatomic) unsigned int interestedStates; // @synthesize interestedStates=_interestedStates;
@property(copy, nonatomic) NSSet *interestedBundleIDs; // @synthesize interestedBundleIDs=_interestedBundleIDs;
- (void)invalid:(_Bool)arg1;	// IMP=0x000000010000cd88
- (_Bool)isInvalid;	// IMP=0x000000010000cd78
- (int)pid;	// IMP=0x000000010000cd64
- (unsigned int)decrementBarriersSent;	// IMP=0x000000010000ccf8
- (unsigned int)incrementBarriersSent:(unsigned int *)arg1;	// IMP=0x000000010000cbb4
- (unsigned int)resetMessagesSent:(int)arg1;	// IMP=0x000000010000cb94
- (unsigned int)incrementMessagesSent;	// IMP=0x000000010000cb74
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010000ca94
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000010000ca70
- (id)succinctDescriptionBuilder;	// IMP=0x000000010000c8f4
- (id)succinctDescription;	// IMP=0x000000010000c8d0
@property(readonly, copy) NSString *description;
- (_Bool)interestedInProcess:(id)arg1 changeToAssertion:(unsigned long long)arg2;	// IMP=0x000000010000c700
- (_Bool)interestedInProcess:(id)arg1 changeFromState:(unsigned int)arg2 toState:(unsigned int)arg3;	// IMP=0x000000010000c664
- (void)dealloc;	// IMP=0x000000010000c614
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010000c59c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

