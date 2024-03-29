/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVButton.h>
#import <libobjc.A.dylib/VUILabelTopMarginCalculationProtocol.h>

@class VUIButtonLayout, _TVImageView;

@interface VUIButton : TVButton <VUILabelTopMarginCalculationProtocol> {

	VUIButtonLayout* _layout;
	_TVImageView* _backgroundImageView;
	_TVImageView* _imagesViewDefaultState;
	_TVImageView* _imagesViewHighlightedState;
	_TVImageView* _backgroundImagesViewDefaultState;
	_TVImageView* _backgroundImagesViewHighlightedState;

}

@property (nonatomic,retain) VUIButtonLayout * layout;                                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * imagesViewDefaultState;                            //@synthesize imagesViewDefaultState=_imagesViewDefaultState - In the implementation block
@property (nonatomic,retain) _TVImageView * imagesViewHighlightedState;                        //@synthesize imagesViewHighlightedState=_imagesViewHighlightedState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImagesViewDefaultState;                  //@synthesize backgroundImagesViewDefaultState=_backgroundImagesViewDefaultState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImagesViewHighlightedState;              //@synthesize backgroundImagesViewHighlightedState=_backgroundImagesViewHighlightedState - In the implementation block
@property (nonatomic,retain) _TVImageView * backgroundImageView;                               //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUIButtonLayout *)layout;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_hasTitle;
-(_TVImageView *)backgroundImageView;
-(void)setLayout:(VUIButtonLayout *)arg1 ;
-(void)setImageView:(id)arg1 ;
-(void)_updateAppearance;
-(id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2 ;
-(void)updateWithElement:(id)arg1 ;
-(double)topMarginWithBaselineMargin:(double)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(void)setTextContentView:(id)arg1 ;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(void)setBackgroundImageView:(_TVImageView *)arg1 ;
-(void)_configureWithLayout:(id)arg1 ;
-(void)setImageView:(id)arg1 state:(unsigned long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 state:(unsigned long long)arg2 ;
-(void)setImagesViewHighlightedState:(_TVImageView *)arg1 ;
-(void)setBackgroundImagesViewHighlightedState:(_TVImageView *)arg1 ;
-(CGSize)_imageSizeThatFits:(CGSize)arg1 ;
-(BOOL)_hasImage;
-(BOOL)_hasBackgroundImage;
-(_TVImageView *)imagesViewDefaultState;
-(void)setImagesViewDefaultState:(_TVImageView *)arg1 ;
-(_TVImageView *)imagesViewHighlightedState;
-(_TVImageView *)backgroundImagesViewDefaultState;
-(void)setBackgroundImagesViewDefaultState:(_TVImageView *)arg1 ;
-(_TVImageView *)backgroundImagesViewHighlightedState;
@end

