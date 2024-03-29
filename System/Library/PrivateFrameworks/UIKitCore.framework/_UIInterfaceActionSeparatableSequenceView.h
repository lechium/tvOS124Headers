/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIInterfaceActionVisualStyle, NSArray, UIStackView;

@interface _UIInterfaceActionSeparatableSequenceView : UIView {

	UIInterfaceActionVisualStyle* _visualStyle;
	long long _axis;
	long long _distribution;
	NSArray* _arrangedContentViews;
	unsigned long long _visualCornerPosition;
	UIStackView* _stackView;
	NSArray* _arrangedContentSeparatorViews;
	NSArray* _arrangedContentViewsDistributionConstraints;

}

@property (nonatomic,readonly) UIStackView * stackView;                                            //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedContentSeparatorViews;                            //@synthesize arrangedContentSeparatorViews=_arrangedContentSeparatorViews - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedContentViewsDistributionConstraints;              //@synthesize arrangedContentViewsDistributionConstraints=_arrangedContentViewsDistributionConstraints - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                           //@synthesize visualStyle=_visualStyle - In the implementation block
@property (assign,nonatomic) long long axis;                                                       //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) long long distribution;                                               //@synthesize distribution=_distribution - In the implementation block
@property (nonatomic,retain) NSArray * arrangedContentViews;                                       //@synthesize arrangedContentViews=_arrangedContentViews - In the implementation block
@property (assign,nonatomic) unsigned long long visualCornerPosition;                              //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)visualCornerPosition;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)updateConstraints;
-(void)setVisualCornerPosition:(unsigned long long)arg1 ;
-(id)initWithVisualStyle:(id)arg1 ;
-(void)_setLayoutDebuggingIdentifier:(id)arg1 ;
-(double)fittingWidthForLayoutAxis:(long long)arg1 ;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(/*^block*/id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setDistribution:(long long)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(void)reloadDisplayedContentVisualStyle;
-(void)setArrangedContentViews:(NSArray *)arg1 ;
-(NSArray *)arrangedContentViews;
-(void)_reloadStackViewArrangement;
-(long long)axis;
-(void)_updateSeparatorConstantSizedAxis;
-(void)_updateRoundedCornerPositionForActionRepViews;
-(void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;
-(BOOL)_isVerticalLayout;
-(long long)_separatorConstantSizedAxis;
-(void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
-(CGRect)_stackViewFrameForViewBounds:(CGRect)arg1 ;
-(void)_reloadContentDistributionConstraintsForArrangedContentViews;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(CGSize)_systemLayoutSizeFittingStackView:(CGSize)arg1 ;
-(CGRect)_viewBoundsForStackViewFrame:(CGRect)arg1 ;
-(long long)_dimensionAttributeToConstrainEqual;
-(void)_addSeparatorToStackAndMutableArray:(id)arg1 preferSectionStyle:(BOOL)arg2 ;
-(void)_markRoundedCornerPositionOnAllCornersOfView:(id)arg1 ;
-(void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)arg1 ;
-(void)_markRoundedCornerPositionOnNoCornersOfView:(id)arg1 ;
-(void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)arg1 ;
-(void)_setRoundedCornersOfView:(id)arg1 toCornerPosition:(unsigned long long)arg2 ;
-(long long)distribution;
-(UIStackView *)stackView;
-(NSArray *)arrangedContentSeparatorViews;
-(NSArray *)arrangedContentViewsDistributionConstraints;
@end

