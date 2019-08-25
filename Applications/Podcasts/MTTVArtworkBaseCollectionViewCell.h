//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MTTVBadgeView, NSString, TVMTAnimatedLabel, UIImageView, UILabel;

@interface MTTVArtworkBaseCollectionViewCell : UICollectionViewCell
{
    _Bool _showingDefaultImage;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    unsigned long long _badgeCount;	// 32 = 0x20
    UIImageView *_artworkView;	// 40 = 0x28
    TVMTAnimatedLabel *_titleLabel;	// 48 = 0x30
    UILabel *_subtitleLabel;	// 56 = 0x38
    MTTVBadgeView *_badgeView;	// 64 = 0x40
    NSString *_imageKey;	// 72 = 0x48
}

+ (id)subtitleFont;	// IMP=0x00000001001a5064
+ (id)titleFont;	// IMP=0x00000001001a5044
+ (struct CGSize)itemSize;	// IMP=0x00000001001a4eec
+ (struct CGSize)artworkSize;	// IMP=0x00000001001a4ed8
+ (id)reuseIdentifier;	// IMP=0x00000001001a4ebc
@property(nonatomic, getter=isShowingDefaultImage) _Bool showingDefaultImage; // @synthesize showingDefaultImage=_showingDefaultImage;
@property(copy, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
@property(retain, nonatomic) MTTVBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) TVMTAnimatedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *artworkView; // @synthesize artworkView=_artworkView;
@property(nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001001a66cc
- (void)_setArtwork:(id)arg1;	// IMP=0x00000001001a65cc
- (void)_updateSubtitleLabelVisibility;	// IMP=0x00000001001a6570
- (void)_updateTitleLabelVisibility;	// IMP=0x00000001001a64cc
- (void)loadImageForKey:(id)arg1;	// IMP=0x00000001001a60c8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001001a5d08
- (void)prepareForReuse;	// IMP=0x00000001001a5bc8
- (void)layoutSubviews;	// IMP=0x00000001001a56e0
- (void)configureSubviews;	// IMP=0x00000001001a50dc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001a5084

@end

