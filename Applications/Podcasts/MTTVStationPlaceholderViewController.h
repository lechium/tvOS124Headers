//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MTPlaylist, UIImageView;

@interface MTTVStationPlaceholderViewController : UIViewController
{
    MTPlaylist *_station;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MTPlaylist *station; // @synthesize station=_station;
- (void).cxx_destruct;	// IMP=0x000000010010718c
- (id)_fetchArtwork;	// IMP=0x00000001001070ac
- (_Bool)_isDarkBackground;	// IMP=0x000000010010705c
- (void)_updateColors;	// IMP=0x0000000100106fd4
- (void)_update;	// IMP=0x0000000100106f30
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100106df8
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100106d5c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100106d0c
- (void)viewDidLoad;	// IMP=0x0000000100106cbc
- (void)loadView;	// IMP=0x0000000100106c20
- (id)initWithStation:(id)arg1;	// IMP=0x0000000100106bac

@end
