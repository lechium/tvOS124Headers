//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKGameStatService-Protocol.h"

@class NSString;

@interface GKGameStatService : GKService <GKGameStatService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001001578fc
+ (Class)interfaceClass;	// IMP=0x00000001001578e8
- (oneway void)getLeaderboardSetsForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100162050
- (oneway void)getDefaultLeaderboardIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100161efc
- (oneway void)setDefaultLeaderboardID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100161a90
- (oneway void)getLeaderboardsForGameDescriptor:(id)arg1 player:(id)arg2 setIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100160bb0
- (void)loadLeaderboardsForGameDescriptor:(id)arg1 player:(id)arg2 setIdentifier:(id)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010016042c
- (void)fetchLeaderboardsForGameDescriptor:(id)arg1 player:(id)arg2 setIdentifier:(id)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100160250
- (void)cleanUpLeaderboardTitles:(id)arg1 set:(id)arg2 context:(id)arg3;	// IMP=0x000000010015ffa8
- (void)submitScores:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010015f6e0
- (oneway void)getLeaderboadForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010015f334
- (oneway void)resetAchievementsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010015edf8
- (void)submitAchievements:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010015ddf4
- (oneway void)getAchievementsForGameDescriptor:(id)arg1 players:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010015d524
- (void)loadAchievementsForGame:(id)arg1 players:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010015cb7c
- (void)fetchAchievementsForGame:(id)arg1 players:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010015c4f4
- (oneway void)getAchievementDescriptionsForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010015bea0
- (void)loadAchievementDescriptionsForGame:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010015b824
- (void)fetchAchievementDescriptionsForGame:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010015b724
- (oneway void)getRecentPlayersWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010015b6b8
- (oneway void)getRecentMatchesForGameDescriptor:(id)arg1 otherPlayer:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010015b690
- (void)getRecentGamesWithPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010015af1c
- (void)getRecentPlayersForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010015a4b8
- (void)loadRecentGamesBetweenPlayer:(id)arg1 otherPlayer:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001599c4
- (void)loadRecentPlayersWithPlayer:(id)arg1 game:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001589e4
- (void)fetchRecentGamesBetweenPlayer:(id)arg1 otherPlayer:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100158810
- (void)fetchRecentPlayersWithPlayer:(id)arg1 game:(id)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010015863c
- (oneway void)getPlayersForGameDescriptor:(id)arg1 includeCompatibleMultiplayerGames:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100158628
- (oneway void)getPlayersForGameDescriptor:(id)arg1 achievementIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100158610
- (oneway void)getPlayersForGameDescriptor:(id)arg1 leaderboardIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001585f8
- (void)_getPlayersForGameDescriptor:(id)arg1 type:(int)arg2 reference:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100157904

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
