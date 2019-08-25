/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UILegibilitySettings, UIImage, UIImageView;

@interface _UILegibilityView : UIView {

	BOOL _hidesImage;
	_UILegibilitySettings* _settings;
	UIImage* _image;
	UIImage* _shadowImage;
	double _strength;
	UIImageView* _imageView;
	UIImageView* _shadowImageView;
	long long _options;

}

@property (nonatomic,retain) _UILegibilitySettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                         //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * shadowImageView;                 //@synthesize shadowImageView=_shadowImageView - In the implementation block
@property (assign,nonatomic) long long options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long style; 
@property (assign,nonatomic) double strength;                               //@synthesize strength=_strength - In the implementation block
@property (assign,nonatomic) BOOL hidesImage;                               //@synthesize hidesImage=_hidesImage - In the implementation block
@property (nonatomic,readonly) BOOL usesColorFilters; 
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(long long)style;
-(void)_updateFilters;
-(long long)options;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(_UILegibilitySettings *)settings;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 ;
-(void)setImage:(id)arg1 shadowImage:(id)arg2 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(void)setOptions:(long long)arg1 ;
-(void)setSettings:(_UILegibilitySettings *)arg1 ;
-(id)initWithStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(long long)arg5 ;
-(void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(UIImageView *)shadowImageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)drawingColor;
-(BOOL)usesColorFilters;
-(void)setShadowImageView:(UIImageView *)arg1 ;
-(void)updateImage;
-(BOOL)usesSecondaryColor;
-(id)initWithStyle:(long long)arg1 image:(id)arg2 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 ;
-(void)setHidesImage:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(BOOL)hidesImage;
@end
