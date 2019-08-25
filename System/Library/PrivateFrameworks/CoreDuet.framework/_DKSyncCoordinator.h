/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, _DKThrottledActivity, NSString, _DKSyncState, APSConnection, NSArray, NSHashTable, _DKKnowledgeStorage;

@interface _DKSyncCoordinator : NSObject <APSConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _executionQueue;
	_DKThrottledActivity* _activityThrottler;
	NSString* _triggeredSyncDelayActivityName;
	NSString* _syncActivityName;
	_DKSyncState* _syncState;
	BOOL _periodJobIsRegistered;
	BOOL _databaseObserversRegistered;
	BOOL _cloudSyncAvailablityObserverRegistered;
	BOOL _siriSyncEnabledObserverRegistered;
	BOOL _syncPolicyChangedObserverRegistered;
	APSConnection* _connection;
	BOOL _triggeredSyncObserverRegistered;
	NSArray* _streamNamesObservedForAdditions;
	NSArray* _streamNamesObservedForDeletions;
	NSHashTable* _syncCoordinatorEventNotificationDelegates;
	id c2;
	_DKKnowledgeStorage* _storage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _DKKnowledgeStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(void)validateConfigurationWithStorePath:(id)arg1 ;
-(_DKKnowledgeStorage *)storage;
-(id)initWithStorage:(id)arg1 ;
-(void)_performSyncTogglesChangedActions;
-(void)_registerSyncPolicyChangedObserver;
-(void)_registerCloudSyncAvailablityObserver;
-(void)_registerSiriSyncEnabledObserver;
-(void)_unregisterCloudSyncAvailablityObserver;
-(void)_unregisterSiriSyncEnabledObserver;
-(void)_registerPeriodicJob;
-(void)_registerDatabaseObservers;
-(void)_unregisterPeriodicJob;
-(void)_unregisterDatabaseObservers;
-(void)_createPushConnection;
-(void)_possiblyPerformInitialSync;
-(void)_destroyPushConnection;
-(void)_performPeriodicJob;
-(void)_cloudSyncAvailabilityDidChange:(id)arg1 ;
-(void)_syncPolicyDidChange:(id)arg1 ;
-(void)syncWithReply:(/*^block*/id)arg1 ;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)deleteRemoteStateWithReply:(/*^block*/id)arg1 ;
-(void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2 ;
-(void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2 ;
-(void)_siriSyncEnabledDidChange;
-(void)_unregisterSyncPolicyChangedObserver;
-(void)addSyncCoordinatorEventNotificationDelegate:(id)arg1 ;
-(void)_deleteAllRemoteSyncDataIfSiriCloudSyncHasBeenDisabled;
-(id)_lastSyncDownFromCloudDate;
-(void)_performSyncWithPolicy:(id)arg1 isTriggeredSync:(BOOL)arg2 localChangeSets:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_deleteRemoteCloudEventsAndStorage;
-(void)_addLastSyncDate:(id)arg1 ;
-(id)_lastDaySyncDates;
-(void)performSyncWithPolicy:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)__performSyncWithPolicy:(id)arg1 isTriggeredSync:(BOOL)arg2 localChangeSets:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)_lastLocalQueryEndDate;
-(id)_queryStartDateGivenPolicy:(id)arg1 lastQueryEndDate:(id)arg2 isTriggeredSync:(BOOL)arg3 ;
-(id)_lastSyncQueryEndDate;
-(id)_fetchLocalChangeSetsSinceQueryStartDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performSyncUpWithPolicy:(id)arg1 queryStartDate:(id)arg2 localChangeSets:(id)arg3 error:(id*)arg4 ;
-(void)_setLastLocalQueryEndDate:(id)arg1 ;
-(void)_setLastSyncUpToCloudDate:(id)arg1 ;
-(void)_setLastSyncDownFromCloudDate:(id)arg1 ;
-(BOOL)_performSyncDownWithPolicy:(id)arg1 queryStartDate:(id)arg2 error:(id*)arg3 ;
-(void)_setLastSyncQueryEndDate:(id)arg1 ;
-(unsigned long long)_sequenceNumberOfLastDeletionChangeSetProcessedFromDevice:(id)arg1 ;
-(id)changeSetForSyncWithInsertedObjects:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4 ;
-(id)changeSetForSyncWithTombstones:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4 ;
-(id)_changeSetsByDeviceFromChangeSets:(id)arg1 ;
-(BOOL)_device:(id)arg1 hasMissingChangeSetInDeletionChangeSets:(id)arg2 ;
-(void)_deleteEventsForDevices:(id)arg1 ;
-(id)_prunedAdditionChangeSets:(id)arg1 withDevicesToPrune:(id)arg2 ;
-(id)_prunedAdditionChangeSetsFromSyncChanges:(id)arg1 ;
-(BOOL)_performSyncDownWithPolicy:(id)arg1 additionChangeSets:(id)arg2 ;
-(BOOL)_performSyncDownWithPolicy:(id)arg1 deletionChangeSets:(id)arg2 ;
-(void)_sendNotificationsForAppliedRemoteAdditionChangeSet:(id)arg1 ;
-(void)_sendNotificationsForAppliedRemoteDeletionChangeSet:(id)arg1 deleted:(unsigned long long)arg2 ;
-(void)_setIfHigherSequenceNumber:(unsigned long long)arg1 ofLastDeletionChangeSetProcessedFromDevice:(id)arg2 ;
-(void)_setLastChangeCount:(unsigned long long)arg1 ;
-(void)_sendNotificationsForCreatedDeletionChangeSet:(id)arg1 ;
-(void)_sendNotificationsForCreatedAdditionChangeSet:(id)arg1 ;
-(double)_intervalForJobGivenPolicy:(id)arg1 isSingleDevice:(BOOL)arg2 ;
-(void)_databaseDidHaveInsertsAndDeletesWithInsertsAndDeletesCount:(unsigned long long)arg1 ;
-(unsigned long long)_lastChangeCount;
-(void)_checkIfNumChangesTriggersSync;
-(void)_databaseDidAddToStreamName:(id)arg1 ;
-(void)_databaseDidDeleteFromStreamName:(id)arg1 ;
-(void)_cloudSyncDidReset:(id)arg1 ;
-(void)_deleteRemoteCloudEvents;
-(id)_lastSyncUpToCloudDate;
-(void)removeSyncCoordinatorEventNotificationDelegate:(id)arg1 ;
-(void)_deleteSiriSyncData;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)dealloc;
@end

