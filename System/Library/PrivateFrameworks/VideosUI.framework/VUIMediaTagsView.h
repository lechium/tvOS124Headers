/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>
#import <libobjc.A.dylib/VUILabelTopMarginCalculationProtocol.h>

@class VUIMediaTagsViewLayout, NSDictionary, NSArray, UIImage, NSString;

@interface VUIMediaTagsView : UIView <VUIRentalExpirationLabelDelegate, VUILabelTopMarginCalculationProtocol> {

	VUIMediaTagsViewLayout* _layout;
	NSDictionary* _viewsMap;
	NSArray* _groupedSubviews;
	double _totalSubviewsWidth;
	UIImage* _commonSenseLightImage;
	UIImage* _commonSenseDarkImage;

}

@property (nonatomic,copy) NSDictionary * viewsMap;                          //@synthesize viewsMap=_viewsMap - In the implementation block
@property (nonatomic,retain) NSArray * groupedSubviews;                      //@synthesize groupedSubviews=_groupedSubviews - In the implementation block
@property (assign,nonatomic) double totalSubviewsWidth;                      //@synthesize totalSubviewsWidth=_totalSubviewsWidth - In the implementation block
@property (nonatomic,retain) UIImage * commonSenseLightImage;                //@synthesize commonSenseLightImage=_commonSenseLightImage - In the implementation block
@property (nonatomic,retain) UIImage * commonSenseDarkImage;                 //@synthesize commonSenseDarkImage=_commonSenseDarkImage - In the implementation block
@property (nonatomic,readonly) VUIMediaTagsViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tagsViewWithMetadata:(id)arg1 layout:(id)arg2 element:(id)arg3 existingView:(id)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUIMediaTagsViewLayout *)layout;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateAppearance;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(double)topMarginWithBaselineMargin:(double)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(void)updateWithMetadata:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 layout:(id)arg2 ;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(double)bottomMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(NSDictionary *)viewsMap;
-(CGSize)_layoutSubviewsForSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(BOOL)_shouldPutTextOnSeaparateLines;
-(double)totalSubviewsWidth;
-(void)_removeGenreLabelAndSeparator;
-(NSArray *)groupedSubviews;
-(void)_removeSeparatorsFromGroupsIfNeeded:(BOOL)arg1 ;
-(id)_newLabelAsSubview:(id)arg1 ;
-(id)_newImageViewAsSubview;
-(id)_newRentalExpirationlabel:(id)arg1 exisitingLabel:(id)arg2 ;
-(void)setCommonSenseLightImage:(UIImage *)arg1 ;
-(void)setCommonSenseDarkImage:(UIImage *)arg1 ;
-(void)setViewsMap:(NSDictionary *)arg1 ;
-(void)setGroupedSubviews:(NSArray *)arg1 ;
-(double)_totalSubviewsWidth;
-(void)setTotalSubviewsWidth:(double)arg1 ;
-(UIImage *)commonSenseLightImage;
-(UIImage *)commonSenseDarkImage;
@end

