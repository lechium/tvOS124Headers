//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, TVPImageStack, TVUINamedLayerStack, UIColor, _UIStackedImageConfiguration, _UIStackedImageContainerLayer;

@interface TVPImageStackView : UIView
{
    _UIStackedImageContainerLayer *_imageStackLayer;	// 8 = 0x8
    _UIStackedImageConfiguration *_imageStackConfig;	// 16 = 0x10
    TVPImageStack *_imageStack;	// 24 = 0x18
    struct CGSize _imageStackSize;	// 32 = 0x20
    TVUINamedLayerStack *_uiLayerStack;	// 48 = 0x30
    double _layerSelectionDuration;	// 56 = 0x38
    double _layerUnselectionDuration;	// 64 = 0x40
    double _shadowSelectionDuration;	// 72 = 0x48
    double _shadowUnselectionDuration;	// 80 = 0x50
    double _repositionUnselectionDuration;	// 88 = 0x58
    _Bool _imageLoaded;	// 96 = 0x60
    UIView *_overlayView;	// 104 = 0x68
    UIView *_unmaskedOverlayView;	// 112 = 0x70
}

+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;	// IMP=0x0000000100088b54
+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 selectionStyle:(long long)arg2;	// IMP=0x0000000100088ac0
+ (id)imageStackViewWithSize:(struct CGSize)arg1;	// IMP=0x00000001000867a8
+ (id)imageStackViewWithImageStack:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000100086720
@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(retain, nonatomic) UIView *unmaskedOverlayView; // @synthesize unmaskedOverlayView=_unmaskedOverlayView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (void).cxx_destruct;	// IMP=0x0000000100088bc0
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000100088b68
- (void)_updateStackedImageConfiguration;	// IMP=0x00000001000888bc
- (double)_unpressedDuration;	// IMP=0x00000001000888a4
- (void)_setUnpressedDuration:(double)arg1;	// IMP=0x000000010008888c
- (void)_setSelectionStyle:(long long)arg1;	// IMP=0x0000000100088874
- (void)_setPressedScaleAdjustment:(double)arg1;	// IMP=0x000000010008885c
- (void)_setPressedDuration:(double)arg1;	// IMP=0x0000000100088844
- (void)_setImageStackContentsGravity:(id)arg1;	// IMP=0x000000010008882c
- (void)_setIdleModeFocusSizeOffset:(double)arg1;	// IMP=0x0000000100088814
- (void)_setFocusDirection:(struct CGPoint)arg1 duration:(double)arg2;	// IMP=0x00000001000887fc
- (long long)_selectionStyle;	// IMP=0x00000001000887e4
- (id)_layeredImageContainerLayer;	// IMP=0x00000001000887d4
- (id)_shadowLayer;	// IMP=0x00000001000887bc
- (double)_pressedScaleAdjustment;	// IMP=0x00000001000887a4
- (double)_pressedDuration;	// IMP=0x000000010008878c
- (void)_resetShadowSettings;	// IMP=0x000000010008860c
- (void)_setShadowVerticalOffset:(double)arg1;	// IMP=0x00000001000885a8
- (void)_setShadowRadius:(double)arg1;	// IMP=0x0000000100088544
- (void)_setShadowOpacity:(double)arg1;	// IMP=0x00000001000884e0
- (id)_newImageConfiguration;	// IMP=0x000000010008849c
- (id)_flatLayer;	// IMP=0x0000000100088484
- (id)_layerBelowTitles;	// IMP=0x000000010008846c
- (id)_imageStackContentsGravity;	// IMP=0x0000000100088454
- (id)_imageConfiguration;	// IMP=0x000000010008843c
- (double)_idleModeFocusSizeOffset;	// IMP=0x0000000100088424
@property(nonatomic) double focusSizeIncrease;
@property(readonly, nonatomic) unsigned long long primaryControlState;
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x000000010008839c
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100088384
@property(nonatomic) unsigned long long controlState;
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000881e4
@property(nonatomic) struct CGPoint focusDirection;
- (void)setPressed:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100087fcc
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100087fb4
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100087f9c
@property(nonatomic, getter=isPressed) _Bool pressed;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;	// IMP=0x0000000100087ed8
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100087e44
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100087de4
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic) double layerUnselectionDuration;
@property(nonatomic) double layerSelectionDuration;
@property(nonatomic, getter=isHueShiftEnabled) _Bool hueShiftEnabled;
@property(nonatomic, getter=isBrightnessBoostEnabled) _Bool brightnessBoostEnabled;
@property(nonatomic) double radiosityAmount;
@property(nonatomic) double specularHighlightVerticalPositionSensitivity;
@property(nonatomic) double specularHighlightVerticalPosition;
@property(nonatomic) double specularHighlightHorizontalPositionSensitivity;
@property(retain, nonatomic) UIColor *specularHighlightColor;
@property(nonatomic) double rotationAmount;
@property(nonatomic) double cornerRadius;
@property(nonatomic) double perspectiveZDepth;
@property(copy, nonatomic) NSArray *parallaxImageDepths;
@property(nonatomic) double maxParallaxImageDepth;
- (void)_loadImage;	// IMP=0x0000000100086f78
@property(retain, nonatomic) TVPImageStack *imageStack;
- (void)setImageStack:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x0000000100086d48
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100086cb4
- (void)layoutSubviews;	// IMP=0x0000000100086c48
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100086be0
- (void)dealloc;	// IMP=0x0000000100086b4c
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x0000000100086a60
- (id)initWithImageStack:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000100086840
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000867f4

@end

