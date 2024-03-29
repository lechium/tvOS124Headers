/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol OS_dispatch_source, TVCarouselViewDataSource, TVCarouselViewDelegate;
@class NSObject, _TVCarouselCollectionView, NSIndexPath, NSDictionary, CADisplayLink, NSDate, NSArray, NSString;

@interface TVCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSObject*<OS_dispatch_source> _autoScrollTimer;
	_TVCarouselCollectionView* _collectionView;
	unsigned long long _indexToDeque;
	NSIndexPath* _focusedIndexPath;
	unsigned long long _numberOfRealItemsForDataSource;
	double _originalSelectionDuration;
	double _originalUnselectionDuration;
	long long _numFocusChangesInInterval;
	id<TVCarouselViewDataSource> _dataSource;
	id<TVCarouselViewDelegate> _delegate;
	double _interitemSpacing;
	unsigned long long _scrollMode;
	double _autoScrollInterval;
	double _continuousScrollVelocity;
	NSDictionary* _collectionToDatasourceIndexMap;
	CADisplayLink* _displayLink;
	double _previousDisplayLinkTimestamp;
	double _offsetChangePerSecond;
	NSDate* _firstFocusChangeInInterval;
	CGSize _itemSize;
	CGPoint _focusDirection;
	CGPoint _targetContentOffset;

}

@property (nonatomic,retain) NSDictionary * collectionToDatasourceIndexMap;               //@synthesize collectionToDatasourceIndexMap=_collectionToDatasourceIndexMap - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                 //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double previousDisplayLinkTimestamp;                         //@synthesize previousDisplayLinkTimestamp=_previousDisplayLinkTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                 //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,nonatomic) double offsetChangePerSecond;                                //@synthesize offsetChangePerSecond=_offsetChangePerSecond - In the implementation block
@property (nonatomic,retain) NSDate * firstFocusChangeInInterval;                         //@synthesize firstFocusChangeInInterval=_firstFocusChangeInInterval - In the implementation block
@property (assign,nonatomic,__weak) id<TVCarouselViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<TVCarouselViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                             //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                     //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) unsigned long long scrollMode;                               //@synthesize scrollMode=_scrollMode - In the implementation block
@property (assign,nonatomic) double autoScrollInterval;                                   //@synthesize autoScrollInterval=_autoScrollInterval - In the implementation block
@property (assign,nonatomic) double continuousScrollVelocity;                             //@synthesize continuousScrollVelocity=_continuousScrollVelocity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * visibleCells; 
@property (assign,nonatomic) CGPoint focusDirection;                                      //@synthesize focusDirection=_focusDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_updateCollectionViewLayout;
-(unsigned long long)indexForCell:(id)arg1 ;
-(unsigned long long)scrollMode;
-(void)_handlePlayGesture:(id)arg1 ;
-(long long)_centerCollectionViewCellIndex;
-(void)_setContentOffsetForCollectionViewIndex:(long long)arg1 ;
-(double)_contentOffsetXForCollectionViewIndex:(long long)arg1 ;
-(void)setOffsetChangePerSecond:(double)arg1 ;
-(void)setPreviousDisplayLinkTimestamp:(double)arg1 ;
-(void)_stopContinuousScroll;
-(double)previousDisplayLinkTimestamp;
-(BOOL)_canScrollCarouselView;
-(double)offsetChangePerSecond;
-(void)_adjustCarouselForDirectionShift:(long long)arg1 ;
-(void)_prepareIndexMap:(long long)arg1 ;
-(void)_updateAutoScrollTimer;
-(void)_updateIdleModeLayoutAttributes;
-(NSDictionary *)collectionToDatasourceIndexMap;
-(void)_updateContentOffsetForFocusedIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_cellForItemAtIndex:(unsigned long long)arg1 ;
-(void)setInteritemSpacing:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateCollectionViewLayoutAnimated:(BOOL)arg1 ;
-(void)_updateCarouselWithCenterIndex:(long long)arg1 indexToRemove:(long long)arg2 indexToAdd:(long long)arg3 ;
-(long long)_numberOfCells;
-(void)_startAutoScrollTimer;
-(void)_startContinuousScroll;
-(void)_stopAutoScrollTimer;
-(void)setAutoScrollInterval:(double)arg1 ;
-(void)setContinuousScrollVelocity:(double)arg1 ;
-(double)autoScrollInterval;
-(double)continuousScrollVelocity;
-(void)setCollectionToDatasourceIndexMap:(NSDictionary *)arg1 ;
-(NSDate *)firstFocusChangeInInterval;
-(void)setFirstFocusChangeInInterval:(NSDate *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TVCarouselViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<TVCarouselViewDelegate>)delegate;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)preferredFocusedView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2 ;
-(void)reloadData;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(id)_collectionView;
-(id<TVCarouselViewDataSource>)dataSource;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setDataSource:(id<TVCarouselViewDataSource>)arg1 ;
-(NSArray *)visibleCells;
-(CGSize)itemSize;
-(void)setItemSize:(CGSize)arg1 ;
-(id)focusedCell;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)displayLinkDidFire:(id)arg1 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(CGPoint)focusDirection;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setScrollMode:(unsigned long long)arg1 ;
@end

