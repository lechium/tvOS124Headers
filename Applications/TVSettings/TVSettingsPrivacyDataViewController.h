//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TVSettingsDiagnosticLogsFacade;

@interface TVSettingsPrivacyDataViewController : TSKViewController
{
    TVSettingsDiagnosticLogsFacade *_logsFacade;	// 8 = 0x8
}

@property(retain, nonatomic) TVSettingsDiagnosticLogsFacade *logsFacade; // @synthesize logsFacade=_logsFacade;
- (void).cxx_destruct;	// IMP=0x000000010000a6b4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010000a5d8
- (id)loadSettingGroups;	// IMP=0x000000010000a148
- (void)dealloc;	// IMP=0x000000010000a0dc
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010000a034

@end
