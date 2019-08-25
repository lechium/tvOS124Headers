//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "TVSettingsWholeHomeAudioHomePickerViewControllerDelegate.h"
#import "TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate.h"
#import "TVSettingsWholeHomeAudioSetupViewControllerDelegate.h"

@class TSKSettingItem;

@interface TVSettingsAirPlayViewController : TSKViewController <TVSettingsWholeHomeAudioSetupViewControllerDelegate, TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate, TVSettingsWholeHomeAudioHomePickerViewControllerDelegate>
{
    TSKSettingItem *_nameItem;	// 8 = 0x8
}

@property(readonly, nonatomic) TSKSettingItem *nameItem; // @synthesize nameItem=_nameItem;
- (void).cxx_destruct;	// IMP=0x00000001000bbb60
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00000001000bbaa0
- (void)homePickerViewController:(id)arg1 didSelectHome:(id)arg2;	// IMP=0x00000001000bba2c
- (void)roomPickerViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000bb9d4
- (void)wholeHomeAudioSetupViewControllerDidTransitionToUnconfiguredWithLocalAccessoryState:(id)arg1;	// IMP=0x00000001000bb770
- (void)wholeHomeAudioSetupViewControllerDidTransitionToConfiguredState:(id)arg1;	// IMP=0x00000001000bb718
- (void)_presentSetAccessoryNameFailedViewControllerWithError:(id)arg1;	// IMP=0x00000001000bb590
- (void)_setDeviceName:(id)arg1;	// IMP=0x00000001000bb158
- (id)_makeDeviceNameChildViewControllerWithItem:(id)arg1;	// IMP=0x00000001000bafb0
- (id)__makeRoomPickerViewControllerWithHome:(id)arg1;	// IMP=0x00000001000baf30
- (id)__makeHomePickerViewController;	// IMP=0x00000001000baedc
- (id)_makeRoomPickerViewController;	// IMP=0x00000001000babc8
- (id)_homeNoiCloudAccountAlertViewController;	// IMP=0x00000001000baa0c
- (id)_homeNeedsUserInterentionAlertViewController;	// IMP=0x00000001000ba850
- (id)_configureWHAKeyTransferViewController;	// IMP=0x00000001000ba7fc
- (id)_crdViewController;	// IMP=0x00000001000ba6a4
- (id)_overscanAdjustmentFormatter;	// IMP=0x00000001000ba418
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000ba100
- (id)loadSettingGroups;	// IMP=0x00000001000b8444
- (void)dealloc;	// IMP=0x00000001000b834c
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000b8230

@end
