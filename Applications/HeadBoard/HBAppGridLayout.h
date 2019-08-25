//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSArray, NSIndexPath;

@interface HBAppGridLayout : UICollectionViewFlowLayout
{
    _Bool _displayHoverOverlay;	// 8 = 0x8
    _Bool _dockMode;	// 9 = 0x9
}

+ (Class)layoutAttributesClass;	// IMP=0x0000000100091c0c
+ (id)layoutAttributesNearPosition:(struct CGPoint)arg1 inLayoutAttributes:(id)arg2;	// IMP=0x00000001000909ac
@property(nonatomic) _Bool dockMode; // @synthesize dockMode=_dockMode;
- (id)_delegateRespondingToHoverOverlayRect;	// IMP=0x000000010009250c
- (id)_layoutAttributesForHoverRegionOverlayAtIndexPath:(id)arg1;	// IMP=0x00000001000923fc
- (_Bool)_shouldDisplayHoverOverlay;	// IMP=0x00000001000923a8
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000010009234c
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100092124
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010009205c
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100091fbc
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000100091c20
@property(readonly, nonatomic) unsigned long long indexOfLastRow;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (unsigned long long)colFromIndexPath:(id)arg1;	// IMP=0x0000000100091a9c
- (unsigned long long)rowFromIndexPath:(id)arg1;	// IMP=0x0000000100091a58
- (id)_layoutAttributesForCellsInRowNearPosition:(struct CGPoint)arg1 positionContainedInRow:(_Bool *)arg2 constrainToHoverRect:(_Bool)arg3;	// IMP=0x0000000100091600
- (struct CGRect)_searchRectForConstrainToHoverRect:(_Bool)arg1;	// IMP=0x0000000100091504
- (id)_layoutAttributesForCellsInRect:(struct CGRect)arg1;	// IMP=0x0000000100091344
- (id)indexPathInRowNearestPosition:(struct CGPoint)arg1 constrainToHoverRect:(_Bool)arg2;	// IMP=0x0000000100091290
- (id)indexPathInRowNearestPosition:(struct CGPoint)arg1;	// IMP=0x0000000100091280
- (id)indexPathNearPosition:(struct CGPoint)arg1 constrainToHoverRect:(_Bool)arg2;	// IMP=0x0000000100091068
- (id)indexPathNearPosition:(struct CGPoint)arg1;	// IMP=0x0000000100091058
- (id)indexPathAdjacentToItemsNearPosition:(struct CGPoint)arg1 fromIndexPath:(id)arg2 constrainToHoverRect:(_Bool)arg3;	// IMP=0x0000000100090b98
- (id)indexPathAdjacentToItemsNearPosition:(struct CGPoint)arg1 fromIndexPath:(id)arg2;	// IMP=0x0000000100090b88
- (id)indexPathInDirection:(long long)arg1 fromIndexPath:(id)arg2;	// IMP=0x00000001000907d0
- (_Bool)isIndexPathInDock:(id)arg1;	// IMP=0x0000000100090748
@property(readonly, nonatomic) NSIndexPath *firstIndexPathOutOfDock;
@property(readonly, nonatomic) NSArray *indexPathsInDock;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
@property(readonly, nonatomic) double dockHeight;
- (id)init;	// IMP=0x0000000100090410

@end

