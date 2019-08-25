/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>
#import <libobjc.A.dylib/TVAuxiliaryViewSelecting.h>

@protocol TVAuxiliaryViewSelecting;
@class UIView, IKViewElement, NSArray, _TVStackingPosterView, VUIEditorialCellLayout, NSString;

@interface VUIEditorialCollectionViewCell : TVContainerCollectionViewCell <TVAuxiliaryViewSelecting> {

	UIView*<TVAuxiliaryViewSelecting> _selectingView;
	IKViewElement* _viewElement;
	NSArray* _labelViews;
	_TVStackingPosterView* _stackingPosterView;
	UIView* _stackView;
	VUIEditorialCellLayout* _layout;

}

@property (nonatomic,retain) UIView*<TVAuxiliaryViewSelecting> selectingView;              //@synthesize selectingView=_selectingView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                  //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,copy) NSArray * labelViews;                                           //@synthesize labelViews=_labelViews - In the implementation block
@property (nonatomic,retain) _TVStackingPosterView * stackingPosterView;                   //@synthesize stackingPosterView=_stackingPosterView - In the implementation block
@property (nonatomic,retain) UIView * stackView;                                           //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) VUIEditorialCellLayout * layout;                              //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureViewWithElement:(id)arg1 existingCell:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUIEditorialCellLayout *)layout;
-(UIView *)stackView;
-(void)prepareForReuse;
-(void)setLayout:(VUIEditorialCellLayout *)arg1 ;
-(void)setStackView:(UIView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setStackingPosterView:(_TVStackingPosterView *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(_TVStackingPosterView *)stackingPosterView;
-(UIView*<TVAuxiliaryViewSelecting>)selectingView;
-(void)setSelectingView:(UIView*<TVAuxiliaryViewSelecting>)arg1 ;
-(void)setLabelViews:(NSArray *)arg1 ;
-(NSArray *)labelViews;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
@end

