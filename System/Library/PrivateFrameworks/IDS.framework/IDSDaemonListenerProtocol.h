/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSDaemonListenerProtocol <NSObject>
@optional
-(void)xpcObject:(id)arg1 objectContext:(id)arg2;
-(void)connectionComplete:(BOOL)arg1;
-(void)setupCompleteWithInfo:(id)arg1;
-(void)daemonConnected;
-(void)daemonDisconnected;
-(void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;
-(void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)accessoryDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)accessoryReportMessageReceived:(id)arg1 accessoryID:(id)arg2 controllerID:(id)arg3 withGUID:(id)arg4 forTopic:(id)arg5 toIdentifier:(id)arg6 fromID:(id)arg7 context:(id)arg8;
-(void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(BOOL)arg6 context:(id)arg7;
-(void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
-(void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;
-(void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)OTRTestCallback:(id)arg1 time:(double)arg2 error:(id)arg3;
-(void)groupShareReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)engramDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)checkTransportLogWithReason:(long long)arg1;
-(void)accountUpdated:(id)arg1;
-(void)accountsChanged:(id)arg1 forTopic:(id)arg2;
-(void)accountEnabled:(id)arg1 onService:(id)arg2;
-(void)accountDisabled:(id)arg1 onService:(id)arg2;
-(void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3;
-(void)account:(id)arg1 accountInfoChanged:(id)arg2;
-(void)updateDeviceIdentity:(id)arg1 error:(id)arg2;
-(void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
-(void)account:(id)arg1 dependentDevicesUpdatedUponReconnect:(id)arg2;
-(void)account:(id)arg1 localDeviceAdded:(id)arg2;
-(void)account:(id)arg1 localDeviceRemoved:(id)arg2;
-(void)didAuthenticatePhoneWithAuthenticationCertificateData:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
-(void)didGeneratePhoneAuthenticationSignature:(id)arg1 nonce:(id)arg2 certificate:(id)arg3 inputData:(id)arg4 requestUUID:(id)arg5 error:(id)arg6;
-(void)didSetPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
-(void)didFetchPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;
-(void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(BOOL)arg4 error:(id)arg5;
-(void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6;
-(void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
-(void)groupSessionDidTerminate:(id)arg1;
-(void)groupSessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3;
-(void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(BOOL)arg3;
-(void)session:(id)arg1 audioEnabled:(BOOL)arg2;
-(void)session:(id)arg1 muted:(BOOL)arg2;
-(void)sessionDidJoinGroup:(id)arg1 participantsInfo:(id)arg2 error:(id)arg3;
-(void)sessionDidJoinGroup:(id)arg1 participantInfo:(id)arg2 error:(id)arg3;
-(void)sessionDidJoinGroup:(id)arg1 participantUpdateDictionary:(id)arg2 error:(id)arg3;
-(void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2;
-(void)session:(id)arg1 participantDidJoinGroupWithInfo:(id)arg2;
-(void)session:(id)arg1 participantDidLeaveGroupWithInfo:(id)arg2;
-(void)session:(id)arg1 didGetGroupSessionParticipants:(id)arg2 requestID:(id)arg3 error:(id)arg4;
-(void)session:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(BOOL)arg3;
-(void)receivedGroupSessionParticipantUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4;
-(void)receivedGroupSessionParticipantDataUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4;
-(void)allocationDone:(id)arg1 sessionInfo:(id)arg2;
-(void)openedSocket:(id)arg1 forHandlerID:(id)arg2 error:(id)arg3;
-(void)localDeviceInfo:(id)arg1;
-(void)pairedDeviceInfo:(id)arg1;
-(void)deliveryStats:(id)arg1;
-(void)device:(id)arg1 nsuuidChanged:(id)arg2;
-(void)device:(id)arg1 pairingDeleted:(BOOL)arg2;
-(void)device:(id)arg1 pairingAdded:(BOOL)arg2;
-(void)continuityDidUpdateState:(long long)arg1;
-(void)continuityDidLosePeer:(id)arg1;
-(void)continuityDidLosePeer:(id)arg1 forType:(long long)arg2;
-(void)continuityDidStartTrackingPeer:(id)arg1 error:(id)arg2;
-(void)continuityDidStartTrackingPeer:(id)arg1 forType:(long long)arg2 error:(id)arg3;
-(void)continuityDidStopTrackingPeer:(id)arg1;
-(void)continuityDidStopTrackingPeer:(id)arg1 forType:(long long)arg2;
-(void)continuityDidStartAdvertisingOfType:(long long)arg1;
-(void)continuityDidStopAdvertisingOfType:(long long)arg1;
-(void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;
-(void)continuityDidStartScanningForType:(long long)arg1;
-(void)continuityDidStopScanningForType:(long long)arg1;
-(void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
-(void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
-(void)continuityDidDiscoverPeerWithData:(id)arg1 fromPeer:(id)arg2;
-(void)continuityDidConnectToPeer:(id)arg1 withError:(id)arg2;
-(void)continuityDidDisconnectFromPeer:(id)arg1 withError:(id)arg2;
-(void)serviceUserIDs:(id)arg1 error:(id)arg2;
-(void)adminAccessTokens:(id)arg1 error:(id)arg2;
-(void)consentTokens:(id)arg1 error:(id)arg2;
-(void)userAccessTokens:(id)arg1 error:(id)arg2;
-(void)refreshUserAccessTokens:(id)arg1 error:(id)arg2;
-(void)deviceIdentifierDidChange:(id)arg1;
-(void)didSwitchActivePairedDevice:(id)arg1;
-(void)didSwitchActivePairedDevice:(id)arg1 forService:(id)arg2 wasHandled:(BOOL*)arg3;
-(void)deactivatePairedDevices;
-(void)localPairingResponseForRequestID:(id)arg1 withError:(id)arg2;
-(void)localPairingResponseForRequestID:(id)arg1 withError:(id)arg2 pairedDevices:(id)arg3;
-(void)applecareResponseForRequestID:(id)arg1 withError:(id)arg2;
-(void)registrationControlResponseForRequestID:(id)arg1 withError:(id)arg2;
-(void)registrationControlResponseForRequestID:(id)arg1 withBoolAnswer:(BOOL)arg2 andError:(id)arg3;
-(void)registrationControlResponseForRequestID:(id)arg1 withBoolAnswer:(BOOL)arg2 additionalContextData:(id)arg3 andError:(id)arg4;
-(void)registrationControlStatusResponseForRequestID:(long long)arg1 requestID:(id)arg2 withError:(id)arg3;
-(void)iMessageReportSpamCheckUnknownResponseForRequestID:(id)arg1 status:(long long)arg2 abusive:(BOOL)arg3 delay:(double)arg4 withError:(id)arg5;
-(void)accountAdded:(id)arg1;
-(void)accountRemoved:(id)arg1;
-(void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;
-(void)sessionStarted:(id)arg1;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3;
-(void)session:(id)arg1 didReceiveReport:(id)arg2;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
-(void)account:(id)arg1 aliasesChanged:(id)arg2;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
-(void)account:(id)arg1 profileChanged:(id)arg2;
-(void)account:(id)arg1 loginChanged:(id)arg2;
-(void)account:(id)arg1 displayNameChanged:(id)arg2;
-(void)refreshRegistrationForAccount:(id)arg1;

@end

