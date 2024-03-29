//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVCollectionViewDelegate.h"
#import "UICollectionViewDataSource.h"

@class MPModelLibraryRequest, MPModelPlaylist, MPModelResponse, NSArray, NSString, TVCollectionView, TVImageView, TVLabel, UIControl;

@interface TVMusicLibraryPlaylistDetailViewController : UIViewController <TVCollectionViewDelegate, UICollectionViewDataSource>
{
    TVLabel *_playlistTitleLabel;	// 8 = 0x8
    TVLabel *_infoLabel;	// 16 = 0x10
    TVLabel *_emptyPlaylistLabel;	// 24 = 0x18
    TVCollectionView *_collectionView;	// 32 = 0x20
    TVImageView *_artworkImageView;	// 40 = 0x28
    UIControl *_shuffleButton;	// 48 = 0x30
    UIControl *_moreButton;	// 56 = 0x38
    NSArray *_actionButtons;	// 64 = 0x40
    _Bool _visibleOnScreen;	// 72 = 0x48
    _Bool _shouldUpdateOnViewDidAppear;	// 73 = 0x49
    MPModelPlaylist *_playlist;	// 80 = 0x50
    MPModelResponse *_mpResponse;	// 88 = 0x58
    MPModelLibraryRequest *_mpRequest;	// 96 = 0x60
}

@property(retain, nonatomic) MPModelLibraryRequest *mpRequest; // @synthesize mpRequest=_mpRequest;
@property(retain, nonatomic) MPModelResponse *mpResponse; // @synthesize mpResponse=_mpResponse;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;	// IMP=0x000000010002423c
- (void)_modelResponseDidInvalidate:(id)arg1;	// IMP=0x00000001000240f4
- (void)_updateEmptyPlaylistIndicator;	// IMP=0x0000000100023f98
- (void)_updateShuffleButton;	// IMP=0x0000000100023da4
- (void)_updateInfoLabel;	// IMP=0x0000000100023c30
- (void)_processResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000100023a9c
- (void)_performRequest;	// IMP=0x0000000100023948
- (id)_songCellPlaceholderImage;	// IMP=0x00000001000238e4
- (id)_artworkPlaceholderImage;	// IMP=0x00000001000237a0
- (void)_selectedMoreButton;	// IMP=0x00000001000236f8
- (void)_selectedShuffleButton;	// IMP=0x0000000100023628
- (void)_playFocusedSong;	// IMP=0x00000001000235d0
- (void)_startMusicPlaybackAtIndexPath:(id)arg1;	// IMP=0x000000010002327c
- (id)_songAtIndexPath:(id)arg1;	// IMP=0x0000000100023194
- (void)_setPositionForView:(id)arg1 topLeft:(struct CGPoint)arg2;	// IMP=0x0000000100023124
- (id)_addLabelWithFont:(id)arg1 text:(id)arg2;	// IMP=0x0000000100022fd4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100022bac
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100022b38
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000229cc
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000229c4
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100022918
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010002283c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100022618
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100021fc8
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100021f94
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100021f20
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100021ed4
- (void)viewDidLoad;	// IMP=0x0000000100021704
- (id)initWithPlaylist:(id)arg1;	// IMP=0x00000001000213cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

