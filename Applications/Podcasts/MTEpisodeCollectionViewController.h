//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCollectionListViewController.h"

#import "IMActionControllerDelegate.h"
#import "MTEpisodeCollectionViewCellDelegate.h"
#import "MTReachabilityObserver.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, UIRefreshControl, UISearchController;

@interface MTEpisodeCollectionViewController : MTCollectionListViewController <MTReachabilityObserver, IMActionControllerDelegate, UICollectionViewDelegateFlowLayout, MTEpisodeCollectionViewCellDelegate>
{
    _Bool _needsScrollAdjust;	// 8 = 0x8
    double _lastDownloadUpdate;	// 16 = 0x10
    _Bool _cellularReachable;	// 24 = 0x18
    UISearchController *_searchController;	// 32 = 0x20
    _Bool _showsArtworkInCells;	// 40 = 0x28
    _Bool _showsPlayStateInCells;	// 41 = 0x29
    int _refreshControlState;	// 44 = 0x2c
    unsigned long long _cellStyle;	// 48 = 0x30
    UIRefreshControl *_mt_refreshControl;	// 56 = 0x38
    NSString *_expandedEpisodeUuid;	// 64 = 0x40
}

+ (Class)sizingCellClass;	// IMP=0x0000000100141840
@property(retain, nonatomic) NSString *expandedEpisodeUuid; // @synthesize expandedEpisodeUuid=_expandedEpisodeUuid;
@property(nonatomic) int refreshControlState; // @synthesize refreshControlState=_refreshControlState;
@property(retain, nonatomic, setter=mt_setRefreshControl:) UIRefreshControl *mt_refreshControl; // @synthesize mt_refreshControl=_mt_refreshControl;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) _Bool showsPlayStateInCells; // @synthesize showsPlayStateInCells=_showsPlayStateInCells;
@property(nonatomic) _Bool showsArtworkInCells; // @synthesize showsArtworkInCells=_showsArtworkInCells;
- (void).cxx_destruct;	// IMP=0x0000000100145254
- (id)editingToolbarItems;	// IMP=0x0000000100145050
- (void)markSelectedItemsAsSaved:(_Bool)arg1;	// IMP=0x0000000100144dcc
- (void)markSelectedItems:(_Bool)arg1;	// IMP=0x0000000100144a28
- (void)scrollToLatestIfNeeded:(_Bool)arg1;	// IMP=0x00000001001448e4
- (void)setNumberOfColumns:(unsigned long long)arg1;	// IMP=0x00000001001447c8
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000001001447c0
- (void)deselectedItemAtIndexPath:(id)arg1;	// IMP=0x00000001001447b0
- (void)selectedItemAtIndexPath:(id)arg1;	// IMP=0x00000001001445ec
- (double)calculateCellWidthForSize:(struct CGSize)arg1;	// IMP=0x000000010014443c
- (double)estimatedCellHeightForWidth:(double)arg1;	// IMP=0x00000001001443f0
- (void)expandCollectionViewCell:(id)arg1;	// IMP=0x0000000100144378
- (void)collapseCollectionViewCell:(id)arg1;	// IMP=0x0000000100144300
- (void)setExpandedEpisodeUuid:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001441fc
- (void)toggleExpansionForEpisodeUuid:(id)arg1;	// IMP=0x000000010014415c
- (double)_currentMaxWidthForSectionHeaders;	// IMP=0x00000001001440ec
- (void)_updateSectionHeaderInsets;	// IMP=0x0000000100143f2c
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000100143eb4
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100143de8
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100143ce8
- (void)collectionView:(id)arg1 configureCell:(id)arg2 withObject:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x0000000100143b0c
- (id)reuseIdentifierForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100143ae0
- (void)dismissSwipeToDeleteMode;	// IMP=0x0000000100143a5c
- (void)didPerformActionInSheet:(id)arg1;	// IMP=0x0000000100143a50
- (void)playEpisodeAtIndexPath:(id)arg1;	// IMP=0x0000000100143a04
- (void)cellDidChangeSize:(id)arg1;	// IMP=0x00000001001438d8
- (void)cell:(id)arg1 moreButtonTapped:(id)arg2;	// IMP=0x0000000100143844
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x0000000100143784
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x0000000100143648
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0000000100143614
- (void)didEndRefreshing;	// IMP=0x0000000100143604
- (void)endRefreshing;	// IMP=0x00000001001434d0
- (void)beginRefreshing;	// IMP=0x0000000100143474
- (void)refreshControlStateMovedToEnding;	// IMP=0x0000000100143470
- (void)refreshControlStateMovedToIdle;	// IMP=0x000000010014346c
- (void)refreshControlStateMovedToRefreshing;	// IMP=0x0000000100143468
- (_Bool)shouldCalculateDynamicHeightForIndexPath:(id)arg1;	// IMP=0x000000010014338c
- (void)updateCellSizesWithSize:(struct CGSize)arg1;	// IMP=0x000000010014333c
- (void)_willUpdateCollectionView:(id)arg1;	// IMP=0x0000000100142b44
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100142a28
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100142770
- (void)updateCellStyle;	// IMP=0x0000000100142574
- (unsigned long long)sectionTypeForIndexPath:(id)arg1;	// IMP=0x00000001001423f0
- (id)indexPathForEpisodeUuid:(id)arg1;	// IMP=0x000000010014231c
- (void)updateActionSheetsAndPopovers;	// IMP=0x0000000100142198
- (void)dismissActionSheetsAndPopovers;	// IMP=0x0000000100142014
- (void)nowPlayingItemChanged:(id)arg1;	// IMP=0x0000000100141db0
- (void)reachabilityChangedFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x0000000100141cd0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100141bc8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100141b5c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100141aec
- (void)viewDidLoad;	// IMP=0x0000000100141a9c
- (void)registerCollectionViewClasses;	// IMP=0x0000000100141a08
- (void)dealloc;	// IMP=0x0000000100141940
- (id)initWithCompositeFetchedResultsController:(id)arg1;	// IMP=0x0000000100141864
- (id)init;	// IMP=0x0000000100141854

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

