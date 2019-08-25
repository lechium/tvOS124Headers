/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class TVImageView, UILabel;

@interface TVLImageWithLabelsView : UIView {

	TVImageView* _imageView;
	UILabel* _label1;
	UILabel* _label2;
	UILabel* _label3;

}

@property (nonatomic,retain) TVImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label1;                     //@synthesize label1=_label1 - In the implementation block
@property (nonatomic,retain) UILabel * label2;                     //@synthesize label2=_label2 - In the implementation block
@property (nonatomic,retain) UILabel * label3;                     //@synthesize label3=_label3 - In the implementation block
-(UILabel *)label2;
-(id)initWithImageWithLabelsElement:(id)arg1 ;
-(void)setLabel2:(UILabel *)arg1 ;
-(void)imageDidLoad:(id)arg1 ;
-(UILabel *)label1;
-(void)setLabel1:(UILabel *)arg1 ;
-(UILabel *)label3;
-(void)setLabel3:(UILabel *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(TVImageView *)imageView;
-(void)setImageView:(TVImageView *)arg1 ;
@end
