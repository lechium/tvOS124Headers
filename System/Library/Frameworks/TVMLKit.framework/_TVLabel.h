/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSArray;

@interface _TVLabel : UILabel {

	long long _previousNumberOfLines;
	NSArray* _highlightedRanges;
	CGSize _cachedSizeThatFits;
	CGSize _previousTargetSize;
	UIEdgeInsets _padding;
	CGRect _cachedTextRectForBounds;
	CGRect _previousBounds;

}

@property (assign,nonatomic) CGRect cachedTextRectForBounds;               //@synthesize cachedTextRectForBounds=_cachedTextRectForBounds - In the implementation block
@property (assign,nonatomic) CGRect previousBounds;                        //@synthesize previousBounds=_previousBounds - In the implementation block
@property (assign,nonatomic) long long previousNumberOfLines;              //@synthesize previousNumberOfLines=_previousNumberOfLines - In the implementation block
@property (assign,nonatomic) CGSize cachedSizeThatFits;                    //@synthesize cachedSizeThatFits=_cachedSizeThatFits - In the implementation block
@property (assign,nonatomic) CGSize previousTargetSize;                    //@synthesize previousTargetSize=_previousTargetSize - In the implementation block
@property (nonatomic,copy) NSArray * highlightedRanges;                    //@synthesize highlightedRanges=_highlightedRanges - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                         //@synthesize padding=_padding - In the implementation block
-(CGSize)cachedSizeThatFits;
-(CGSize)previousTargetSize;
-(void)setCachedSizeThatFits:(CGSize)arg1 ;
-(void)setPreviousTargetSize:(CGSize)arg1 ;
-(void)_clearCachedValues;
-(void)setHighlightedRanges:(NSArray *)arg1 ;
-(NSArray *)highlightedRanges;
-(CGRect)previousBounds;
-(long long)previousNumberOfLines;
-(CGRect)cachedTextRectForBounds;
-(void)setCachedTextRectForBounds:(CGRect)arg1 ;
-(void)setPreviousBounds:(CGRect)arg1 ;
-(void)setPreviousNumberOfLines:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setBaselineAdjustment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(void)drawTextInRect:(CGRect)arg1 ;
@end

