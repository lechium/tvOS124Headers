/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/TVCollectionViewDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLShelfElement, TVLDocument, TVCollectionView, NSIndexPath, NSString;

@interface TVLShelfView : UIView <UICollectionViewDataSource, TVCollectionViewDelegate, ATVUpdatable> {

	unsigned long long _columnCount;
	CGSize _itemSize;
	TVLShelfElement* _shelfElement;
	TVLDocument* _feedDocument;
	TVCollectionView* _shelfView;
	long long _titleStyle;
	BOOL _centered;
	BOOL _forceAlwaysShowsTitles;
	BOOL _partOfShelfList;
	NSIndexPath* _currentFocusedIndexPath;

}

@property (assign,getter=isPartOfShelfList,nonatomic) BOOL partOfShelfList;              //@synthesize partOfShelfList=_partOfShelfList - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic) BOOL forceAlwaysShowsTitles;                                //@synthesize forceAlwaysShowsTitles=_forceAlwaysShowsTitles - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * currentFocusedIndexPath;               //@synthesize currentFocusedIndexPath=_currentFocusedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeOfFirstItemWithShelfElement:(id)arg1 ;
-(void)restoreState:(id)arg1 ;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(id)initWithShelfElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)updateWithFeedElement:(id)arg1 state:(id)arg2 forceReload:(BOOL)arg3 ;
-(CGSize)_itemSize;
-(void)setForceAlwaysShowsTitles:(BOOL)arg1 ;
-(BOOL)isPartOfShelfList;
-(void)_updateSizeCaches;
-(void)_clearSizeCaches;
-(long long)indexOfSelectedMediaShelfItem;
-(void)selectMediaShelfItemAtIndex:(long long)arg1 ;
-(BOOL)forceAlwaysShowsTitles;
-(NSIndexPath *)currentFocusedIndexPath;
-(void)setPartOfShelfList:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)contentInset;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)currentState;
@end

