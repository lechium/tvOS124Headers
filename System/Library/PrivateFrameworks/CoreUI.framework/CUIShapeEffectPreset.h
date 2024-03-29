/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIShapeEffectPreset : NSObject {

	SCD_Struct_CU26 _parameterList[125];
	unsigned _effectIndex[26];
	double _scaleFactor;
	float _minimumShadowSpread;

}

@property (assign,nonatomic) double scaleFactor;              //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign) float minimumShadowSpread;                 //@synthesize minimumShadowSpread=_minimumShadowSpread - In the implementation block
+(unsigned)cuiEffectBlendModeFromCGBlendMode:(int)arg1 ;
+(id)requiredEffectParametersForEffectType:(unsigned)arg1 ;
+(int)cgBlendModeFromCUIEffectBlendMode:(unsigned)arg1 ;
-(id)CUIEffectDataRepresentation;
-(id)initWithEffectScale:(double)arg1 ;
-(unsigned long long)effectCount;
-(unsigned)effectTypeAtIndex:(unsigned long long)arg1 ;
-(id)layerEffectsRepresentation;
-(void)addDropShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8 ;
-(/*function pointer*/void*)valueForParameter:(unsigned)arg1 inEffectAtIndex:(unsigned long long)arg2 ;
-(void)addInnerShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 offset:(int)arg6 angle:(int)arg7 blendMode:(unsigned)arg8 ;
-(void)addInnerGlowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 blendMode:(unsigned)arg6 ;
-(void)addOuterGlowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 ;
-(void)addColorFillWithRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blendMode:(unsigned)arg5 tintable:(BOOL)arg6 ;
-(void)addGradientFillWithTopColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 bottomColorRed:(unsigned)arg4 green:(unsigned)arg5 blue:(unsigned)arg6 opacity:(double)arg7 blendMode:(unsigned)arg8 ;
-(void)addBevelEmbossWithHighlightColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 shadowColorRed:(unsigned)arg5 green:(unsigned)arg6 blue:(unsigned)arg7 opacity:(double)arg8 blur:(int)arg9 soften:(int)arg10 bevelStyle:(unsigned)arg11 ;
-(void)setMinimumShadowSpread:(float)arg1 ;
-(void)_insertEffectTuple:(SCD_Struct_CU27)arg1 atEffectIndex:(unsigned long long)arg2 ;
-(void)addValue:(/*function pointer*/void*)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 atEffectIndex:(unsigned long long)arg4 ;
-(void)addValue:(/*function pointer*/void*)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)appendValue:(/*function pointer*/void*)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)addFloatValue:(double)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)addColorValueRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 forParameter:(unsigned)arg4 withNewEffectType:(unsigned)arg5 ;
-(void)appendFloatValue:(double)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)appendEnumValue:(unsigned)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)appendColorValueRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 forParameter:(unsigned)arg4 withEffectType:(unsigned)arg5 ;
-(void)appendIntValue:(unsigned long long)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)appendAngleValue:(long long)arg1 forParameter:(unsigned)arg2 withEffectType:(unsigned)arg3 ;
-(void)addShapeOpacityWithOpacity:(double)arg1 ;
-(void)addOutputOpacityWithOpacity:(double)arg1 ;
-(void)addExtraShadowWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 opacity:(double)arg4 blur:(int)arg5 spread:(int)arg6 offset:(int)arg7 angle:(int)arg8 ;
-(void)addHueSaturationWithColorRed:(unsigned)arg1 green:(unsigned)arg2 blue:(unsigned)arg3 angle:(int)arg4 width:(int)arg5 tintable:(BOOL)arg6 ;
-(double)effectScale;
-(void)getEffectTuples:(/*function pointer*/void**)arg1 count:(unsigned long long*)arg2 atEffectIndex:(unsigned long long)arg3 ;
-(void)addIntValue:(unsigned long long)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)addEnumValue:(unsigned)arg1 forParameter:(unsigned)arg2 withNewEffectType:(unsigned)arg3 ;
-(void)addEffectsFromPreset:(id)arg1 ;
-(float)minimumShadowSpread;
-(unsigned long long)_parameterCount;
-(id)initWithConstantPreset:(const SCD_Struct_CU28*)arg1 ;
-(id)init;
-(id)debugDescription;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
@end

