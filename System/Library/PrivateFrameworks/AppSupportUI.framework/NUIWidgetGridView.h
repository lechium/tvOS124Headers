/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUIWidgetGridViewDataSource, NUIWidgetGridViewDelegate;
@class NUIContainerGridView, NSArray;

@interface NUIWidgetGridView : UIView {

	NUIContainerGridView* _gridView;
	NSArray* _itemViews;
	CGSize _labelSizes[8];
	unsigned long long _currentLayout;
	id<NUIWidgetGridViewDataSource> _dataSource;
	id<NUIWidgetGridViewDelegate> _delegate;
	long long _imageStyle;
	long long _titleStyle;
	long long _subtitleStyle;
	double _centerAdjustmentAllowed;
	double _currentLabelOutset;

}

@property (nonatomic,readonly) double currentLabelOutset;                                    //@synthesize currentLabelOutset=_currentLabelOutset - In the implementation block
@property (assign,nonatomic,__weak) id<NUIWidgetGridViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<NUIWidgetGridViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long imageStyle;                                           //@synthesize imageStyle=_imageStyle - In the implementation block
@property (assign,nonatomic) long long titleStyle;                                           //@synthesize titleStyle=_titleStyle - In the implementation block
@property (assign,nonatomic) long long subtitleStyle;                                        //@synthesize subtitleStyle=_subtitleStyle - In the implementation block
@property (assign,nonatomic) double centerAdjustmentAllowed;                                 //@synthesize centerAdjustmentAllowed=_centerAdjustmentAllowed - In the implementation block
+(double)itemWidth;
+(unsigned long long)maxNumberOfItems;
-(unsigned long long)itemsPerRow;
-(long long)imageStyle;
-(void)setImageStyle:(long long)arg1 ;
-(void)contentSizeDidChange;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
-(long long)subtitleStyle;
-(CGSize)entitledExtraSpaceForCellAtIndex:(unsigned long long)arg1 ;
-(id)cellForGridViewItemAtIndex:(long long)arg1 ;
-(CGSize)borrowableSpaceForCellAtIndex:(unsigned long long)arg1 ;
-(double)centerAdjustmentAllowed;
-(double)labelMinSpacing;
-(double)horizontalMargin;
-(void)generateItems;
-(double)labelOutset;
-(void)_createGridViewIfNeeded;
-(void)setSubtitleStyle:(long long)arg1 ;
-(void)setCenterAdjustmentAllowed:(double)arg1 ;
-(double)currentLabelOutset;
-(void)setTitleStyle:(long long)arg1 ;
-(void)setDelegate:(id<NUIWidgetGridViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<NUIWidgetGridViewDelegate>)delegate;
-(void)reloadData;
-(long long)currentLayout;
-(id<NUIWidgetGridViewDataSource>)dataSource;
-(void)setDataSource:(id<NUIWidgetGridViewDataSource>)arg1 ;
-(unsigned long long)maxNumberOfItems;
-(long long)titleStyle;
@end

