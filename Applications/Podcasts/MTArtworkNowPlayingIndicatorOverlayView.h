//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MTNowPlayingIndicatorView, MTVibrantImageView, UIImage;

@interface MTArtworkNowPlayingIndicatorOverlayView : UIView
{
    UIImage *_artworkImage;	// 8 = 0x8
    MTVibrantImageView *_vibrantImageView;	// 16 = 0x10
    MTNowPlayingIndicatorView *_barsView;	// 24 = 0x18
    UIView *_dimmingView;	// 32 = 0x20
}

@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) MTNowPlayingIndicatorView *barsView; // @synthesize barsView=_barsView;
@property(readonly, nonatomic) MTVibrantImageView *vibrantImageView; // @synthesize vibrantImageView=_vibrantImageView;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
- (void).cxx_destruct;	// IMP=0x00000001000fb594
- (void)_updateBarMetricsForArtworkSize:(struct CGSize)arg1;	// IMP=0x00000001000fb2e8
- (id)_blurredArtworkForArtwork:(id)arg1;	// IMP=0x00000001000fb1f0
- (_Bool)canBecomeFocused;	// IMP=0x00000001000fb1e8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000fb1d0
- (void)layoutSubviews;	// IMP=0x00000001000fb108
@property(readonly, nonatomic) _Bool playing;
@property(nonatomic) long long playbackState;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000fada4

@end

