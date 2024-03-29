/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDCKSyncStateDelegate.h>

@class IMDCKSyncState, IMLockdownManager, IDSServerBag, FTDeviceSupport, IMDefaults, NSString;

@interface IMDCKUtilities : NSObject <IMDCKSyncStateDelegate> {

	BOOL _didKeyRollPendingCheck;
	BOOL _useDeprecatedApi;
	IMDCKSyncState* _syncState;
	IMLockdownManager* _lockdownManager;
	IDSServerBag* _serverBag;
	FTDeviceSupport* _deviceSupport;
	IMDefaults* _imDefaults;

}

@property (assign,nonatomic) BOOL didKeyRollPendingCheck;                                //@synthesize didKeyRollPendingCheck=_didKeyRollPendingCheck - In the implementation block
@property (nonatomic,retain) IMLockdownManager * lockdownManager;                        //@synthesize lockdownManager=_lockdownManager - In the implementation block
@property (nonatomic,retain) IDSServerBag * serverBag;                                   //@synthesize serverBag=_serverBag - In the implementation block
@property (nonatomic,retain) FTDeviceSupport * deviceSupport;                            //@synthesize deviceSupport=_deviceSupport - In the implementation block
@property (nonatomic,retain) IMDefaults * imDefaults;                                    //@synthesize imDefaults=_imDefaults - In the implementation block
@property (nonatomic,readonly) BOOL isInCloudKitDemoMode; 
@property (assign,nonatomic) BOOL useDeprecatedApi;                                      //@synthesize useDeprecatedApi=_useDeprecatedApi - In the implementation block
@property (nonatomic,readonly) IMDCKSyncState * syncState;                               //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingPaused; 
@property (getter=isKeyRollPending,nonatomic,readonly) BOOL keyRollPending; 
@property (getter=isDeviceCharging,nonatomic,readonly) BOOL deviceCharging; 
@property (getter=isDeviceOnWifi,nonatomic,readonly) BOOL deviceOnWifi; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logHandle;
+(id)im_AKSecurityLevelKey;
+(id)sharedInstance;
-(IMDCKSyncState *)syncState;
-(id)_accountStore;
-(id)logHandle;
-(void)broadcastCloudKitState;
-(void)broadcastCloudKitStateAfterFetchingAccountStatus;
-(void)broadcastCloudKitStateAfterClearingErrors;
-(void)fetchSecurityLevelAndUpdateMiCSwitchEligibility;
-(BOOL)isSyncingPaused;
-(id)_authenticationController;
-(id)initWithServerBag:(id)arg1 lockDownmanager:(id)arg2 deviceSupport:(id)arg3 imDefaults:(id)arg4 ;
-(BOOL)cloudKitSyncingEnabled;
-(BOOL)didKeyRollPendingCheck;
-(void)setDidKeyRollPendingCheck:(BOOL)arg1 ;
-(BOOL)isKeyRollPending;
-(void)syncStateWillUpdate:(id)arg1 ;
-(void)fetchCloudKitAccountStatusAndCheckForAccountNeedsRepairWithCompletion:(/*^block*/id)arg1 ;
-(IMLockdownManager *)lockdownManager;
-(unsigned long long)messageDatabaseSize;
-(id)_truthDatabase;
-(long long)_mininimumServerBagClientValue;
-(BOOL)iCloudAccountMatchesiMessageAccount;
-(BOOL)_serverAllowsSync;
-(BOOL)_mocFeatureEnabled;
-(BOOL)_isInExitState;
-(IDSServerBag *)serverBag;
-(void)_resetKeepMessagesSettingandBroadcastToAllDevices;
-(void)evalToggleiCloudSettingsSwitch;
-(id)_getKeepMessagesValue;
-(BOOL)_shouldDisplayPopUpForResettingKeepMessages;
-(BOOL)_allowDestructiveMOCFeaturesBasedOnDSID;
-(BOOL)_serverAllowsCacheDelete;
-(BOOL)_serverAllowsRemovalFromBackUp;
-(void)fetchCloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)cacheDeleteEnabled;
-(id)_truthContainer;
-(BOOL)_checkEligibilityWithAccountInfo:(id)arg1 ;
-(BOOL)_accountInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_createAccountError:(id)arg1 ;
-(void)_checkEligibilityWithLoggedInAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSecurityLevelForAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_accountNeedsRepairOverride;
-(void)_setEligibleToToggleMiCSwitch:(BOOL)arg1 ;
-(BOOL)shouldRepairAccountWithDeviceAccountSecurityLevel:(unsigned long long)arg1 serverAccountStatus:(long long)arg2 ;
-(unsigned long long)_primaryiCloudAccountSecurityLevel;
-(BOOL)_checkIfEnabledByServerBagOrDefault:(id)arg1 ;
-(BOOL)_isLogDumpAllowed;
-(id)logCollectorAddress;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 reasonString:(id)arg5 ;
-(unsigned long long)_mocEnabledStateFromAccountStatus:(long long)arg1 ;
-(IMDefaults *)imDefaults;
-(BOOL)_isCKErrorPartialFailure:(id)arg1 ;
-(id)_errorsFromPartialError:(id)arg1 ;
-(BOOL)CKPartialError:(id)arg1 onlyHasErrorCodes:(id)arg2 ;
-(BOOL)errorIndicatesQuotaExceeded:(id)arg1 ;
-(BOOL)errorIndicatesDeviceConditionsDontAllowSync:(id)arg1 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 ;
-(id)_personIdFromAccount:(id)arg1 ;
-(void)_fetchPrimaryAccountWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isDeviceCharging;
-(BOOL)isDeviceOnWifi;
-(BOOL)_isSyncingPausedOverride;
-(BOOL)_deviceActive;
-(void)postSyncStateToCloudKit:(id)arg1 useManatee:(BOOL)arg2 legacyOnly:(BOOL)arg3 ;
-(id)exitManager;
-(BOOL)serverAllowsAnalyticDetailsSubmission;
-(BOOL)serverAllowsMetricSubmission;
-(id)syncFailureMetricString:(id)arg1 isRecoverable:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)serverAllowsAnalyticSubmission;
-(BOOL)isCKPartialError:(id)arg1 ;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 isInitialSync:(BOOL)arg4 requirePreviousPrompt:(BOOL)arg5 willSendBlock:(/*^block*/id)arg6 ;
-(id)ckStatisticCalculations;
-(id)metricForPCSReportManateeStatusWithReason:(id)arg1 ;
-(id)_accountManager;
-(id)_primaryiCloudAccountAltDSID;
-(void)setCloudKitSyncingEnabled:(BOOL)arg1 ;
-(FTDeviceSupport *)deviceSupport;
-(void)keyRollPendingStateDidChange;
-(BOOL)shouldUseDevContainer;
-(BOOL)shouldForceArchivedMessagesSync;
-(BOOL)shouldSyncToSRContainer;
-(long long)overrideNumberOfChatsToFetch;
-(long long)overrideNumberOfChatsToWrite;
-(void)isFirstSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)checkiCloudQuota:(/*^block*/id)arg1 ;
-(BOOL)_shouldiCloudSwitchBeEnabled;
-(BOOL)cloudKitSyncDownloadAssetsOnly;
-(BOOL)enableAttachmentMetricCollection;
-(BOOL)removeFromBackUpAllowed;
-(BOOL)accountIsVerifiedForMOCAndSafeForCacheDelete;
-(void)fetchLocalAccountSecurityLevel:(/*^block*/id)arg1 ;
-(BOOL)shouldPresentTTROnCloudKitError;
-(BOOL)shouldLogDumpOnCloudKitError;
-(BOOL)shouldCollectDailyLogDump;
-(BOOL)shouldCollectDailyLogDumpForRestoreFailures;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 ;
-(void)_askToTapToRadarWithString:(id)arg1 internalOnly:(BOOL)arg2 ;
-(id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2 ;
-(void)fetchMOCEnabledStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1 ;
-(BOOL)CKPartialError:(id)arg1 hasErrorCode:(id)arg2 ;
-(BOOL)CKPartialErrorOnlyHasQuotaExceededError:(id)arg1 ;
-(BOOL)isRecoverableCloudKitError:(id)arg1 withRetryInterval:(id*)arg2 ;
-(BOOL)acceptableErrorCodeWhileDeleting:(id)arg1 ;
-(id)extractRecordIDsDeletedFromCKPartialError:(id)arg1 ;
-(BOOL)errorIndicatesZoneNotCreated:(id)arg1 ;
-(BOOL)errorIndicatesUserDeletedZone:(id)arg1 ;
-(void)resetLastSyncDate;
-(BOOL)errorIndicatesChatZoneCreationFailed:(id)arg1 ;
-(void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;
-(void)_setiCloudSettingsSwitchEnabled:(BOOL)arg1 ;
-(void)fetchiCloudAccountPersonID:(/*^block*/id)arg1 ;
-(void)primaryAccountHasiCloudBackupEnabledWithCompletion:(/*^block*/id)arg1 ;
-(id)deviceConditions;
-(BOOL)deviceConditionsAllowPeriodicSync;
-(id)newfilteredArrayRemovingCKRecordDupes:(id)arg1 ;
-(id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1 ;
-(id)lastDeviceBackUpDate;
-(id)deviceActiveString;
-(BOOL)errorIndicatesIdentityWasLost:(id)arg1 ;
-(BOOL)errorIndicateDeviceDoesNotHaveKeysToSync:(id)arg1 ;
-(void)_showCKLogNotificationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldKickOffWriteForSyncType:(long long)arg1 ;
-(BOOL)isLocalCachedSaltPresent;
-(void)postSyncStateToCloudKit:(id)arg1 ;
-(void)postSyncStateToCloudKit:(id)arg1 useManatee:(BOOL)arg2 ;
-(void)postSyncStateToCloudKit:(id)arg1 legacyOnly:(BOOL)arg2 ;
-(void)reportZoneCreation:(id)arg1 ;
-(void)reportErrorForSyncType:(long long)arg1 syncStep:(id)arg2 isRecoverable:(BOOL)arg3 error:(id)arg4 ;
-(void)reportCompletionForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 onAttempt:(unsigned long long)arg3 wasSuccessful:(BOOL)arg4 ;
-(id)findRootCause:(id)arg1 ;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 ;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 requirePreviousPrompt:(BOOL)arg4 willSendBlock:(/*^block*/id)arg5 ;
-(void)logToPowerLogForLogDumpGUID:(id)arg1 logDumpCompleted:(BOOL)arg2 logDumpSucceeded:(BOOL)arg3 logDumpSendingCompleted:(BOOL)arg4 logDumpSendingSucceeded:(BOOL)arg5 reason:(id)arg6 ;
-(void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 didStartSync:(BOOL)arg3 didFinishSync:(BOOL)arg4 didSucceedSyncing:(BOOL)arg5 ;
-(void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 didCompleteChatSync:(BOOL)arg3 didSucceedSyncingChats:(BOOL)arg4 didCompleteMessageSync:(BOOL)arg5 didSucceedSyncingMessages:(BOOL)arg6 didCompleteAttachmentSync:(BOOL)arg7 didSucceedSyncingAttachments:(BOOL)arg8 syncAttemptCount:(unsigned long long)arg9 ;
-(void)noteAllSyncedItemsPriorToSync;
-(BOOL)logDumpIsNecessaryAfterSync;
-(void)submitPCSReportManateeStatuMetricWithPrefix:(id)arg1 andReason:(id)arg2 ;
-(void)fetchSecurityLevelAndUpdateMiCSwitchEligibilityIfNeededOnImagentLaunch;
-(void)enableMOCIfNeeded;
-(void)downgradingFromHSA2AndDisablingMOC;
-(void)eligibleForTruthZoneWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isInCloudKitDemoMode;
-(void)disableAllDevicesWithCompletion:(/*^block*/id)arg1 ;
-(id)accountDSID:(id)arg1 ;
-(id)accountWithDSID:(id)arg1 ;
-(void)setLockdownManager:(IMLockdownManager *)arg1 ;
-(void)setServerBag:(IDSServerBag *)arg1 ;
-(void)setDeviceSupport:(FTDeviceSupport *)arg1 ;
-(void)setImDefaults:(IMDefaults *)arg1 ;
-(BOOL)useDeprecatedApi;
-(void)setUseDeprecatedApi:(BOOL)arg1 ;
-(id)dsid;
-(id)_primaryiCloudAccount;
-(id)init;
@end

