//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TVSettingsOSUpdateConfiguration;

@interface TVSettingsOSUpdateConfigurationViewController : TSKViewController
{
    TVSettingsOSUpdateConfiguration *_currentConfiguration;	// 8 = 0x8
    unsigned long long _configurationCheckState;	// 16 = 0x10
    unsigned long long _configurationLoadingState;	// 24 = 0x18
}

@property(nonatomic) unsigned long long configurationLoadingState; // @synthesize configurationLoadingState=_configurationLoadingState;
@property(nonatomic) unsigned long long configurationCheckState; // @synthesize configurationCheckState=_configurationCheckState;
@property(retain, nonatomic) TVSettingsOSUpdateConfiguration *currentConfiguration; // @synthesize currentConfiguration=_currentConfiguration;
- (void).cxx_destruct;	// IMP=0x000000010007b9b4
- (void)_warnAboutWrongURLs;	// IMP=0x000000010007b658
- (void)_warnAboutMissingCarryProfile;	// IMP=0x000000010007b4b0
- (void)_warnAboutMissingVPNProfile;	// IMP=0x000000010007b308
- (void)_warnAboutMissingAppleConnectCredentials;	// IMP=0x000000010007b160
- (void)_configurationDidChange:(id)arg1;	// IMP=0x000000010007adf0
- (void)_configurationWillChange:(id)arg1;	// IMP=0x000000010007ada4
- (void)_clearTextSettingItem:(id)arg1;	// IMP=0x000000010007ad88
- (void)_checkConfiguration:(id)arg1;	// IMP=0x000000010007a898
- (void)_updateCheckConfigurationItem:(id)arg1;	// IMP=0x000000010007a514
- (void)_updateConfigurationItem:(id)arg1 withValue:(id)arg2;	// IMP=0x000000010007a3e4
- (id)loadSettingGroups;	// IMP=0x0000000100078e50
- (void)viewDidLoad;	// IMP=0x0000000100078c4c
- (void)dealloc;	// IMP=0x0000000100078bd4

@end

