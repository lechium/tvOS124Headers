/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSDaemonProtocol <NSObject>
@optional
-(void)setupAccountWithLoginID:(id)arg1 serviceName:(id)arg2 accountType:(int)arg3 accountConfig:(id)arg4 authToken:(id)arg5 password:(id)arg6 transactionID:(id)arg7;
-(void)addAccountWithLoginID:(id)arg1 serviceName:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountInfo:(id)arg5;
-(void)_removeAndDeregisterAccount:(id)arg1;
-(void)updateAccount:(id)arg1 withAccountInfo:(id)arg2;
-(void)authTokenChanged:(id)arg1 forAccount:(id)arg2;
-(void)passwordChanged:(id)arg1 forAccount:(id)arg2;
-(void)authenticationChangedForAccount:(id)arg1;
-(void)passwordUpdatedForAccount:(id)arg1;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 forAccount:(id)arg3;
-(void)validateProfileForAccount:(id)arg1;
-(void)addAliases:(id)arg1 toAccount:(id)arg2;
-(void)removeAliases:(id)arg1 fromAccount:(id)arg2;
-(void)validateAliases:(id)arg1 forAccount:(id)arg2;
-(void)unvalidateAliases:(id)arg1 forAccount:(id)arg2;
-(void)activateAlias:(id)arg1 onAccount:(id)arg2;
-(void)deactivateAlias:(id)arg1 onAccount:(id)arg2;
-(void)_reregisterAndReidentify:(id)arg1 account:(id)arg2;
-(void)deactivateAndPurgeIdentifyForAccount:(id)arg1;
-(void)hardDeregister;
-(void)triggerFinalDeregister;
-(void)iCloudSignInHackWithUserName:(id)arg1 password:(id)arg2;
-(void)iCloudSignOutHack;
-(void)iCloudSignInWithUserName:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 accountStatus:(id)arg5 handles:(id)arg6;
-(void)iCloudUpdateForUserName:(id)arg1 accountInfo:(id)arg2;
-(void)iCloudModifyForUserName:(id)arg1;
-(void)iCloudSignOut;
-(void)iTunesSignInWithUserName:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 accountStatus:(id)arg5 handles:(id)arg6;
-(void)iTunesSignOut;
-(void)updateUserWithOldUserName:(id)arg1 newUserName:(id)arg2;
-(void)kickGetDependentForAccount:(id)arg1;
-(void)reRegisterWithUserID:(id)arg1 action:(id)arg2 service:(id)arg3;
-(void)repairAccounts;
-(void)getRegisteredIdentities;
-(void)authenticatePhoneWithRequestUUID:(id)arg1;
-(void)generatePhoneAuthenticationSignatureOverData:(id)arg1 withRequestUUID:(id)arg2;
-(void)setPhoneUserSubscriptionSource:(id)arg1 withRequestUUID:(id)arg2;
-(void)fetchPhoneUserSubscriptionSourceWithRequestUUID:(id)arg1;
-(void)startLocalSetup;
-(void)stopLocalSetup;
-(void)localSetupUnpair;
-(void)localSetupUnpairStart;
-(void)localSetupCompleted;
-(void)addPairedDevice:(id)arg1;
-(void)connectPairedDevice:(id)arg1;
-(void)deletePairedDevice:(id)arg1;
-(void)getLocalDeviceInfo;
-(void)getPairedDeviceInfo;
-(void)getDeliveryStats;
-(void)initialLocalSyncStartedForServices:(id)arg1;
-(void)initialLocalSyncCompletedForServices:(id)arg1;
-(void)setAllowedTrafficClasses:(id)arg1;
-(void)dropAllMessagesWithoutAnyAllowedClassifier;
-(void)addPairedDeviceWithID:(id)arg1 requestID:(id)arg2;
-(void)connectPairedDeviceWithID:(id)arg1 requestID:(id)arg2;
-(void)setupCompletedForPairedDeviceWithID:(id)arg1 requestID:(id)arg2;
-(void)switchActivePairedDeviceWithID:(id)arg1 requestID:(id)arg2;
-(void)redeliverMessagesForDevice:(id)arg1 requestID:(id)arg2;
-(void)deletePairedDeviceWithID:(id)arg1 requestID:(id)arg2;
-(void)unpairStartForDeviceWithID:(id)arg1 requestID:(id)arg2;
-(void)stopLocalPairingForDeviceWithID:(id)arg1 requestID:(id)arg2;
-(void)unpairDeviceWithID:(id)arg1 requestID:(id)arg2;
-(void)forgetDeviceWithID:(id)arg1 requestID:(id)arg2;
-(void)getPairingDevicesWithRequestID:(id)arg1;
-(void)getPairedDevicesWithRequestID:(id)arg1;
-(void)setAllowedTrafficClassifiersForDevice:(id)arg1 classifiers:(id)arg2 requestID:(id)arg3;
-(void)dropAllMessagesWithoutAnyAllowedClassifierForDevice:(id)arg1 requestID:(id)arg2;
-(void)reunionSyncStartedForServices:(id)arg1 requestID:(id)arg2;
-(void)reunionSyncCompletedForServices:(id)arg1 requestID:(id)arg2;
-(void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3;
-(void)setPairedDeviceInfo:(id)arg1;
-(void)incomingAccountSyncMessage:(id)arg1;
-(void)regenerateRegisteredIdentity;
-(void)sendMessageWithSendParameters:(id)arg1;
-(void)cancelItemWithIdentifier:(id)arg1 service:(id)arg2;
-(void)getProgressUpdateForIdentifier:(id)arg1 service:(id)arg2;
-(void)sendPersistedFile:(id)arg1 userInfo:(id)arg2 toDestinations:(id)arg3 usingAccountWithUniqueID:(id)arg4 identifier:(id)arg5;
-(void)sendServerMessage:(id)arg1 command:(id)arg2 usingAccountWithUniqueID:(id)arg3;
-(void)setPreferInfraWiFi:(BOOL)arg1 service:(id)arg2;
-(void)setLinkPreferences:(id)arg1 service:(id)arg2;
-(void)startOTRTest:(id)arg1 priority:(long long)arg2;
-(void)testCloudQRConnection:(id)arg1;
-(void)failedDecryptingMessage:(id)arg1 reason:(long long)arg2 forGroupID:(id)arg3 onService:(id)arg4;
-(void)acknowledgeOutgoingMessageWithGUID:(id)arg1 alternateCallbackID:(id)arg2 forAccountWithUniqueID:(id)arg3;
-(void)acknowledgeMessageWithGUID:(id)arg1 forAccountWithUniqueID:(id)arg2 broadcastTime:(id)arg3 messageSize:(id)arg4 priority:(id)arg5;
-(void)acknowledgeMessageWithStorageGUID:(id)arg1 realGUID:(id)arg2 forAccountWithUniqueID:(id)arg3 broadcastTime:(id)arg4 messageSize:(id)arg5 priority:(id)arg6 broadcastID:(long long)arg7 connectionType:(long long)arg8;
-(void)sendAppAckWithGUID:(id)arg1 toDestination:(id)arg2 forAccountWithUniqueID:(id)arg3 connectionType:(long long)arg4;
-(void)setListenerServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned)arg3;
-(void)registerForNotificationsOnServices:(id)arg1;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2;
-(void)openSocketWithOptions:(id)arg1;
-(void)closeSocketWithOptions:(id)arg1;
-(void)setNSUUID:(id)arg1 onDeviceWithUniqueID:(id)arg2 forService:(id)arg3;
-(void)setupNewSessionWithConfiguration:(id)arg1;
-(void)cleanupSession:(id)arg1;
-(void)cleanupSessionWithInstanceID:(id)arg1;
-(void)sendInvitation:(id)arg1 withOptions:(id)arg2;
-(void)sendInvitation:(id)arg1 withData:(id)arg2 declineOnError:(BOOL)arg3;
-(void)cancelInvitation:(id)arg1;
-(void)cancelInvitation:(id)arg1 withData:(id)arg2;
-(void)cancelInvitation:(id)arg1 withRemoteEndedReasonOverride:(unsigned)arg2;
-(void)acceptInvitation:(id)arg1;
-(void)acceptInvitation:(id)arg1 withData:(id)arg2;
-(void)declineInvitation:(id)arg1;
-(void)declineInvitation:(id)arg1 withData:(id)arg2;
-(void)endSession:(id)arg1 withData:(id)arg2;
-(void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2 forSessionWithUniqueID:(id)arg3;
-(void)setAudioEnabled:(BOOL)arg1 forSessionWithUniqueID:(id)arg2;
-(void)setMuted:(BOOL)arg1 forSessionWithUniqueID:(id)arg2;
-(void)setPreferences:(id)arg1 forSessionWithUniqueID:(id)arg2;
-(void)setInviteTimetout:(long long)arg1 forSessionWithUniqueID:(id)arg2;
-(void)acknowledgeSessionID:(id)arg1 clientID:(id)arg2;
-(void)sendAllocationRequest:(id)arg1 options:(id)arg2;
-(void)updateMembers:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3 withContext:(id)arg4 triggeredLocally:(BOOL)arg5;
-(void)updateParticipantData:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3 withContext:(id)arg4;
-(void)joinGroupSession:(id)arg1 withOptions:(id)arg2;
-(void)leaveGroupSession:(id)arg1 participantInfo:(id)arg2;
-(void)requestActiveParticipantsForGroupSession:(id)arg1;
-(void)setupRealtimeEncryptionController:(id)arg1 forAccountWithID:(id)arg2;
-(void)sendRealTimeMediaPrekey:(id)arg1 toGroup:(id)arg2;
-(void)requestPublicKeysForRealTimeEncryption:(id)arg1 forAccountWithID:(id)arg2;
-(void)sendRealTimeEncryptionMasterKeyMaterial:(id)arg1 toGroup:(id)arg2;
-(void)sendRealTimeEncryptionMKMRecoveryRequest:(id)arg1 toGroup:(id)arg2;
-(void)requestRealTimeEncryptionMasterKeyMaterial:(id)arg1 forGroup:(id)arg2;
-(void)resetRealTimeEncryptionKeys:(id)arg1 forGroup:(id)arg2;
-(void)continuityClientInstanceCreated;
-(void)continuityStartAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
-(void)continuityStopAdvertisingOfType:(long long)arg1;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(BOOL)arg4 duplicates:(BOOL)arg5;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(BOOL)arg5 duplicates:(BOOL)arg6;
-(void)continuityStopScanningForType:(long long)arg1;
-(void)continuityConnectToPeer:(id)arg1;
-(void)continuityDisconnectFromPeer:(id)arg1;
-(void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2;
-(void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2;
-(void)reportiMessageSpam:(id)arg1 toURI:(id)arg2;
-(void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4;
-(void)reportiMessageSpamCheckUnknown:(id)arg1 count:(id)arg2 requestID:(id)arg3;
-(void)homeKitGetServiceUserIDs;
-(void)homeKitGetAdminAccessTokensWithServiceUserID:(id)arg1 accessoryID:(id)arg2 pairingToken:(id)arg3;
-(void)homeKitGetConsentTokensWithServiceUserID:(id)arg1 accessoryIDs:(id)arg2 adminID:(id)arg3;
-(void)homeKitGetUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 userHandle:(id)arg3 accessoryRequests:(id)arg4;
-(void)homeKitRefreshUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 accessoryRequests:(id)arg3;
-(void)appleCareSignInUserName:(id)arg1 DSID:(id)arg2 authToken:(id)arg3 requestID:(id)arg4;
-(void)appleCareSignOutUserWithRequestID:(id)arg1;
-(void)registrationControlSetRegistrationStateForRegistrationType:(long long)arg1 toState:(long long)arg2 requestID:(id)arg3;
-(void)registrationControlGetCurrentiMessageStateWithContextForRequestID:(id)arg1;
-(void)registrationControlGetRegistrationStateForRegistrationType:(long long)arg1 requestID:(id)arg2;
-(void)registerAccount:(id)arg1;
-(void)unregisterAccount:(id)arg1;
-(void)authenticateAccount:(id)arg1;
-(void)disableAccount:(id)arg1;
-(void)enableAccount:(id)arg1;
-(void)_removeAccount:(id)arg1;
-(void)endSession:(id)arg1;

@end

