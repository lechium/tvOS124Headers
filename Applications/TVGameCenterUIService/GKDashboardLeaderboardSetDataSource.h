//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKGameRecord, NSArray, NSDictionary;

@interface GKDashboardLeaderboardSetDataSource : GKCollectionDataSource
{
    NSDictionary *_leaderboardSetAssetNames;	// 8 = 0x8
    NSDictionary *_leaderboardAssetNames;	// 16 = 0x10
    GKGameRecord *_gameRecord;	// 24 = 0x18
    NSArray *_leaderboardSets;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *leaderboardSets; // @synthesize leaderboardSets=_leaderboardSets;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(retain, nonatomic) NSDictionary *leaderboardAssetNames; // @synthesize leaderboardAssetNames=_leaderboardAssetNames;
@property(retain, nonatomic) NSDictionary *leaderboardSetAssetNames; // @synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010000b974
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010000b940
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010000b92c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010000b74c
- (id)sectionHeaderText;	// IMP=0x000000010000b654
- (id)itemForIndexPath:(id)arg1;	// IMP=0x000000010000b5b4
- (double)preferredCollectionHeight;	// IMP=0x000000010000b5a8
- (long long)itemCount;	// IMP=0x000000010000b590
- (void)removeLeaderboardSetsWithoutImages;	// IMP=0x000000010000b3f4
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000aec4
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000010000ad7c
- (void)dealloc;	// IMP=0x000000010000ace4
- (id)initWithGameRecord:(id)arg1;	// IMP=0x000000010000ac70

@end

