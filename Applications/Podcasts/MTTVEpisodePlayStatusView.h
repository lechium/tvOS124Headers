//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TVMTMusicBarsView, UIColor, UIImage, UIImageView;

@interface MTTVEpisodePlayStatusView : UIView
{
    _Bool _currentPlayerItem;	// 8 = 0x8
    _Bool _barsFillBounds;	// 9 = 0x9
    UIColor *_barsTintColor;	// 16 = 0x10
    UIImageView *_dotView;	// 24 = 0x18
    TVMTMusicBarsView *_barsView;	// 32 = 0x20
}

@property(retain, nonatomic) TVMTMusicBarsView *barsView; // @synthesize barsView=_barsView;
@property(retain, nonatomic) UIImageView *dotView; // @synthesize dotView=_dotView;
@property(nonatomic) _Bool barsFillBounds; // @synthesize barsFillBounds=_barsFillBounds;
@property(retain, nonatomic) UIColor *barsTintColor; // @synthesize barsTintColor=_barsTintColor;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
- (void).cxx_destruct;	// IMP=0x0000000100178a94
- (void)didMoveToWindow;	// IMP=0x0000000100178898
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010017888c
- (void)layoutSubviews;	// IMP=0x00000001001786d8
- (void)updatePlaybackState;	// IMP=0x000000010017853c
- (void)_unregisterForNotifications;	// IMP=0x000000010017844c
- (void)_registerForNotifications;	// IMP=0x0000000100178348
@property(nonatomic) unsigned long long barsStyle;
@property(nonatomic) UIImage *image;
- (void)dealloc;	// IMP=0x0000000100177de4
- (id)init;	// IMP=0x0000000100177d64

@end

