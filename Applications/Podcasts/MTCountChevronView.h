//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MTChevronView, NSNumber, UIColor, UIFont, UILabel;

@interface MTCountChevronView : UIView
{
    NSNumber *_count;	// 8 = 0x8
    UIColor *_textColor;	// 16 = 0x10
    UILabel *_countLabel;	// 24 = 0x18
    MTChevronView *_chevronView;	// 32 = 0x20
}

@property(retain, nonatomic) MTChevronView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
- (void).cxx_destruct;	// IMP=0x000000010004b1ec
- (struct CGRect)_countFrameForViewSize:(struct CGSize)arg1;	// IMP=0x000000010004afec
- (struct CGSize)_countSize;	// IMP=0x000000010004af84
- (struct CGSize)_chevronSize;	// IMP=0x000000010004af28
- (struct CGRect)_chevronFrameForViewSize:(struct CGSize)arg1;	// IMP=0x000000010004aea0
- (void)_updateCurrentTextColor;	// IMP=0x000000010004adb0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010004ad54
- (void)layoutSubviews;	// IMP=0x000000010004ac0c
@property(retain, nonatomic) UIFont *font;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010004a8cc

@end
