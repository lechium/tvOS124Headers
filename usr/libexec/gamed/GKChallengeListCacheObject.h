//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListCacheObject.h"

@class GKPlayerProfileCacheObject;

@interface GKChallengeListCacheObject : GKListCacheObject
{
}

+ (Class)entryClass;	// IMP=0x0000000100043b18
+ (id)entityName;	// IMP=0x0000000100043b0c
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000100043b2c

// Remaining properties
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;

@end

