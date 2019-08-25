//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVSUIDigitEntryViewControllerDelegate.h"

@class NSString, TVSUIDigitEntryViewController;

@interface TVSettingsRestrictionsSetPasscodeViewController : UIViewController <TVSUIDigitEntryViewControllerDelegate>
{
    _Bool _verificationPhase;	// 8 = 0x8
    TVSUIDigitEntryViewController *_passcodeEntryViewController;	// 16 = 0x10
    NSString *_passcodeToConfirm;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool verificationPhase; // @synthesize verificationPhase=_verificationPhase;
@property(retain, nonatomic) NSString *passcodeToConfirm; // @synthesize passcodeToConfirm=_passcodeToConfirm;
@property(retain, nonatomic) TVSUIDigitEntryViewController *passcodeEntryViewController; // @synthesize passcodeEntryViewController=_passcodeEntryViewController;
- (void).cxx_destruct;	// IMP=0x00000001000d91d0
- (void)digitEntryViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000d8a70
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x00000001000d89fc
- (void)viewWillLayoutSubviews;	// IMP=0x00000001000d8904
- (void)viewDidLoad;	// IMP=0x00000001000d8830
- (id)preferredFocusEnvironments;	// IMP=0x00000001000d87dc
- (id)initWithTitle:(id)arg1 prompt:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d8518

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

