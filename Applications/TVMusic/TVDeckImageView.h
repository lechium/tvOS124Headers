//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIImage, UIImageView;

@interface TVDeckImageView : UIView
{
    UIView *_pendingDisplayView;	// 8 = 0x8
    unsigned long long _pendingViewType;	// 16 = 0x10
    UIView *_displayView;	// 24 = 0x18
    unsigned long long _viewType;	// 32 = 0x20
    UIImageView *_placeholderImageView;	// 40 = 0x28
    double _imageLoadTimeout;	// 48 = 0x30
    NSArray *_artworkCatalogs;	// 56 = 0x38
    UIImage *_placeholderImage;	// 64 = 0x40
    unsigned long long _deckViewParadeType;	// 72 = 0x48
    double _cycleInterval;	// 80 = 0x50
    double _transitionDuration;	// 88 = 0x58
    double _newDataTransitionDuration;	// 96 = 0x60
    struct CGRect _imageFrame;	// 104 = 0x68
}

@property(nonatomic) double newDataTransitionDuration; // @synthesize newDataTransitionDuration=_newDataTransitionDuration;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(nonatomic) unsigned long long deckViewParadeType; // @synthesize deckViewParadeType=_deckViewParadeType;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(copy, nonatomic) NSArray *artworkCatalogs; // @synthesize artworkCatalogs=_artworkCatalogs;
- (void).cxx_destruct;	// IMP=0x0000000100050abc
- (unsigned long long)_viewTypeForNumberOfImages:(long long)arg1;	// IMP=0x0000000100050990
- (unsigned long long)_paradeThreshold;	// IMP=0x0000000100050988
- (void)_displayPlaceholderView;	// IMP=0x00000001000506fc
- (void)_fadeToBlack;	// IMP=0x0000000100050604
- (void)_dissolveToPendingView;	// IMP=0x000000010005019c
- (void)resume;	// IMP=0x000000010005012c
- (_Bool)isPaused;	// IMP=0x00000001000500ac
- (void)pause;	// IMP=0x000000010005003c
- (void)_scrollingParadeViewReadyNotification:(id)arg1;	// IMP=0x000000010004fcbc
- (void)_crossfadeViewReadyNotification:(id)arg1;	// IMP=0x000000010004fbe8
- (void)layoutSubviews;	// IMP=0x000000010004fb5c
- (void)dealloc;	// IMP=0x000000010004fac0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010004f938

@end
