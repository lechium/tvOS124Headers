//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSDictionary, NSMutableDictionary;

@interface TVPSharedPSActivityViewFlowLayout : UICollectionViewLayout
{
    double _totalContentXOffset;	// 8 = 0x8
    NSDictionary *_photoBatchFrames;	// 16 = 0x10
    NSMutableDictionary *_indexPathToAttributesForCell;	// 24 = 0x18
}

@property(copy, nonatomic) NSMutableDictionary *indexPathToAttributesForCell; // @synthesize indexPathToAttributesForCell=_indexPathToAttributesForCell;
@property(copy, nonatomic) NSDictionary *photoBatchFrames; // @synthesize photoBatchFrames=_photoBatchFrames;
@property(nonatomic) double totalContentXOffset; // @synthesize totalContentXOffset=_totalContentXOffset;
- (void).cxx_destruct;	// IMP=0x0000000100006c10
- (struct CGSize)_contentSize;	// IMP=0x0000000100006b10
- (id)_batchFramesForPhotoBatches:(id)arg1;	// IMP=0x0000000100006848
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000060d0
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000100005a34
- (struct CGSize)collectionViewContentSize;	// IMP=0x0000000100005a28
- (void)prepareLayout;	// IMP=0x00000001000058d4

@end
