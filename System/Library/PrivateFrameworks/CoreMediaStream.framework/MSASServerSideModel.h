/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/MSASModelBase.h>
#import <libobjc.A.dylib/MSASModel.h>
#import <libobjc.A.dylib/MSASStateMachineDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, MSASStateMachine, MSAlbumSharingDaemon, NSCountedSet, NSObject, MSASServerSideModelGroupedCommandQueue, MSASPendingChanges;

@interface MSASServerSideModel : MSASModelBase <MSASModel, MSASStateMachineDelegate> {

	MSASStateMachine* _counterpartInstance;
	MSAlbumSharingDaemon* _daemon;
	NSCountedSet* _observers;
	NSObject*<OS_dispatch_queue> _eventQueue;
	MSASServerSideModelGroupedCommandQueue* _commandQueue;
	NSObject*<OS_dispatch_queue> _memberQueue;
	MSASPendingChanges* _pendingChanges;

}

@property (nonatomic,retain) NSCountedSet * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) MSASStateMachine * stateMachine; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                           //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) MSASServerSideModelGroupedCommandQueue * commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,retain) MSASPendingChanges * pendingChanges;                                //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (assign,nonatomic,__weak) MSAlbumSharingDaemon * daemon;                               //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> eventQueue;                            //@synthesize eventQueue=_eventQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * personID; 
@property (assign,nonatomic) int maxGroupedCallbackEventBatchCount; 
@property (assign,nonatomic) double maxGroupedCallbackEventIdleInterval; 
@property (assign,nonatomic) double maxGroupedCallbackEventStaleness; 
@property (assign,nonatomic) MSASStateMachine * MSASCounterpartInstance;                         //@synthesize counterpartInstance=_counterpartInstance - In the implementation block
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)shutDown;
-(MSASServerSideModelGroupedCommandQueue *)commandQueue;
-(void)setCommandQueue:(MSASServerSideModelGroupedCommandQueue *)arg1 ;
-(void)setDaemon:(MSAlbumSharingDaemon *)arg1 ;
-(MSAlbumSharingDaemon *)daemon;
-(void)MSASStateMachine:(id)arg1 didFinishSendingInvitationByPhone:(id)arg2 toOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)retainBusy;
-(void)releaseBusy;
-(id)initWithPersonID:(id)arg1 ;
-(void)setFocusAlbumGUID:(id)arg1 ;
-(void)setFocusAssetCollectionGUID:(id)arg1 ;
-(BOOL)hasCommandsInGroupedCommandQueue;
-(int)assetsInDownloadQueueCount;
-(void)shutDownForDestruction:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)hasEnqueuedActivities;
-(id)albumGUIDs;
-(id)albumWithGUID:(id)arg1 ;
-(id)accessControlsForAlbumWithGUID:(id)arg1 ;
-(id)accessControlGUIDsForAlbumWithGUID:(id)arg1 ;
-(id)accessControlWithGUID:(id)arg1 ;
-(id)invitations;
-(id)invitationGUIDs;
-(id)invitationForAlbumWithGUID:(id)arg1 ;
-(id)invitationWithGUID:(id)arg1 ;
-(id)isPublicAccessEnabledForAlbumWithGUID:(id)arg1 ;
-(id)assetCollectionsInAlbumWithGUID:(id)arg1 ;
-(id)assetCollectionGUIDsInAlbumWithGUID:(id)arg1 ;
-(id)assetCollectionWithGUID:(id)arg1 ;
-(void)videoURLForAssetCollectionWithGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)videoURLsForAssetCollectionWithGUID:(id)arg1 forMediaAssetType:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)commentsForAssetCollectionWithGUID:(id)arg1 ;
-(id)commentWithGUID:(id)arg1 ;
-(id)captionForAssetCollectionWithGUID:(id)arg1 ;
-(BOOL)isAlbumWithGUIDMarkedAsUnviewed:(id)arg1 ;
-(int)unviewedAlbumCount;
-(BOOL)isAssetCollectionWithGUIDMarkedAsUnviewed:(id)arg1 ;
-(int)unviewedAssetCollectionCountForAlbumWithGUID:(id)arg1 ;
-(id)earliestUnviewedAssetCollectionGUIDInAlbumWithGUID:(id)arg1 ;
-(id)lastViewedCommentDateForAssetCollectionWithGUID:(id)arg1 ;
-(void)setUserInfo:(id)arg1 forAlbumWithGUID:(id)arg2 ;
-(id)userInfoForAlbumWithGUID:(id)arg1 ;
-(void)setUserInfo:(id)arg1 forAssetCollectionWithGUID:(id)arg2 ;
-(id)userInfoForAssetCollectionWithGUID:(id)arg1 ;
-(void)setUserInfo:(id)arg1 forAccessControlWithGUID:(id)arg2 ;
-(id)userInfoForAccessControlWithGUID:(id)arg1 ;
-(void)setUserInfo:(id)arg1 forInvitationWithGUID:(id)arg2 ;
-(id)userInfoForInvitationWithGUID:(id)arg1 ;
-(void)setUserInfo:(id)arg1 forCommentWithGUID:(id)arg2 ;
-(id)userInfoForCommentWithGUID:(id)arg1 ;
-(id)serverCommunicationBackoffDate;
-(void)refreshResetSync:(BOOL)arg1 info:(id)arg2 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 info:(id)arg3 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 info:(id)arg3 ;
-(void)refreshAccessControlListForAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)addAlbum:(id)arg1 info:(id)arg2 ;
-(void)modifyAlbumMetadata:(id)arg1 info:(id)arg2 ;
-(void)deleteAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 info:(id)arg2 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 moveLastViewedAssetCollectionMarker:(BOOL)arg2 info:(id)arg3 ;
-(void)subscribeToAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)acceptInvitationWithToken:(id)arg1 info:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)acceptInvitationWithGUID:(id)arg1 info:(id)arg2 ;
-(void)rejectInvitationWithGUID:(id)arg1 info:(id)arg2 ;
-(void)markAsSpamAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)markAsSpamInvitationWithGUID:(id)arg1 info:(id)arg2 ;
-(void)markAsSpamInvitationWithToken:(id)arg1 info:(id)arg2 ;
-(void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 info:(id)arg3 ;
-(void)removeAccessControlEntryWithGUID:(id)arg1 info:(id)arg2 ;
-(void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 info:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 info:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 info:(id)arg3 ;
-(void)deleteAssetCollectionWithGUID:(id)arg1 info:(id)arg2 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 info:(id)arg3 ;
-(void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 info:(id)arg3 ;
-(void)deleteCommentWithGUID:(id)arg1 info:(id)arg2 ;
-(void)forgetEverythingInfo:(id)arg1 ;
-(void)forgetEverythingInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)refreshResetSync:(BOOL)arg1 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 ;
-(void)refreshAccessControlListForAlbumWithGUID:(id)arg1 ;
-(void)addAlbum:(id)arg1 ;
-(void)modifyAlbumMetadata:(id)arg1 ;
-(void)deleteAlbumWithGUID:(id)arg1 ;
-(void)markAlbumGUIDAsViewed:(id)arg1 ;
-(void)subscribeToAlbumWithGUID:(id)arg1 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg1 ;
-(void)acceptInvitationWithToken:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)acceptInvitationWithGUID:(id)arg1 ;
-(void)rejectInvitationWithGUID:(id)arg1 ;
-(void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 ;
-(void)removeAccessControlEntryWithGUID:(id)arg1 ;
-(void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 ;
-(void)deleteAssetCollectionWithGUID:(id)arg1 ;
-(void)deleteAssetCollectionsWithGUIDs:(id)arg1 ;
-(void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 ;
-(void)deleteCommentWithGUID:(id)arg1 ;
-(void)forgetEverything;
-(void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 ;
-(void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 ;
-(id)serverSideConfiguration;
-(id)focusAssetCollectionGUID;
-(BOOL)errorIsCancellation:(id)arg1 ;
-(int)maxGroupedCallbackEventBatchCount;
-(void)setMaxGroupedCallbackEventBatchCount:(int)arg1 ;
-(double)maxGroupedCallbackEventIdleInterval;
-(void)setMaxGroupedCallbackEventIdleInterval:(double)arg1 ;
-(double)maxGroupedCallbackEventStaleness;
-(void)setMaxGroupedCallbackEventStaleness:(double)arg1 ;
-(void)MSASStateMachineDidStart:(id)arg1 ;
-(void)MSASStateMachineDidFindGlobalResetSync:(id)arg1 info:(id)arg2 ;
-(void)MSASStateMachine:(id)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg2 albumChanges:(id)arg3 accessControlChangesForAlbumGUIDS:(id)arg4 info:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 didFindAlbumChanges:(id)arg2 info:(id)arg3 ;
-(void)MSASStateMachine:(id)arg1 didFindAccessControlChangesForAlbumGUIDS:(id)arg2 info:(id)arg3 ;
-(void)MSASStateMachine:(id)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg2 info:(id)arg3 ;
-(void)MSASStateMachine:(id)arg1 didFinishCheckingForChangesInfo:(id)arg2 error:(id)arg3 ;
-(void)MSASStateMachine:(id)arg1 willCheckForUpdatesInAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASStateMachine:(id)arg1 didFindAssetCollectionChanges:(id)arg2 forAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFindChangesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFinishCheckingForUpdatesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFinishCheckingForUpdatesInAlbums:(id)arg2 info:(id)arg3 ;
-(void)MSASStateMachine:(id)arg1 didFindNewURLString:(id)arg2 forAlbumWithGUID:(id)arg3 info:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFinishGettingAccessControls:(id)arg2 forAlbum:(id)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 willUpdateAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFinishUpdatingAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 didFinishSubscribingToAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFinishUnsubscribingFromAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFinishMarkingAsSpamInvitationForAlbum:(id)arg2 invitationGUID:(id)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 didFinishMarkingAsSpamInvitationForToken:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFindCommentChanges:(id)arg2 inAssetCollectionWithGUID:(id)arg3 inAlbumWithGUID:(id)arg4 info:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 didFinishCheckingForCommentChangesInAssetCollectionWithGUID:(id)arg2 largestCommentID:(int)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 willCheckForAlbumSyncedStateChangesInAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASStateMachine:(id)arg1 didFindAssetCollectionSyncedState:(id)arg2 forAssetCollectionGUID:(id)arg3 inAlbum:(id)arg4 assetCollectionStateCtag:(id)arg5 info:(id)arg6 ;
-(void)MSASStateMachine:(id)arg1 didFindAlbumSyncedState:(id)arg2 forAlbum:(id)arg3 info:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFinishCheckingForAlbumSyncedStateChangesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 newAlbumStateCtag:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 didFinishSettingSyncedStateForAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 newAlbumStateCtag:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 didFinishSettingSyncedStateForAssetCollection:(id)arg2 inAlbum:(id)arg3 assetStateCtag:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(id)MSASStateMachineDidRequestAlbumStateCtagForAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(id)MSASStateMachineDidRequestAlbumURLStringForAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(id)MSASStateMachineDidRequestAlbumWithGUID:(id)arg1 ;
-(id)MSASStateMachineDidRequestAssetCollectionStateCtagForAssetCollectionWithGUID:(id)arg1 info:(id)arg2 ;
-(BOOL)MSASStateMachine:(id)arg1 didQueryIsAssetCollectionWithGUIDInModel:(id)arg2 ;
-(void)MSASStateMachine:(id)arg1 didFinishEnqueueingAssetsForDownload:(id)arg2 inAlbumWithGUID:(id)arg3 ;
-(void)MSASStateMachine:(id)arg1 didFinishRetrievingAsset:(id)arg2 inAlbum:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFinishDeletingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFinishDeletingAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 didFinishDeletingComment:(id)arg2 inAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(void)MSASStateMachine:(id)arg1 didFinishCreatingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didFinishUpdatingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg1 didRequestAssetsForAddingAssetCollections:(id)arg2 inAlbum:(id)arg3 specifications:(id)arg4 info:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 didFinishAddingAssetCollection:(id)arg2 toAlbum:(id)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 didFinishAddingSharingRelationships:(id)arg2 toOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 didFinishRemovingSharingRelationship:(id)arg2 fromOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)MSASStateMachine:(id)arg1 didFinishAddingComment:(id)arg2 toAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(void)MSASStateMachine:(id)arg1 didFireScheduledEvent:(id)arg2 forAssetCollectionGUID:(id)arg3 albumGUID:(id)arg4 info:(id)arg5 ;
-(void)MSASStateMachineDidUpdateServerCommunicationBackoffDate:(id)arg1 ;
-(MSASStateMachine *)MSASCounterpartInstance;
-(void)setMSASCounterpartInstance:(MSASStateMachine *)arg1 ;
-(void)reconstruct;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
-(id)initWithPersonID:(id)arg1 databasePath:(id)arg2 eventQueue:(id)arg3 ;
-(void)eventQueuePerformBlockOnObservers:(/*^block*/id)arg1 ;
-(id)dbQueueAlbumGUIDs;
-(BOOL)dbQueueAlbumWithGUID:(id)arg1 outObject:(id*)arg2 outName:(id*)arg3 outCtag:(id*)arg4 outForeignCtag:(id*)arg5 outURLString:(id*)arg6 outUserInfoData:(id*)arg7 ;
-(id)dbQueueAccessControlsForAlbumWithGUID:(id)arg1 ;
-(id)dbQueueAccessControlGUIDsForAlbumWithGUID:(id)arg1 ;
-(BOOL)dbQueueAccessControlWithGUID:(id)arg1 outObject:(id*)arg2 outAlbumGUID:(id*)arg3 outEmail:(id*)arg4 outUserInfoData:(id*)arg5 ;
-(id)dbQueueInvitationForAlbumWithGUID:(id)arg1 ;
-(BOOL)dbQueueInvitationWithAlbumGUID:(id)arg1 outObject:(id*)arg2 outInvitationGUID:(id*)arg3 outEmail:(id*)arg4 outUserInfoData:(id*)arg5 ;
-(BOOL)dbQueueInvitationWithGUID:(id)arg1 outObject:(id*)arg2 outAlbumGUID:(id*)arg3 outEmail:(id*)arg4 outUserInfoData:(id*)arg5 ;
-(BOOL)dbQueueAssetCollectionWithGUID:(id)arg1 outObject:(id*)arg2 outCtag:(id*)arg3 outAlbumGUID:(id*)arg4 outBatchDate:(id*)arg5 outPhotoDate:(id*)arg6 outPhotoNumber:(long long*)arg7 outUserInfoData:(id*)arg8 ;
-(id)dbQueueAssetCollectionGUIDsInAlbumWithGUID:(id)arg1 ;
-(id)dbQueueCommentsForAssetCollectionWithGUID:(id)arg1 ;
-(BOOL)dbQueueCommentWithGUID:(id)arg1 outObject:(id*)arg2 outID:(unsigned long long*)arg3 outTimestamp:(id*)arg4 outAssetCollectionGUID:(id*)arg5 outIsCaption:(BOOL*)arg6 outUserInfoData:(id*)arg7 ;
-(id)dbQueueLookupOrCreateAssetCollectionWithGUID:(id)arg1 outAlbum:(id*)arg2 ;
-(id)dbQueueMaximumCommentIDForAssetCollectionWithGUID:(id)arg1 ;
-(id)dbQueueLookupOrCreateAlbumWithGUID:(id)arg1 ;
-(void)dbQueueSetAlbum:(id)arg1 info:(id)arg2 ;
-(void)dbQueueDeleteAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)dbQueueSetAlbumMetadataAlbumGUID:(id)arg1 key:(id)arg2 value:(id)arg3 info:(id)arg4 ;
-(void)dbQueueSetUnviewedState:(BOOL)arg1 onAlbumWithGUID:(id)arg2 info:(id)arg3 ;
-(id)dbQueueMaximumPhotoNumberForAlbumWithGUID:(id)arg1 ;
-(BOOL)dbQueueAlbumMetadataWithAlbumGUID:(id)arg1 key:(id)arg2 outValue:(id*)arg3 ;
-(int)dbQueueUnviewedAssetCollectionCountForAlbumWithGUID:(id)arg1 ;
-(void)eventQueueNotifyObserversOfUpdatedUnviewedCountInAlbum:(id)arg1 unviewedCount:(int)arg2 info:(id)arg3 ;
-(void)dbQueueDeleteInvitationForAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)dbQueueSetInvitation:(id)arg1 info:(id)arg2 ;
-(id)_invalidInvitationGUIDErrorWithGUID:(id)arg1 ;
-(void)dbQueueDeleteInvitationWithGUID:(id)arg1 info:(id)arg2 ;
-(id)_protocolErrorForUnderlyingError:(id)arg1 ;
-(void)dbQueueSetAccessControl:(id)arg1 info:(id)arg2 ;
-(void)dbQueueDeleteAccessControlWithGUID:(id)arg1 info:(id)arg2 ;
-(id)_invalidAccessControlGUIDErrorwithGUID:(id)arg1 ;
-(void)dbQueueSetAssetCollection:(id)arg1 inAlbumWithGUID:(id)arg2 info:(id)arg3 ;
-(id)_invalidAssetCollectionGUIDErrorwithGUID:(id)arg1 ;
-(void)dbQueueDeleteAssetCollectionWithGUID:(id)arg1 info:(id)arg2 ;
-(void)dbQueueSetAssetCollectionMetadataAssetCollectionGUID:(id)arg1 key:(id)arg2 value:(id)arg3 info:(id)arg4 ;
-(void)dbQueueSetUnviewedState:(BOOL)arg1 onAssetCollectionWithGUID:(id)arg2 info:(id)arg3 ;
-(void)dbQueueSetComment:(id)arg1 forAssetCollectionWithGUID:(id)arg2 info:(id)arg3 ;
-(id)dbQueueLookupOrCreateCommentWithGUID:(id)arg1 outAssetCollection:(id*)arg2 outAlbum:(id*)arg3 ;
-(void)dbQueueDeleteCommentWithGUID:(id)arg1 info:(id)arg2 ;
-(void)dbQueueDeleteAllAlbumMetadataForAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)dbQueueDeleteAllAssetCollectionMetadataForAssetCollectionWithGUID:(id)arg1 info:(id)arg2 ;
-(BOOL)dbQueueAssetCollectionMetadataWithAssetCollectionGUID:(id)arg1 key:(id)arg2 outValue:(id*)arg3 ;
-(int)dbQueueCountOfUnviewedAssetCollectionsInAlbumWithGUID:(id)arg1 ;
-(int)dbQueueUnviewedAlbumCount;
-(void)dbQueueFlushAllPendingCommentCheckOperations;
-(id)dbQueuePendingCommentCheckOperations;
-(void)dbQueueDeleteAllPendingCommentCheckOperations;
-(void)flushAllPendingCommentCheckOperations;
-(void)dbQueueUpdateAlbumCtag:(id)arg1 ;
-(BOOL)dbQueueCheckToClearUnviewedStateOnAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)_reconstruct;
-(void)dbQueueAddCommentCheckOperation:(id)arg1 ;
-(BOOL)dbQueueAssetCollectionContainsCommentsFromMeAssetCollectionGUID:(id)arg1 ;
-(BOOL)dbQueueCommentWithID:(int)arg1 assetCollectionGUID:(id)arg2 outObject:(id*)arg3 outGUID:(id*)arg4 outTimestamp:(id*)arg5 outIsCaption:(BOOL*)arg6 outUserInfoData:(id*)arg7 ;
-(BOOL)dbQueueCheckToClearUnviewedStateOnAssetCollectionWithGUID:(id)arg1 info:(id)arg2 ;
-(id)initWithPersonID:(id)arg1 databasePath:(id)arg2 ;
-(void)dbQueueDeleteAlbumMetadataAlbumGUID:(id)arg1 key:(id)arg2 info:(id)arg3 ;
-(void)dbQueueDeleteAssetCollectionMetadataAssetCollectionGUID:(id)arg1 key:(id)arg2 info:(id)arg3 ;
-(void)enqueueCommand:(id)arg1 ;
-(int)commandCount;
-(id)nextCommandGroupMaxCount:(int)arg1 outCommand:(id*)arg2 outLastCommandIndex:(long long*)arg3 ;
-(void)removeCommandsUpToCommandIndex:(long long)arg1 ;
-(void)performBlockOnObservers:(/*^block*/id)arg1 ;
-(id)albums;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 ;
-(MSASPendingChanges *)pendingChanges;
-(void)setPendingChanges:(MSASPendingChanges *)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSCountedSet *)arg1 ;
-(NSCountedSet *)observers;
-(void)addObserver:(id)arg1 ;
-(void)cancel;
-(void)start;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(void)setEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MSASStateMachine *)stateMachine;
@end

