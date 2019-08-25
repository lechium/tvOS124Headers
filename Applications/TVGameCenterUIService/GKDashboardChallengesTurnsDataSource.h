//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionMultiDataSource.h"

@class GKChallengeDataSource, GKDashboardTurnDataSource;

@interface GKDashboardChallengesTurnsDataSource : GKCollectionMultiDataSource
{
    GKDashboardTurnDataSource *_turnDataSource;	// 8 = 0x8
    GKChallengeDataSource *_challengeDataSource;	// 16 = 0x10
    long long _numberShownInFirstSection;	// 24 = 0x18
}

@property(nonatomic) long long numberShownInFirstSection; // @synthesize numberShownInFirstSection=_numberShownInFirstSection;
@property(nonatomic) GKChallengeDataSource *challengeDataSource; // @synthesize challengeDataSource=_challengeDataSource;
@property(nonatomic) GKDashboardTurnDataSource *turnDataSource; // @synthesize turnDataSource=_turnDataSource;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010001a1dc
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010001a100
- (_Bool)isShowMoreIndexPath:(id)arg1;	// IMP=0x000000010001a07c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010001a034
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019dc4
- (void)setupCollectionView:(id)arg1;	// IMP=0x0000000100019c7c
@property(nonatomic) _Bool shouldShowQuitForTurnBasedMatch;
@property(nonatomic) _Bool shouldShowPlayForTurnBasedMatch;
@property(nonatomic) _Bool shouldShowPlayForChallenge;
- (id)initWithGameRecord:(id)arg1;	// IMP=0x0000000100019ab0

@end

