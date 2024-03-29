//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TVImageProxy, TVPImageView, UIActivityIndicatorView, UIVisualEffectView;

@interface TVPSharedPSOneupItemView : UIView
{
    _Bool _isVideoItem;	// 8 = 0x8
    TVImageProxy *_imageProxy;	// 16 = 0x10
    TVPImageView *_oneUpItemView;	// 24 = 0x18
    unsigned long long _oneupMode;	// 32 = 0x20
    UIVisualEffectView *_backdropView;	// 40 = 0x28
    TVPImageView *_playImageView;	// 48 = 0x30
    TVPImageView *_videoBadgeView;	// 56 = 0x38
    UIActivityIndicatorView *_spinnerView;	// 64 = 0x40
}

@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) TVPImageView *videoBadgeView; // @synthesize videoBadgeView=_videoBadgeView;
@property(retain, nonatomic) TVPImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(nonatomic) _Bool isVideoItem; // @synthesize isVideoItem=_isVideoItem;
@property(nonatomic) unsigned long long oneupMode; // @synthesize oneupMode=_oneupMode;
@property(readonly, nonatomic) TVPImageView *oneUpItemView; // @synthesize oneUpItemView=_oneUpItemView;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
- (void).cxx_destruct;	// IMP=0x0000000100092524
- (void)_configureVideoBadgeView;	// IMP=0x0000000100092248
- (void)layoutSubviews;	// IMP=0x0000000100092024
- (void)didAnimateToFullScreenMode;	// IMP=0x0000000100091fd4
- (void)willAnimateToFullScreenMode;	// IMP=0x0000000100091fb8
- (void)didAnimateToCaptionMode;	// IMP=0x0000000100091f74
- (void)willAnimateToCaptionMode;	// IMP=0x0000000100091f24

@end

