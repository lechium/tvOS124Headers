//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MTPodcast, TVMTExpandingTextView, UIImageView;

@interface MTTVPodcastInfoViewController : UIViewController
{
    MTPodcast *_podcast;	// 8 = 0x8
    UIImageView *_artworkView;	// 16 = 0x10
    TVMTExpandingTextView *_descriptionView;	// 24 = 0x18
}

@property(retain, nonatomic) TVMTExpandingTextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIImageView *artworkView; // @synthesize artworkView=_artworkView;
@property(retain, nonatomic) MTPodcast *podcast; // @synthesize podcast=_podcast;
- (void).cxx_destruct;	// IMP=0x0000000100115520
- (void)updateDescriptionTextColor;	// IMP=0x0000000100114fe0
- (void)_updateColors;	// IMP=0x0000000100114e88
- (id)_fetchDescription;	// IMP=0x0000000100114d2c
- (id)_fetchArtwork;	// IMP=0x0000000100114ccc
- (void)_update;	// IMP=0x0000000100114bf0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100114b24
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100114a54
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100114894
- (void)loadView;	// IMP=0x000000010011477c
- (id)initWithPodcast:(id)arg1;	// IMP=0x00000001001146fc

@end

