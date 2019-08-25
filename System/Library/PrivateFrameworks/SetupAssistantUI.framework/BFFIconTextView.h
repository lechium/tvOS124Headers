/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface BFFIconTextView : UIView {

	UIImageView* _iconView;
	UILabel* _textLabel;
	double _padding;

}

@property (nonatomic,retain) UIImageView * iconView;                      //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                         //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) double padding;                              //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) double baselineFromBoundsTop; 
-(double)heightForWidth:(double)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(id)initWithIcon:(id)arg1 text:(id)arg2 ;
-(double)baselineFromBoundsTop;
-(void)layoutSubviews;
-(void)setPadding:(double)arg1 ;
-(double)padding;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

