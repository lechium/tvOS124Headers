//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHMediaItemListViewCell.h"

@class UILabel;

@interface TVHMusicSongListViewCell : TVHMediaItemListViewCell
{
    UILabel *_artistTitleLabel;	// 8 = 0x8
    UILabel *_albumTitleLabel;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *albumTitleLabel; // @synthesize albumTitleLabel=_albumTitleLabel;
@property(retain, nonatomic) UILabel *artistTitleLabel; // @synthesize artistTitleLabel=_artistTitleLabel;
- (void).cxx_destruct;	// IMP=0x000000010000fc3c
- (void)layoutSubviews;	// IMP=0x000000010000f858
- (void)_updateColors;	// IMP=0x000000010000f684
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000010000ef24

@end

