//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVConsentStep.h"
#import "SATVConsentViewControllerDataSource.h"
#import "SATVConsentViewControllerDelegate.h"

@class NSString, OBPrivacyLinkController;

@interface SATVLocationServicesViewController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep>
{
    CDUnknownBlockType consentHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (id)stableKey;	// IMP=0x0000000100021aa0
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType consentHandler; // @synthesize consentHandler;
- (void).cxx_destruct;	// IMP=0x00000001000222a0
- (void)_enableLocationServices:(_Bool)arg1;	// IMP=0x0000000100022128
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x00000001000220a4
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x0000000100022020
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x0000000100022008
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100021f80
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100021ef8
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100021e70
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100021de8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100021d54
- (void)reset;	// IMP=0x0000000100021cb0
@property(readonly, nonatomic) _Bool isConfigured;
- (void)autoAdvance;	// IMP=0x0000000100021c44
- (void)viewDidLoad;	// IMP=0x0000000100021b50
- (id)init;	// IMP=0x0000000100021acc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end
