/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableSet, NSString, NSPersistentStoreCoordinator, NSUndoManager, NSMutableDictionary, NSSet, NSQueryGenerationToken;

@interface NSManagedObjectContext : NSObject <NSCoding> {

	id _queueOwner;
	void* _dispatchQueue;
	void* _reserved1;
	int _spinLock;
	id _parentObjectStore;
	struct {
		unsigned _registeredForCallback : 1;
		unsigned _propagatesDeletesAtEndOfEvent : 1;
		unsigned _exhaustiveValidation : 1;
		unsigned _processingChanges : 1;
		unsigned _useCommittedSnapshot : 1;
		unsigned _registeredUndoTransactionID : 1;
		unsigned _retainsAllRegisteredObjects : 1;
		unsigned _savingInProgress : 1;
		unsigned _wasDisposed : 1;
		unsigned _unprocessedChangesPending : 1;
		unsigned _isDirty : 1;
		unsigned _ignoreUndoCheckpoints : 1;
		unsigned _propagatingDeletes : 1;
		unsigned _isNSEditorEditing : 1;
		unsigned _isMainThreadBlessed : 1;
		unsigned _isImportContext : 1;
		unsigned _preflightSaveInProgress : 1;
		unsigned _disableDiscardEditing : 1;
		unsigned _isParentStoreContext : 1;
		unsigned _postSaveNotifications : 1;
		unsigned _isMerging : 1;
		unsigned _concurrencyType : 1;
		unsigned _deleteInaccessible : 1;
		unsigned _priority : 2;
		unsigned _autoMerge : 1;
		unsigned _isXPCServerContext : 1;
		unsigned _pushSecureDelete : 1;
		unsigned _refreshAfterSave : 1;
		unsigned _allowAncillary : 1;
		unsigned _reservedFlags : 2;
	}  _flags;
	NSMutableSet* _unprocessedChanges;
	NSMutableSet* _unprocessedDeletes;
	NSMutableSet* _unprocessedInserts;
	NSMutableSet* _insertedObjects;
	NSMutableSet* _deletedObjects;
	NSMutableSet* _changedObjects;
	NSMutableSet* _lockedObjects;
	NSMutableSet* _refreshedObjects;
	id _infoByGID;
	id* _cachedObsInfoByEntity;
	short _undoTransactionID;
	id _lock;
	long long _lockCount;
	long long _objectStoreLockCount;
	double _fetchTimestamp;
	long long _referenceCallbackRegistration;
	id _referenceQueue;
	id _reserved3;
	id _reserved4;
	int _cd_rc;
	int _ignoreChangeNotification;
	id _reserved6;
	NSString* _contextLabel;
	id* _additionalPrivateIvars;

}

