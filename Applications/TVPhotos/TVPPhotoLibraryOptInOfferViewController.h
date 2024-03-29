//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIButton, UILabel;

@interface TVPPhotoLibraryOptInOfferViewController : UIViewController
{
    CDUnknownBlockType _optInBlock;	// 8 = 0x8
    CDUnknownBlockType _optOutBlock;	// 16 = 0x10
    UIButton *_optInButton;	// 24 = 0x18
    UILabel *_footerLabel;	// 32 = 0x20
}

@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *optInButton; // @synthesize optInButton=_optInButton;
@property(copy, nonatomic) CDUnknownBlockType optOutBlock; // @synthesize optOutBlock=_optOutBlock;
@property(copy, nonatomic) CDUnknownBlockType optInBlock; // @synthesize optInBlock=_optInBlock;
- (void).cxx_destruct;	// IMP=0x000000010007d52c
- (void)_optOut:(id)arg1;	// IMP=0x000000010007d470
- (void)_optIn:(id)arg1;	// IMP=0x000000010007d434
- (id)_footerColor;	// IMP=0x000000010007d414
- (id)_descriptionColor;	// IMP=0x000000010007d3f4
- (id)_titleColor;	// IMP=0x000000010007d3d4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010007d2c4
- (void)viewDidLoad;	// IMP=0x000000010007bd04

@end

