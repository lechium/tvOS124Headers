//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PHLivePhotoViewDelegate.h"

@class ISAnimatedImageView, ISWrappedAVPlayer, NSString, PHLivePhotoView, PXRoundProgressView, PXVideoPlayerView, UIActivityIndicatorView, UIGestureRecognizer, UIImageView;

@interface TVPPhotoView : UIView <PHLivePhotoViewDelegate>
{
    _Bool _isVideoView;	// 8 = 0x8
    int _currentRequestID;	// 12 = 0xc
    double _progress;	// 16 = 0x10
    UIActivityIndicatorView *_spinner;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UIImageView *_badgeImageView;	// 40 = 0x28
    PHLivePhotoView *_playerView;	// 48 = 0x30
    ISAnimatedImageView *_animatedImageView;	// 56 = 0x38
    PXVideoPlayerView *_videoPlayerView;	// 64 = 0x40
    ISWrappedAVPlayer *_videoPlayer;	// 72 = 0x48
    UIView *_overlayView;	// 80 = 0x50
    UIView *_currentView;	// 88 = 0x58
    PXRoundProgressView *_progressView;	// 96 = 0x60
    UIImageView *_errorView;	// 104 = 0x68
    long long _progressStyle;	// 112 = 0x70
    UIView *_irisGestureRecognizerView;	// 120 = 0x78
    struct CGSize _imageSize;	// 128 = 0x80
}

@property(nonatomic) _Bool isVideoView; // @synthesize isVideoView=_isVideoView;
@property(nonatomic) __weak UIView *irisGestureRecognizerView; // @synthesize irisGestureRecognizerView=_irisGestureRecognizerView;
@property(nonatomic) long long progressStyle; // @synthesize progressStyle=_progressStyle;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImageView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) PXRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) PXVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) ISAnimatedImageView *animatedImageView; // @synthesize animatedImageView=_animatedImageView;
@property(retain, nonatomic) PHLivePhotoView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) int currentRequestID; // @synthesize currentRequestID=_currentRequestID;
- (void).cxx_destruct;	// IMP=0x000000010008ae0c
- (unsigned long long)_autoresizingMask;	// IMP=0x000000010008ac20
- (void)_removeLivePhotoGesture;	// IMP=0x000000010008ab88
@property(readonly, nonatomic) UIGestureRecognizer *livePhotoGestureRecognizer;
- (void)_removeVideoOverlayViews;	// IMP=0x000000010008aafc
- (void)_removeAllSubviews;	// IMP=0x000000010008aa60
- (void)displayError;	// IMP=0x000000010008aa2c
- (void)hideProgress;	// IMP=0x000000010008a878
- (void)_hideError;	// IMP=0x000000010008a778
- (struct CGRect)_rectForProgressIndicator;	// IMP=0x000000010008a65c
- (void)setUpErrorView;	// IMP=0x000000010008a500
- (void)setUpProgressIndicator;	// IMP=0x000000010008a3bc
- (void)setUpVideoOverlayWithSpinner;	// IMP=0x000000010008a2a0
- (void)setUpBadgeImageViewWithImage:(id)arg1;	// IMP=0x000000010008a090
- (void)setUpVideoOverlayWithImage:(id)arg1;	// IMP=0x0000000100089d98
- (void)layoutSubviews;	// IMP=0x0000000100089804
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000897a0
- (void)didAnimateToFullScreenMode;	// IMP=0x000000010008970c
- (void)didAnimateToCaptionMode;	// IMP=0x0000000100089678
- (void)willAnimateToFullScreenMode;	// IMP=0x000000010008965c
- (void)willAnimateToCaptionMode;	// IMP=0x0000000100089640
- (id)displayedImage;	// IMP=0x00000001000895c8
- (void)removeBadgeImageView;	// IMP=0x0000000100089550
- (void)playVitalityHint;	// IMP=0x00000001000894ac
- (void)seekForVitalityHintIfNeeded;	// IMP=0x00000001000894a8
- (void)prepareForReuse;	// IMP=0x0000000100089464
- (void)displayAutoloopVideo:(id)arg1 placeholderImage:(id)arg2;	// IMP=0x0000000100089250
- (void)displayAnimatedImage:(id)arg1;	// IMP=0x00000001000890d0
- (void)displayLivePhoto:(id)arg1;	// IMP=0x0000000100088f9c
- (void)displayVideoOverlayIcon:(id)arg1 isVideoBadge:(_Bool)arg2;	// IMP=0x0000000100088f1c
- (void)displayVideoLoadingSpinnerOverlay;	// IMP=0x0000000100088ed8
- (void)displayImage:(id)arg1;	// IMP=0x0000000100088da4
- (void)displaySpinner;	// IMP=0x0000000100088cb4
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100088ca0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100088c50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

