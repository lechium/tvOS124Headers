//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "TVSBluetoothManagerDelegate.h"
#import "TVSUIDigitEntryViewControllerDelegate.h"

@class NSString, TVSettingsBluetoothFacade, UIAlertController;

@interface TVSettingsBluetoothViewController : TSKViewController <TVSBluetoothManagerDelegate, TVSUIDigitEntryViewControllerDelegate>
{
    TVSettingsBluetoothFacade *_bluetoothFacade;	// 8 = 0x8
    _Bool _startedScanning;	// 16 = 0x10
    UIAlertController *_errorAlert;	// 24 = 0x18
}

@property(retain, nonatomic) UIAlertController *errorAlert; // @synthesize errorAlert=_errorAlert;
- (void).cxx_destruct;	// IMP=0x00000001000c930c
- (id)_devicePairingAction:(id)arg1;	// IMP=0x00000001000c91e8
- (void)_postAlertWithErrorCode:(long long)arg1 forDevice:(id)arg2;	// IMP=0x00000001000c89b8
- (void)_connectDevice:(id)arg1;	// IMP=0x00000001000c8868
- (void)deviceInfoDidUpdate:(id)arg1;	// IMP=0x00000001000c885c
- (void)bluetoothManager:(id)arg1 didCompleteDeviceDisconnection:(id)arg2 error:(id)arg3;	// IMP=0x00000001000c8760
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x00000001000c8664
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x00000001000c85f4
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x00000001000c85a0
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x00000001000c82c4
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x00000001000c8238
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000c80c0
- (id)loadSettingGroups;	// IMP=0x00000001000c7974
- (void)viewDidLoad;	// IMP=0x00000001000c7880
- (void)dealloc;	// IMP=0x00000001000c77e0
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000c76d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
