/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MailAccount.h>

@protocol ASAccountActorMessages;
@class NSObject, DAAccount, MFRecursiveLock, MFDAOfflineCache, NSString, NSArray, MFDAMailbox, NSMutableDictionary, NSLock, NSSet, NSCountedSet, MFMailboxUid;

@interface DAMailAccount : MailAccount {

	NSObject*<ASAccountActorMessages> _accountConduit;
	DAAccount* _daAccount;
	MFRecursiveLock* _offlineCacheLock;
	MFDAOfflineCache* _offlineCache;
	BOOL _isNetworkReachable;
	NSString* _cachedAccountID;
	NSString* _cachedAccountPersistentUUID;
	NSString* _cachedDisplayName;
	NSString* _cachedEmailAddress;
	NSArray* _cachedEmailAddresses;
	NSString* _cachedIconString;
	BOOL _cachedIsActive;
	BOOL _cachedIsHotmailAccount;
	BOOL _cachedCalendarEnabled;
	BOOL _cachedSecureMIMEEnabled;
	BOOL _cachedPerMessageEncryptionEnabled;
	BOOL _cachedSecureMIMEShouldSign;
	BOOL _cachedSecureMIMEShouldEncrypt;
	BOOL _cachedRestrictMessageTransfersToOtherAccounts;
	BOOL _cachedRestrictSendingFromExternalProcesses;
	BOOL _cachedRestrictSyncingRecents;
	BOOL _cachedIsManaged;
	BOOL _cachedSupportsMailDrop;
	BOOL _cachedArchiveByDefault;
	BOOL _cachedSourceIsManaged;
	BOOL _cachedStoreDraftsOnServer;
	NSString* _cachedInboxFolderID;
	NSString* _cachedSentMessagesFolderID;
	NSString* _cachedTrashFolderID;
	NSString* _cachedJunkFolderID;
	NSString* _cachedDraftsFolderID;
	MFDAMailbox* _temporaryInbox;
	BOOL _loadedInitialMailboxList;
	BOOL _receivedInitialMailboxUpdate;
	BOOL _doneInitialInboxCheck;
	BOOL _observingPushedFoldersPrefsChanged;
	int _supportsServerSearch;
	int _supportsMessageFlagging;
	int _supportsConversations;
	int _supportsServerDrafts;
	unsigned _daysToSync;
	NSMutableDictionary* _requestQueuesByFolderID;
	NSLock* _watchedFolderIdsLock;
	NSSet* _watchedFolderIds;
	NSCountedSet* _userFocusMailboxIds;
	NSString* _folderTag;
	MFMailboxUid* _virtualAllSearchMailbox;

}

