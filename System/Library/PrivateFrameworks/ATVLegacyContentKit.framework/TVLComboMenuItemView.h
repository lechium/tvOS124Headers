/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVLMenuItemCell.h>

@class _TVLLikeDislikeView, NSString, UILabel, TVImageView, TVImageProxy;

@interface TVLComboMenuItemView : UIView <TVLMenuItemCell> {

	_TVLLikeDislikeView* _likeDislikeView;
	NSString* _title;
	NSString* _subtitle;
	NSString* _bottomLeftText;
	NSString* _bottomCenterText;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _bottomLeftLabel;
	UILabel* _bottomCenterLabel;
	TVImageView* _imageView;

}

@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bottomLeftLabel;                //@synthesize bottomLeftLabel=_bottomLeftLabel - In the implementation block
@property (nonatomic,retain) UILabel * bottomCenterLabel;              //@synthesize bottomCenterLabel=_bottomCenterLabel - In the implementation block
@property (nonatomic,retain) TVImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * bottomLeftText;                  //@synthesize bottomLeftText=_bottomLeftText - In the implementation block
@property (nonatomic,copy) NSString * bottomCenterText;                //@synthesize bottomCenterText=_bottomCenterText - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)configureWithMenuItemElement:(id)arg1 ;
-(id)_defaultTitleLabel;
-(id)_defaultLabel;
-(UILabel *)bottomLeftLabel;
-(void)setBottomLeftText:(NSString *)arg1 ;
-(UILabel *)bottomCenterLabel;
-(void)setBottomCenterText:(NSString *)arg1 ;
-(NSString *)bottomLeftText;
-(NSString *)bottomCenterText;
-(void)setBottomLeftLabel:(UILabel *)arg1 ;
-(void)setBottomCenterLabel:(UILabel *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(TVImageView *)imageView;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(TVImageView *)arg1 ;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)imageProxy;
@end

