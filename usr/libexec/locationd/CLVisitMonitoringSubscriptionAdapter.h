//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLSignificantVisitManagerClientProtocol-Protocol.h"

@class NSString;

@interface CLVisitMonitoringSubscriptionAdapter : NSObject <CLSignificantVisitManagerClientProtocol>
{
    struct CLVisitMonitoringSubscription *_subscription;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)invalidate;	// IMP=0x00000001008a8018
- (void)onSignificantLocationVisit:(id)arg1;	// IMP=0x00000001008a7d90
- (id)initWithSubscription:(struct CLVisitMonitoringSubscription *)arg1;	// IMP=0x00000001008a7d24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

