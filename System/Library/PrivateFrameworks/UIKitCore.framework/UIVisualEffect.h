/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIVisualEffectConfig, _UIBackdropViewSettings;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding> {

	_UIVisualEffectConfig* _effectConfig;

}

@property (nonatomic,readonly) _UIBackdropViewSettings * effectSettings; 
@property (nonatomic,readonly) BOOL _isATVStyle; 
@property (nonatomic,readonly) BOOL _isAutomaticStyle; 
@property (nonatomic,readonly) _UIVisualEffectConfig * effectConfig;                  //@synthesize effectConfig=_effectConfig - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)emptyEffect;
+(id)effectCompositingImage:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3 ;
+(id)effectCompositingColor:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3 ;
+(id)effectCombiningEffects:(id)arg1 ;
+(id)effectCompositingImage:(id)arg1 ;
+(id)effectCompositingColor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIBackdropViewSettings *)effectSettings;
-(void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2 ;
-(BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 ;
-(BOOL)_needsUpdateForOption:(id)arg1 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(long long)_expectedUsage;
-(BOOL)_isATVStyle;
-(BOOL)_isAutomaticStyle;
-(_UIVisualEffectConfig *)effectConfig;
-(id)effectConfigForQuality:(long long)arg1 ;
-(id)effectConfigForOptions:(id)arg1 ;
-(BOOL)_selectorOverriden:(SEL)arg1 ;
-(void)_enumerateEffects:(/*^block*/id)arg1 ;
-(BOOL)_needsUpdateForMovingToSuperview:(id)arg1 fromSuperview:(id)arg2 inEffectView:(id)arg3 ;
-(BOOL)_needsUpdateForMovingToWindow:(id)arg1 fromWindow:(id)arg2 inEffectView:(id)arg3 ;
@end

