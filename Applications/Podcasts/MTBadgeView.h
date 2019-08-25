//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface MTBadgeView : UIView
{
    _Bool _dark;	// 8 = 0x8
    UILabel *_badgeLabel;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(nonatomic, getter=isDark) _Bool dark; // @synthesize dark=_dark;
- (void).cxx_destruct;	// IMP=0x00000001000dd388
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000001000dd2d4
- (void)setBadgeValue:(id)arg1;	// IMP=0x00000001000dd230
- (void)layoutSubviews;	// IMP=0x00000001000dcf3c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000dcec4
- (id)init;	// IMP=0x00000001000dce30

@end

