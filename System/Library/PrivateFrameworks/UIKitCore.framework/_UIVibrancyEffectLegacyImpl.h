/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class UIVibrancyEffect;

@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl {

	long long _style;
	BOOL _invertAutomaticStyle;
	UIVibrancyEffect* _effect;

}

@property (assign,nonatomic) UIVibrancyEffect * effect;              //@synthesize effect=_effect - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(long long)style;
-(void)setEffect:(UIVibrancyEffect *)arg1 ;
-(BOOL)invertAutomaticStyle;
-(void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2 ;
-(BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 ;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(void)appendDescriptionTo:(id)arg1 ;
-(UIVibrancyEffect *)effect;
-(id)initWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ;
@end

