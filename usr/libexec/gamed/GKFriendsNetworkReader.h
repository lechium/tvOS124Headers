//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataReader-Protocol.h"

@class GKDataTransport, NSString;

@interface GKFriendsNetworkReader : NSObject <GKDataReader>
{
    _Bool _shouldFilter;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
}

+ (id)readerWithTransport:(id)arg1 filterFriendsInCommon:(_Bool)arg2;	// IMP=0x00000001000b46a0
@property(nonatomic) _Bool shouldFilter; // @synthesize shouldFilter=_shouldFilter;
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b4d64
- (id)friendForRepresentation:(id)arg1;	// IMP=0x00000001000b48b8
- (id)requestBodyForPlayer:(id)arg1;	// IMP=0x00000001000b480c
- (id)poolName;	// IMP=0x00000001000b47c4
- (void)dealloc;	// IMP=0x00000001000b476c
- (id)initWithTransport:(id)arg1 filterFriendsInCommon:(_Bool)arg2;	// IMP=0x00000001000b46f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

