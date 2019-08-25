//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PXPhotoLibraryUIChangeObserver.h"
#import "TVPCollectionViewCachingManagerDataSource.h"
#import "TVPCollectionViewDelegate.h"
#import "TVPCollectionViewDelegateFlowLayout.h"
#import "TVPPhotoLibraryTabbedViewController.h"
#import "UICollectionViewDataSource.h"

@class NSArray, NSMutableDictionary, NSString, PHCollectionList, TVPCollectionView, TVPCollectionViewCachingManager, TVPFetchManager, UIView;

@interface TVPPhotoLibraryAlbumsListController : UIViewController <UICollectionViewDataSource, TVPCollectionViewDelegate, PXPhotoLibraryUIChangeObserver, TVPCollectionViewCachingManagerDataSource, TVPCollectionViewDelegateFlowLayout, TVPPhotoLibraryTabbedViewController>
{
    _Bool _needsReload;	// 8 = 0x8
    TVPCollectionView *_albumsListView;	// 16 = 0x10
    UIView *_loadingView;	// 24 = 0x18
    TVPFetchManager *_fetchManager;	// 32 = 0x20
    TVPCollectionViewCachingManager *_cachingManager;	// 40 = 0x28
    NSArray *_albumAssetCollections;	// 48 = 0x30
    PHCollectionList *_defaultCollectionList;	// 56 = 0x38
    NSMutableDictionary *__subCollectionKeyAssetsFetchResults;	// 64 = 0x40
    NSMutableDictionary *__folderCountFetchResults;	// 72 = 0x48
}

@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(readonly, nonatomic) NSMutableDictionary *_folderCountFetchResults; // @synthesize _folderCountFetchResults=__folderCountFetchResults;
@property(readonly, nonatomic) NSMutableDictionary *_subCollectionKeyAssetsFetchResults; // @synthesize _subCollectionKeyAssetsFetchResults=__subCollectionKeyAssetsFetchResults;
@property(retain, nonatomic) PHCollectionList *defaultCollectionList; // @synthesize defaultCollectionList=_defaultCollectionList;
@property(copy, nonatomic) NSArray *albumAssetCollections; // @synthesize albumAssetCollections=_albumAssetCollections;
@property(retain, nonatomic) TVPCollectionViewCachingManager *cachingManager; // @synthesize cachingManager=_cachingManager;
@property(retain, nonatomic) TVPFetchManager *fetchManager; // @synthesize fetchManager=_fetchManager;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TVPCollectionView *albumsListView; // @synthesize albumsListView=_albumsListView;
- (void).cxx_destruct;	// IMP=0x0000000100074474
- (id)ppt_albumListCollectionView;	// IMP=0x0000000100074358
@property(readonly, nonatomic) long long tabMode;
- (id)_albumAtIndexPath:(id)arg1;	// IMP=0x0000000100074298
- (id)_assetAtIndexPath:(id)arg1;	// IMP=0x0000000100074104
- (void)_dismissLoadingView;	// IMP=0x0000000100074070
- (void)_displayLoadingView;	// IMP=0x0000000100073f74
- (long long)_assetCountForCollection:(id)arg1;	// IMP=0x0000000100073ee0
- (void)_fetchAlbumCollectionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010007398c
- (id)_overlayImageForAlbum:(id)arg1;	// IMP=0x00000001000738b0
- (id)collectionViewCachingManager:(id)arg1 assetsForIndexPaths:(id)arg2;	// IMP=0x00000001000736ec
- (struct CGSize)collectionView:(id)arg1 referenceSizeForTitleInLayout:(id)arg2;	// IMP=0x00000001000736dc
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000001000736c4
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100073344
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000731a8
- (void)_loadFolderCell:(id)arg1 withFolder:(id)arg2;	// IMP=0x0000000100072a18
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100072438
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100072420
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001000723dc
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000100072398
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x0000000100071624
- (unsigned long long)_indexOfFavouriteMemoryAlbumInArray:(id)arg1;	// IMP=0x00000001000714c4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100071404
- (id)preferredFocusEnvironments;	// IMP=0x0000000100071374
- (void)dealloc;	// IMP=0x00000001000712fc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010007124c
- (void)viewDidLoad;	// IMP=0x0000000100070b28
- (id)init;	// IMP=0x0000000100070b18
- (id)initWithCollectionList:(id)arg1;	// IMP=0x00000001000709a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
