//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTVEpisodeSplitViewController.h"

@class MTArtworkBackgroundView, MTColorTheme, MTPodcast, MTTVPodcastEpisodeListViewController, MTTVPodcastGoneDarkDetailViewController;

@interface MTTVPodcastDetailViewController : MTTVEpisodeSplitViewController
{
    MTPodcast *_podcast;	// 8 = 0x8
    MTTVPodcastGoneDarkDetailViewController *_goneDarkDetailViewController;	// 16 = 0x10
    MTArtworkBackgroundView *_backgroundView;	// 24 = 0x18
    MTColorTheme *_colorTheme;	// 32 = 0x20
}

@property(retain, nonatomic) MTColorTheme *colorTheme; // @synthesize colorTheme=_colorTheme;
@property(retain, nonatomic) MTArtworkBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MTTVPodcastGoneDarkDetailViewController *goneDarkDetailViewController; // @synthesize goneDarkDetailViewController=_goneDarkDetailViewController;
@property(readonly, nonatomic) MTPodcast *podcast; // @synthesize podcast=_podcast;
- (void).cxx_destruct;	// IMP=0x00000001000c50ec
- (void)_setupBackgroundView;	// IMP=0x00000001000c4e0c
- (void)_showDetailsForIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000c4d04
- (id)overrideTraitCollectionForChildViewController:(id)arg1;	// IMP=0x00000001000c4a30
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000c4864
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000c4794
- (void)viewDidLoad;	// IMP=0x00000001000c4654
- (void)highlightEpisodeUuid:(id)arg1;	// IMP=0x00000001000c44a0
- (id)initWithPodcast:(id)arg1;	// IMP=0x00000001000c43f0

// Remaining properties
@property(retain, nonatomic) MTTVPodcastEpisodeListViewController *episodeList; // @dynamic episodeList;

@end

