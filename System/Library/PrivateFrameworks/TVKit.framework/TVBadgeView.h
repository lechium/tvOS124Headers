/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIImageView;

@interface TVBadgeView : UIView {

	NSString* _badgeValue;
	long long _lineBreakMode;
	UILabel* _label;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * badgeValue;                  //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) long long lineBreakMode;              //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
+(id)_badgeImage;
+(CGSize)_badgeImageSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(long long)lineBreakMode;
-(UILabel *)label;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
@end

