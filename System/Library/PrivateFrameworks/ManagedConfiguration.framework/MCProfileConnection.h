/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionXPCProtocol.h>

@protocol MCInteractionDelegate, OS_dispatch_queue;
@class NSDictionary, NSData, NSObject, NSMutableArray, NSXPCConnection, NSString;

@interface MCProfileConnection : NSObject <MCProfileConnectionXPCProtocol> {

	CFBagRef _observers;
	id<MCInteractionDelegate> _interactionDelegate;
	NSDictionary* _preflightResponse;
	NSData* _originalProfileData;
	NSObject*<OS_dispatch_queue> _notificationSyncQueue;
	NSObject*<OS_dispatch_queue> _xpcConnectionSyncQueue;
	NSObject*<OS_dispatch_queue> _publicXPCConnectionSyncQueue;
	NSMutableArray* _notificationTokens;
	/*^block*/id userInputReplyBlock;
	/*^block*/id passcodeReplyBlock;
	/*^block*/id showWarningsReplyBlock;
	NSXPCConnection* _publicXPCConnection;
	NSXPCConnection* _xpcConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * publicXPCConnection;              //@synthesize publicXPCConnection=_publicXPCConnection - In the implementation block
+(id)profileInstallationErrorWithUnderlyingError:(id)arg1 ;
+(id)features;
+(id)sharedConnection;
-(id)allowedAppBundleIDsForBidirectionalDataMovementAfterApplyingFilterToBundleIDs:(id)arg1 localAppBundleID:(id)arg2 localAccountIsManaged:(BOOL)arg3 ;
-(id)userSettingsForSystem;
-(id)userSettingsForCurrentUser;
-(id)effectiveUserSettings;
-(BOOL)isValueSettingLockedDownByRestrictions:(id)arg1 ;
-(id)effectiveRestrictions;
-(void)_queueCreateAndResumeXPCConnection;
-(void)_queueCreateAndResumePublicXPCConnection;
-(void)waitForMigrationIncludingPostRestoreMigration:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)isProfileInstalledWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeOrphanedClientRestrictionsWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)migratePostMDMDataMigratorWithContext:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetAllSettingsToDefaultsIsUserInitiated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)validateAppBundleIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doMCICDidUpdateStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)doMCICDidRequestUserInput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)doMCICDidRequestCurrentPasscodeWithCompletion:(/*^block*/id)arg1 ;
-(void)_restrictionDidChange;
-(void)_passcodePolicyDidChange;
-(void)_passcodeDidChange;
-(void)_profileListDidChange;
-(void)_effectiveSettingsDidChange:(id)arg1 ;
-(void)_appWhitelistDidChange:(id)arg1 ;
-(NSXPCConnection *)publicXPCConnection;
-(void)_applyToObservers:(/*^block*/id)arg1 ;
-(void)_internalDefaultsDidChange;
-(void)_createAndResumeXPCConnection;
-(void)_createAndResumePublicXPCConnection;
-(void)checkIn;
-(void)checkInAsynchronously;
-(id)installedProfileWithIdentifier:(id)arg1 ;
-(int)userMode;
-(BOOL)isSafariPasswordAutoFillAllowedForURL:(id)arg1 ;
-(id)effectiveValuesForIntersectionSetting:(id)arg1 ;
-(void)setValues:(id)arg1 forIntersectionSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(id)activeClassroomRoles;
-(void)setActiveClassroomRoles:(id)arg1 ;
-(void)addActiveClassroomRole:(id)arg1 ;
-(void)removeActiveClassroomRole:(id)arg1 ;
-(BOOL)isClassroomStudentRoleEnabled;
-(void)setClassroomStudentRoleEnabled:(BOOL)arg1 ;
-(BOOL)isClassroomInstructorRoleEnabled;
-(void)setClassroomInstructorRoleEnabled:(BOOL)arg1 ;
-(BOOL)isClassroomUnpromptedScreenObservationForced;
-(BOOL)isClassroomAutomaticClassJoiningForced;
-(BOOL)isClassroomUnpromptedAppAndDeviceLockForced;
-(BOOL)isClassroomRequestPermissionToLeaveClassesForced;
-(id)installedSystemProfileDataWithIdentifier:(id)arg1 ;
-(id)installedUserProfileDataWithIdentifier:(id)arg1 ;
-(id)installedSystemProfileWithIdentifier:(id)arg1 ;
-(id)installedUserProfileWithIdentifier:(id)arg1 ;
-(BOOL)isInSingleAppMode;
-(id)effectiveWhitelistedAppsAndOptions;
-(id)restrictedAppBundleIDs;
-(id)restrictionEnforcedBlacklistedAppBundleIDs;
-(id)parentalControlsBlacklistedAppBundleIDs;
-(id)restrictionEnforcedWhitelistedAppBundleIDs;
-(id)parentalControlsWhitelistedAppBundleIDs;
-(BOOL)isSupervised;
-(BOOL)isURLManaged:(id)arg1 ;
-(BOOL)isPasscodeRequired;
-(id)userBookmarks;
-(void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2 ;
-(void)unstashUserBookmarksFromLabel:(id)arg1 ;
-(id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 ;
-(id)uninstalledProfileDataWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 ;
-(id)uninstalledProfileIdentifiersForDevice:(unsigned long long)arg1 ;
-(void)checkInIfNeeded;
-(id)_queueDataForAcceptance:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(BOOL)arg4 outError:(id*)arg5 ;
-(BOOL)isPasscodeRequiredByProfiles;
-(id)passcodeExpiryDateOutError:(id*)arg1 ;
-(id)valueRestrictionForFeature:(id)arg1 ;
-(id)objectRestrictionForFeature:(id)arg1 ;
-(id)profileFromProfileData:(id)arg1 outError:(id*)arg2 ;
-(id)queueProfileDataForAcceptance:(id)arg1 outError:(id*)arg2 ;
-(id)queueProfileDataForInstallation:(id)arg1 outError:(id*)arg2 ;
-(id)queueFileDataForProfileInstallation:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3 ;
-(BOOL)isPasscodeRequiredByPolicy;
-(id)passcodeExpiryDate;
-(BOOL)validatePasscode:(id)arg1 ;
-(BOOL)validatePasscode:(id)arg1 andUnlockContentProtectedDevice:(BOOL)arg2 ;
-(BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 outRestrictionChanged:(BOOL*)arg4 outEffectiveSettingsChanged:(BOOL*)arg5 outError:(id*)arg6 ;
-(void)setPasscodeWasSetInBackup:(BOOL)arg1 ;
-(int)restrictedBoolValueForFeature:(id)arg1 ;
-(id)objectForFeature:(id)arg1 ;
-(id)installedMDMProfileIdentifier;
-(id)installedProfileIdentifiersWithFilterFlags:(int)arg1 ;
-(id)installedConfigurationProfileInfoWithOutMDMProfileInfo:(id*)arg1 ;
-(void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 ;
-(void)removeProfileAsyncWithIdentifier:(id)arg1 installationType:(long long)arg2 ;
-(void)removeProfileAsyncWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeProtectedProfileAsyncWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_openSensitiveURLString:(id)arg1 unlock:(BOOL)arg2 ;
-(void)installProfileData:(id)arg1 options:(id)arg2 interactionDelegate:(id)arg3 ;
-(BOOL)isProfileUIInstallationEffectivelyAllowed;
-(id)cloudConfigurationDetails;
-(id)installedProfileIdentifiersInstalledBy:(id)arg1 ;
-(id)installedProfilesInstalledBy:(id)arg1 ;
-(void)allProfilesOutMDMProfileInfo:(id*)arg1 outConfigurationProfilesInfo:(id*)arg2 outUninstalledProfilesInfo:(id*)arg3 forDeviceType:(unsigned long long)arg4 ;
-(id)popProfileDataFromHeadOfInstallationQueue;
-(id)popProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 ;
-(id)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 ;
-(id)popProvisioningProfileDataFromHeadOfInstallationQueue;
-(id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3 ;
-(id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id*)arg4 ;
-(id)installProfileData:(id)arg1 outError:(id*)arg2 ;
-(void)removeProfileAsyncWithIdentifier:(id)arg1 ;
-(void)removeProtectedProfileAsyncWithIdentifier:(id)arg1 installationType:(long long)arg2 ;
-(id)updateProfileWithIdentifier:(id)arg1 outError:(id*)arg2 ;
-(id)acceptedMIMETypes;
-(BOOL)showProfileErrorUIWithProfileIdentifier:(id)arg1 outError:(id*)arg2 ;
-(BOOL)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id*)arg3 ;
-(BOOL)removeProvisioningProfileWithUUID:(id)arg1 outError:(id*)arg2 ;
-(void)_detectProfiledCrashes;
-(void)installProfileData:(id)arg1 interactionDelegate:(id)arg2 ;
-(void)updateProfileWithIdentifier:(id)arg1 interactionDelegate:(id)arg2 ;
-(BOOL)isProfileUIInstallationAllowed;
-(BOOL)mustInstallProfileNonInteractively:(id)arg1 ;
-(void)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned long long)arg2 ;
-(void)cancelUserInputResponses;
-(void)submitUserInputResponses:(id)arg1 ;
-(void)__checkForProfiledCrash;
-(void)respondToWarningsContinueInstallation:(BOOL)arg1 ;
-(void)respondToCurrentPasscodeRequestContinue:(BOOL)arg1 passcode:(id)arg2 ;
-(BOOL)isChaperoned;
-(id)chaperoneOrganization;
-(BOOL)applyRestrictionDictionary:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 localizedClientDescription:(id)arg5 localizedWarningMessage:(id)arg6 outRestrictionChanged:(BOOL*)arg7 outEffectiveSettingsChanged:(BOOL*)arg8 outError:(id*)arg9 ;
-(id)allClientUUIDsForClientType:(id)arg1 ;
-(id)clientRestrictionsForClientUUID:(id)arg1 ;
-(id)userInfoForClientUUID:(id)arg1 ;
-(void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 ;
-(int)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 complianceBlocking:(int)arg6 displayImmediateAlert:(BOOL)arg7 outRestrictionChanged:(BOOL*)arg8 outEffectiveSettingsChanged:(BOOL*)arg9 outError:(id*)arg10 ;
-(void)removeOrphanedClientRestrictions;
-(void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 ;
-(void)setParametersForSettingsByType:(id)arg1 toSystem:(BOOL)arg2 user:(BOOL)arg3 passcode:(id)arg4 ;
-(void)setParametersForSettingsByType:(id)arg1 toSystem:(BOOL)arg2 user:(BOOL)arg3 passcode:(id)arg4 waitUntilCompleted:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)setParametersForSettingsByType:(id)arg1 toSystem:(BOOL)arg2 user:(BOOL)arg3 passcode:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 passcode:(id)arg5 credentialSet:(id)arg6 waitUntilCompleted:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 passcode:(id)arg5 ;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 passcode:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 configurationUUID:(id)arg4 toSystem:(BOOL)arg5 user:(BOOL)arg6 passcode:(id)arg7 credentialSet:(id)arg8 waitUntilCompleted:(BOOL)arg9 completion:(/*^block*/id)arg10 ;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 toSystem:(BOOL)arg4 user:(BOOL)arg5 passcode:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)setAsk:(BOOL)arg1 forBoolSetting:(id)arg2 configurationUUID:(id)arg3 toSystem:(BOOL)arg4 user:(BOOL)arg5 passcode:(id)arg6 waitUntilCompleted:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(void)setValue:(id)arg1 forSetting:(id)arg2 passcode:(id)arg3 ;
-(void)setValue:(id)arg1 forSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 passcode:(id)arg5 ;
-(void)setValues:(id)arg1 forUnionSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(void)setParametersForSettingsByType:(id)arg1 toSystem:(BOOL)arg2 user:(BOOL)arg3 ;
-(int)defaultBoolValueForSetting:(id)arg1 ;
-(id)defaultValueForSetting:(id)arg1 ;
-(id)effectiveParametersForBoolSetting:(id)arg1 configurationUUID:(id)arg2 ;
-(id)effectiveParametersForUnionSetting:(id)arg1 ;
-(id)effectiveParametersForValueSetting:(id)arg1 ;
-(int)effectiveBoolValueForSetting:(id)arg1 outAsk:(BOOL*)arg2 ;
-(id)effectiveParametersForBoolSetting:(id)arg1 ;
-(id)effectiveParametersForIntersectionSetting:(id)arg1 ;
-(id)_settingsLockedDownByRestrictions:(id)arg1 ;
-(BOOL)_areProfilesRestrictingSettings:(id)arg1 outMDMName:(id*)arg2 outExchangeName:(id*)arg3 outExchangeCount:(long long*)arg4 outProfileName:(id*)arg5 outProfileCount:(long long*)arg6 ;
-(id)_localizedRestrictionSourceDescriptionFromMDMName:(id)arg1 exchangeName:(id)arg2 exchangeCount:(long long)arg3 profileName:(id)arg4 profileCount:(long long)arg5 ;
-(BOOL)isIntersectionSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isUnionSettingLockedDownByRestrictions:(id)arg1 ;
-(void)resetAllSettingsToDefaultsIsUserInitiated:(BOOL)arg1 waitUntilCompleted:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_localizedCertificateSourceDescriptionFromMDMName:(id)arg1 exchangeName:(id)arg2 exchangeCount:(long long)arg3 profileName:(id)arg4 profileCount:(long long)arg5 ;
-(void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setParameters:(id)arg1 forBoolSetting:(id)arg2 ;
-(void)setParameters:(id)arg1 forValueSetting:(id)arg2 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 passcode:(id)arg3 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 passcode:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 passcode:(id)arg4 ;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 configurationUUID:(id)arg4 toSystem:(BOOL)arg5 user:(BOOL)arg6 passcode:(id)arg7 ;
-(void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 configurationUUID:(id)arg4 toSystem:(BOOL)arg5 user:(BOOL)arg6 passcode:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)setAsk:(BOOL)arg1 forBoolSetting:(id)arg2 configurationUUID:(id)arg3 toSystem:(BOOL)arg4 user:(BOOL)arg5 passcode:(id)arg6 ;
-(void)setAsk:(BOOL)arg1 forBoolSetting:(id)arg2 configurationUUID:(id)arg3 toSystem:(BOOL)arg4 user:(BOOL)arg5 passcode:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)setValue:(id)arg1 forSetting:(id)arg2 ;
-(void)setValues:(id)arg1 forIntersectionSetting:(id)arg2 ;
-(void)setValues:(id)arg1 forUnionSetting:(id)arg2 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 passcode:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setValue:(id)arg1 forSetting:(id)arg2 toSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(id)parametersForBoolSetting:(id)arg1 ;
-(id)parametersForValueSetting:(id)arg1 ;
-(id)parametersForIntersectionSetting:(id)arg1 ;
-(id)parametersForUnionSetting:(id)arg1 ;
-(id)defaultValuesForIntersectionSetting:(id)arg1 ;
-(id)defaultValuesForUnionSetting:(id)arg1 ;
-(int)effectiveBoolValueForSetting:(id)arg1 configurationUUID:(id)arg2 outAsk:(BOOL*)arg3 ;
-(id)requestEffectiveBoolValueForSetting:(id)arg1 configurationUUID:(id)arg2 promptOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(int)requestEffectiveBoolValueForSetting:(id)arg1 configurationUUID:(id)arg2 promptOptions:(id)arg3 outError:(id*)arg4 ;
-(void)cancelRequestEffectiveBoolValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)localizedRestrictionSourceDescriptionForFeatures:(id)arg1 ;
-(BOOL)areSettingsLockedDownByRestrictions:(id)arg1 ;
-(void)removeValueSetting:(id)arg1 ;
-(void)resetAllSettingsToDefaults;
-(int)userBoolValueForSetting:(id)arg1 ;
-(id)userValueForSetting:(id)arg1 ;
-(id)userValueForIntersectionSetting:(id)arg1 ;
-(id)userValueForUnionSetting:(id)arg1 ;
-(id)lockedDownRootCertificatesWithOutLocalizedSourceDescription:(id*)arg1 ;
-(id)permittedAutoLockSeconds;
-(void)lockDeviceImmediately:(BOOL)arg1 ;
-(void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)arg1 ;
-(void)recomputeUserComplianceWarningSynchronously;
-(int)_getPasscodeComplianceWarningExpiryDate:(id)arg1 lastLockDate:(id)arg2 outLocalizedTitle:(id*)arg3 outLocalizedMessage:(id*)arg4 ;
-(int)newPasscodeEntryScreenType;
-(int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(BOOL)isPasscodeModificationAllowed;
-(BOOL)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3 ;
-(BOOL)isContentProtectionInEffect;
-(BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id*)arg1 ;
-(BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id*)arg1 ;
-(int)getPasscodeComplianceWarningLastLockDate:(id)arg1 outLocalizedTitle:(id*)arg2 outLocalizedMessage:(id*)arg3 ;
-(void)getPasscodeComplianceWarningLastLockDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)recomputeUserComplianceWarning;
-(void)notifyClientsToRecomputeCompliance;
-(id)localizedDescriptionOfDefaultNewPasscodeConstraints;
-(id)managedAppIDsWithFlags:(int)arg1 ;
-(void)validateAppBundleIDs:(id)arg1 waitUntilCompleted:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isUIAppInstallationAllowed;
-(BOOL)isMultitaskingAllowed;
-(void)setMultitaskingAllowed:(BOOL)arg1 ;
-(id)restrictionEnforcedNotificationSettingsForBundleID:(id)arg1 ;
-(id)restrictionEnforcedNotificationSettings;
-(id)deviceLockScreenFootnote;
-(id)_sharedDeviceConfiguration;
-(BOOL)isProvisionallyEnrolled;
-(id)fetchActivationLockBypassKeyWithError:(id*)arg1 ;
-(void)waitForMigrationIncludingPostRestoreMigration:(BOOL)arg1 waitUntilCompleted:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isFingerprintUnlockAllowed;
-(id)managedWiFiNetworkNames;
-(void)shutDown;
-(id)managedSystemConfigurationServiceIDs;
-(id)doNotBackupAppIDs;
-(id)doNotDocumentSyncAppIDs;
-(id)managedEmailDomains;
-(void)setManagedEmailDomains:(id)arg1 ;
-(id)managedMedia;
-(BOOL)isAuthenticationBeforeAutoFillRequired;
-(BOOL)isPasswordSharingAllowed;
-(id)trustedCodeSigningIdentities;
-(void)setTrustedCodeSigningIdentities:(id)arg1 ;
-(void)validateAppBundleIDs:(id)arg1 ;
-(void)processProfilesPostRestore;
-(void)processProfilesPostMigrate;
-(void)migratePostDataMigrator;
-(BOOL)isCloudKeychainSyncAllowed;
-(BOOL)isVehicleUIAllowed;
-(BOOL)isOTAPKIUpdatesAllowed;
-(void)setAutomaticAppUpdatesAllowed:(BOOL)arg1 ;
-(BOOL)isAppCellularDataModificationAllowed;
-(BOOL)isCellularPlanModificationAllowed;
-(BOOL)isWebTextDefineAllowed;
-(BOOL)isWebContentFilteringInEffect;
-(BOOL)isAdTrackingLimited;
-(BOOL)isLockScreenWiFiModificationAllowed;
-(BOOL)isAppInstallationAllowed;
-(BOOL)isAirDropAppInstallationAllowed;
-(BOOL)isOnDeviceAppInstallationAllowed;
-(BOOL)isAppRatingLimitInEffect;
-(BOOL)isAirPrintAllowed;
-(BOOL)isAirPrintiBeaconDiscoveryAllowed;
-(BOOL)isAirPrintCredentialsStorageAllowed;
-(BOOL)isAirPrintTrustedTLSRequirementEnforced;
-(BOOL)isiTunesAllowed;
-(BOOL)isLockScreenNotificationsViewAllowed;
-(BOOL)isLockScreenTodayViewAllowed;
-(BOOL)isLockScreenControlCenterAllowed;
-(BOOL)isControlCenterAllowedInApps;
-(BOOL)isActivationLockAllowed;
-(BOOL)isAssistantUserGeneratedContentAllowed;
-(BOOL)isFingerprintModificationAllowed;
-(BOOL)isAirPlayOutgoingRequestsPairingPasswordRequired;
-(BOOL)isAirPlayIncomingRequestsPairingPasswordRequired;
-(BOOL)isAirPlayIncomingRequestsAllowed;
-(BOOL)isGeotagSharingAllowed;
-(BOOL)isWiFiPasswordSharingAllowed;
-(BOOL)isActivityContinuationAllowed;
-(void)setActivityContinuationAllowed:(BOOL)arg1 ;
-(BOOL)isEnterpriseBookBackupAllowed;
-(BOOL)isEnterpriseBookMetadataSyncAllowed;
-(BOOL)hasDiagnosticSubmissionAllowedBeenSet;
-(BOOL)hasAppAnalyticsAllowedBeenSet;
-(BOOL)isHealthDataSubmissionAllowed;
-(BOOL)hasHealthDataSubmissionAllowedBeenSet;
-(void)setHealthDataSubmissionAllowed:(BOOL)arg1 ;
-(BOOL)isHealthDataSubmission2Allowed;
-(BOOL)hasHealthDataSubmission2BeenSet;
-(void)setHealthDataSubmission2Allowed:(BOOL)arg1 ;
-(BOOL)isWheelchairDataSubmissionAllowed;
-(BOOL)hasWheelchairDataSubmissionAllowedBeenSet;
-(void)setWheelchairDataSubmissionAllowed:(BOOL)arg1 ;
-(BOOL)isPodcastsAllowed;
-(void)setFindMyCarAllowed:(BOOL)arg1 ;
-(BOOL)isFindMyDeviceAllowed;
-(BOOL)isFindMyFriendsAllowed;
-(BOOL)isHomeAllowed;
-(BOOL)isiCloudDriveAllowed;
-(BOOL)isInstalledAppNearMeSuggestionsAllowed;
-(BOOL)isUninstalledAppNearMeSuggestionsAllowed;
-(BOOL)isContactlessPaymentAllowed;
-(BOOL)isFingerprintForContactlessPaymentAllowed;
-(BOOL)isBluetoothModificationAllowed;
-(BOOL)isPersonalHotspotModificationAllowed;
-(BOOL)isESIMModificationAllowed;
-(BOOL)isDeviceNameModificationAllowed;
-(BOOL)isWallpaperModificationAllowed;
-(BOOL)isScreenShotAllowed;
-(BOOL)isScreenRecordingAllowed;
-(BOOL)isMusicServiceAllowed;
-(BOOL)isMusicArtistActivityAllowed;
-(BOOL)isAutoCorrectionAllowed;
-(BOOL)isSmartPunctuationAllowed;
-(BOOL)isPredictiveKeyboardAllowed;
-(BOOL)isKeyboardShortcutsAllowed;
-(BOOL)isSpellCheckAllowed;
-(BOOL)isProximitySetupToNewDeviceAllowed;
-(BOOL)isAccessibilitySpeechAllowed;
-(void)setAutoCorrectionAllowed:(BOOL)arg1 ;
-(void)setSmartPunctuationAllowed:(BOOL)arg1 ;
-(void)setPredictiveKeyboardAllowed:(BOOL)arg1 ;
-(void)setKeyboardShortcutsAllowed:(BOOL)arg1 ;
-(void)setSpellCheckAllowed:(BOOL)arg1 ;
-(BOOL)isNewsAllowed;
-(BOOL)isNewsTodayAllowed;
-(BOOL)isSpotlightNewsAllowed;
-(BOOL)isFeatureM1Allowed;
-(void)setFeatureM1Allowed:(BOOL)arg1 ;
-(BOOL)isHashtagImagesAllowed;
-(BOOL)isTVAllowed;
-(void)setTVAllowed:(BOOL)arg1 ;
-(BOOL)isSoftwareUpdateResisted;
-(unsigned long long)enforcedSoftwareUpdateDelayInDays;
-(BOOL)isAutomaticDateAndTimeEnforced;
-(BOOL)isWiFiWhitelistingEnforced;
-(BOOL)isRemoteAppPairingAllowed;
-(void)setRemoteAppPairingAllowed:(BOOL)arg1 ;
-(BOOL)isTVProviderModificationAllowed;
-(void)setTVProviderModificationAllowed:(BOOL)arg1 ;
-(BOOL)isTVShowingUndownloadedTVShowsAllowed;
-(void)setTVShowingUndownloadedTVShowsAllowed:(BOOL)arg1 ;
-(BOOL)isTVShowingUndownloadedMoviesAllowed;
-(void)setTVShowingUndownloadedMoviesAllowed:(BOOL)arg1 ;
-(BOOL)isVPNCreationAllowed;
-(BOOL)isDriverDoNotDisturbModificationsAllowed;
-(void)setDriverDoNotDisturbModificationsAllowed:(BOOL)arg1 ;
-(BOOL)isUSBRestrictedModeAllowed;
-(BOOL)isTodayViewAllowed;
-(BOOL)isTodayViewModificationAllowed;
-(BOOL)isNotificationsModificationAllowedForBundleID:(id)arg1 ;
-(id)deviceIfLostMessage;
-(id)deviceProvisionalEnrollmentFootnote;
-(id)deviceAssetTag;
-(BOOL)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2 ;
-(BOOL)isSpotlightInternetResultsAllowed;
-(id)activationLockBypassKey;
-(void)deleteActivationLockBypassKey;
-(id)activationLockBypassHash;
-(BOOL)isMUAllowed;
-(void)setGracePeriod:(unsigned long long)arg1 passcode:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setFingerprintUnlockAllowed:(BOOL)arg1 passcode:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setFingerprintUnlockAllowed:(BOOL)arg1 credentialSet:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)isAttentionAwareAutoLockAllowed;
-(BOOL)shouldDestroyOldKeybag;
-(void)setAirPlaySettingsUIAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isAirPlaySettingsUIAllowedOutAsk:(BOOL*)arg1 ;
-(void)setAirPlaySecuritySettingsUIAllowed:(BOOL)arg1 ;
-(BOOL)isAirPlaySecuritySettingsUIAllowed;
-(void)setMediaPurchaseAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isMediaPurchaseAllowedOutAsk:(BOOL*)arg1 ;
-(void)setExplicitContentAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isExplicitContentAllowedOutAsk:(BOOL*)arg1 ;
-(void)setConferenceRoomDisplayModeEnabled:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isConferenceRoomDisplayModeEnabledOutAsk:(BOOL*)arg1 ;
-(void)setConferenceRoomDisplaySettingsUIAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isConferenceRoomDisplaySettingsUIAllowedOutAsk:(BOOL*)arg1 ;
-(void)checkCarrierProfileForceInstallation:(BOOL)arg1 ;
-(id)_localizedSourceDescriptionForType:(long long)arg1 MDMName:(id)arg2 exchangeName:(id)arg3 exchangeCount:(long long)arg4 profileName:(id)arg5 profileCount:(long long)arg6 ;
-(void)checkCarrierProfile;
-(void)notifyDeviceUnlocked;
-(void)notifyKeybagUpdated;
-(void)performBootTimeChecks;
-(void)removeExpiredProfiles;
-(void)storeCertificateData:(id)arg1 forHostIdentifier:(id)arg2 ;
-(void)rereadManagedAppAttributes;
-(id)provisionalEnrollmentExpirationDate;
-(id)diagnosticsUploadURL;
-(id)defaultUserBookmarks;
-(BOOL)isWebFilterUIActive;
-(void)setWebContentFilterAutoPermittedURLStrings:(id)arg1 ;
-(void)addWebContentFilterAutoPermittedURLString:(id)arg1 ;
-(void)addUserBookmark:(id)arg1 ;
-(id)webContentFilterUserBlacklistedURLStrings;
-(id)webContentFilterEffectiveBlacklistedURLStrings;
-(void)setWebContentFilterUserBlacklistedURLStrings:(id)arg1 ;
-(void)removeWebContentFilterUserBlacklistedURLString:(id)arg1 ;
-(void)stashWebContentFilterUserBlacklistedURLStrings;
-(void)unstashWebContentFilterUserBlacklistedURLStrings;
-(void)stashWebContentFilterAutoPermittedURLStrings;
-(void)unstashWebContentFilterAutoPermittedURLStrings;
-(int)hostMayPairWithOptions:(id)arg1 challenge:(id)arg2 ;
-(void)lockdownDidReceiveActivationRecord:(id)arg1 ;
-(void)restrictedAppBundleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)restrictedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 includeWatchBundleIDs:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removedSystemAppBundleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)removedSystemAppBundleIDsIncludingWatchBundleIDs:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)effectiveBlacklistedAppBundleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 includeWatchBundleIDs:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)restrictionEnforcedBlacklistedAppBundleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 includeWatchBundleIDs:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)parentalControlsBlacklistedAppBundleIDsIncludingWatchBundleIDs:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)effectiveWhitelistedAppBundleIDsIncludingWatchBundleIDs:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)restrictionEnforcedWhitelistedAppBundleIDsIncludingWatchBundleIDs:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)parentalControlsWhitelistedAppBundleIDsIncludingWatchBundleIDs:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isHomeScreenLayoutApplied;
-(id)restrictionEnforcedHomeScreenLayout;
-(id)restrictedAppBundleIDsExcludingRemovedSystemApps;
-(void)restrictedAppBundleIDsIncludingWatchBundleIDs:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)restrictedAppBundleIDsExcludingRemovedSystemApps:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)removedSystemAppBundleIDs;
-(id)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps;
-(void)effectiveBlacklistedAppBundleIDsIncludingWatchBundleIDs:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps;
-(void)parentalControlsBlacklistedAppBundleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)setParentalControlsBlacklistedAppBundleIDs:(id)arg1 ;
-(void)effectiveWhitelistedAppBundleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)restrictionEnforcedWhitelistedAppBundleIDsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isPasscodeRequiredToAccessWhitelistedApps;
-(BOOL)mayEnterPasscodeToAccessNonWhitelistedApps;
-(void)parentalControlsWhitelistedAppBundleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)setParentalControlsWhitelistedAppBundleIDs:(id)arg1 ;
-(BOOL)isParentalControlsAllowPasscodeAccessToNonWhitelistedAppsUIForcedByRestrictions;
-(BOOL)parentalControlsAllowPasscodeAccessToNonWhitelistedApps;
-(void)parentalControlsSetAllowPasscodeAccessToNonWhitelistedApps:(BOOL)arg1 ;
-(id)autonomousSingleAppModePermittedBundleIDs;
-(id)knownAirPrintIPPURLStrings;
-(void)unenrollWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)storeCloudConfigurationDetails:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)retrieveCloudConfigurationDetailsCompletionBlock:(/*^block*/id)arg1 ;
-(void)storeCloudConfigurationDetails:(id)arg1 waitUntilCompleted:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)activationRecordIndicatesCloudConfigurationIsAvailable;
-(BOOL)shouldShowCloudConfigurationUI;
-(void)markStoredProfileForPurposeAsInstalled:(int)arg1 ;
-(void)profileDataStoredForPurpose:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)enrollProvisionallyWithNonce:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)retrieveAndStoreCloudConfigurationDetailsCompletionBlock:(/*^block*/id)arg1 ;
-(void)retrieveCloudConfigurationFromURL:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)wasCloudConfigurationApplied;
-(BOOL)wasTeslaCloudConfigurationApplied;
-(BOOL)isAwaitingDeviceConfigured;
-(void)cloudConfigurationUIDidCompleteWasApplied:(BOOL)arg1 ;
-(void)storeCloudConfigurationDetails:(id)arg1 ;
-(BOOL)shouldSkipSetupPanes;
-(BOOL)shouldShowSetupAssistant;
-(void)installProfileDataStoredForPurpose:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 ;
-(BOOL)shouldInstallStoredProfileForPurpose:(int)arg1 ;
-(void)setupAssistantDidFinish;
-(id)deviceOrganizationName;
-(id)deviceDepartmentName;
-(id)deviceOrganizationAddress;
-(id)deviceOrganizationAddressLine1;
-(id)deviceOrganizationAddressLine2;
-(id)deviceOrganizationAddressLine3;
-(id)deviceOrganizationCity;
-(id)deviceOrganizationRegion;
-(id)deviceOrganizationZipCode;
-(id)deviceOrganizationCountry;
-(id)deviceOrganizationVendorID;
-(BOOL)isTeslaCloudConfigurationAvailable;
-(BOOL)mayShareToMessagesForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(BOOL)arg2 ;
-(BOOL)mayShareToAirDropForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(BOOL)arg2 ;
-(BOOL)isAirDropUnmanagedForced;
-(id)allowedImportFromAppBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingAccountIsManaged:(BOOL)arg3 ;
-(long long)dragDropBidirectionalManagementStateForBaseBundleID:(id)arg1 ;
-(BOOL)_shouldApplyContactsFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(BOOL*)arg3 outAllowUnmanagedAccounts:(BOOL*)arg4 ;
-(BOOL)_shouldApplyContactsFilterForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2 outAllowManagedAccounts:(BOOL*)arg3 outAllowUnmanagedAccounts:(BOOL*)arg4 ;
-(BOOL)shouldApplyFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(BOOL*)arg3 outAllowUnmanagedAccounts:(BOOL*)arg4 ;
-(BOOL)shouldApplyFilterForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2 outAllowManagedAccounts:(BOOL*)arg3 outAllowUnmanagedAccounts:(BOOL*)arg4 ;
-(BOOL)_managedMayWriteUnmanagedContacts;
-(BOOL)_unmanagedMayReadManagedContacts;
-(BOOL)mayShareToMessagesOriginatingAccountIsManaged:(BOOL)arg1 ;
-(BOOL)mayShareToAirDropOriginatingAccountIsManaged:(BOOL)arg1 ;
-(long long)dragDropSourceManagementStateForBundleID:(id)arg1 ;
-(BOOL)mayShowLocalContactsAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)filteredOpenInContactsAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
-(id)filteredOpenInOriginatingContactsAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3 ;
-(BOOL)mayShowLocalContactsAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2 ;
-(BOOL)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(BOOL)mayShowLocalAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2 ;
-(BOOL)canSendMail:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(BOOL)hasAnyMailAccountIgnoringFiltering;
-(id)filteredMailSheetAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3 ;
-(id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3 ;
-(BOOL)isAutomaticAppDownloadsAllowed;
-(BOOL)isAppAnalyticsAllowed;
-(BOOL)isSettingLockedDownByRestrictions:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 ;
-(id)effectiveValuesForUnionSetting:(id)arg1 ;
-(BOOL)isSiriServerLoggingAllowed;
-(BOOL)isDictationAllowed;
-(NSXPCConnection *)xpcConnection;
-(id)effectiveBlacklistedAppBundleIDs;
-(int)unlockScreenType;
-(int)unlockScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(BOOL)passcode:(id)arg1 meetsCurrentConstraintsOutError:(id*)arg2 ;
-(BOOL)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id*)arg3 ;
-(BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2 ;
-(int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(id)valueForFeature:(id)arg1 ;
-(id)localizedDescriptionOfCurrentPasscodeConstraints;
-(id)managedAppIDs;
-(id)managedAppBundleIDs;
-(BOOL)isAppRemovalAllowed;
-(BOOL)isSystemAppRemovalAllowed;
-(BOOL)isAppDemotionAllowed:(id)arg1 ;
-(id)defaultParametersForBoolSetting:(id)arg1 ;
-(void)removeBoolSetting:(id)arg1 ;
-(id)defaultParametersForValueSetting:(id)arg1 ;
-(id)defaultParametersForIntersectionSetting:(id)arg1 ;
-(id)defaultParametersForUnionSetting:(id)arg1 ;
-(void)setParametersForSettingsByType:(id)arg1 ;
-(void)setUserBookmarks:(id)arg1 ;
-(BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isDiagnosticSubmissionModificationAllowed;
-(BOOL)isAutomaticAppUpdatesModificationAllowed;
-(int)appWhitelistState;
-(id)effectiveWhitelistedAppBundleIDs;
-(id)effectiveValueForSetting:(id)arg1 ;
-(int)effectiveRestrictedBoolValueForSetting:(id)arg1 ;
-(BOOL)isPasscodeSet;
-(BOOL)isInAppPaymentAllowed;
-(BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 outRestrictionChanged:(BOOL*)arg6 outEffectiveSettingsChanged:(BOOL*)arg7 outError:(id*)arg8 ;
-(int)boolRestrictionForFeature:(id)arg1 ;
-(id)acceptedFileExtensions;
-(BOOL)isAirDropAllowed;
-(BOOL)isClassroomEnabled;
-(BOOL)isPasswordProximityAutoFillRequestingAllowed;
-(id)installedProfilesWithFilterFlags:(int)arg1 ;
-(id)installProfileData:(id)arg1 options:(id)arg2 outError:(id*)arg3 ;
-(void)_defaultsDidChange;
-(id)installedProfileIdentifiers;
-(id)installedProfileDataWithIdentifier:(id)arg1 ;
-(void)removeProfileWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)userSettings;
-(BOOL)isCloudSyncAllowed:(id)arg1 ;
-(BOOL)isEphemeralMultiUser;
-(BOOL)isFindMyCarAllowed;
-(unsigned long long)gracePeriod;
-(BOOL)isDiagnosticSubmissionAllowed;
-(void)lockDevice;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)_init;
-(void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isPasswordAutoFillAllowed;
-(void)flush;
-(BOOL)isAutomaticAppUpdatesAllowed;
-(id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3 ;
-(BOOL)isOpenInRestrictionInEffect;
-(int)effectiveBoolValueForSetting:(id)arg1 ;
-(BOOL)isBundleIDAccountBasedForDragDrop:(id)arg1 ;
-(long long)dragDropTargetManagementStateForBundleID:(id)arg1 ;
-(BOOL)mayOpenFromUnmanagedToManaged;
-(BOOL)mayOpenFromManagedToUnmanaged;
-(BOOL)isAppManaged:(id)arg1 ;
-(void)setInteractionDelegate:(id)arg1 ;
@end

