//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UISwitch;

@interface MTPodcastPlaylistSheetHeaderView : UIView
{
    UIView *_separator;	// 8 = 0x8
    UISwitch *_switch;	// 16 = 0x10
    UILabel *_title;	// 24 = 0x18
    _Bool _on;	// 32 = 0x20
    CDUnknownBlockType _action;	// 40 = 0x28
}

@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x00000001000ddaec
- (void)buttonTapped:(id)arg1;	// IMP=0x00000001000dd9f0
- (void)layoutSubviews;	// IMP=0x00000001000dd6bc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000dd39c

@end

