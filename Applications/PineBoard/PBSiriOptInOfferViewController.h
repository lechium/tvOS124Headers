//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString, OBPrivacyFlow, OBPrivacySplashController, PBFeatureInfoViewController, UIView;

@interface PBSiriOptInOfferViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    _Bool _configuredForDictationOnly;	// 8 = 0x8
    _Bool _termsVisible;	// 9 = 0x9
    CDUnknownBlockType _dismissalCompletion;	// 16 = 0x10
    UIView *_dialogContainerView;	// 24 = 0x18
    PBFeatureInfoViewController *_featureInfoViewController;	// 32 = 0x20
    OBPrivacySplashController *_termsViewController;	// 40 = 0x28
    OBPrivacyFlow *_privacyFlow;	// 48 = 0x30
}

@property(readonly, nonatomic) OBPrivacyFlow *privacyFlow; // @synthesize privacyFlow=_privacyFlow;
@property(readonly, nonatomic) OBPrivacySplashController *termsViewController; // @synthesize termsViewController=_termsViewController;
@property(readonly, nonatomic) PBFeatureInfoViewController *featureInfoViewController; // @synthesize featureInfoViewController=_featureInfoViewController;
@property(readonly, nonatomic) UIView *dialogContainerView; // @synthesize dialogContainerView=_dialogContainerView;
@property(nonatomic) _Bool termsVisible; // @synthesize termsVisible=_termsVisible;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(nonatomic, getter=isConfiguredForDictationOnly) _Bool configuredForDictationOnly; // @synthesize configuredForDictationOnly=_configuredForDictationOnly;
- (void).cxx_destruct;	// IMP=0x00000001000a7114
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000001000a6dd0
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000001000a6d9c
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000001000a6d68
- (void)_readAboutText:(id)arg1;	// IMP=0x00000001000a6d48
- (void)_dismissViewControllerWithValue:(_Bool)arg1;	// IMP=0x00000001000a6c34
- (void)_optOut:(id)arg1;	// IMP=0x00000001000a6c14
- (void)_optIn:(id)arg1;	// IMP=0x00000001000a6b50
- (void)_handleHomeButton:(id)arg1;	// IMP=0x00000001000a6a8c
- (void)_handleMenuButton:(id)arg1;	// IMP=0x00000001000a69a8
- (id)preferredFocusEnvironments;	// IMP=0x00000001000a693c
- (void)viewDidLoad;	// IMP=0x00000001000a6234
- (void)dealloc;	// IMP=0x00000001000a61ac
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000a6110

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