@property (retain) NSPersistentStoreCoordinator * persistentStoreCoordinator; 
@property (retain) NSManagedObjectContext * parentContext; 
@property (copy) NSString * name; 
@property (nonatomic,retain) NSUndoManager * undoManager; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,readonly) NSMutableDictionary * userInfo; 
@property (readonly) unsigned long long concurrencyType; 
@property (nonatomic,readonly) NSSet * insertedObjects; 
@property (nonatomic,readonly) NSSet * updatedObjects; 
@property (nonatomic,readonly) NSSet * deletedObjects; 
@property (nonatomic,readonly) NSSet * registeredObjects; 
@property (assign,nonatomic) BOOL propagatesDeletesAtEndOfEvent; 
@property (assign,nonatomic) BOOL retainsRegisteredObjects; 
@property (assign) BOOL shouldDeleteInaccessibleFaults; 
@property (assign) double stalenessInterval; 
@property (retain) id mergePolicy; 
@property (nonatomic,readonly) NSQueryGenerationToken * queryGenerationToken; 
@property (assign,nonatomic) BOOL automaticallyMergesChangesFromParent; 
@property (copy) NSString * transactionAuthor; 
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)_handleError:(id)arg1 withError:(id*)arg2 ;
+(void)_mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2 ;
+(void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+(id)createFutureForFileAtURL:(id)arg1 ;
+(void)mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)new;
-(BOOL)tryLock;
-(id)_retainedObjectWithID:(id)arg1 optionalHandler:(id)arg2 withInlineStorage:(BOOL)arg3 ;
-(id)_unsafeName;
-(id)_unsafeTransactionAuthor;
-(id)_queryGenerationToken__;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)_retainedObjectWithID:(id)arg1 ;
-(void)_setXPCServerContext:(BOOL)arg1 ;
-(BOOL)setQueryGenerationFromToken:(id)arg1 error:(id*)arg2 ;
-(void)detectConflictsForObject:(id)arg1 ;
-(void)_changeIDsForManagedObjects:(id)arg1 toIDs:(id)arg2 ;
-(id)_newSaveRequestForCurrentState;
-(id)_retainedCurrentQueryGeneration;
-(BOOL)_hasIDMappings;
-(id)_mappedForParentStoreID:(id)arg1 ;
-(NSQueryGenerationToken *)queryGenerationToken;
-(void)_registerAsyncReferenceCallback;
-(void)_processReferenceQueue:(BOOL)arg1 ;
-(BOOL)_allowAncillaryEntities;
-(void)_disableChangeNotifications;
-(void)lockObjectStore;
-(id)_parentStore;
-(void)unlockObjectStore;
-(void)_enableChangeNotifications;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(BOOL)shouldHandleInaccessibleFault:(id)arg1 forObjectID:(id)arg2 triggeredByProperty:(id)arg3 ;
-(void)_forceRegisterLostFault:(id)arg1 ;
-(BOOL)_handleError:(id)arg1 withError:(id*)arg2 ;
-(id)_implicitObservationInfoForEntity:(id)arg1 forResultingClass:(Class*)arg2 ;
-(void)_registerForNotificationsWithCoordinator:(id)arg1 ;
-(void)_setPersistentStoreCoordinator:(id)arg1 ;
-(void)_setRetainsRegisteredObjects:(BOOL)arg1 ;
-(BOOL)shouldDeleteInaccessibleFaults;
-(void)discardEditing;
-(void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2 removeFromRegistry:(BOOL)arg3 ;
-(void)_resetAllChanges;
-(void)_postObjectsDidChangeNotificationWithUserInfo:(id)arg1 ;
-(BOOL)_setQueryGenerationFromToken:(id)arg1 error:(id*)arg2 ;
-(void)assertOnImproperDealloc;
-(void)_dispose:(BOOL)arg1 ;
-(void)_dealloc__;
-(void)_stopObservingUndoManagerNotifications;
-(void)_startObservingUndoManagerNotifications;
-(void)_setUndoManager:(id)arg1 ;
-(BOOL)_processRecentChanges:(id*)arg1 ;
-(id)_retainedRegisteredObjects;
-(BOOL)_ignoringChangeNotifications;
-(void)_insertObjectWithGlobalID:(id)arg1 globalID:(id)arg2 ;
-(void)_registerClearStateWithUndoManager;
-(void)_establishEventSnapshotsForObject:(id)arg1 ;
-(void)_enqueueEndOfEventNotification;
-(BOOL)_parentObtainPermanentIDsForObjects:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)_prepareForPushChanges:(id*)arg1 ;
-(BOOL)_doPreSaveConstraintChecksForObjects:(id)arg1 error:(id*)arg2 ;
-(id)_generateOptLockExceptionForConstraintFailure:(id)arg1 ;
-(void)_informParentStore:(id)arg1 ofInterestInObjects:(id)arg2 ;
-(void)_thereIsNoSadnessLikeTheDeathOfOptimism;
-(void)_didSaveChanges;
-(id)_retainedObjectWithID:(id)arg1 error:(id*)arg2 ;
-(void)_setStalenessInterval:(double)arg1 ;
-(id)_executeAsynchronousFetchRequest:(id)arg1 ;
-(BOOL)_attemptCoalesceChangesForFetch;
-(unsigned long long)_countWithNoChangesForRequest:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_countWithMergedChangesForRequest:(id)arg1 possibleChanges:(id)arg2 possibleDeletes:(id)arg3 error:(id*)arg4 ;
-(id)_createStoreFetchRequestForFetchRequest:(id)arg1 ;
-(BOOL)propagatesDeletesAtEndOfEvent;
-(void)setPropagatesDeletesAtEndOfEvent:(BOOL)arg1 ;
-(id)_committedSnapshotForObject:(id)arg1 ;
-(void)_refaultObject:(id)arg1 globalID:(id)arg2 boolean:(BOOL)arg3 ;
-(void)_prepareUnprocessedDeletionAfterRefresh:(id)arg1 ;
-(id)_initWithParentObjectStore:(unsigned long long)arg1 ;
-(void)_forceRemoveFromDeletedObjects:(id)arg1 ;
-(BOOL)_mergeRefreshObject:(id)arg1 mergeChanges:(BOOL)arg2 withPersistentSnapshot:(id)arg3 ;
-(void)_mergeRefreshEpilogueForObject:(id)arg1 mergeChanges:(BOOL)arg2 ;
-(void)_setParentContext:(id)arg1 ;
-(BOOL)automaticallyMergesChangesFromParent;
-(void)setAutomaticallyMergesChangesFromParent:(BOOL)arg1 ;
-(id)_changeTrackingToken__;
-(void)_setAutomaticallyMergesChangesFromParent:(BOOL)arg1 ;
-(void)_automaticallyMergeChangesFromContextDidSaveNotification:(id)arg1 ;
-(void)mergeChangesFromContextDidSaveNotification:(id)arg1 ;
-(BOOL)commitEditing;
-(void)_managedObjectContextEditor:(id)arg1 didCommit:(BOOL)arg2 contextInfo:(SCD_Struct_NS11*)arg3 ;
-(void)_sendCommitEditingSelectorToTarget:(id)arg1 sender:(id)arg2 selector:(SEL)arg3 flag:(BOOL)arg4 contextInfo:(void*)arg5 delayed:(BOOL)arg6 ;
-(void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(void)setRetainsRegisteredObjects:(BOOL)arg1 ;
-(BOOL)retainsRegisteredObjects;
-(void)setShouldDeleteInaccessibleFaults:(BOOL)arg1 ;
-(void)assignObject:(id)arg1 toPersistentStore:(id)arg2 ;
-(void)_youcreatedanNSManagedObjectContextOnthemainthreadandillegallypassedittoabackgroundthread;
-(BOOL)_checkObjectForExistenceAndCacheRow:(id)arg1 ;
-(BOOL)_setChangeTrackingTokenFromToken:(id)arg1 error:(id*)arg2 ;
-(id)changeTrackingToken;
-(void)objectDidBeginEditing:(id)arg1 ;
-(void)objectDidEndEditing:(id)arg1 ;
-(BOOL)commitEditingAndReturnError:(id*)arg1 ;
-(id)_newUnchangedLockedObjects;
-(unsigned long long)_fetchLimitForRequest:(id)arg1 ;
-(void)_unlimitRequest:(id)arg1 ;
-(void)_registerObject:(id)arg1 withID:(id)arg2 ;
-(void)_informParentStore:(id)arg1 noLongerInterestedInObjects:(id)arg2 ;
-(void)_performCoordinatorActionAndWait:(/*^block*/id)arg1 ;
-(void)_disposeObjects:(id*)arg1 count:(unsigned long long)arg2 notifyParent:(BOOL)arg3 ;
-(void)_clearUnprocessedUpdates;
-(void)_clearUpdates;
-(void)_clearUnprocessedInsertions;
-(void)_clearInsertions;
-(void)_clearUnprocessedDeletions;
-(void)_clearDeletions;
-(void)_clearLockedObjects;
-(void)_clearRefreshedObjects;
-(void)_incrementUndoTransactionID;
-(id)_globalIDForObject:(id)arg1 ;
-(void)_clearOriginalSnapshotForObject:(id)arg1 ;
-(BOOL)_validateObjects:(id)arg1 forOperation:(unsigned)arg2 error:(id*)arg3 exhaustive:(BOOL)arg4 forSave:(BOOL)arg5 ;
-(void)_clearOriginalSnapshotAndInitializeRec:(id)arg1 ;
-(void)_postContextDidSaveNotificationWithUserInfo:(id)arg1 ;
-(void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2 ;
-(void)_informParentStoreNoLongerInterestedInObjectIDs:(id)arg1 generation:(id)arg2 ;
-(id)performFetch:(id)arg1 error:(id*)arg2 ;
-(id)_globalIDsForObjects:(id)arg1 ;
-(unsigned)_batchRetainedObjects:(id*)arg1 forCount:(unsigned)arg2 withIDs:(id*)arg3 optionalHandler:(id)arg4 withInlineStorage:(BOOL)arg5 ;
-(BOOL)_validateDeletesUsingTable:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_validateChangesForSave:(id*)arg1 ;
-(void)_informParentStoreOfInterestInObjectIDs:(id)arg1 generation:(id)arg2 ;
-(id)_retainedObjectsFromRemovedStore:(id)arg1 ;
-(BOOL)_stopsValidationAfterFirstError;
-(void)_setStopsValidationAfterFirstError:(BOOL)arg1 ;
-(id)_debuggingOnly_localObjectForGlobalID:(id)arg1 ;
-(id)_currentEventSnapshotForObject:(id)arg1 ;
-(void)_growRegistrationCollectionForEntitySlot:(unsigned)arg1 toSize:(unsigned long long)arg2 ;
-(void)_setIsUbiquityImportContext:(BOOL)arg1 ;
-(BOOL)_isImportContext;
-(BOOL)_isPreflightSaveInProgress;
-(void)_setDisableDiscardEditing:(BOOL)arg1 ;
-(BOOL)_isXPCServerContext;
-(BOOL)_disableDiscardEditing;
-(void)_setPostSaveNotifications:(BOOL)arg1 ;
-(BOOL)_postSaveNotifications;
-(void)_persistentStoreDidUpdateAdditionalRowsWithNewVersions:(id)arg1 ;
-(void)_setAllowAncillaryEntities:(BOOL)arg1 ;
-(void)objectWillChange:(id)arg1 ;
-(void)_undoInsertions:(id)arg1 ;
-(void)_registerUndoForOperation:(SEL)arg1 withObjects:(id)arg2 withExtraArguments:(id)arg3 ;
-(void)_undoDeletionsMovedToUpdates:(id)arg1 ;
-(void)_createAndPostChangeNotification:(id)arg1 deletions:(id)arg2 updates:(id)arg3 refreshes:(id)arg4 deferrals:(id)arg5 wasMerge:(BOOL)arg6 ;
-(void)_undoDeletions:(id)arg1 ;
-(void)_undoUpdates:(id)arg1 ;
-(void)_clearChangedThisTransaction:(id)arg1 ;
-(void)_postRefreshedObjectsNotificationAndClearList;
-(void)_updateUnprocessedOwnDestinations:(id)arg1 ;
-(BOOL)_propagatePendingDeletesAtEndOfEvent:(id*)arg1 ;
-(id)_processPendingDeletions:(id)arg1 withInsertions:(id)arg2 withUpdates:(id)arg3 withNewlyForgottenList:(id)arg4 withRemovedChangedObjects:(id)arg5 ;
-(id)_processPendingInsertions:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3 ;
-(id)_processPendingUpdates:(id)arg1 ;
-(void)_registerUndoForModifiedObjects:(id)arg1 ;
-(void)_registerUndoForInsertedObjects:(id)arg1 ;
-(void)_registerUndoForDeletedObjects:(id)arg1 withDeletedChanges:(id)arg2 ;
-(void)_updateUndoTransactionForThisEvent:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3 ;
-(void)_processRecentlyForgottenObjects:(id)arg1 ;
-(void)_postContextDidMergeChangesNotificationWithUserInfo:(id)arg1 ;
-(BOOL)_processDeletedObjects:(id*)arg1 ;
-(void)_prefetchObjectsForDeletePropagation:(id)arg1 ;
-(void)_propagateDeletesUsingTable:(id)arg1 ;
-(void)_forceInsertionForObject:(id)arg1 ;
-(void)_undoManagerCheckpoint:(id)arg1 ;
-(void)_noop:(id)arg1 ;
-(void)_processObjectStoreChanges:(id)arg1 ;
-(void)_addObjectIDsUpdatedByTriggers:(id)arg1 ;
-(void)_processNotificationQueue;
-(void)_storeConfigurationChanged:(id)arg1 ;
-(void)_sendOrEnqueueNotification:(id)arg1 selector:(SEL)arg2 ;
-(void)_processChangedStoreConfigurationNotification:(id)arg1 ;
-(void)_objectsChangedInStore:(id)arg1 ;
-(void)setShouldRefreshAfterSave:(BOOL)arg1 ;
-(BOOL)shouldRefreshAfterSave;
-(BOOL)shouldPerformSecureOperation;
-(id)performBlockWithResult:(/*^block*/id)arg1 ;
-(void)_stopConflictDetectionForObject:(id)arg1 ;
-(void)_mergeChangesFromRemoteContextSave:(id)arg1 ;
-(void)_copyChildObject:(id)arg1 toParentObject:(id)arg2 fromChildContext:(id)arg3 ;
-(id)_parentObjectsForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)_parentProcessSaveRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)finalize;
-(void)insertObject:(id)arg1 ;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasChanges;
-(void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2 ;
-(void)deleteObject:(id)arg1 ;
-(id)objectWithID:(id)arg1 ;
-(void)setMergePolicy:(id)arg1 ;
-(void)refreshAllObjects;
-(id)executeRequest:(id)arg1 error:(id*)arg2 ;
-(void)setShouldPerformSecureOperation:(BOOL)arg1 ;
-(unsigned long long)concurrencyType;
-(void)rollback;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(id)_orderKeysForRelationshipWithName__:(id)arg1 onObjectWithID:(id)arg2 ;
-(double)stalenessInterval;
-(void)setStalenessInterval:(double)arg1 ;
-(void)setTransactionAuthor:(NSString *)arg1 ;
-(NSString *)transactionAuthor;
-(NSSet *)registeredObjects;
-(id)objectRegisteredForID:(id)arg1 ;
-(void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(void)processPendingChanges;
-(id)_orderedSetWithResultsFromFetchRequest:(id)arg1 ;
-(BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 onObjectWithID:(id)arg3 error:(id*)arg4 ;
-(id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3 ;
-(NSSet *)updatedObjects;
-(void)performWithOptions:(unsigned long long)arg1 andBlock:(/*^block*/id)arg2 ;
-(NSSet *)deletedObjects;
-(void)_unregisterForNotifications;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(NSSet *)insertedObjects;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)mergePolicy;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(oneway void)release;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)retain;
-(unsigned long long)retainCount;
-(id)description;
-(id)_delegate;
-(void)reset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setDelegate:(id)arg1 ;
-(BOOL)isEditing;
-(void)performBlock:(/*^block*/id)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)lock;
-(void)unlock;
-(NSUndoManager *)undoManager;
-(void)_processEndOfEventNotification:(id)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 ;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)setParentContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)parentContext;
-(BOOL)save:(id*)arg1 ;
-(void)undo;
-(void)redo;
@end

