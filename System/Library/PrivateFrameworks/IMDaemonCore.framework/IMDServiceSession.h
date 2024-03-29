/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDaemonCore-Structs.h>
#import <IMDaemonCore/IMSystemMonitorListener.h>
#import <IMDaemonCore/IMConnectionMonitorDelegate.h>
#import <IMDaemonCore/IMServiceSessionProtocol.h>

@protocol IMDAutoReplying;
@class NSRecursiveLock, IMDAccount, NSMutableArray, NSMutableDictionary, NSMutableSet, IMTimer, NSTimer, IMTimingCollection, IMConnectionMonitor, NSString, IMSystemProxySettingsFetcher, IMOneTimeCodeUtilities, IMDService, NSArray, NSDictionary;

@interface IMDServiceSession : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate, IMServiceSessionProtocol> {

	NSRecursiveLock* _lock;
	IMDAccount* _account;
	NSMutableArray* _accounts;
	NSMutableDictionary* _localProperties;
	NSMutableSet* _changedBuddies;
	NSMutableSet* _registeredChats;
	NSMutableDictionary* _groupChatIdentifierToChatRoomMap;
	NSMutableDictionary* _chatRoomToGroupChatIdentifierMap;
	NSMutableDictionary* _chatSuppressionFlagMap;
	NSMutableDictionary* _chatSuppressionTimerMap;
	NSMutableDictionary* _suppressedMessages;
	IMTimer* _messageRoutingTimer;
	IMTimer* _messageExpireStateTimer;
	IMTimer* _messageWatchdogTimer;
	id<IMDAutoReplying> _messageAutoReplier;
	NSTimer* _storageTimer;
	NSMutableSet* _messagesReceivedDuringStorage;
	unsigned long long _pendingReadReceiptFromStorageCount;
	IMTimingCollection* _timingComingBackFromStorage;
	unsigned long long _messagesProcessedComingBackFromStorage;
	IMConnectionMonitor* _connectionMonitor;
	NSTimer* _reconnectTimer;
	NSString* _loginID;
	NSString* _pwRequestID;
	IMSystemProxySettingsFetcher* _systemProxySettingsFetcher;
	int _buddyChangeLevel;
	BOOL _activated;
	BOOL _saveKeychainPassword;
	IMOneTimeCodeUtilities* _otcUtilities;
	BOOL _awaitingDataContext;
	BOOL _shouldReconnect;
	BOOL _badPass;
	IMDService* _service;
	NSMutableDictionary* _buddies;
	NSString* _proxyHost;
	NSString* _proxyAccount;
	NSString* _proxyPassword;
	NSString* _password;
	NSString* _serverHost;
	long long _proxyType;
	unsigned short _proxyPort;
	BOOL _useSSL;
	unsigned short _serverPort;

}

