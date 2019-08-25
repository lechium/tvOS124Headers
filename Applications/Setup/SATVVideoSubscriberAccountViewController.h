//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVActionStep.h"
#import "SATVBundleHosting.h"

@class NSString, UIViewController<SATVActionStep><SATVBundle>;

@interface SATVVideoSubscriberAccountViewController : SATVStepViewController <SATVBundleHosting, SATVActionStep>
{
    UIViewController<SATVActionStep><SATVBundle> *_bundleViewController;	// 8 = 0x8
}

+ (_Bool)isSupportedForUpgrade;	// IMP=0x0000000100044b88
+ (_Bool)isSupported;	// IMP=0x0000000100044b64
+ (Class)principalClass;	// IMP=0x0000000100044ab4
+ (id)_principalClassInfoPlistKey;	// IMP=0x0000000100044a88
+ (id)_principalBundle;	// IMP=0x00000001000449ac
+ (id)stableKey;	// IMP=0x0000000100044980
@property(retain, nonatomic) UIViewController<SATVActionStep><SATVBundle> *bundleViewController; // @synthesize bundleViewController=_bundleViewController;
- (void).cxx_destruct;	// IMP=0x0000000100045318
- (void)viewDidLoad;	// IMP=0x00000001000451d0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100045138
- (void)hideAccompanyingAnimation;	// IMP=0x00000001000450d4
- (void)beginAccompanyingAnimation;	// IMP=0x0000000100045070
- (void)deviceDidActivate:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044f94
@property(readonly, nonatomic) _Bool isConfigured;
- (void)reset;	// IMP=0x0000000100044f08
- (void)autoAdvance;	// IMP=0x0000000100044ec8
@property(copy, nonatomic) CDUnknownBlockType completionHandler;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100044c58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

