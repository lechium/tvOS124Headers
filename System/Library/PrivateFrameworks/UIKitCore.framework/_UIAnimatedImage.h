/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImage.h>

@class NSArray;

@interface _UIAnimatedImage : UIImage {

	NSArray* _images;
	double _duration;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(UIEdgeInsets)alignmentRectInsets;
-(double)duration;
-(id)images;
-(BOOL)_isResizable;
-(UIEdgeInsets)capInsets;
-(id)_imageWithStylePresets:(id)arg1 withTintColor:(id)arg2 ;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 ;
-(CGSize)_sizeWithHairlineThickening:(BOOL)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3 ;
-(CGRect)_contentStretchInPixels;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2 ;
-(id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12 ;
-(id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(BOOL)arg9 ;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 resizingMode:(long long)arg2 ;
-(void)_setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(id)_initWithOtherImage:(id)arg1 ;
-(void)_setAlwaysStretches:(BOOL)arg1 ;
-(CGRect)_contentRectInPixels;
-(long long)resizingMode;
-(id)initWithImages:(id)arg1 duration:(double)arg2 ;
-(void)_flipImageOrientationHorizontally;
@end

