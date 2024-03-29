//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListCacheObject.h"

@class GKPlayerProfileCacheObject, NSDate;

@interface GKRecentGameListCacheObject : GKListCacheObject
{
}

+ (Class)entryClass;	// IMP=0x000000010003de8c
+ (id)entityName;	// IMP=0x000000010003de80
- (id)internalRepresentation;	// IMP=0x000000010003e068
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000010003dea0

// Remaining properties
@property(retain, nonatomic) GKPlayerProfileCacheObject *otherPlayer; // @dynamic otherPlayer;
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;
@property(retain, nonatomic) NSDate *sinceDate; // @dynamic sinceDate;

@end

