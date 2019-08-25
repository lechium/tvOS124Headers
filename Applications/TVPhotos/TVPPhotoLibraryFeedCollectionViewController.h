//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHPhotoLibraryChangeObserver.h"
#import "TVPCollectionViewCachingManagerDataSource.h"
#import "TVPCollectionViewDelegate.h"
#import "TVPSharedPSActivityViewLayoutDataSource.h"

@class NSArray, NSIndexPath, NSString, NSTimer, PHAssetCollection, TVPCollectionView, TVPCollectionViewCachingManager, TVPFetchManager, TVPPhotoBannerBrowserView, UIView;

@interface TVPPhotoLibraryFeedCollectionViewController : UIViewController <TVPSharedPSActivityViewLayoutDataSource, TVPCollectionViewDelegate, PHPhotoLibraryChangeObserver, TVPCollectionViewCachingManagerDataSource>
{
    TVPCollectionView *_photoFeedCollectionView;	// 8 = 0x8
    TVPPhotoBannerBrowserView *_photoFeedHeaderView;	// 16 = 0x10
    PHAssetCollection *_photoStreamFeedCollection;	// 24 = 0x18
    TVPCollectionViewCachingManager *_cachingManager;	// 32 = 0x20
    TVPFetchManager *_fetchManager;	// 40 = 0x28
    NSArray *_photoBatches;	// 48 = 0x30
    NSArray *_photoAssets;	// 56 = 0x38
    UIView *_loadingView;	// 64 = 0x40
    NSIndexPath *_preferredFocusIndexPath;	// 72 = 0x48
    NSTimer *_updateAssetsAndReloadTimer;	// 80 = 0x50
}

@property(retain, nonatomic) NSTimer *updateAssetsAndReloadTimer; // @synthesize updateAssetsAndReloadTimer=_updateAssetsAndReloadTimer;
@property(retain, nonatomic) NSIndexPath *preferredFocusIndexPath; // @synthesize preferredFocusIndexPath=_preferredFocusIndexPath;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) NSArray *photoAssets; // @synthesize photoAssets=_photoAssets;
@property(copy, nonatomic) NSArray *photoBatches; // @synthesize photoBatches=_photoBatches;
@property(retain, nonatomic) TVPFetchManager *fetchManager; // @synthesize fetchManager=_fetchManager;
@property(retain, nonatomic) TVPCollectionViewCachingManager *cachingManager; // @synthesize cachingManager=_cachingManager;
@property(retain, nonatomic) PHAssetCollection *photoStreamFeedCollection; // @synthesize photoStreamFeedCollection=_photoStreamFeedCollection;
@property(retain, nonatomic) TVPPhotoBannerBrowserView *photoFeedHeaderView; // @synthesize photoFeedHeaderView=_photoFeedHeaderView;
@property(retain, nonatomic) TVPCollectionView *photoFeedCollectionView; // @synthesize photoFeedCollectionView=_photoFeedCollectionView;
- (void).cxx_destruct;	// IMP=0x000000010006b9c8
- (void)_cancelExistingTimer;	// IMP=0x000000010006b838
- (void)_displayLoadingView;	// IMP=0x000000010006b73c
- (void)_didFinishTimedInterval:(id)arg1;	// IMP=0x000000010006b6a8
- (id)_photoStreamFeedHeaderView;	// IMP=0x000000010006b3b8
- (void)_cacheFeedInfoIfRequired;	// IMP=0x000000010006b3b4
- (void)_updateFeedInfoAndUI;	// IMP=0x000000010006b3b0
- (id)_feedCollection;	// IMP=0x000000010006b3a8
- (id)_photoStreamHeaderSubtitle;	// IMP=0x000000010006b3a0
- (id)_photoStreamHeaderTitle;	// IMP=0x000000010006b398
- (void)_onSelectSlideshowButton:(id)arg1;	// IMP=0x000000010006b394
- (void)_onSelectScreenSaverButton:(id)arg1;	// IMP=0x000000010006b390
- (id)collectionViewCachingManager:(id)arg1 assetWithTargetSizeAtIndexPath:(id)arg2;	// IMP=0x000000010006b214
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x000000010006b048
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000010006af9c
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010006af10
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010006af08
- (id)photoBatchesForCollectionView:(id)arg1 layout:(id)arg2;	// IMP=0x000000010006aef8
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010006aef0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010006aee8
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010006aed0
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010006ae8c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000010006ae48
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010006ad88
- (void)dealloc;	// IMP=0x000000010006ad10
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010006ac10
- (void)viewDidLoad;	// IMP=0x000000010006ab74
- (void)loadView;	// IMP=0x000000010006a890
- (id)preferredFocusEnvironments;	// IMP=0x000000010006a800
- (void)updateCollectionHeader;	// IMP=0x000000010006a6b4
- (void)loadPhotoFeedAssets;	// IMP=0x000000010006a3e8
- (void)resetFocusWithFocusedAsset:(id)arg1;	// IMP=0x000000010006a2a8
- (void)dismissLoadingView;	// IMP=0x000000010006a214
- (id)assetAtIndexPath:(id)arg1;	// IMP=0x000000010006a160
- (id)init;	// IMP=0x0000000100069fc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

