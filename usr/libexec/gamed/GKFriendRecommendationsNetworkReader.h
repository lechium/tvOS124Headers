//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataReader-Protocol.h"

@class GKDataTransport, NSSet, NSString;

@interface GKFriendRecommendationsNetworkReader : NSObject <GKDataReader>
{
    GKDataTransport *_transport;	// 8 = 0x8
    NSSet *_recentlyDisplayedPlayerIDs;	// 16 = 0x10
}

+ (id)readerWithDisplayedPlayerIDs:(id)arg1 transport:(id)arg2;	// IMP=0x000000010007429c
@property(retain, nonatomic) NSSet *recentlyDisplayedPlayerIDs; // @synthesize recentlyDisplayedPlayerIDs=_recentlyDisplayedPlayerIDs;
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100074a68
- (id)friendRecommendationForRepresentation:(id)arg1;	// IMP=0x0000000100074504
- (id)requestBody;	// IMP=0x00000001000743ec
- (id)poolName;	// IMP=0x00000001000743e0
- (void)dealloc;	// IMP=0x0000000100074370
- (id)initWithDisplayedPlayerIDs:(id)arg1 transport:(id)arg2;	// IMP=0x00000001000742f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

