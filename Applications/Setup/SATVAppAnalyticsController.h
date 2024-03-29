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

@interface SATVAppAnalyticsController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep>
{
    CDUnknownBlockType consentHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (_Bool)isSupported;	// IMP=0x000000010000b8a4
+ (id)stableKey;	// IMP=0x000000010000b878
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType consentHandler; // @synthesize consentHandler;
- (void).cxx_destruct;	// IMP=0x000000010000c0f4
- (void)_enableAppAnalytics:(_Bool)arg1;	// IMP=0x000000010000bfa8
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x000000010000bf24
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010000bea0
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x000000010000be88
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010000be00
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010000bd78
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010000bcf0
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010000bc68
- (void)reset;	// IMP=0x000000010000bbd0
@property(readonly, nonatomic) _Bool isConfigured;
- (void)autoAdvance;	// IMP=0x000000010000bb64
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000bad0
- (void)viewDidLoad;	// IMP=0x000000010000b9dc
- (id)init;	// IMP=0x000000010000b958

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

