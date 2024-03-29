//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKGameRecord, GKLeaderboard, NSArray, UIFont;

@interface GKDashboardLeaderboardScoreDataSource : GKCollectionDataSource
{
    _Bool _showingMoreScores;	// 8 = 0x8
    _Bool _forceInitialShowMore;	// 9 = 0x9
    GKLeaderboard *_leaderboard;	// 16 = 0x10
    id _timeScopeTarget;	// 24 = 0x18
    SEL _timeScopeAction;	// 32 = 0x20
    GKGameRecord *_gameRecord;	// 40 = 0x28
    NSArray *_scores;	// 48 = 0x30
    long long _visibleItemCount;	// 56 = 0x38
}

@property(nonatomic) _Bool forceInitialShowMore; // @synthesize forceInitialShowMore=_forceInitialShowMore;
@property(nonatomic, getter=isShowingMoreScores) _Bool showingMoreScores; // @synthesize showingMoreScores=_showingMoreScores;
@property(nonatomic) long long visibleItemCount; // @synthesize visibleItemCount=_visibleItemCount;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) SEL timeScopeAction; // @synthesize timeScopeAction=_timeScopeAction;
@property(nonatomic) id timeScopeTarget; // @synthesize timeScopeTarget=_timeScopeTarget;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100023a84
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100023a50
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010002385c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000010002372c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000236e8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000234ac
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001000234a4
- (void)sectionHeaderButtonPressed:(id)arg1;	// IMP=0x000000010002346c
@property(readonly, nonatomic) UIFont *sectionHeaderFont;
- (id)sectionHeaderText;	// IMP=0x00000001000232e0
- (id)itemForIndexPath:(id)arg1;	// IMP=0x0000000100023214
- (double)preferredCollectionHeight;	// IMP=0x0000000100023118
- (long long)itemCount;	// IMP=0x0000000100023108
@property(readonly, nonatomic) _Bool needsShowcaseCell; // @dynamic needsShowcaseCell;
- (_Bool)isShowcaseIndexPath:(id)arg1;	// IMP=0x0000000100023024
- (_Bool)isShowMoreIndexPath:(id)arg1;	// IMP=0x0000000100022fcc
@property(readonly, nonatomic) _Bool needsShowMoreCell; // @dynamic needsShowMoreCell;
- (void)revealMoreItemsInCollectionView:(id)arg1 section:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100022af4
- (void)showMoreInCollectionView:(id)arg1 section:(long long)arg2;	// IMP=0x0000000100022618
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022410
- (void)setupCollectionView:(id)arg1;	// IMP=0x00000001000222e8
@property(nonatomic) long long timeScope; // @dynamic timeScope;
@property(nonatomic) long long playerScope; // @dynamic playerScope;
- (void)dealloc;	// IMP=0x0000000100022204
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;	// IMP=0x0000000100022130

@end

