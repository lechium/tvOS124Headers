/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerView.h>
#import <libobjc.A.dylib/_NUIGridArrangementContainer.h>

@class NSMutableArray, NSString;

@interface NUIContainerGridView : NUIContainerView <_NUIGridArrangementContainer> {

	NSMutableArray* _viewRows;
	NUIGridArrangement* _visibleArrangement;
	CGSize _visibleCount;
	map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange> > > >* _viewRanges;
	map<unsigned long, const std::__1::pair<UIView *, UIView *>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, const std::__1::pair<UIView *, UIView *> > > >* _rowBaselineViews;
	CGSize _spacing;
	vector<_NUIGridViewDimensionConfiguration, std::__1::allocator<_NUIGridViewDimensionConfiguration> >* _rows;
	vector<_NUIGridViewDimensionConfiguration, std::__1::allocator<_NUIGridViewDimensionConfiguration> >* _columns;
	struct {
		unsigned inInsertOrRemove : 1;
		unsigned pendingUpdate : 1;
		unsigned delegateMinSpacing : 1;
		unsigned delegateMinDirectionalSpacing : 1;
		unsigned delegateHorizontalAlignment : 1;
		unsigned delegateVerticalAlignment : 1;
	}  _gridViewFlags;
	long long _horizontalAlignment;
	long long _verticalAlignment;
	double _rowHeight;
	double _columnWidth;

}

@property (assign,nonatomic,__weak) id<NUIContainerGridViewDelegate> delegate; 
@property (nonatomic,readonly) long long numberOfRows; 
@property (nonatomic,readonly) long long numberOfColumns; 
@property (assign,nonatomic) long long horizontalAlignment;                                 //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                                   //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) long long horizontalDistribution; 
@property (assign,nonatomic) long long verticalDistribution; 
@property (assign,nonatomic) double rowSpacing; 
@property (assign,nonatomic) double columnSpacing; 
@property (assign,nonatomic) double rowHeight;                                              //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double columnWidth;                                            //@synthesize columnWidth=_columnWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)columnWidth;
-(void)setColumnWidth:(double)arg1 ;
-(void)removeRowAtIndex:(long long)arg1 ;
-(void)populateGridArrangementCells:(vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg1 ;
-(void)populateGridArrangementDimension:(vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> >*)arg1 withCells:(const vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg2 axis:(long long)arg3 ;
-(BOOL)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(BOOL)arg1 ;
-(void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(id)arrangedDescription;
-(id)initWithArrangedSubviewRows:(id)arg1 ;
-(void)addRowWithArrangedSubviews:(id)arg1 ;
-(void)_updateArrangedSubviewsToMatchCurrentGrid;
-(void)_setupViewRangesIfNeeded;
-(void)getColumnRange:(NSRange*)arg1 rowRange:(NSRange*)arg2 forArrangedSubview:(id)arg3 ;
-(void)insertRowAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2 ;
-(void)_invalidateIntrinsicContentSizeAndUpdateArrangedSubviewsToMatchCurrentGrid;
-(void)insertColumnAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2 ;
-(id)arrangedSubviewInColumnAtIndex:(long long)arg1 rowAtIndex:(long long)arg2 ;
-(id)_baselineViewVendForFirstBaseline:(BOOL)arg1 fromViews:(id)arg2 ;
-(id)_baselineViewForFirstBaseline:(BOOL)arg1 forRow:(unsigned long long)arg2 ;
-(CGSize)_calculateArrangedSizeFittingSize:(CGSize)arg1 forLayout:(BOOL)arg2 ;
-(BOOL)_verifyInternalGridConsistencyWarningOnly:(BOOL)arg1 ;
-(long long)_horizontalAlignmentOfView:(id)arg1 inColumn:(long long)arg2 ;
-(long long)_verticalAlignmentOfView:(id)arg1 inColumn:(long long)arg2 ;
-(double)_widthOfColumnAtIndex:(long long)arg1 ;
-(double)_heightOfRowAtIndex:(long long)arg1 ;
-(id)viewForLastBaselineLayoutInRow:(long long)arg1 ;
-(id)viewForFirstBaselineLayoutInRow:(long long)arg1 ;
-(id)initWithArrangeSubviewRows:(id)arg1 ;
-(id)arrangedSubviewsInRowAtIndex:(long long)arg1 ;
-(id)arrangedSubviewsInColumnAtIndex:(long long)arg1 ;
-(long long)rowIndexForArrangedSubview:(id)arg1 ;
-(long long)columnIndexForArrangedSubview:(id)arg1 ;
-(void)addColumnWithArrangedSubviews:(id)arg1 ;
-(void)removeColumnAtIndex:(long long)arg1 ;
-(void)replaceArrangedSubview:(id)arg1 inColumnAtIndex:(long long)arg2 rowAtIndex:(long long)arg3 ;
-(long long)horizontalDistribution;
-(void)setHorizontalDistribution:(long long)arg1 ;
-(long long)verticalDistribution;
-(void)setVerticalDistribution:(long long)arg1 ;
-(void)setColumnSpacing:(double)arg1 ;
-(double)columnSpacing;
-(void)setRowAtIndex:(long long)arg1 hidden:(BOOL)arg2 ;
-(BOOL)isRowAtIndexHidden:(long long)arg1 ;
-(void)setColumnAtIndex:(long long)arg1 hidden:(BOOL)arg2 ;
-(BOOL)isColumnAtIndexHidden:(long long)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ofColumnAtIndex:(long long)arg2 ;
-(long long)horizontalAlignmentOfColumnAtIndex:(unsigned long long)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ofColumnAtIndex:(long long)arg2 ;
-(long long)verticalAlignmentOfColumnAtIndex:(unsigned long long)arg1 ;
-(void)setSpacing:(double)arg1 afterRowAtIndex:(long long)arg2 ;
-(double)spacingAfterRowAtIndex:(long long)arg1 ;
-(void)setSpacing:(double)arg1 afterColumnAtIndex:(long long)arg2 ;
-(double)spacingAfterColumnAtIndex:(long long)arg1 ;
-(void)setHeight:(double)arg1 ofRowAtIndex:(long long)arg2 ;
-(double)heightOfRowAtIndex:(long long)arg1 ;
-(void)setWidth:(double)arg1 ofColumnAtIndex:(long long)arg2 ;
-(double)widthOfColumnAtIndex:(long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<NUIContainerGridViewDelegate>)arg1 ;
-(long long)numberOfRows;
-(double)rowHeight;
-(void)setRowHeight:(double)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(long long)horizontalAlignment;
-(long long)verticalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(long long)numberOfColumns;
-(id)viewForFirstBaselineLayout;
-(double)rowSpacing;
-(void)setRowSpacing:(double)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
@end

