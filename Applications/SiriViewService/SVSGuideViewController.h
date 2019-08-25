//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SiriUISnippetCollectionViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSCache, NSDate, NSMutableArray, NSMutableSet, NSOperationQueue, NSSet, NSString, SAGuidanceGuideSnippet, SVSBigButtonController, UIImage;

@interface SVSGuideViewController : SiriUISnippetCollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSCache *_domainIconCache;	// 8 = 0x8
    NSDate *_startViewingTime;	// 16 = 0x10
    _Bool _showingDetails;	// 24 = 0x18
    NSSet *_siriEnabledAppList;	// 32 = 0x20
    SVSBigButtonController *_bigButtonController;	// 40 = 0x28
    NSOperationQueue *_guideImageOperationQueue;	// 48 = 0x30
    NSMutableSet *_spawnedGuideImageFetches;	// 56 = 0x38
    UIImage *_fallbackImage;	// 64 = 0x40
    NSMutableArray *_enabledIntentSupportedAppSnippets;	// 72 = 0x48
    SAGuidanceGuideSnippet *_guideSnippet;	// 80 = 0x50
}

@property(retain, nonatomic, getter=_guideSnippet) SAGuidanceGuideSnippet *guideSnippet; // @synthesize guideSnippet=_guideSnippet;
- (void).cxx_destruct;	// IMP=0x0000000100019f40
- (void)_prepareSiriEnabledAppList;	// IMP=0x0000000100019cd4
- (_Bool)_hasTitle;	// IMP=0x0000000100019c5c
- (id)_fallbackImage;	// IMP=0x0000000100019bac
- (id)_iconImageForGuideDomainSnippet:(id)arg1;	// IMP=0x0000000100019828
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000001000197a0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100019668
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100019468
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100019460
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000100019458
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010001928c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100018b70
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100018a14
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100018a0c
- (double)_heightOfRowForDomainSnippet:(id)arg1;	// IMP=0x0000000100018918
- (id)_domainSnippetForIndexPath:(id)arg1;	// IMP=0x0000000100018874
- (id)_domainSnippetForEnabledIntentSupportedAppAtIndex:(unsigned long long)arg1;	// IMP=0x000000010001885c
- (id)_domainSnippetForHelpDomainAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000187d8
- (long long)_numberOfIntentEnabledApps;	// IMP=0x00000001000187c0
- (long long)_numberOfIntentSupportedApps;	// IMP=0x000000010001874c
- (long long)_numberOfHelpDomains;	// IMP=0x00000001000186d8
- (long long)_pinAnimationType;	// IMP=0x00000001000186bc
- (_Bool)usePlatterStyle;	// IMP=0x00000001000186b4
- (_Bool)wantsToManageBackgroundColor;	// IMP=0x00000001000186ac
- (double)desiredHeightForTransparentHeaderView;	// IMP=0x00000001000185d8
- (void)configureReusableTransparentHeaderView:(id)arg1;	// IMP=0x0000000100018548
- (Class)transparentHeaderViewClass;	// IMP=0x000000010001850c
- (void)_endTrackingGuideShowTimeIfNecessary;	// IMP=0x0000000100018374
- (double)desiredTopPaddingBelowController:(id)arg1;	// IMP=0x000000010001824c
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x0000000100018064
- (void)siriDidDeactivate;	// IMP=0x0000000100018058
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100017f20
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100017db8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100017c18
- (void)loadView;	// IMP=0x0000000100017a34
- (id)_bigButtonViewController;	// IMP=0x000000010001792c
- (void)setDelegate:(id)arg1;	// IMP=0x00000001000178dc
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100017884
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100017740

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

