//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSBasicServerClient.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BKAssertionClient : BSBasicServerClient <BSDescriptionProviding>
{
    NSMutableArray *_assertions;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_assertionQueue;	// 24 = 0x18
    unsigned long long _assertionCountHWM;	// 32 = 0x20
    unsigned long long _trafficBins[16];	// 40 = 0x28
    unsigned long long _lastTrafficStamp;	// 168 = 0xa8
    unsigned long long _trafficTotalCount;	// 176 = 0xb0
    unsigned long long _trafficTotalHWM;	// 184 = 0xb8
    unsigned long long _trafficBucketHWM;	// 192 = 0xc0
}

@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue; // @synthesize assertionQueue=_assertionQueue;
@property(readonly, copy, nonatomic) NSArray *assertions; // @synthesize assertions=_assertions;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010001da14
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000010001d9f0
- (id)succinctDescriptionBuilder;	// IMP=0x000000010001d950
- (id)succinctDescription;	// IMP=0x000000010001d92c
@property(readonly, copy) NSString *description;
- (unsigned long long)logTrafficAtTime:(struct timespec *)arg1;	// IMP=0x000000010001d504
- (void)removeAssertion:(id)arg1;	// IMP=0x000000010001d4b8
- (void)addAssertion:(id)arg1;	// IMP=0x000000010001d360
- (void)dealloc;	// IMP=0x000000010001d2f0
- (void)initializeTrafficHistogram;	// IMP=0x000000010001d284
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010001d17c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

