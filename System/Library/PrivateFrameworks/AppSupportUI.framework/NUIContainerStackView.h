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

@interface NUIContainerStackView : NUIContainerView <_NUIGridArrangementContainer> {

	NSMutableArray* _spacingViews;
	vector<double, std::__1::allocator<double> >* _spacingAfter;
	NUIGridArrangement* _visibleArrangement;
	CGSize _visibleCount;
	struct {
		unsigned delegateMinSpacing : 1;
		unsigned delegateMinDirectionalSpacing : 1;
		unsigned delegateAlignment : 1;
	}  _stackViewFlags;
	long long _axis;
	long long _distribution;
	long long _alignment;
	double _spacing;

}

@property (assign,nonatomic,__weak) id<NUIContainerStackViewDelegate> delegate; 
@property (assign,nonatomic) long long axis;                                                 //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) long long distribution;                                         //@synthesize distribution=_distribution - In the implementation block
@property (assign,nonatomic) long long alignment;                                            //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) double spacing;                                                 //@synthesize spacing=_spacing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)populateGridArrangementCells:(vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg1 ;
-(void)populateGridArrangementDimension:(vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> >*)arg1 withCells:(const vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg2 axis:(long long)arg3 ;
-(BOOL)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(BOOL)arg1 ;
-(void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(id)arrangedDescription;
-(CGSize)_calculateArrangedSizeFittingSize:(CGSize)arg1 forLayout:(BOOL)arg2 ;
-(id)_baselineViewVendForFirstBaseline:(BOOL)arg1 ;
-(long long)_effectiveAlignmentForArrangedSubview:(id)arg1 ;
-(void)setSpacing:(double)arg1 afterArrangedSubviewAtIndex:(long long)arg2 ;
-(double)spacingAfterArrangedSubviewAtIndex:(long long)arg1 ;
-(long long)alignment;
-(void)dealloc;
-(void)setDelegate:(id<NUIContainerStackViewDelegate>)arg1 ;
-(void)setDistribution:(long long)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(long long)axis;
-(long long)distribution;
-(id)viewForLastBaselineLayout;
-(void)setSpacing:(double)arg1 ;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(double)spacing;
-(void)setCustomSpacing:(double)arg1 afterView:(id)arg2 ;
-(double)customSpacingAfterView:(id)arg1 ;
@end

