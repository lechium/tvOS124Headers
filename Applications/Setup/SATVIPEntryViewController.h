//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SATVIPEntryViewDelegate.h"

@class NSString, SATVHeaderView, SATVIPEntryView, UILabel;

@interface SATVIPEntryViewController : UIViewController <SATVIPEntryViewDelegate>
{
    SATVHeaderView *_titleView;	// 8 = 0x8
    UILabel *_promptLabel;	// 16 = 0x10
    SATVIPEntryView *_ipEntryView;	// 24 = 0x18
    NSString *_prompt;	// 32 = 0x20
    id <SATVIPEntryViewControllerDelegate> _delegate;	// 40 = 0x28
}

@property(nonatomic) __weak id <SATVIPEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;	// IMP=0x0000000100024e0c
- (void)_didSelectMenu;	// IMP=0x0000000100024dc4
- (id)_ipEntryView;	// IMP=0x0000000100024d4c
- (void)ipEntryViewDidFinishEditing:(id)arg1;	// IMP=0x0000000100024ca0
@property(copy, nonatomic) NSString *ipAddress;
- (void)setTitle:(id)arg1;	// IMP=0x0000000100024af0
- (id)preferredFocusEnvironments;	// IMP=0x0000000100024a1c
- (_Bool)becomeFirstResponder;	// IMP=0x0000000100024a04
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100024814
- (void)loadView;	// IMP=0x0000000100024374

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

