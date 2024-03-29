/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IKCSSRule, NSArray, NSMutableDictionary, UIColor, IKColor, NSURL, NSNumber, IKFourTuple, NSShadow;

@interface IKViewElementStyle : NSObject <NSCopying> {

	BOOL _filterBlockedStyles;
	NSString* _classDescriptorString;
	IKCSSRule* _cssRule;
	NSArray* _mediaQueryList;
	NSMutableDictionary* _styleDict;

}

@property (nonatomic,copy,readonly) IKCSSRule * cssRule;                               //@synthesize cssRule=_cssRule - In the implementation block
@property (nonatomic,readonly) NSString * classDescriptorString; 
@property (nonatomic,retain) NSArray * mediaQueryList;                                 //@synthesize mediaQueryList=_mediaQueryList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * styleDict;                          //@synthesize styleDict=_styleDict - In the implementation block
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * borderColor; 
@property (nonatomic,readonly) IKColor * ikColor; 
@property (nonatomic,readonly) IKColor * ikHighlightColor; 
@property (nonatomic,readonly) IKColor * ikBackgroundColor; 
@property (nonatomic,readonly) IKColor * ikBorderColor; 
@property (nonatomic,readonly) NSString * badgeTreatment; 
@property (nonatomic,readonly) UIEdgeInsets borderMargins; 
@property (nonatomic,readonly) UIEdgeInsets borderWidths; 
@property (nonatomic,readonly) NSString * dividerType; 
@property (nonatomic,readonly) double fontSize; 
@property (nonatomic,readonly) NSString * fontWeight; 
@property (nonatomic,readonly) long long maxTextLines; 
@property (nonatomic,readonly) unsigned long long textAlignment; 
@property (nonatomic,readonly) unsigned long long elementAlignment; 
@property (nonatomic,readonly) unsigned long long elementPosition; 
@property (nonatomic,readonly) UIEdgeInsets elementPadding; 
@property (nonatomic,readonly) UIEdgeInsets elementMargin; 
@property (nonatomic,readonly) long long columnCount; 
@property (nonatomic,readonly) NSString * columnType; 
@property (nonatomic,readonly) NSString * columnItemType; 
@property (nonatomic,readonly) NSString * rowHeight; 
@property (nonatomic,readonly) NSString * maxWidth; 
@property (nonatomic,readonly) NSString * itemWidth; 
@property (nonatomic,readonly) NSString * itemHeight; 
@property (nonatomic,readonly) IKColor * imageMaskColor; 
@property (nonatomic,readonly) NSURL * imagePlaceholderURL; 
@property (nonatomic,readonly) IKColor * imagePlaceholderBackgroundColor; 
@property (nonatomic,readonly) long long reflectImage; 
@property (nonatomic,readonly) long long fillImage; 
@property (nonatomic,readonly) unsigned long long imagePosition; 
@property (nonatomic,readonly) NSString * imageTreatment; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) NSString * transition; 
@property (nonatomic,readonly) NSNumber * transitionInterval; 
@property (nonatomic,readonly) NSString * labelsState; 
@property (nonatomic,readonly) unsigned long long ordinalMaxLength; 
@property (nonatomic,readonly) NSString * lockupType; 
@property (nonatomic,readonly) NSString * visibility; 
@property (nonatomic,readonly) NSString * cardType; 
@property (nonatomic,readonly) NSString * textScale; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) IKFourTuple * borderRadius; 
@property (nonatomic,readonly) NSShadow * textShadow; 
@property (nonatomic,readonly) NSString * maxHeight; 
@property (nonatomic,readonly) NSNumber * letterSpacing; 
@property (nonatomic,readonly) NSNumber * lineHeight; 
+(id)elementStyleWithSelector:(id)arg1 cssRule:(id)arg2 filterBlockedStyles:(BOOL)arg3 ;
+(id)elementStyleWithSelector:(id)arg1 aggregatingStyles:(id)arg2 ;
+(id)normalizeClassSelectorString:(id)arg1 ;
+(id)registeredAliases;
+(BOOL)isHiddenStyleRegistered;
+(id)elementStyleWithSelector:(id)arg1 inlineStyleString:(id)arg2 filterBlockedStyles:(BOOL)arg3 inlineStyleRangeCorrect:(BOOL)arg4 ;
+(unsigned long long)alignmentFromString:(id)arg1 ;
+(unsigned long long)positionFromString:(id)arg1 ;
+(id)registeredStyles;
+(void)addBlockedStyle:(id)arg1 ;
+(void)clearBlockedStyles;
+(void)registerHiddenStyle:(id)arg1 ;
+(unsigned long long)imageTreatmentFromString:(id)arg1 ;
+(id)elementStyleWithSelector:(id)arg1 inlineStyleString:(id)arg2 filterBlockedStyles:(BOOL)arg3 ;
+(id)elementStyleWithParentStyle:(id)arg1 elementStyle:(id)arg2 elementStyleOverrides:(id)arg3 ;
+(unsigned long long)transitionFromString:(id)arg1 ;
+(void)registerStyle:(id)arg1 aliasName:(id)arg2 withType:(unsigned long long)arg3 inherited:(BOOL)arg4 ;
+(void)unregisterStyles;
+(void)registerEdgeInsetStyle:(id)arg1 aliasName:(id)arg2 withPositionStyleNames:(id)arg3 inherited:(BOOL)arg4 ;
+(void)initialize;
+(void)registerStyle:(id)arg1 withType:(unsigned long long)arg2 inherited:(BOOL)arg3 ;
-(unsigned long long)elementAlignment;
-(IKColor *)ikBackgroundColor;
-(NSString *)classDescriptorString;
-(NSArray *)mediaQueryList;
-(void)setMediaQueryList:(NSArray *)arg1 ;
-(NSURL *)imagePlaceholderURL;
-(IKColor *)ikBorderColor;
-(long long)reflectImage;
-(id)initWithCSSRule:(id)arg1 filterBlockedStyles:(BOOL)arg2 selStr:(id)arg3 ;
-(id)initWithClassSelector:(id)arg1 ;
-(void)_addElementStyle:(id)arg1 ;
-(NSMutableDictionary *)styleDict;
-(void)_addParentStyle:(id)arg1 ;
-(IKCSSRule *)cssRule;
-(void)_addDeclaration:(id)arg1 ;
-(id)_styleNameForAlias:(id)arg1 ;
-(id)_declarationForStyleName:(id)arg1 expectedClass:(Class)arg2 ;
-(UIEdgeInsets)_edgeInsetsForStyleName:(id)arg1 ;
-(id)_newColorFromString:(id)arg1 ;
-(id)_gradientFromString:(id)arg1 ;
-(id)initWithStyle:(id)arg1 classSelector:(id)arg2 ;
-(IKColor *)ikHighlightColor;
-(UIEdgeInsets)borderMargins;
-(UIEdgeInsets)elementMargin;
-(NSString *)columnType;
-(NSString *)columnItemType;
-(IKColor *)imagePlaceholderBackgroundColor;
-(IKColor *)imageMaskColor;
-(NSString *)lockupType;
-(NSString *)labelsState;
-(unsigned long long)ordinalMaxLength;
-(NSString *)badgeTreatment;
-(NSString *)textScale;
-(BOOL)requiresDynamicEvaluation;
-(void)setStyleDict:(NSMutableDictionary *)arg1 ;
-(NSString *)cardType;
-(unsigned long long)elementPosition;
-(id)valueForStyle:(id)arg1 ;
-(NSString *)imageTreatment;
-(IKFourTuple *)borderRadius;
-(IKColor *)ikColor;
-(long long)maxTextLines;
-(NSShadow *)textShadow;
-(unsigned long long)typeForStyle:(id)arg1 ;
-(unsigned long long)edgeFlagForStyle:(id)arg1 ;
-(NSString *)itemHeight;
-(long long)columnCount;
-(UIEdgeInsets)borderWidths;
-(UIEdgeInsets)elementPadding;
-(NSString *)dividerType;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)backgroundColor;
-(CGAffineTransform)transform;
-(UIColor *)color;
-(NSNumber *)lineHeight;
-(NSString *)transition;
-(unsigned long long)textAlignment;
-(NSString *)itemWidth;
-(NSString *)maxWidth;
-(double)fontSize;
-(NSString *)rowHeight;
-(UIColor *)borderColor;
-(NSString *)textStyle;
-(NSString *)fontWeight;
-(NSString *)visibility;
-(BOOL)hidden;
-(long long)fillImage;
-(NSNumber *)letterSpacing;
-(unsigned long long)imagePosition;
-(NSString *)maxHeight;
-(NSNumber *)transitionInterval;
@end

