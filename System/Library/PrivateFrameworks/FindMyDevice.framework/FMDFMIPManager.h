/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMDFMIPManager : NSObject
+(id)sharedInstance;
-(BOOL)_isRunningAsMobileUser;
-(unsigned long long)_managedLostModeType;
-(unsigned long long)_needsAckLostModeType;
-(BOOL)_checkLostModeInSharedContainer;
-(id)getManagedLostModeFileURL;
-(id)getNeedsLocateAckLostModeFileURL;
-(id)newErrorForCode:(int)arg1 message:(id)arg2 ;
-(id)lostModeInfo;
-(void)_stopAlarm;
-(void)_updateManagedLostModeWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateNeedsLocateAckLostModeWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)playSoundWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fmipAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_postWipePrefPath;
-(void)signatureHeadersWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startPlayingSoundForAccessory:(id)arg1 duration:(double)arg2 rampUpDuration:(double)arg3 channels:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)waitForRoutableAccessory:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)soundStoppedForAccessoryIdentifier:(id)arg1 ;
-(void)clearData:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAccessoriesWithCompletion:(/*^block*/id)arg1 ;
-(void)stopSoundMessageWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isLostModeActive;
-(id)enableLostModeWithInfo:(id)arg1 ;
-(void)disableLostMode;
-(void)enableManagedLostModeWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableManagedLostModeWithLocatedMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDidAckManagedLostModeLocateWithCompletion:(/*^block*/id)arg1 ;
-(void)deviceActivationDidSucceed;
-(BOOL)lockdownShouldDisableDeviceRestore;
-(BOOL)lockdownShouldDisableDevicePairing;
-(id)fmipAccount;
-(void)didChangeFMIPAccountInfo:(id)arg1 ;
-(id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 ;
-(void)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)markAsMissingSupportedForPairedDeviceWithUDID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)markPairedDeviceWithUDID:(id)arg1 asMissingUsingToken:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)isActivationLockAllowedWithCompletion:(/*^block*/id)arg1 ;
-(void)isActivationLockEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)isActivationLockedWithCompletion:(/*^block*/id)arg1 ;
-(void)enableActivationLockWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)needsLostModeExitAuth;
-(void)didReceiveLostModeExitAuthToken:(id)arg1 ;
-(void)initiateLostModeExitAuthWithCompletion:(/*^block*/id)arg1 ;
-(void)initiateLostModeExitAuthForIDSDeviceID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)lowBatteryLocateEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)setLowBatteryLocateEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)userNotifiedOfActivationLockForPairedDevices:(id)arg1 ;
-(id)pathsToPreserveAcrossWipe;
-(void)stopPlayingSoundForAccessory:(id)arg1 rampDownDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_forceFMWUpgradeAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)playSoundWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addNotificationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDailyLocateReportEnabled:(BOOL)arg1 ;
-(void)showDailyLocateReport;
-(void)activationLockVersionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_quickFetchFMIPEnabledstate;
-(void)disableBiometricIDForLostModeWithCompletion:(/*^block*/id)arg1 ;
-(void)fmipStateWithCompletion:(/*^block*/id)arg1 ;
-(id)enableFMIPInContext:(unsigned long long)arg1 ;
-(void)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)userNotifiedOfActivationLockForAllPairedDevices;
-(BOOL)lostModeIsActive;
-(BOOL)isManagedLostModeActive;
@end

