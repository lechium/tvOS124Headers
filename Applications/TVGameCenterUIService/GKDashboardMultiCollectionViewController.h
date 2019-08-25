//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardCollectionViewController.h"

@class NSArray;

@interface GKDashboardMultiCollectionViewController : GKDashboardCollectionViewController
{
    NSArray *_dataSources;	// 8 = 0x8
}

@property(retain, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010001e74c
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010001e6ec
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010001e68c
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010001e62c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010001e488
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010001e468
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010001e450
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;	// IMP=0x000000010001e3ac
- (_Bool)sectionHasData:(long long)arg1;	// IMP=0x000000010001e37c
- (_Bool)hasData;	// IMP=0x000000010001e25c
- (void)loadData;	// IMP=0x000000010001df30
- (void)clearSelection;	// IMP=0x000000010001ddf4
- (void)viewDidLoad;	// IMP=0x000000010001dc44
- (id)cellIdentifierForSection:(long long)arg1;	// IMP=0x000000010001dc0c
- (id)dataSourceForSection:(long long)arg1;	// IMP=0x000000010001dae4
- (void)dealloc;	// IMP=0x000000010001da8c

@end

