//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTGenericCell.h"

@class MTCountChevronView;

@interface MTPodcastCell : MTGenericCell
{
    MTCountChevronView *_countView;	// 24 = 0x18
}

+ (_Bool)showsArtwork;	// IMP=0x00000001000de7ac
@property(retain, nonatomic) MTCountChevronView *countView; // @synthesize countView=_countView;
- (void).cxx_destruct;	// IMP=0x00000001000df0a0
- (void)updateColors;	// IMP=0x00000001000def34
- (void)updateFonts;	// IMP=0x00000001000dedfc
- (void)configureSubviews;	// IMP=0x00000001000ded84
- (id)_subtitleForPodcast:(id)arg1;	// IMP=0x00000001000de9ec
- (void)updateWithObject:(id)arg1;	// IMP=0x00000001000de80c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000de7b4

@end
