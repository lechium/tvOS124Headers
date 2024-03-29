/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
@class NSAttributedString, NSShadow, UIColor;

@interface TVCKContentSource : NSObject {

	NSAttributedString* _attributedTitle;
	NSShadow* _shadow;
	UIColor* _borderColor;
	UIEdgeInsets _padding;
	UIEdgeInsets _borderWidths;

}

@property (nonatomic,copy) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                            //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                               //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                           //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderWidths;                       //@synthesize borderWidths=_borderWidths - In the implementation block
-(void)setBorderWidths:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)borderWidths;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(UIColor *)borderColor;
-(NSAttributedString *)attributedTitle;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSShadow *)shadow;
-(void)setShadow:(NSShadow *)arg1 ;
@end

