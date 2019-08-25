//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class MTSettingHeaderAction, UIButton;

@interface MTSettingsWithActionHeaderView : UITableViewHeaderFooterView
{
    MTSettingHeaderAction *_action;	// 8 = 0x8
    UIButton *_actionButton;	// 16 = 0x10
}

@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MTSettingHeaderAction *action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x000000010006e9b4
- (id)_actionButtonDisplayTitleForActionTitle:(id)arg1;	// IMP=0x000000010006e908
- (struct CGRect)_contentViewLayoutRect;	// IMP=0x000000010006e834
- (void)_updateButtonFontAndTextAlignment;	// IMP=0x000000010006e694
- (void)_reloadActionButtonContent;	// IMP=0x000000010006e4fc
- (void)layoutSubviews;	// IMP=0x000000010006e300
- (void)prepareForReuse;	// IMP=0x000000010006e2ac
- (void)actionButtonTapped:(id)arg1;	// IMP=0x000000010006e26c
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000010006e124

@end

