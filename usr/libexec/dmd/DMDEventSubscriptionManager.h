//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DMDEventSubscriptionManager : NSObject
{
    CDUnknownBlockType _eventsHandler;	// 8 = 0x8
    NSMutableDictionary *_eventSubscriptionsByIdentifier;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableDictionary *eventSubscriptionsByIdentifier; // @synthesize eventSubscriptionsByIdentifier=_eventSubscriptionsByIdentifier;
@property(copy, nonatomic) CDUnknownBlockType eventsHandler; // @synthesize eventsHandler=_eventsHandler;
- (void).cxx_destruct;	// IMP=0x000000010004a040
- (id)eventStatusesByPayloadIdentifierSinceStartDate:(id)arg1 organizationIdentifier:(id)arg2;	// IMP=0x0000000100049dac
- (_Bool)setEventSubscriptionRegistrations:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004987c
- (id)init;	// IMP=0x0000000100049808

@end

