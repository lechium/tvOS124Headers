/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UIFloatingContentViewDelegate;
@class _UIFloatingContentTransformView, _UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView, _UIFloatingContentCornerRadiusAnimatingView, UIView, NSMutableArray, _UIFocusAnimationConfiguration, UIImage;

@interface _UIFloatingContentView : UIView {

	id<_UIFloatingContentViewDelegate> _floatingContentViewDelegate;
	_UIFloatingContentTransformView* _transformView;
	_UIFloatingContentCornerRadiusAnimatingScreenScaleInheritingView* _containerView;
	_UIFloatingContentCornerRadiusAnimatingView* _highlightView;
	_UIFloatingContentCornerRadiusAnimatingView* _visualEffectContainerView;
	UIView* _shadowView;
	UIView* _contentView;
	UIView* _highContrastFocusIndicatorView;
	CFDictionaryRef _backgroundColorsByState;
	NSMutableArray* _contentMotionEffects;
	double _shadowOpacityLight;
	double _shadowOpacityDark;
	CGPoint _focusDirection;
	CGPoint _contentRotation;
	CGPoint _contentTranslation;
	BOOL _customScale;
	BOOL _symmetricScale;
	BOOL _stretchableShadowImage;
	BOOL _useShadowImage;
	BOOL _shadowEnabled;
	BOOL _contentOpaque;
	BOOL _scalesBackwards;
	BOOL _roundContentWhenDeselected;
	BOOL __disableOutsetShadowPath;
	BOOL _showsHighContrastFocusIndicator;
	double _cornerRadius;
	double _visualEffectContainerViewScaleFactor;
	_UIFocusAnimationConfiguration* _focusAnimationConfiguration;
	double _shadowRadius;
	double _shadowVerticalOffset;
	double _unfocusedShadowRadius;
	double _unfocusedShadowOpacity;
	double _unfocusedShadowVerticalOffset;
	UIImage* _shadowImage;
	unsigned long long _controlState;
	long long _highlightStyle;
	/*^block*/id _focusAnimationConfigurationHandler;
	CGPoint _focusScaleAnchorPoint;
	CGSize _shadowSize;
	CGSize _unfocusedShadowExpansion;
	CGSize _shadowExpansion;
	CGSize _asymmetricScaleFactor;
	CGSize _asymmetricFocusedSizeIncrease;
	CGRect _shadowContentsCenter;

}

