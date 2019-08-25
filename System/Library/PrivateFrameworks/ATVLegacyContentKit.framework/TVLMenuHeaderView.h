/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLHeaderElement, UILabel, UIImageView, TVImageProxy, NSString;

@interface TVLMenuHeaderView : UIView <ATVUpdatable> {

	TVLHeaderElement* _headerElement;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	TVImageProxy* _imageProxy;

}

@property (nonatomic,retain) UILabel * subtitleLabel;                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;              //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
+(id)titleFont;
+(id)subtitleFont;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)_createTitleLabel;
-(id)initWithHeaderElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)_setHeaderImage:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)imageProxy;
@end

