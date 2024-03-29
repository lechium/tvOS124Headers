//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKExpiringCacheObject.h"

@class GKAchievementPointsEntryCacheObject, GKGameCacheObject, GKPlayerProfileCacheObject, NSDate, NSNumber, NSString;

@interface GKGameRecordCacheObject : GKExpiringCacheObject
{
}

+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x000000010003669c
+ (id)fetchSortDescriptors;	// IMP=0x00000001000365b8
+ (id)entityName;	// IMP=0x00000001000365ac
+ (id)recordForGame:(id)arg1 playerProfile:(id)arg2;	// IMP=0x0000000100034334
+ (id)recordsForGames:(id)arg1 playerProfile:(id)arg2;	// IMP=0x00000001000340c4
- (id)internalRepresentation;	// IMP=0x0000000100036484
- (void)updateAchievementsWithServerRepresentation:(id)arg1;	// IMP=0x00000001000362a4
- (void)updateIDsWithServerRepresentation:(id)arg1;	// IMP=0x0000000100035404
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00000001000343cc

// Remaining properties
@property(retain, nonatomic) NSNumber *achievementPoints; // @dynamic achievementPoints;
@property(retain, nonatomic) GKAchievementPointsEntryCacheObject *achievementPointsEntry; // @dynamic achievementPointsEntry;
@property(retain, nonatomic) NSNumber *achievements; // @dynamic achievements;
@property(retain, nonatomic) NSString *defaultLeaderboardIdentifier; // @dynamic defaultLeaderboardIdentifier;
@property(retain, nonatomic) NSNumber *friendRank; // @dynamic friendRank;
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) NSString *gamePlayerID; // @dynamic gamePlayerID;
@property(retain, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property(retain, nonatomic) NSNumber *maxFriendRank; // @dynamic maxFriendRank;
@property(retain, nonatomic) NSNumber *maxRank; // @dynamic maxRank;
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;
@property(retain, nonatomic) NSDate *purchaseDate; // @dynamic purchaseDate;
@property(retain, nonatomic) NSNumber *rank; // @dynamic rank;
@property(retain, nonatomic) NSString *teamPlayerID; // @dynamic teamPlayerID;
@property(nonatomic) _Bool valid; // @dynamic valid;

@end

