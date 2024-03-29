/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SiriUIContentLabel, UIView, NSString, UIFont, UIColor;

@interface SiriUITextContainerView : UIView {

	SiriUIContentLabel* _label;
	UIView* _containerView;
	SCD_Struct_Si10 _textContainerStyle;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) SCD_Struct_Si6 textContainerStyle;              //@synthesize textContainerStyle=_textContainerStyle - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(SCD_Struct_Si6)arg4 ;
+(CGRect)_textBoundingRectWithSize:(CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(SCD_Struct_Si6)arg4 ;
+(double)_distanceFromBaselineToBottomWithFont:(id)arg1 textContainerStyle:(SCD_Struct_Si6)arg2 ;
+(double)_distanceFromTopToBaselineWithFont:(id)arg1 textContainerStyle:(SCD_Struct_Si6)arg2 ;
-(void)setTextContainerStyle:(SCD_Struct_Si6)arg1 ;
-(id)initWithText:(id)arg1 visualEffect:(id)arg2 ;
-(SCD_Struct_Si6)textContainerStyle;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(long long)textAlignment;
-(id)initWithText:(id)arg1 ;
@end

