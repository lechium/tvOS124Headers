//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSDictionary, NSIndexPath;

@interface PBAppSwitcherFullFocusLayout : UICollectionViewLayout
{
    NSIndexPath *_originIndexPath;	// 8 = 0x8
    NSDictionary *_computedAttributes;	// 16 = 0x10
    struct CGSize _focusableCellSize;	// 24 = 0x18
}

+ (Class)layoutAttributesClass;	// IMP=0x000000010005dbec
@property(readonly, nonatomic) struct CGSize focusableCellSize; // @synthesize focusableCellSize=_focusableCellSize;
@property(copy, nonatomic) NSDictionary *computedAttributes; // @synthesize computedAttributes=_computedAttributes;
@property(copy, nonatomic) NSIndexPath *originIndexPath; // @synthesize originIndexPath=_originIndexPath;
- (void).cxx_destruct;	// IMP=0x000000010005e470
- (void)prepareLayout;	// IMP=0x000000010005df14
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000010005deec
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000010005dec4
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x000000010005dd98
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x000000010005dd70
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000010005dd68
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000010005dc98
- (id)init;	// IMP=0x000000010005db9c

@end
