//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "TVCacheDeletePurging-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NSURL;

@interface TVAggregateAppCachePurgeRequest : NSObject <NSSecureCoding, NSCopying, TVCacheDeletePurging>
{
    NSURL *_cacheURL;	// 8 = 0x8
    NSMutableDictionary *_mutableRequests;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100007090
@property(retain, nonatomic) NSMutableDictionary *mutableRequests; // @synthesize mutableRequests=_mutableRequests;
@property(retain, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
- (void).cxx_destruct;	// IMP=0x0000000100008a00
@property(readonly, copy) NSString *description;
- (long long)purgeAmount:(long long)arg1 withUrgency:(long long)arg2;	// IMP=0x000000010000832c
- (long long)purgeableAmountWithUrgency:(long long)arg1;	// IMP=0x0000000100008020
- (_Bool)performBlockInTerminationAssertionForRequiredApplications:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007ad0
- (void)setPurgeRequest:(id)arg1 forApplication:(id)arg2;	// IMP=0x0000000100007914
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100007848
- (id)initWithPropertyListRepresentation:(id)arg1;	// IMP=0x0000000100007538
- (id)propertyListRepresentation;	// IMP=0x00000001000072fc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100007174
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100007098
@property(readonly, copy, nonatomic) NSArray *applicationsRequiringTermination;
@property(readonly, copy, nonatomic) NSArray *applications;
@property(readonly, nonatomic) long long urgency;
- (id)initWithCacheURL:(id)arg1;	// IMP=0x0000000100006d00
- (id)init;	// IMP=0x0000000100006cf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

