//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVSUITextEntryControllerDelegate.h"
#import "TVWiFiChooseIdentityTableDelegate.h"
#import "TVWiFiModeDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "WFOtherNetworkProvider.h"

@class NSNumber, NSString, SATVWiFiFieldCollector, TVSStateMachine, UINavigationController;

@interface SATVWiFiCredentialsViewController : UIViewController <UINavigationControllerDelegate, TVWiFiModeDelegate, TVWiFiChooseIdentityTableDelegate, TVSUITextEntryControllerDelegate, WFOtherNetworkProvider>
{
    _Bool _joining;	// 8 = 0x8
    NSString *_activityString;	// 16 = 0x10
    id <WFCredentialsProviderContext> _context;	// 24 = 0x18
    NSNumber *_selectedMode;	// 32 = 0x20
    SATVWiFiFieldCollector *_fieldCollector;	// 40 = 0x28
    TVSStateMachine *_stateMachine;	// 48 = 0x30
    UINavigationController *_childNavigationController;	// 56 = 0x38
    struct __SecIdentity *_TLSIdentity;	// 64 = 0x40
    NSString *_username;	// 72 = 0x48
    NSString *_password;	// 80 = 0x50
    NSString *_SSID;	// 88 = 0x58
}

@property(copy, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) struct __SecIdentity *TLSIdentity; // @synthesize TLSIdentity=_TLSIdentity;
@property(retain, nonatomic) UINavigationController *childNavigationController; // @synthesize childNavigationController=_childNavigationController;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) SATVWiFiFieldCollector *fieldCollector; // @synthesize fieldCollector=_fieldCollector;
@property(copy, nonatomic) NSNumber *selectedMode; // @synthesize selectedMode=_selectedMode;
@property(readonly, nonatomic) id <WFCredentialsProviderContext> context; // @synthesize context=_context;
@property(nonatomic) NSString *activityString; // @synthesize activityString=_activityString;
@property(nonatomic) _Bool joining; // @synthesize joining=_joining;
- (void).cxx_destruct;	// IMP=0x000000010001e9a0
- (void)textEntryControllerDidFinish:(id)arg1;	// IMP=0x000000010001e7e4
- (void)tableView:(id)arg1 didChooseIdentity:(const void *)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010001e6d8
- (void)modeViewController:(id)arg1 didSelectMode:(long long)arg2;	// IMP=0x000000010001e60c
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010001e574
- (id)_messageStringAttributes;	// IMP=0x000000010001e470
- (id)_titleStringAttributes;	// IMP=0x000000010001e280
- (_Bool)_autoCollectField:(id)arg1;	// IMP=0x000000010001e0d4
- (_Bool)_shouldGatherCredentials;	// IMP=0x000000010001e034
- (id)_chooseIdentityViewControllerForField:(id)arg1;	// IMP=0x000000010001c9a8
- (id)_modeViewControllerForField:(id)arg1;	// IMP=0x000000010001c840
- (id)_textEntryViewControllerForField:(id)arg1;	// IMP=0x000000010001c450
- (id)_viewControllerForField:(id)arg1;	// IMP=0x000000010001c050
- (id)_newSpinnerViewController;	// IMP=0x000000010001bf30
- (id)_childNavigationController;	// IMP=0x000000010001be8c
- (void)_textFieldTextDidChange:(id)arg1;	// IMP=0x000000010001bce4
- (void)_didPressMenu:(id)arg1;	// IMP=0x000000010001bc9c
- (void)_didPressContinue:(id)arg1;	// IMP=0x000000010001bb9c
- (void)viewDidLoad;	// IMP=0x000000010001ba30
- (id)initWithContext:(id)arg1;	// IMP=0x000000010001b7e4

// Remaining properties
@property(readonly, nonatomic) id WAPIIdentity;
@property(readonly, nonatomic) id WAPIRootCertificate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long securityMode;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsModalPresentation;

@end

