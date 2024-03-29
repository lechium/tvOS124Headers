//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, TVSUIDigitEntryViewController, UIVisualEffectView;

@interface TVAirPlayPINViewController : UIViewController
{
    _Bool _dismissed;	// 8 = 0x8
    NSString *_clientName;	// 16 = 0x10
    NSString *_pinCode;	// 24 = 0x18
    CDUnknownBlockType _dismissHandler;	// 32 = 0x20
    UIVisualEffectView *_backgroundView;	// 40 = 0x28
    TVSUIDigitEntryViewController *_digitViewController;	// 48 = 0x30
}

@property(retain, nonatomic) TVSUIDigitEntryViewController *digitViewController; // @synthesize digitViewController=_digitViewController;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(copy, nonatomic) NSString *pinCode; // @synthesize pinCode=_pinCode;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
- (void).cxx_destruct;	// IMP=0x0000000100013ec8
- (void)_menuPressed;	// IMP=0x0000000100013e0c
- (void)setTitle:(id)arg1;	// IMP=0x0000000100013c14
- (void)viewDidLoad;	// IMP=0x000000010001366c

@end

