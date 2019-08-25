/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@interface _TVLCarouselCollectionViewLayout : UICollectionViewLayout {

	double _interitemSpacing;
	CGSize _itemSize;

}

@property (assign,nonatomic) CGSize itemSize;                      //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double interitemSpacing;              //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
-(void)_adjustLayoutAttributes:(id)arg1 forVirtualItemIndex:(long long)arg2 ;
-(void)_enumerateVisibleIndexPaths:(/*^block*/id)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(CGSize)itemSize;
-(void)setItemSize:(CGSize)arg1 ;
@end