@property (nonatomic,retain) MFMailboxUid * virtualAllSearchMailbox;              //@synthesize virtualAllSearchMailbox=_virtualAllSearchMailbox - In the implementation block
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(id)displayedShortAccountTypeString;
+(id)_URLScheme;
+(id)csAccountTypeString;
+(Class)_accountConduitClass;
+(id)folderIDForRelativePath:(id)arg1 accountID:(id*)arg2 ;
+(id)accountIDForDirectoryName:(id)arg1 isAccountDirectory:(BOOL*)arg2 ;
-(id)hostname;
-(void)_reachabilityChanged:(id)arg1 ;
-(id)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(BOOL)arg4 ;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(BOOL)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(BOOL)arg2 ;
-(BOOL)shouldArchiveByDefault;
-(id)fetchLimits;
-(BOOL)performRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3 ;
-(BOOL)isManaged;
-(id)accountForRenewingCredentials;
-(BOOL)canGoOffline;
-(BOOL)supportsMailDrop;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(void)setDAAccount:(id)arg1 ;
-(id)initWithDAAccount:(id)arg1 ;
-(void)resetSpecialMailboxes;
-(id)primaryMailboxUid;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(BOOL)restrictedFromSendingExternally;
-(id)deliveryAccount;
-(id)allMailboxUids;
-(id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2 ;
-(id)allMailMailboxUid;
-(BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3 ;
-(void)_synchronouslyLoadListingForParent:(id)arg1 ;
-(BOOL)_deleteMailbox:(id)arg1 ;
-(Class)storeClass;
-(id)mailboxPathExtension;
-(id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5 ;
-(id)_URLScheme;
-(id)_infoForMatchingURL:(id)arg1 ;
-(id)mailboxUidForInfo:(id)arg1 ;
-(int)emptyFrequencyForMailboxType:(int)arg1 ;
-(id)statisticsKind;
-(id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned)arg3 dictionary:(id)arg4 ;
-(id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5 ;
-(BOOL)restrictedFromTransferingMessagesToOtherAccounts;
-(BOOL)isMailboxLocalForType:(int)arg1 ;
-(id)unsupportedContinuationTypes;
-(id)uniqueIdForPersistentConnection;
-(void)fetchMailboxList;
-(BOOL)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id*)arg2 ;
-(void)startListeningForNotifications;
-(BOOL)shouldAppearInMailSettings;
-(BOOL)supportsRemoteAppend;
-(BOOL)supportsMailboxEditing;
-(BOOL)supportsMessageFlagging;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(id)meetingStorePersistentID;
-(BOOL)reconstituteOrphanedMeetingInMessage:(id)arg1 ;
-(id)unactionableInvitationICSRepresentationInMessage:(id)arg1 summary:(id*)arg2 ;
-(BOOL)canReceiveNewMailNotifications;
-(void)addUserFocusMailbox:(id)arg1 ;
-(void)removeUserFocusMailbox:(id)arg1 ;
-(id)pushedMailboxUids;
-(BOOL)supportsUserPushedMailboxes;
-(void)changePushedMailboxUidsAdded:(id)arg1 deleted:(id)arg2 ;
-(id)iconString;
-(id)signingIdentityPersistentReferenceForAddress:(id)arg1 ;
-(void)setSigningIdentityPersistentReference:(id)arg1 forAddress:(id)arg2 ;
-(id)encryptionIdentityPersistentReferenceForAddress:(id)arg1 ;
-(void)setEncryptionIdentityPersistentReference:(id)arg1 forAddress:(id)arg2 ;
-(BOOL)secureMIMEEnabled;
-(BOOL)perMessageEncryptionEnabled;
-(int)secureCompositionSigningPolicyForAddress:(id)arg1 ;
-(int)secureCompositionEncryptionPolicyForAddress:(id)arg1 ;
-(id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg1 error:(id*)arg2 ;
-(BOOL)restrictedFromSyncingRecents;
-(BOOL)supportsThreadOperations;
-(id)mailboxForFolderID:(id)arg1 ;
-(MFMailboxUid *)virtualAllSearchMailbox;
-(void)_loadChildrenForParent:(id)arg1 fromMap:(id)arg2 intoArray:(id)arg3 replacingInbox:(id)arg4 withID:(id)arg5 ;
-(BOOL)isRunningInDisallowedBundle;
-(BOOL)_isUnitTesting;
-(id)accountConduit;
-(id)_offlineCache;
-(BOOL)_replayOfflineCache:(id)arg1 ;
-(BOOL)supportsServerDrafts;
-(void)foldersContentsChanged:(id)arg1 ;
-(void)accountHierarchyChanged:(id)arg1 ;
-(void)_ensureWeHaveLoadedInitialMailboxList;
-(id)folderIDForMailbox:(id)arg1 ;
-(void)_performFolderChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3 ;
-(void)_deferMailboxRequests:(id)arg1 mailbox:(id)arg2 offlineCache:(id)arg3 ;
-(id)syncAnchorForFolderID:(id)arg1 mailbox:(id*)arg2 ;
-(void)setSyncAnchor:(id)arg1 forFolderID:(id)arg2 mailbox:(id*)arg3 ;
-(id)_relativePathForType:(int)arg1 ;
-(id)_relativePathSpecialMailboxUidWithType:(int)arg1 create:(BOOL)arg2 ;
-(id)_inboxFolderID;
-(void)pushedFoldersPrefsChanged:(id)arg1 ;
-(id)_updateWatchedFolderIdsAndNotify:(BOOL)arg1 ;
-(void)performSearchQuery:(id)arg1 ;
-(void)cancelSearchQuery:(id)arg1 ;
-(id)_watchedFolderIds;
-(id)_folderIdsForMailboxUids:(id)arg1 ;
-(BOOL)finishedInitialMailboxListLoad;
-(id)syncAnchorForMailbox:(id)arg1 ;
-(void)addRequest:(id)arg1 mailbox:(id)arg2 consumer:(id)arg3 ;
-(void)processRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3 ;
-(BOOL)supportsServerSearch;
-(unsigned)daysToSync;
-(void)setVirtualAllSearchMailbox:(MFMailboxUid *)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(void)stopListeningForNotifications;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)dealloc;
-(id)identifier;
-(BOOL)isActive;
-(void)invalidate;
-(BOOL)sourceIsManaged;
-(id)uniqueId;
-(id)displayName;
-(id)username;
@end

