//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListCacheObject.h"

@class GKGameCacheObject;

@interface GKAchievementDescriptionListCacheObject : GKListCacheObject
{
}

+ (id)entityName;	// IMP=0x0000000100033158
- (_Bool)isValid;	// IMP=0x0000000100033228
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000100033164

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end

