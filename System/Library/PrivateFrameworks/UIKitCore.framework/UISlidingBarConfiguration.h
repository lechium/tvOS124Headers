/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface UISlidingBarConfiguration : NSObject <NSCopying> {

	BOOL _leadingMayBeHidden;
	BOOL _trailingMayBeHidden;
	BOOL _allowMixedSideBySideAndOverlay;
	double _minimumMainWidthFraction;
	double _minimumMainWidthFractionForSecondColumn;
	double _maximumMainWidth;
	NSArray* _leadingWidths;
	NSArray* _trailingWidths;
	double _leadingBorderWidth;
	double _trailingBorderWidth;
	UIColor* _borderColor;

}

@property (assign,nonatomic) double minimumMainWidthFraction;                             //@synthesize minimumMainWidthFraction=_minimumMainWidthFraction - In the implementation block
@property (assign,nonatomic) double minimumMainWidthFractionForSecondColumn;              //@synthesize minimumMainWidthFractionForSecondColumn=_minimumMainWidthFractionForSecondColumn - In the implementation block
@property (assign,nonatomic) double maximumMainWidth;                                     //@synthesize maximumMainWidth=_maximumMainWidth - In the implementation block
@property (assign,nonatomic) BOOL leadingMayBeHidden;                                     //@synthesize leadingMayBeHidden=_leadingMayBeHidden - In the implementation block
@property (assign,nonatomic) BOOL trailingMayBeHidden;                                    //@synthesize trailingMayBeHidden=_trailingMayBeHidden - In the implementation block
@property (nonatomic,copy) NSArray * leadingWidths;                                       //@synthesize leadingWidths=_leadingWidths - In the implementation block
@property (nonatomic,copy) NSArray * trailingWidths;                                      //@synthesize trailingWidths=_trailingWidths - In the implementation block
@property (assign,nonatomic) double leadingBorderWidth;                                   //@synthesize leadingBorderWidth=_leadingBorderWidth - In the implementation block
@property (assign,nonatomic) double trailingBorderWidth;                                  //@synthesize trailingBorderWidth=_trailingBorderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                       //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL allowMixedSideBySideAndOverlay;                         //@synthesize allowMixedSideBySideAndOverlay=_allowMixedSideBySideAndOverlay - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(NSArray *)leadingWidths;
-(NSArray *)trailingWidths;
-(double)leadingBorderWidth;
-(double)trailingBorderWidth;
-(BOOL)leadingMayBeHidden;
-(BOOL)trailingMayBeHidden;
-(double)minimumMainWidthFraction;
-(double)minimumMainWidthFractionForSecondColumn;
-(double)maximumMainWidth;
-(BOOL)allowMixedSideBySideAndOverlay;
-(void)setMinimumMainWidthFraction:(double)arg1 ;
-(void)setMinimumMainWidthFractionForSecondColumn:(double)arg1 ;
-(void)setMaximumMainWidth:(double)arg1 ;
-(void)setLeadingMayBeHidden:(BOOL)arg1 ;
-(void)setTrailingMayBeHidden:(BOOL)arg1 ;
-(void)setLeadingWidths:(NSArray *)arg1 ;
-(void)setTrailingWidths:(NSArray *)arg1 ;
-(void)setLeadingBorderWidth:(double)arg1 ;
-(void)setTrailingBorderWidth:(double)arg1 ;
-(void)setAllowMixedSideBySideAndOverlay:(BOOL)arg1 ;
@end

