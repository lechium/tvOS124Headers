/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class VUIFavoriteBannerView, VUIFavoriteBannerLayout;

@interface VUIFavoriteBannerCollectionViewCell : VUIFocusableCollectionViewCell {

	VUIFavoriteBannerView* _bannerView;
	VUIFavoriteBannerLayout* _bannerLayout;
	double _width;

}

@property (nonatomic,retain) VUIFavoriteBannerView * bannerView;                  //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) VUIFavoriteBannerLayout * bannerLayout;              //@synthesize bannerLayout=_bannerLayout - In the implementation block
@property (assign,nonatomic) double width;                                        //@synthesize width=_width - In the implementation block
+(id)configureCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(VUIFavoriteBannerView *)bannerView;
-(void)setBannerView:(VUIFavoriteBannerView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(void)_updateBackgroundAndHighlightColor;
-(void)setBannerLayout:(VUIFavoriteBannerLayout *)arg1 ;
-(VUIFavoriteBannerLayout *)bannerLayout;
@end
