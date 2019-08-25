//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "PBSExternalControlSystemDelegate.h"

@class NSString, PBSExternalControlSystem, TVSettings3rdPartyRemotesFacade, TVSettingsBluetoothFacade, TVSettingsSelectIRConfigurationViewController;

@interface TVSettingsRemotesViewController : TSKViewController <PBSExternalControlSystemDelegate>
{
    _Bool _updatingPairedAppleRemoteState;	// 8 = 0x8
    _Bool _pairedWithAppleRemote;	// 9 = 0x9
    TVSettingsSelectIRConfigurationViewController *_selectIRConfigurationViewController;	// 16 = 0x10
    PBSExternalControlSystem *_externalControlSystem;	// 24 = 0x18
    TVSettingsBluetoothFacade *_bluetoothFacade;	// 32 = 0x20
    TVSettings3rdPartyRemotesFacade *_remoteFacade;	// 40 = 0x28
}

+ (id)stringForCurrentVolumePolicyWithExternalControlSystem:(id)arg1;	// IMP=0x00000001000afd7c
@property(retain, nonatomic) TVSettings3rdPartyRemotesFacade *remoteFacade; // @synthesize remoteFacade=_remoteFacade;
@property(retain, nonatomic) TVSettingsBluetoothFacade *bluetoothFacade; // @synthesize bluetoothFacade=_bluetoothFacade;
@property(retain, nonatomic) PBSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_externalControlSystem;
@property(nonatomic, getter=isPairedWithAppleRemote) _Bool pairedWithAppleRemote; // @synthesize pairedWithAppleRemote=_pairedWithAppleRemote;
@property(nonatomic, getter=isUpdatingPairedAppleRemoteState) _Bool updatingPairedAppleRemoteState; // @synthesize updatingPairedAppleRemoteState=_updatingPairedAppleRemoteState;
@property(nonatomic) __weak TVSettingsSelectIRConfigurationViewController *selectIRConfigurationViewController; // @synthesize selectIRConfigurationViewController=_selectIRConfigurationViewController;
- (void).cxx_destruct;	// IMP=0x00000001000b5c08
- (void)_remoteFacadeConfigurationChanged;	// IMP=0x00000001000b5b1c
- (void)_externalControlSystemConfigurationChanged;	// IMP=0x00000001000b5b10
- (void)_updateAppleRemotePairedStateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b59c4
- (void)_fetchAppleRemotePairedState;	// IMP=0x00000001000b5940
- (void)_showLearnedRemoteFinishedAlertWithName:(id)arg1;	// IMP=0x00000001000b566c
- (void)_setUpPlaybackButtonsForRemoteWithUUID:(id)arg1;	// IMP=0x00000001000b5320
- (void)_showLearnedRemoteOptionsAlertForDevice:(id)arg1 withName:(id)arg2;	// IMP=0x00000001000b4f38
- (void)_learnNewRemote;	// IMP=0x00000001000b4ce8
- (void)_showSystemControlUnavailableDialog;	// IMP=0x00000001000b4aec
- (_Bool)_canProgramBluetoothRemote;	// IMP=0x00000001000b4ad8
- (_Bool)_showLearnedRemotes;	// IMP=0x00000001000b4a2c
- (id)_systemControlSettingsGroups;	// IMP=0x00000001000b3e20
- (id)_remoteSettingsGroups;	// IMP=0x00000001000b303c
- (id)_appleRemoteSettingGroups;	// IMP=0x00000001000b2438
- (void)externalControlSystemDidUpdatePolicy:(id)arg1;	// IMP=0x00000001000b238c
- (void)externalControlSystem:(id)arg1 didReceiveDeviceEvent:(long long)arg2;	// IMP=0x00000001000b22e0
- (void)externalControlSystem:(id)arg1 didChangeReadyStatus:(_Bool)arg2;	// IMP=0x00000001000b2234
- (void)_activateKonamiCodeForUnpair:(id)arg1;	// IMP=0x00000001000b21e0
- (void)_showSelectedLearnedRemoteOptionsAlertForDevice:(id)arg1 withName:(id)arg2;	// IMP=0x00000001000b10d0
- (void)_didSelectLearnedRemoteItem:(id)arg1;	// IMP=0x00000001000b0f14
- (void)_didSelectLearnNewRemoteItem:(id)arg1;	// IMP=0x00000001000b0b8c
- (void)_didSelectPairAppleRemoteItem:(id)arg1;	// IMP=0x00000001000b0a88
- (void)_didSelectVolumeControlItem:(id)arg1;	// IMP=0x00000001000b09b8
- (void)_togglePowerItem:(id)arg1;	// IMP=0x00000001000b0918
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000b0648
- (id)loadSettingGroups;	// IMP=0x00000001000b055c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000b050c
- (void)viewDidLoad;	// IMP=0x00000001000b0448
- (void)dealloc;	// IMP=0x00000001000b03d0
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000b0158

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

