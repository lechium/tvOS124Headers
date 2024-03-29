//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataReader-Protocol.h"
#import "GKPlayerListReaderDelegate-Protocol.h"

@class GKPlayerListReader, NSString;

@interface GKFriendRecommendationsReader : NSObject <GKPlayerListReaderDelegate, GKDataReader>
{
    GKPlayerListReader *_listReader;	// 8 = 0x8
}

+ (id)readerWithReaderConnection:(id)arg1 writerConnection:(id)arg2 transport:(id)arg3;	// IMP=0x0000000100149fe4
@property(retain, nonatomic) GKPlayerListReader *listReader; // @synthesize listReader=_listReader;
- (int)familiarityForProfileLoadWithRelativePlayer:(id)arg1;	// IMP=0x000000010014a58c
- (id)mergeNetworkLoadedProfileResources:(id)arg1 withSparseListResources:(id)arg2;	// IMP=0x000000010014a320
- (id)listCacheWriterWithLanguage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010014a30c
- (id)listNetworkReaderWithTransport:(id)arg1 cachedListResponse:(id)arg2;	// IMP=0x000000010014a240
- (id)listCacheReaderWithLanguage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010014a22c
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010014a134
- (void)dealloc;	// IMP=0x000000010014a0dc
- (id)initWithReaderConnection:(id)arg1 writerConnection:(id)arg2 transport:(id)arg3;	// IMP=0x000000010014a048

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

