//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DMDActivationPredicateObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol DMDActivationPredicateObserverManagerDelegate;

@interface DMDActivationPredicateObserverManager : NSObject <DMDActivationPredicateObserverDelegate>
{
    int _notifydMatchingEventStreamBudgetToken;	// 8 = 0x8
    id <DMDActivationPredicateObserverManagerDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_activationPredicateObserversByIdentifier;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableDictionary *activationPredicateObserversByIdentifier; // @synthesize activationPredicateObserversByIdentifier=_activationPredicateObserversByIdentifier;
@property(nonatomic) int notifydMatchingEventStreamBudgetToken; // @synthesize notifydMatchingEventStreamBudgetToken=_notifydMatchingEventStreamBudgetToken;
@property(readonly, nonatomic) __weak id <DMDActivationPredicateObserverManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100013070
- (id)_subPredicateObserversForCompoundSubPredicates:(id)arg1 withUniqueIdentifier:(id)arg2;	// IMP=0x0000000100012e04
- (id)_predicateObserverForPredicate:(id)arg1 withUniqueIdentifier:(id)arg2;	// IMP=0x0000000100012a14
- (void)_updateAllActivationPredicateObserverRegistrations;	// IMP=0x0000000100012968
- (void)_reportChangeToObserver:(id)arg1;	// IMP=0x00000001000127cc
- (void)_teardownNotificationHandlers;	// IMP=0x0000000100012778
- (void)_setupNotificationHandlers;	// IMP=0x000000010001213c
- (void)activationPredicateObserverDidTrigger:(id)arg1;	// IMP=0x0000000100012130
- (id)activationPredicateObserverForIdentifier:(id)arg1;	// IMP=0x000000010001206c
- (void)removeActivationPredicateObserverWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000100011f5c
- (id)addActivationPredicateObserverForPredicate:(id)arg1 withUniqueIdentifier:(id)arg2;	// IMP=0x0000000100011e10
- (void)dealloc;	// IMP=0x0000000100011dc4
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100011d14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

