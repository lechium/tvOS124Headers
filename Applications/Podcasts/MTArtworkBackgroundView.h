//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, UIColor, UIImage, UIImageView;

@interface MTArtworkBackgroundView : UIView
{
    _Bool _useLightStyle;	// 8 = 0x8
    UIImage *_artwork;	// 16 = 0x10
    UIColor *_blendColor;	// 24 = 0x18
    double _fadeHeight;	// 32 = 0x20
    UIImageView *_artworkView;	// 40 = 0x28
    UIView *_colorView;	// 48 = 0x30
    UIView *_fadeView;	// 56 = 0x38
    UIImage *_blurredArtwork;	// 64 = 0x40
    CAGradientLayer *_gradientLayer;	// 72 = 0x48
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImage *blurredArtwork; // @synthesize blurredArtwork=_blurredArtwork;
@property(retain, nonatomic) UIView *fadeView; // @synthesize fadeView=_fadeView;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) UIImageView *artworkView; // @synthesize artworkView=_artworkView;
@property(nonatomic) double fadeHeight; // @synthesize fadeHeight=_fadeHeight;
@property(nonatomic) _Bool useLightStyle; // @synthesize useLightStyle=_useLightStyle;
@property(retain, nonatomic) UIColor *blendColor; // @synthesize blendColor=_blendColor;
@property(retain, nonatomic) UIImage *artwork; // @synthesize artwork=_artwork;
- (void).cxx_destruct;	// IMP=0x0000000100096b74
- (void)layoutSubviews;	// IMP=0x00000001000966c4
- (void)_updateGradientColors;	// IMP=0x0000000100096558
- (id)_blurredImageForImage:(id)arg1;	// IMP=0x00000001000964bc
- (id)initWithArtwork:(id)arg1 blendColor:(id)arg2;	// IMP=0x00000001000960f0
- (id)init;	// IMP=0x00000001000960dc

@end

