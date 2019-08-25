//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, TVImageScaleDecorator, TVPhotoCollection, UICollectionView;

@interface TVSettingsPhotoCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    TVPhotoCollection *_collection;	// 8 = 0x8
    TVImageScaleDecorator *_scaleDecorator;	// 16 = 0x10
    id <TVSettingsPhotoCollectionViewControllerSelectionDelegate> _delegate;	// 24 = 0x18
    UICollectionView *_gridView;	// 32 = 0x20
    NSArray *_photoAssets;	// 40 = 0x28
}

@property(copy, nonatomic) NSArray *photoAssets; // @synthesize photoAssets=_photoAssets;
@property(retain, nonatomic) UICollectionView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak id <TVSettingsPhotoCollectionViewControllerSelectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVPhotoCollection *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;	// IMP=0x000000010007e038
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010007df20
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010007dd40
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010007db84
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010007db6c
- (id)preferredFocusEnvironments;	// IMP=0x000000010007d808
- (void)loadView;	// IMP=0x000000010007d56c
- (void)dealloc;	// IMP=0x000000010007d4f4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010007d424

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
