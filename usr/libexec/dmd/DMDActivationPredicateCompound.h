//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDActivationPredicateObserver.h"

@class NSArray;

@interface DMDActivationPredicateCompound : DMDActivationPredicateObserver
{
    NSArray *_subPredicateObservers;	// 8 = 0x8
}

@property(readonly, copy, nonatomic) NSArray *subPredicateObservers; // @synthesize subPredicateObservers=_subPredicateObservers;
- (void).cxx_destruct;	// IMP=0x00000001000110cc
- (void)reportActivationPredicateObserverDidTrigger;	// IMP=0x0000000100010f78
- (id)metadata;	// IMP=0x0000000100010d5c
- (void)invalidate;	// IMP=0x0000000100010c14
- (void)updateObserverRegistration;	// IMP=0x0000000100010ad0
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 subPredicateObservers:(id)arg3 predicate:(id)arg4;	// IMP=0x00000001000109f8

@end
