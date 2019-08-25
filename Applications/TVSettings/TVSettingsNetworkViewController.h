//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class NSFormatter, TSKSettingItem;

@interface TVSettingsNetworkViewController : TSKViewController
{
    TSKSettingItem *_wifiSignalStrengthItem;	// 8 = 0x8
    TSKSettingItem *_secureWiFiItem;	// 16 = 0x10
    NSFormatter *_emptyValueFormatter;	// 24 = 0x18
    NSFormatter *_dnsValueFormatter;	// 32 = 0x20
}

@property(retain, nonatomic) NSFormatter *dnsValueFormatter; // @synthesize dnsValueFormatter=_dnsValueFormatter;
@property(retain, nonatomic) NSFormatter *emptyValueFormatter; // @synthesize emptyValueFormatter=_emptyValueFormatter;
@property(retain, nonatomic) TSKSettingItem *secureWiFiItem; // @synthesize secureWiFiItem=_secureWiFiItem;
@property(retain, nonatomic) TSKSettingItem *wifiSignalStrengthItem; // @synthesize wifiSignalStrengthItem=_wifiSignalStrengthItem;
- (void).cxx_destruct;	// IMP=0x0000000100039e34
- (void)_handleToggleHiddenRecognizer:(id)arg1;	// IMP=0x0000000100039d6c
- (void)_updateWiFiItem:(id)arg1 value:(id)arg2;	// IMP=0x0000000100039b98
- (void)_updateEthernetItem:(id)arg1 value:(id)arg2;	// IMP=0x00000001000399a0
- (void)networkUpdated:(id)arg1;	// IMP=0x0000000100039758
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100039550
- (void)loadView;	// IMP=0x000000010003948c
- (id)loadSettingGroups;	// IMP=0x00000001000377f8
- (void)viewDidLoad;	// IMP=0x0000000100037690
- (void)dealloc;	// IMP=0x0000000100037618
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100037524

@end

