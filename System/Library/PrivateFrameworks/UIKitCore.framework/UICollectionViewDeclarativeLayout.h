/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray, UICollectionLayoutGeometry, NSMutableDictionary, _UICollectionViewGeometricIndexer, _UIDataSourceSnapshotter;

@interface UICollectionViewDeclarativeLayout : UICollectionViewLayout {

	long long _scrollDirection;
	NSArray* _sectionGeometries;
	UICollectionLayoutGeometry* _templateLayoutGeometry;
	NSArray* _sectionFrames;
	NSMutableDictionary* _cachedAttributes;
	_UICollectionViewGeometricIndexer* _sectionGeometricIndexer;
	_UIDataSourceSnapshotter* _dataSourceSnapshotter;
	CGSize _itemSize;
	CGRect _contentFrame;

}

@property (nonatomic,retain) NSArray * sectionGeometries;                                              //@synthesize sectionGeometries=_sectionGeometries - In the implementation block
@property (nonatomic,retain) UICollectionLayoutGeometry * templateLayoutGeometry;                      //@synthesize templateLayoutGeometry=_templateLayoutGeometry - In the implementation block
@property (nonatomic,retain) NSArray * sectionFrames;                                                  //@synthesize sectionFrames=_sectionFrames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedAttributes;                                   //@synthesize cachedAttributes=_cachedAttributes - In the implementation block
@property (nonatomic,retain) _UICollectionViewGeometricIndexer * sectionGeometricIndexer;              //@synthesize sectionGeometricIndexer=_sectionGeometricIndexer - In the implementation block
@property (nonatomic,retain) _UIDataSourceSnapshotter * dataSourceSnapshotter;                         //@synthesize dataSourceSnapshotter=_dataSourceSnapshotter - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                                                      //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                                          //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) long long scrollDirection;                                                //@synthesize scrollDirection=_scrollDirection - In the implementation block
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(long long)scrollDirection;
-(void)setDataSourceSnapshotter:(_UIDataSourceSnapshotter *)arg1 ;
-(void)_configureSectionGeometries;
-(id)_layoutGeometryForSection:(long long)arg1 ;
-(CGSize)itemSize;
-(void)setCachedAttributes:(NSMutableDictionary *)arg1 ;
-(void)setSectionGeometricIndexer:(_UICollectionViewGeometricIndexer *)arg1 ;
-(void)setSectionFrames:(NSArray *)arg1 ;
-(_UICollectionViewGeometricIndexer *)sectionGeometricIndexer;
-(NSArray *)sectionGeometries;
-(NSArray *)sectionFrames;
-(NSMutableDictionary *)cachedAttributes;
-(_UIDataSourceSnapshotter *)dataSourceSnapshotter;
-(UICollectionLayoutGeometry *)templateLayoutGeometry;
-(void)setSectionGeometries:(NSArray *)arg1 ;
-(id)initWithLayoutGeometriesForSections:(id)arg1 ;
-(id)initWithLayoutGeometry:(id)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(void)setScrollDirection:(long long)arg1 ;
-(void)setTemplateLayoutGeometry:(UICollectionLayoutGeometry *)arg1 ;
@end

