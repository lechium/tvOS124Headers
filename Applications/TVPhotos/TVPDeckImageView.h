//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIImage, UIImageView;

@interface TVPDeckImageView : UIView
{
    UIView *_pendingDisplayView;	// 8 = 0x8
    unsigned long long _pendingViewType;	// 16 = 0x10
    UIView *_displayView;	// 24 = 0x18
    unsigned long long _viewType;	// 32 = 0x20
    UIImageView *_placeholderImageView;	// 40 = 0x28
    double _imageLoadTimeout;	// 48 = 0x30
    _Bool _shuffledParade;	// 56 = 0x38
    _Bool _inOrderParade;	// 57 = 0x39
    NSArray *_imageProxies;	// 64 = 0x40
    UIImage *_placeholderImage;	// 72 = 0x48
    unsigned long long _deckViewParadeType;	// 80 = 0x50
    double _cycleInterval;	// 88 = 0x58
    double _transitionDuration;	// 96 = 0x60
    double _newDataTransitionDuration;	// 104 = 0x68
    struct CGRect _imageFrame;	// 112 = 0x70
}

@property(nonatomic) double newDataTransitionDuration; // @synthesize newDataTransitionDuration=_newDataTransitionDuration;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(nonatomic) unsigned long long deckViewParadeType; // @synthesize deckViewParadeType=_deckViewParadeType;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic, getter=isInOrder) _Bool inOrderParade; // @synthesize inOrderParade=_inOrderParade;
@property(nonatomic, getter=isShuffled) _Bool shuffledParade; // @synthesize shuffledParade=_shuffledParade;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void).cxx_destruct;	// IMP=0x000000010008e558
- (unsigned long long)_viewTypeForNumberOfImages:(long long)arg1;	// IMP=0x000000010008e428
- (unsigned long long)_paradeThreshold;	// IMP=0x000000010008e420
- (void)_displayPlaceholderView;	// IMP=0x000000010008e194
- (void)_fadeToBlack;	// IMP=0x000000010008e09c
- (void)_dissolveToPendingView;	// IMP=0x000000010008dc34
- (void)setInOrder:(_Bool)arg1;	// IMP=0x000000010008db38
- (void)setShuffled:(_Bool)arg1;	// IMP=0x000000010008da40
- (void)resume;	// IMP=0x000000010008d9d0
- (_Bool)isPaused;	// IMP=0x000000010008d950
- (void)pause;	// IMP=0x000000010008d8e0
- (void)_scrollingParadeViewReadyNotification:(id)arg1;	// IMP=0x000000010008d46c
- (void)_paradeViewReadyNotification:(id)arg1;	// IMP=0x000000010008d394
- (void)_crossfadeViewReadyNotification:(id)arg1;	// IMP=0x000000010008d2c0
- (void)layoutSubviews;	// IMP=0x000000010008d234
- (void)dealloc;	// IMP=0x000000010008d1d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010008d004

@end

