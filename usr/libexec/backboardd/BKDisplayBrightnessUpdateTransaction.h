//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSInvalidatable-Protocol.h"

@class BSTimer, NSString;
@protocol OS_dispatch_queue;

@interface BKDisplayBrightnessUpdateTransaction : NSObject <BSInvalidatable>
{
    NSString *_identifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BSTimer *_timer;	// 24 = 0x18
    double _expirationTime;	// 32 = 0x20
    _Bool _invalidated;	// 40 = 0x28
}

+ (id)_sharedQueue;	// IMP=0x000000010004ba24
+ (void)beginImplicitTransaction;	// IMP=0x000000010004b900
- (void).cxx_destruct;	// IMP=0x000000010004be5c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010004be50
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000010004bdfc
- (id)succinctDescriptionBuilder;	// IMP=0x000000010004bd90
- (id)succinctDescription;	// IMP=0x000000010004bd3c
@property(readonly, copy) NSString *description;
- (void)_queue_updateExpirationTimeWithIntervalSinceNow:(double)arg1;	// IMP=0x000000010004bcb0
- (void)_queue_invalidate;	// IMP=0x000000010004bbec
- (void)_queue_setTimerWithTimeIntervalSinceNow:(double)arg1;	// IMP=0x000000010004ba90
- (void)invalidate;	// IMP=0x000000010004b9b4
- (void)dealloc;	// IMP=0x000000010004b75c
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010004b660

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

