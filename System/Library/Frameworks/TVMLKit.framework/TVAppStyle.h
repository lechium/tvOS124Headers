/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSMutableDictionary, IKColor;

@interface TVAppStyle : NSObject {

	NSMutableDictionary* _stylesMap;
	IKColor* _backgroundColor;
	SCD_Struct_TV13 _width;
	SCD_Struct_TV13 _minWidth;
	SCD_Struct_TV13 _maxWidth;
	SCD_Struct_TV13 _height;
	SCD_Struct_TV13 _minHeight;
	SCD_Struct_TV13 _maxHeight;
	SCD_Struct_TV13 _padding;
	SCD_Struct_TV13 _margin;
	SCD_Struct_TV13 _interitemSpacing;
	SCD_Struct_TV13 _fontSize;
	SCD_Struct_TV13 _borderRadius;

}

@property (assign,nonatomic) SCD_Struct_TV14 width;                         //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV14 minWidth;                      //@synthesize minWidth=_minWidth - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV14 maxWidth;                      //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV14 height;                        //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV14 minHeight;                     //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV14 maxHeight;                     //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV14 padding;                       //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV14 margin;                        //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV14 interitemSpacing;              //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV14 fontSize;                      //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV14 borderRadius;                  //@synthesize borderRadius=_borderRadius - In the implementation block
@property (nonatomic,retain) IKColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)valueForStyle:(id)arg1 ;
-(void)_setValue:(id)arg1 forStyleProperty:(id)arg2 ;
-(void)setMinWidth:(SCD_Struct_TV14)arg1 ;
-(SCD_Struct_TV14)borderRadius;
-(void)setBackgroundColor:(IKColor *)arg1 ;
-(SCD_Struct_TV14)margin;
-(IKColor *)backgroundColor;
-(SCD_Struct_TV14)width;
-(void)setMargin:(SCD_Struct_TV14)arg1 ;
-(void)setWidth:(SCD_Struct_TV14)arg1 ;
-(void)setHeight:(SCD_Struct_TV14)arg1 ;
-(SCD_Struct_TV14)height;
-(SCD_Struct_TV14)maxWidth;
-(void)setPadding:(SCD_Struct_TV14)arg1 ;
-(SCD_Struct_TV14)padding;
-(SCD_Struct_TV14)fontSize;
-(SCD_Struct_TV14)minWidth;
-(SCD_Struct_TV14)interitemSpacing;
-(void)setInteritemSpacing:(SCD_Struct_TV14)arg1 ;
-(void)setFontSize:(SCD_Struct_TV14)arg1 ;
-(void)setMaxWidth:(SCD_Struct_TV14)arg1 ;
-(SCD_Struct_TV14)minHeight;
-(void)setMinHeight:(SCD_Struct_TV14)arg1 ;
-(void)setMaxHeight:(SCD_Struct_TV14)arg1 ;
-(void)setBorderRadius:(SCD_Struct_TV14)arg1 ;
-(SCD_Struct_TV14)maxHeight;
@end
