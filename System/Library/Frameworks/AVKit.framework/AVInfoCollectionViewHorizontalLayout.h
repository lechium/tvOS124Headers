/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableArray;

@interface AVInfoCollectionViewHorizontalLayout : UICollectionViewLayout {

	NSMutableArray* _allCellSizes;
	double _sumOfCellWidths;
	double _maxCellHeight;
	NSMutableArray* _allLayoutAttributes;
	BOOL _isLayoutInProgress;
	BOOL _centered;
	double _interitemSpacing;
	double _minimumItemHeight;

}

@property (assign,getter=isCentered,nonatomic) BOOL centered;              //@synthesize centered=_centered - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                      //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) double minimumItemHeight;                     //@synthesize minimumItemHeight=_minimumItemHeight - In the implementation block
-(void)_lazilyLoadAllCellSizes;
-(CGSize)_contentSizeUsedByCells;
-(CGSize)_sizeForCellAtIndexPath:(id)arg1 ;
-(void)_buildLayout;
-(double)minimumItemHeight;
-(void)setMinimumItemHeight:(double)arg1 ;
-(void)setCentered:(BOOL)arg1 ;
-(BOOL)isCentered;
-(id)init;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
@end
