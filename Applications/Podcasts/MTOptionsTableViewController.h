//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class MTOptionSetting;

@interface MTOptionsTableViewController : UITableViewController
{
    CDUnknownBlockType _optionSelectedBlock;	// 8 = 0x8
    MTOptionSetting *_option;	// 16 = 0x10
}

+ (id)footerFont;	// IMP=0x00000001000f220c
+ (id)optionFont;	// IMP=0x00000001000f21ec
+ (double)rowHeight;	// IMP=0x00000001000f2188
@property(retain, nonatomic) MTOptionSetting *option; // @synthesize option=_option;
@property(copy, nonatomic) CDUnknownBlockType optionSelectedBlock; // @synthesize optionSelectedBlock=_optionSelectedBlock;
- (void).cxx_destruct;	// IMP=0x00000001000f35fc
- (id)metricsName;	// IMP=0x00000001000f3520
- (unsigned long long)selectedIndex;	// IMP=0x00000001000f3448
- (id)headerText;	// IMP=0x00000001000f32e8
- (id)footerText;	// IMP=0x00000001000f3188
- (id)newFooterView;	// IMP=0x00000001000f2f08
- (void)_updateTextColorForCell:(id)arg1 selected:(_Bool)arg2;	// IMP=0x00000001000f2e48
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000f2be0
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000001000f2b0c
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000001000f2b00
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000001000f2978
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000001000f289c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000f2620
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000f258c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000f2584
- (void)updateRowHeight;	// IMP=0x00000001000f24e8
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000001000f2494
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000f238c
- (void)dealloc;	// IMP=0x00000001000f2314
- (id)initWithOption:(id)arg1 largeTitleDisplayMode:(long long)arg2;	// IMP=0x00000001000f2240
- (id)initWithOption:(id)arg1;	// IMP=0x00000001000f2230

@end

