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

@interface SATVSiriController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep>
{
    CDUnknownBlockType consentHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (_Bool)isSupported;	// IMP=0x0000000100050030
+ (id)stableKey;	// IMP=0x000000010004fd70
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType consentHandler; // @synthesize consentHandler;
- (void).cxx_destruct;	// IMP=0x0000000100050bac
- (void)_storeFrontDidChange:(id)arg1;	// IMP=0x0000000100050ab0
- (void)_enableAssistantOnStoreFrontChange;	// IMP=0x00000001000509bc
- (void)_setDictationEnabled:(_Bool)arg1;	// IMP=0x000000010005096c
- (void)_setAssistantEnabled:(_Bool)arg1;	// IMP=0x0000000100050898
- (void)_enableSiriAndDictation:(_Bool)arg1;	// IMP=0x0000000100050624
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x00000001000505a0
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010005051c
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x0000000100050504
- (id)footnoteTextForConsentViewController:(id)arg1;	// IMP=0x000000010005047c
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x00000001000503f4
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010005036c
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x00000001000502e4
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010005025c
- (void)reset;	// IMP=0x0000000100050140
@property(readonly, nonatomic) _Bool isConfigured;
- (void)autoAdvance;	// IMP=0x0000000100050020
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004ff8c
- (void)viewDidLoad;	// IMP=0x000000010004fe98
- (void)dealloc;	// IMP=0x000000010004fe20
- (id)init;	// IMP=0x000000010004fd9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