@property (assign,nonatomic) BOOL scalesBackwards;                                                           //@synthesize scalesBackwards=_scalesBackwards - In the implementation block
@property (assign,nonatomic) BOOL roundContentWhenDeselected;                                                //@synthesize roundContentWhenDeselected=_roundContentWhenDeselected - In the implementation block
@property (assign,nonatomic) CGSize asymmetricScaleFactor;                                                   //@synthesize asymmetricScaleFactor=_asymmetricScaleFactor - In the implementation block
@property (assign,nonatomic) CGSize asymmetricFocusedSizeIncrease;                                           //@synthesize asymmetricFocusedSizeIncrease=_asymmetricFocusedSizeIncrease - In the implementation block
@property (assign,nonatomic) BOOL _disableOutsetShadowPath;                                                  //@synthesize _disableOutsetShadowPath=__disableOutsetShadowPath - In the implementation block
@property (assign,nonatomic) BOOL showsHighContrastFocusIndicator;                                           //@synthesize showsHighContrastFocusIndicator=_showsHighContrastFocusIndicator - In the implementation block
@property (nonatomic,copy) id focusAnimationConfigurationHandler;                                            //@synthesize focusAnimationConfigurationHandler=_focusAnimationConfigurationHandler - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFloatingContentViewDelegate> floatingContentDelegate; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIView * visualEffectContainerView; 
@property (assign,nonatomic) double cornerRadius;                                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) double focusedSizeIncrease; 
@property (assign,nonatomic) CGPoint focusScaleAnchorPoint;                                                  //@synthesize focusScaleAnchorPoint=_focusScaleAnchorPoint - In the implementation block
@property (assign,nonatomic) double visualEffectContainerViewScaleFactor;                                    //@synthesize visualEffectContainerViewScaleFactor=_visualEffectContainerViewScaleFactor - In the implementation block
@property (nonatomic,copy) _UIFocusAnimationConfiguration * focusAnimationConfiguration;                     //@synthesize focusAnimationConfiguration=_focusAnimationConfiguration - In the implementation block
@property (assign,nonatomic) BOOL useShadowImage;                                                            //@synthesize useShadowImage=_useShadowImage - In the implementation block
@property (assign,getter=isShadowEnabled,nonatomic) BOOL shadowEnabled;                                      //@synthesize shadowEnabled=_shadowEnabled - In the implementation block
@property (assign,nonatomic) CGSize shadowSize;                                                              //@synthesize shadowSize=_shadowSize - In the implementation block
@property (assign,nonatomic) double shadowRadius;                                                            //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double shadowOpacity; 
@property (assign,nonatomic) double shadowVerticalOffset;                                                    //@synthesize shadowVerticalOffset=_shadowVerticalOffset - In the implementation block
@property (assign,nonatomic) double unfocusedShadowRadius;                                                   //@synthesize unfocusedShadowRadius=_unfocusedShadowRadius - In the implementation block
@property (assign,nonatomic) double unfocusedShadowOpacity;                                                  //@synthesize unfocusedShadowOpacity=_unfocusedShadowOpacity - In the implementation block
@property (assign,nonatomic) double unfocusedShadowVerticalOffset;                                           //@synthesize unfocusedShadowVerticalOffset=_unfocusedShadowVerticalOffset - In the implementation block
@property (assign,nonatomic) CGSize unfocusedShadowExpansion;                                                //@synthesize unfocusedShadowExpansion=_unfocusedShadowExpansion - In the implementation block
@property (assign,nonatomic) CGSize shadowExpansion;                                                         //@synthesize shadowExpansion=_shadowExpansion - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                                                          //@synthesize shadowImage=_shadowImage - In the implementation block
@property (assign,nonatomic) CGRect shadowContentsCenter;                                                    //@synthesize shadowContentsCenter=_shadowContentsCenter - In the implementation block
@property (assign,nonatomic) unsigned long long controlState;                                                //@synthesize controlState=_controlState - In the implementation block
@property (assign,nonatomic) BOOL clipsContentToBounds; 
@property (assign,nonatomic) long long highlightStyle;                                                       //@synthesize highlightStyle=_highlightStyle - In the implementation block
@property (assign,getter=isContentOpaque,nonatomic) BOOL contentOpaque;                                      //@synthesize contentOpaque=_contentOpaque - In the implementation block
+(id)_defaultFocusAnimationConfiguration;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setShadowExpansion:(CGSize)arg1 ;
-(void)setShadowVerticalOffset:(double)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(id)highlightView;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRoundContentWhenDeselected:(BOOL)arg1 ;
-(void)setFocusScaleAnchorPoint:(CGPoint)arg1 ;
-(void)setFocusAnimationConfiguration:(_UIFocusAnimationConfiguration *)arg1 ;
-(void)setVisualEffectContainerViewScaleFactor:(double)arg1 ;
-(void)setUseShadowImage:(BOOL)arg1 ;
-(void)setClipsContentToBounds:(BOOL)arg1 ;
-(void)setShadowContentsCenter:(CGRect)arg1 ;
-(void)setFocusedSizeIncrease:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 forUserInterfaceStyle:(long long)arg2 ;
-(void)setUnfocusedShadowOpacity:(double)arg1 ;
-(void)setUnfocusedShadowRadius:(double)arg1 ;
-(void)setUnfocusedShadowVerticalOffset:(double)arg1 ;
-(void)setUnfocusedShadowExpansion:(CGSize)arg1 ;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(void)_updateHighContrastFocusIndicatorView;
-(unsigned long long)controlState;
-(unsigned long long)_primaryStateForState:(unsigned long long)arg1 ;
-(BOOL)_shouldAppearToFloatForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateTransformForPrimaryState:(unsigned long long)arg1 ;
-(void)addContentMotionEffect:(id)arg1 ;
-(BOOL)_shouldApplyCornerRadiusForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateHighlightViewForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateShadowLayer;
-(double)cornerRadius;
-(void)_setShadowImageIfNeeded;
-(void)_updateScaleFactor;
-(void)_layoutShadow;
-(void)_layoutHighContrastFocusIndicator;
-(BOOL)isShadowEnabled;
-(BOOL)useShadowImage;
-(CGSize)shadowSize;
-(double)shadowRadius;
-(double)unfocusedShadowRadius;
-(CGSize)shadowExpansion;
-(CGSize)unfocusedShadowExpansion;
-(BOOL)_disableOutsetShadowPath;
-(CGPathRef)_shadowPathForSize:(CGSize)arg1 radius:(double)arg2 ;
-(void)_setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(_UIFocusAnimationConfiguration *)focusAnimationConfiguration;
-(void)_updateContainerLayerQualityForPrimaryState:(unsigned long long)arg1 ;
-(id<_UIFloatingContentViewDelegate>)floatingContentDelegate;
-(void)_updateShadowContentsScaleForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateHighContrastFocusIndicatorForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateShadowOpacityForPrimaryState:(unsigned long long)arg1 ;
-(void)_uninstallContentMotionEffects;
-(void)_installContentMotionEffects;
-(double)scaleFactor;
-(double)shadowOpacityForUserInterfaceStyle:(long long)arg1 ;
-(double)_effectiveShadowOpacity;
-(UIImage *)shadowImage;
-(CGRect)shadowContentsCenter;
-(void)setShadowImage:(id)arg1 stretchable:(BOOL)arg2 ;
-(void)setAsymmetricScaleFactor:(CGSize)arg1 ;
-(void)setAsymmetricFocusedSizeIncrease:(CGSize)arg1 ;
-(double)focusedSizeIncrease;
-(CGSize)asymmetricFocusedSizeIncrease;
-(id)backgroundColorForState:(unsigned long long)arg1 ;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setFloatingContentDelegate:(id<_UIFloatingContentViewDelegate>)arg1 ;
-(void)setContentMotionRotation:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)removeContentMotionEffect:(id)arg1 ;
-(UIView *)visualEffectContainerView;
-(id)transformView;
-(void)setScalesBackwards:(BOOL)arg1 ;
-(void)setControlState:(unsigned long long)arg1 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)clipsContentToBounds;
-(void)setShowsHighContrastFocusIndicator:(BOOL)arg1 ;
-(double)_effectiveShadowRadius;
-(double)shadowOpacity;
-(double)_currentShadowOpacity;
-(void)setScaleFactor:(double)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(CGPoint)focusScaleAnchorPoint;
-(double)visualEffectContainerViewScaleFactor;
-(void)setShadowSize:(CGSize)arg1 ;
-(double)shadowVerticalOffset;
-(double)unfocusedShadowOpacity;
-(double)unfocusedShadowVerticalOffset;
-(long long)highlightStyle;
-(void)setHighlightStyle:(long long)arg1 ;
-(BOOL)isContentOpaque;
-(void)setContentOpaque:(BOOL)arg1 ;
-(BOOL)scalesBackwards;
-(BOOL)roundContentWhenDeselected;
-(CGSize)asymmetricScaleFactor;
-(void)set_disableOutsetShadowPath:(BOOL)arg1 ;
-(BOOL)showsHighContrastFocusIndicator;
-(id)focusAnimationConfigurationHandler;
-(void)setFocusAnimationConfigurationHandler:(id)arg1 ;
@end

