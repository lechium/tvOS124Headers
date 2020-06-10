//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataReader-Protocol.h"

@class GKDataTransport, NSString;

@interface GKFriendRequestsNetworkReader : NSObject <GKDataReader>
{
    GKDataTransport *_transport;	// 8 = 0x8
}

+ (id)readerWithTransport:(id)arg1;	// IMP=0x000000010010ef60
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010f164
- (id)friendRequestForRepresentation:(id)arg1;	// IMP=0x000000010010f070
- (id)poolName;	// IMP=0x000000010010f064
- (void)dealloc;	// IMP=0x000000010010f00c
- (id)initWithTransport:(id)arg1;	// IMP=0x000000010010efac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

