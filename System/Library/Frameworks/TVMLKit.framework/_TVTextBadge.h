/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString, NSString, UIColor;

@interface _TVTextBadge : UIView {

	NSAttributedString* _text;
	NSString* _type;
	UIColor* _tintColor;
	double _cornerRadius;
	double _lineWidth;

}

@property (nonatomic,retain) NSAttributedString * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double lineWidth;                       //@synthesize lineWidth=_lineWidth - In the implementation block
+(id)textBadgeViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setText:(NSAttributedString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSAttributedString *)text;
-(NSString *)type;
-(UIColor *)tintColor;
-(void)setType:(NSString *)arg1 ;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
@end

