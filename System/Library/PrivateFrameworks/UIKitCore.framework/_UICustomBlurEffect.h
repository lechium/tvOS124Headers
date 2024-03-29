/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIBlurEffect.h>

@class _UIBackdropViewSettings, UIColor;

@interface _UICustomBlurEffect : UIBlurEffect {

	_UIBackdropViewSettings* _blurEffect;

}

@property (assign,nonatomic) double grayscaleTintLevel; 
@property (assign,nonatomic) double grayscaleTintAlpha; 
@property (assign,nonatomic) BOOL lightenGrayscaleWithSourceOver; 
@property (nonatomic,retain) UIColor * colorTint; 
@property (assign,nonatomic) double colorTintAlpha; 
@property (assign,nonatomic) double colorBurnTintLevel; 
@property (assign,nonatomic) double colorBurnTintAlpha; 
@property (assign,nonatomic) double darkeningTintAlpha; 
@property (assign,nonatomic) double darkeningTintHue; 
@property (assign,nonatomic) double darkeningTintSaturation; 
@property (assign,nonatomic) BOOL darkenWithSourceOver; 
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double saturationDeltaFactor; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double zoom; 
+(id)effectWithStyle:(long long)arg1 ;
-(id)init;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setGrayscaleTintLevel:(double)arg1 ;
-(void)setGrayscaleTintAlpha:(double)arg1 ;
-(void)setColorTint:(UIColor *)arg1 ;
-(void)setColorTintAlpha:(double)arg1 ;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(UIColor *)colorTint;
-(double)colorTintAlpha;
-(double)grayscaleTintAlpha;
-(void)setDarkeningTintAlpha:(double)arg1 ;
-(void)setLightenGrayscaleWithSourceOver:(BOOL)arg1 ;
-(void)setColorBurnTintLevel:(double)arg1 ;
-(void)setColorBurnTintAlpha:(double)arg1 ;
-(void)setDarkeningTintHue:(double)arg1 ;
-(void)setDarkeningTintSaturation:(double)arg1 ;
-(void)setDarkenWithSourceOver:(BOOL)arg1 ;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(double)blurRadius;
-(void)setScale:(double)arg1 ;
-(double)saturationDeltaFactor;
-(BOOL)lightenGrayscaleWithSourceOver;
-(double)colorBurnTintAlpha;
-(double)darkeningTintAlpha;
-(double)grayscaleTintLevel;
-(double)colorBurnTintLevel;
-(double)darkeningTintHue;
-(double)darkeningTintSaturation;
-(BOOL)darkenWithSourceOver;
-(id)effectSettings;
@end

