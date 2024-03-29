//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardCollectionViewController.h"

@class GKDashboardLeaderboardScoreDataSource, GKDashboardLeaderboardScoreHeaderView, GKLeaderboard;

@interface GKDashboardLeaderboardScoreViewController : GKDashboardCollectionViewController
{
    GKDashboardLeaderboardScoreHeaderView *_headerView;	// 8 = 0x8
    GKLeaderboard *_leaderboard;	// 16 = 0x10
    GKDashboardLeaderboardScoreDataSource *_friendDataSource;	// 24 = 0x18
    GKDashboardLeaderboardScoreDataSource *_globalDataSource;	// 32 = 0x20
    long long _timeScope;	// 40 = 0x28
}

+ (void)setInitialTimeScope:(long long)arg1;	// IMP=0x0000000100015d8c
+ (long long)initialTimeScope;	// IMP=0x0000000100015d80
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) GKDashboardLeaderboardScoreDataSource *globalDataSource; // @synthesize globalDataSource=_globalDataSource;
@property(retain, nonatomic) GKDashboardLeaderboardScoreDataSource *friendDataSource; // @synthesize friendDataSource=_friendDataSource;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKDashboardLeaderboardScoreHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100016af4
- (void)donePressed:(id)arg1;	// IMP=0x0000000100016ae0
- (void)timeScopePressed:(id)arg1;	// IMP=0x00000001000165fc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000165bc
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000164a0
- (void)updateColumnLayoutForSize:(struct CGSize)arg1;	// IMP=0x00000001000162f4
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100016148
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;	// IMP=0x0000000100015ff8
- (void)viewDidLoad;	// IMP=0x0000000100015d98
- (void)dealloc;	// IMP=0x0000000100015ce8
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;	// IMP=0x0000000100015920

@end

