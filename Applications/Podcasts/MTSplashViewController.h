//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIActivityIndicatorView, UILabel;

@interface MTSplashViewController : UIViewController
{
    _Bool _visible;	// 8 = 0x8
    UIViewController *_vc;	// 16 = 0x10
    UIActivityIndicatorView *_spinner;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;	// IMP=0x0000000100172c14
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100172748
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001001726f0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010017204c
- (void)viewDidLoad;	// IMP=0x0000000100171d9c

@end
