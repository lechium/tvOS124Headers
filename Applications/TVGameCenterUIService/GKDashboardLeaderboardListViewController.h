//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardCollectionViewController.h"

@class GKLeaderboardSet;

@interface GKDashboardLeaderboardListViewController : GKDashboardCollectionViewController
{
    GKLeaderboardSet *_leaderboardSet;	// 8 = 0x8
}

@property(retain, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100008828
- (void)viewDidLoad;	// IMP=0x0000000100008694
- (void)dealloc;	// IMP=0x000000010000863c
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;	// IMP=0x0000000100008538

@end

