/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSConcreteTextStorage.h>

@class NSMutableDictionary, UIFont, UIColor, NSDictionary;

@interface _UICascadingTextStorage : NSConcreteTextStorage {

	NSMutableDictionary* _defaultAttributes;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double shadowBlur; 
@property (nonatomic,copy) NSDictionary * defaultAttributes; 
+(id)defaultFont;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(long long)_ui_resolvedTextAlignment;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(UIColor *)textColor;
-(id)_defaultAttributes;
-(long long)textAlignment;
-(long long)lineBreakMode;
-(id)_shadow;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(NSDictionary *)defaultAttributes;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
-(double)shadowBlur;
-(void)_restoreOriginalFontAttribute;
-(void)setShadowBlur:(double)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)_setShadow:(id)arg1 ;
@end