@property (nonatomic,retain,readonly) NSArray * allBuddies; 
@property (retain,readonly) NSDictionary * buddyProperties; 
@property (nonatomic,retain,readonly) NSDictionary * buddyPictures; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,retain,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,retain,readonly) IMDAccount * account;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain,readonly) IMDService * service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain,readonly) NSArray * accounts;                                //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountID; 
@property (nonatomic,retain,readonly) NSString * password;                               //@synthesize password=_password - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * accountDefaults; 
@property (nonatomic,retain,readonly) NSString * serverHost;                             //@synthesize serverHost=_serverHost - In the implementation block
@property (nonatomic,readonly) unsigned short serverPort;                                //@synthesize serverPort=_serverPort - In the implementation block
@property (nonatomic,readonly) long long proxyType;                                      //@synthesize proxyType=_proxyType - In the implementation block
@property (nonatomic,retain,readonly) NSString * proxyHost;                              //@synthesize proxyHost=_proxyHost - In the implementation block
@property (nonatomic,readonly) unsigned short proxyPort;                                 //@synthesize proxyPort=_proxyPort - In the implementation block
@property (nonatomic,retain,readonly) NSString * proxyAccount;                           //@synthesize proxyAccount=_proxyAccount - In the implementation block
@property (nonatomic,retain,readonly) NSString * proxyPassword;                          //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (nonatomic,readonly) BOOL useSSL;                                              //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,readonly) BOOL accountNeedsLogin; 
@property (nonatomic,readonly) BOOL accountNeedsPassword; 
@property (nonatomic,readonly) BOOL accountShouldBeAlwaysLoggedIn; 
@property (nonatomic,readonly) BOOL allowedAsChild; 
@property (nonatomic,readonly) BOOL networkConditionsAllowLogin; 
@property (nonatomic,readonly) BOOL overrideNetworkAvailability; 
+(id)existingServiceSessionForService:(id)arg1 ;
+(id)__allServiceSessionsWeakReferenceArray;
+(id)allServiceSessions;
+(void)__registerNewServiceSession:(id)arg1 ;
+(id)_firewallUserNotificationForService:(id)arg1 ;
+(void)initialize;
-(int)registrationError;
-(int)registrationStatus;
-(IMDService *)service;
-(long long)proxyType;
-(id)server;
-(NSString *)accountID;
-(void)login;
-(void)logout;
-(id)canonicalFormOfID:(id)arg1 ;
-(BOOL)equalID:(id)arg1 andID:(id)arg2 ;
-(BOOL)useSSL;
-(BOOL)blockIdleStatus;
-(void)setBlockIdleStatus:(BOOL)arg1 ;
-(unsigned)blockingMode;
-(id)blockList;
-(id)allowList;
-(void)setBlockList:(id)arg1 ;
-(void)setBlockingMode:(unsigned)arg1 ;
-(void)setAllowList:(id)arg1 ;
-(void)requestGroups;
-(BOOL)hasCapability:(unsigned long long)arg1 ;
-(void)registerAccount:(id)arg1 ;
-(void)unregisterAccount:(id)arg1 ;
-(id)defaultChatSuffix;
-(void)authenticateAccount:(id)arg1 ;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 account:(id)arg3 ;
-(void)addAliases:(id)arg1 account:(id)arg2 ;
-(void)removeAliases:(id)arg1 account:(id)arg2 ;
-(void)unvalidateAliases:(id)arg1 account:(id)arg2 ;
-(void)validateAliases:(id)arg1 account:(id)arg2 ;
-(void)autoLogin;
-(void)renameGroup:(id)arg1 to:(id)arg2 ;
-(void)holdBuddyUpdates;
-(void)resumeBuddyUpdates;
-(FZChatRoomValidity)validityOfChatRoomName:(id)arg1 ;
-(void)eagerUploadTransfer:(id)arg1 ;
-(void)eagerUploadCancel:(id)arg1 ;
-(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 ;
-(void)_managedPrefsNotification:(id)arg1 ;
-(NSDictionary *)accountDefaults;
-(void)accountDefaultsChanged:(id)arg1 ;
-(NSDictionary *)buddyProperties;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)changeMyStatus:(id)arg1 changedKeys:(id)arg2 ;
-(void)sessionWillBecomeInactiveWithAccount:(id)arg1 ;
-(void)setIdleTime:(unsigned)arg1 ;
-(void)__forceSetLoginStatus:(unsigned)arg1 oldStatus:(unsigned)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5 account:(id)arg6 ;
-(void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3 ;
-(NSDictionary *)registrationAlertInfo;
-(void)loginWithAccount:(id)arg1 ;
-(void)scheduleTransactionLogTask:(id)arg1 ;
-(void)replayMessage:(id)arg1 ;
-(void)enqueReplayMessageCallback:(/*^block*/id)arg1 ;
-(id)otcUtilities;
-(id)broadcaster;
-(void)_setAutoReconnectTimer;
-(id)_newHashForChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)_networkChanged:(id)arg1 ;
-(void)_callMonitorStateChanged:(id)arg1 ;
-(void)_processConnectionMonitorUpdate;
-(void)_abandonSystemProxySettingsFetcher;
-(void)_abandonPWFetcher;
-(void)_clearAutoReconnectTimer;
-(void)_clearConnectionMonitor;
-(void)_updateConnectionMonitorFromAccountDefaultsIgnoringProxy:(BOOL)arg1 ;
-(void)_updateRoutingTimerWithInterval:(double)arg1 ;
-(void)_updateExpireStateTimerWithInterval:(double)arg1 ;
-(void)_updateWatchdogTimerWithInterval:(double)arg1 ;
-(void)leaveAllChats;
-(void)_updateConnectionMonitorWithRemoteHost:(id)arg1 ;
-(void)_reconnectIfNecessaryWithAccount:(id)arg1 ;
-(BOOL)accountShouldBeAlwaysLoggedIn;
-(void)_doLoginIgnoringProxy:(BOOL)arg1 withAccount:(id)arg2 ;
-(BOOL)overrideNetworkAvailability;
-(void)logoutServiceSessionWithAccount:(id)arg1 ;
-(void)_setPendingConnectionMonitorUpdate;
-(void)_processPotentialNetworkChange;
-(void)autoReconnectWithAccount:(id)arg1 ;
-(BOOL)allowedAsChild;
-(id)broadcasterForListenersWithCapabilities:(unsigned)arg1 ;
-(id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(id)broadcasterForChatListeners;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(void)autoReconnect;
-(void)logoutWithAccount:(id)arg1 ;
-(void)changeGroups:(id)arg1 ;
-(void)changeGroup:(id)arg1 changes:(id)arg2 ;
-(void)acceptSubscriptionRequest:(BOOL)arg1 from:(id)arg2 ;
-(void)requestSubscriptionTo:(id)arg1 ;
-(void)startWatchingBuddy:(id)arg1 ;
-(void)stopWatchingBuddy:(id)arg1 ;
-(void)requestProperty:(id)arg1 ofPerson:(id)arg2 ;
-(void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3 ;
-(void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 joinProperties:(id)arg8 ;
-(void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)leaveiMessageChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)removeChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)removePersonInfo:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)removePersonInfoFromiMessageChat:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)updateDisplayName:(id)arg1 fromDisplayName:(id)arg2 forChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendLogDumpMessageAtFilePath:(id)arg1 toRecipient:(id)arg2 shouldDeleteFile:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1 ;
-(void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)passwordUpdatedWithAccount:(id)arg1 ;
-(void)sendFileTransfer:(id)arg1 toPerson:(id)arg2 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 toChatID:(id)arg4 identifier:(id)arg5 style:(unsigned char)arg6 ;
-(void)sendDeleteCommand:(id)arg1 forChatGUID:(id)arg2 ;
-(void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3 ;
-(void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned)arg2 type:(unsigned)arg3 userInfo:(id)arg4 conference:(id)arg5 ;
-(void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3 ;
-(void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3 ;
-(void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3 ;
-(void)validateProfileWithAccount:(id)arg1 ;
-(void)closeSessionChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(BOOL)accountNeedsLogin;
-(BOOL)accountNeedsPassword;
-(void)updateConnectionMonitorWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(void)_reconnectIfNecessary;
-(BOOL)networkConditionsAllowLogin;
-(id)canonicalFormOfChatRoom:(id)arg1 ;
-(void)refreshServiceCapabilities;
-(id)broadcasterForChatObserverListeners;
-(id)broadcasterForAVConferenceListeners;
-(id)broadcasterForACConferenceListeners;
-(id)broadcasterForVCConferenceListeners;
-(void)_clearDowngradeMarkersForChat:(id)arg1 ;
-(NSString *)serverHost;
-(unsigned short)serverPort;
-(NSString *)proxyHost;
-(unsigned short)proxyPort;
-(NSString *)proxyAccount;
-(NSString *)proxyPassword;
-(void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 account:(id)arg6 ;
-(void)sendLocationSharingInfo:(id)arg1 toID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 account:(id)arg6 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 handleInfo:(id)arg6 account:(id)arg7 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 handleInfo:(id)arg7 account:(id)arg8 ;
-(void)canonicalizeChatIdentifier:(id*)arg1 style:(unsigned char*)arg2 ;
-(BOOL)shouldImitateGroupChatUsingChatRooms;
-(id)chatRoomForGroupChatIdentifier:(id)arg1 ;
-(id)groupChatIdentifierForChatRoom:(id)arg1 ;
-(id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3 ;
-(void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 allowWatchdog:(BOOL)arg4 account:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_mapRoomChatToGroupChat:(id*)arg1 style:(unsigned char*)arg2 ;
-(void)_updateWatchdogForMessageGUID:(id)arg1 ;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 ;
-(void)didSendMessageReadReceiptForMessageID:(id)arg1 account:(id)arg2 ;
-(void)didSendMessagePlayedReceiptForMessageID:(id)arg1 account:(id)arg2 ;
-(void)didSendMessageSavedReceiptForMessageID:(id)arg1 account:(id)arg2 ;
-(void)didLeaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 handleInfo:(id)arg4 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 handleInfo:(id)arg6 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 handleInfo:(id)arg7 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 handleInfo:(id)arg8 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6 account:(id)arg7 isSpam:(BOOL)arg8 spamExtensionName:(id)arg9 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6 account:(id)arg7 ;
-(BOOL)isAwaitingStorageTimer;
-(void)didReceiveError:(unsigned)arg1 forMessageID:(id)arg2 forceError:(BOOL)arg3 account:(id)arg4 ;
-(void)noteSuppressedMessageUpdate:(id)arg1 ;
-(void)_updateExpireStateForMessageGUID:(id)arg1 ;
-(BOOL)_didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 attempts:(long long)arg2 date:(id)arg3 account:(id)arg4 ;
-(BOOL)_hasSuppressedMessageID:(id)arg1 chatGUID:(id)arg2 ;
-(void)_didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 useMessageSuppression:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 useMessageSuppression:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 useMessageSuppression:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 useMessageSuppression:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didReceiveMessagePlayedReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 attempts:(long long)arg7 useMessageSuppression:(BOOL)arg8 account:(id)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 forceDate:(id)arg4 ;
-(void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 forceDate:(id)arg5 ;
-(void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 forceDate:(id)arg5 itemIsComingFromStorage:(BOOL)arg6 ;
-(id)loginIDForAccount:(id)arg1 ;
-(void)_updateRoutingForMessageGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned)arg3 account:(id)arg4 ;
-(void)notifyDidSendMessageID:(id)arg1 shouldNotify:(BOOL)arg2 ;
-(void)notifyDidSendMessageID:(id)arg1 account:(id)arg2 shouldNotify:(BOOL)arg3 ;
-(void)_endMessageSuppressionForChatGUID:(id)arg1 ;
-(void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 ;
-(void)didReceiveMessages:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 ;
-(void)_storeMessage:(id)arg1 chatIdentifier:(id)arg2 localChat:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 messagesToPostArray:(id)arg6 ;
-(id)_transcodeController;
-(BOOL)testOverrideTextValidationDidFail;
-(id)_autoReplier;
-(void)_updateInputMessage:(id)arg1 forExistingMessage:(id)arg2 ;
-(void)_suppresionTimerFired:(id)arg1 ;
-(void)_setSuppressedMessage:(id)arg1 inChatWithGUID:(id)arg2 ;
-(void)_checkMessageForOneTimeCodes:(id)arg1 ;
-(void)useChatRoom:(id)arg1 forGroupChatIdentifier:(id)arg2 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 handleInfo:(id)arg7 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 handleInfo:(id)arg8 account:(id)arg9 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 handleInfo:(id)arg8 account:(id)arg9 isSpam:(BOOL)arg10 spamExtensionName:(id)arg11 ;
-(void)unregisterChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 unformattedNumber:(id)arg3 countryCode:(id)arg4 forChat:(id)arg5 style:(unsigned char)arg6 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7 account:(id)arg8 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7 account:(id)arg8 destinationCallerID:(id)arg9 ;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)_markChatAsDowngraded:(id)arg1 ;
-(void)_handleRoutingWithDictionary:(id)arg1 ;
-(void)_routingTimerFired;
-(BOOL)canMakeExpireStateChecks;
-(void)_handleExpireStateDictionary:(id)arg1 ;
-(void)_expireStateTimerFired;
-(void)_handleWatchdogWithDictionary:(id)arg1 ;
-(void)_watchdogTimerFired;
-(void)_storageTimerFired;
-(unsigned long long)pendingReadReceiptFromStorageCount;
-(void)setPendingReadReceiptFromStorageCount:(unsigned long long)arg1 ;
-(void)_updateStorageTimerWithInterval:(double)arg1 ;
-(void)noteLastItemProcessed;
-(void)registerChat:(id)arg1 groupID:(id)arg2 style:(unsigned char)arg3 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 ;
-(BOOL)isChatRegistered:(id)arg1 style:(unsigned char)arg2 ;
-(void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 allowWatchdog:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)didLeaveChat:(id)arg1 style:(unsigned char)arg2 account:(id)arg3 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 account:(id)arg4 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 isSpam:(BOOL)arg6 spamExtensionName:(id)arg7 ;
-(void)didReceiveReplaceMessageID:(int)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didReceiveErrorMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didReceiveError:(unsigned)arg1 forMessageID:(id)arg2 forceError:(BOOL)arg3 ;
-(void)didSendMessageReadReceiptForMessageID:(id)arg1 ;
-(void)didSendMessagePlayedReceiptForMessageID:(id)arg1 ;
-(void)didSendMessageSavedReceiptForMessageID:(id)arg1 ;
-(BOOL)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2 ;
-(BOOL)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2 account:(id)arg3 ;
-(void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveMessagePlayedReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 useMessageSuppression:(BOOL)arg7 account:(id)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)notifyDidSendMessageID:(id)arg1 ;
-(void)endMessageSuppression;
-(void)didReceiveDisplayNameChange:(id)arg1 fromID:(id)arg2 toIdentifier:(id)arg3 forChat:(id)arg4 style:(unsigned char)arg5 account:(id)arg6 ;
-(void)didReceiveInvitation:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 forChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)autoReplier:(id)arg1 generatedAutoReplyText:(id)arg2 forChat:(id)arg3 ;
-(void)autoReplier:(id)arg1 receivedUrgentRequestForMessages:(id)arg2 ;
-(void)didSendBalloonPayload:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 messageGUID:(id)arg4 account:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)didReceiveBalloonPayload:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 messageGUID:(id)arg4 account:(id)arg5 ;
-(void)noteItemFromStorage:(id)arg1 ;
-(void)noteLastItemFromStorage:(id)arg1 ;
-(void)incrementPendingReadReceiptFromStorageCount;
-(void)decrementPendingReadReceiptFromStorageCount;
-(void)beginBuddyChanges;
-(void)endBuddyChanges;
-(id)localPropertiesOfBuddy:(id)arg1 ;
-(NSDictionary *)buddyPictures;
-(id)pictureOfBuddy:(id)arg1 ;
-(id)pictureKeyForBuddy:(id)arg1 ;
-(NSArray *)allBuddies;
-(void)markBuddiesAsChanged:(id)arg1 ;
-(void)changeProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3 ;
-(void)clearPropertiesOfBuddy:(id)arg1 ;
-(id)property:(id)arg1 ofBuddy:(id)arg2 ;
-(id)localProperty:(id)arg1 ofBuddy:(id)arg2 ;
-(void)clearLocalProperties;
-(void)changeLocalProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3 ;
-(void)disallowReconnection;
-(void)joinChat:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 joinProperties:(id)arg4 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)invitePerson:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 joinProperties:(id)arg7 ;
-(void)leaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)leaveiMessageChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)removeChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)declineInvitationToChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)closeSessionChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)noteBadPassword;
-(void)loginServiceSessionWithAccount:(id)arg1 ;
-(void)joinChat:(id)arg1 style:(unsigned char)arg2 joinProperties:(id)arg3 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 joinProperties:(id)arg5 ;
-(void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)_handleFirewallUserNotificationDidFinish:(id)arg1 ;
-(BOOL)warnIfPortBlocked:(int)arg1 forAction:(id)arg2 ;
-(void)userNotificationDidFinish:(id)arg1 ;
-(void)_login_serverSettingsReadyWithAccount:(id)arg1 ;
-(void)_data_connection_readyWithAccount:(id)arg1 ;
-(void)_login_usernameAndPasswordReadyWithAccount:(id)arg1 ;
-(void)_login_checkUsernameAndPasswordWithAccount:(id)arg1 ;
-(void)_doLoginIgnoringProxy:(BOOL)arg1 ;
-(void)_wentOfflineWithAccount:(id)arg1 ;
-(void)systemProxySettingsFetcher:(id)arg1 retrievedHost:(id)arg2 port:(unsigned short)arg3 protocol:(long long)arg4 ;
-(void)systemProxySettingsFetcher:(id)arg1 retrievedAccount:(id)arg2 password:(id)arg3 ;
-(void)serviceSessionDidLoginWithAccount:(id)arg1 ;
-(void)serviceSessionDidLogoutWithAccount:(id)arg1 ;
-(void)serviceSessionDidLogoutWithMessage:(id)arg1 reason:(int)arg2 properties:(id)arg3 account:(id)arg4 ;
-(void)_autoReconnectTimer:(id)arg1 ;
-(IMDAccount *)account;
-(unsigned long long)capabilities;
-(NSArray *)accounts;
-(void)removeAccount:(id)arg1 ;
-(id)loginID;
-(void)addAccount:(id)arg1 ;
-(void)dealloc;
-(BOOL)isActive;
-(id)groups;
-(NSString *)displayName;
-(NSString *)password;
@end

