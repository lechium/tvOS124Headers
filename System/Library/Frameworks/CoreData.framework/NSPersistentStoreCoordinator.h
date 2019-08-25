/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectModel, NSArray, _PFModelMap, NSString;

@interface NSPersistentStoreCoordinator : NSObject {

	id _queueOwner;
	void* _dispatchQueue;
	struct {
		unsigned _isRegistered : 1;
		unsigned _canUseDirectDispatch : 1;
		unsigned _reservedFlags : 30;
	}  _flags;
	unsigned _reserved32;
	long long _miniLock;
	id* _additionalPrivateIvars;
	NSManagedObjectModel* _managedObjectModel;
	NSArray* _persistentStores;

}

@property (nonatomic,readonly) _PFModelMap * modelMap; 
@property (readonly) NSManagedObjectModel * managedObjectModel; 
@property (readonly) NSArray * persistentStores; 
@property (copy) NSString * name; 
+(BOOL)accessInstanceVariablesDirectly;
+(void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+(id)_beginPowerAssertionWithAssert:(unsigned long long*)arg1 ;
+(id)registeredStoreTypes;
+(void)_endPowerAssertionWithAssert:(unsigned long long)arg1 andApp:(id)arg2 ;
+(void)_registerDefaultStoreClassesAndTypes;
+(Class)_storeClassForStoreType:(id)arg1 ;
+(Class)_classForPersistentStoreAtURL:(id)arg1 ;
+(id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)_metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(BOOL)_setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)_storeTypeForStore:(id)arg1 ;
+(void)_registerCoreDataStoreClass:(Class)arg1 forStoreType:(id)arg2 ;
+(void)registerStoreClass:(Class)arg1 forStoreType:(id)arg2 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(BOOL)removeUbiquitousContentAndPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 localPeerID:(id)arg3 ubiquityName:(id)arg4 ;
+(id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 ubiquityName:(id)arg3 ;
+(BOOL)removePersistentHistoryFromPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(unsigned long long)__platformOptions;
+(id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(id*)arg3 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 error:(id*)arg4 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(BOOL)tryLock;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)_setXPCBundleIdentifier:(id)arg1 ;
-(void)_setXPCProcessName:(id)arg1 ;
-(id)_reopenQueryGenerationWithIdentifier:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_retainedCurrentQueryGeneration;
-(BOOL)setURL:(id)arg1 forPersistentStore:(id)arg2 ;
-(_PFModelMap *)modelMap;
-(id)persistentStoreForIdentifier:(id)arg1 ;
-(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)_postStoreRemoteChangeNotificationsForStore:(id)arg1 andState:(unsigned long long)arg2 ;
-(id)_persistentStoreForIdentifier:(id)arg1 ;
-(id)managedObjectIDForURIRepresentation:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateQueryGeneration:(id)arg1 error:(id*)arg2 ;
-(void)_copyMetadataFromStore:(id)arg1 toStore:(id)arg2 migrationManager:(id)arg3 ;
-(id)_qosClassOptions;
-(id)_retainedPersistentStores;
-(void)_routeLightweightBlock:(/*^block*/id)arg1 toStore:(id)arg2 ;
-(BOOL)_hasHistoryTracking:(id)arg1 ;
-(BOOL)_checkForPostLionWriter:(id)arg1 ;
-(BOOL)_attemptRecoveryFromAddPersistentStoreError:(id)arg1 withDescription:(id)arg2 ;
-(void)_doAddPersistentStoreWithDescription:(id)arg1 privateCopy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)validateManagedObjectModel:(id)arg1 forHistoryTrackingWithOptions:(id)arg2 error:(id*)arg3 ;
-(id)_realStoreTypeForStoreWithType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)_checkForSkewedEntityHashes:(id)arg1 metadata:(id)arg2 ;
-(BOOL)_checkForTombstoneSkew:(id)arg1 metadata:(id)arg2 configuration:(id)arg3 ;
-(void)_addPersistentStore:(id)arg1 identifier:(id)arg2 ;
-(void)_postStoresChangedNotificationsForStores:(id)arg1 changeKey:(id)arg2 options:(id)arg3 ;
-(BOOL)_removePersistentStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)_removePersistentStore:(id)arg1 ;
-(id)_retainedAllMigratedObjectsInStore:(id)arg1 toStore:(id)arg2 ;
-(id)_exceptionNoStoreSaveFailureForError:(id)arg1 recommendedFrame:(int*)arg2 ;
-(void)_coordinator_you_never_successfully_opened_the_database_corrupted:(id)arg1 ;
-(void)_coordinator_you_never_successfully_opened_the_database_schema_mismatch:(id)arg1 ;
-(void)_coordinator_you_never_successfully_opened_the_database_device_locked:(id)arg1 ;
-(void)_coordinator_you_never_successfully_opened_the_database_missing_directory:(id)arg1 ;
-(void)_coordinator_you_never_successfully_opened_the_database_no_permission:(id)arg1 ;
-(void)_coordinator_you_never_successfully_opened_the_database_cant_open:(id)arg1 ;
-(void)_coordinator_you_never_successfully_opened_the_database_disk_full:(id)arg1 ;
-(void)_coordinator_you_never_successfully_opened_the_database_io_error:(id)arg1 ;
-(void)_coordinator_you_never_successfully_opened_the_database_so_saving_back_to_it_is_kinda_hard:(id)arg1 ;
-(id)_routableStoresForContext:(id)arg1 fromStores:(id)arg2 ;
-(void)_introspectLastErrorAndThrow;
-(void)_coordinator_no_idea_what_kind_of_request_that_was_supposed_to_be;
-(id)_checkRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4 ;
-(void)_doPreSaveAssignmentsForObjects:(id)arg1 intoStores:(id)arg2 ;
-(id)_saveRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4 ;
-(id)_processStoreResults:(id)arg1 forRequest:(id)arg2 ;
-(id)_retainedIdentifierFromStores:(id)arg1 ;
-(id)_retainedChangeTokenFromStores:(id)arg1 ;
-(void)_routeHeavyweightBlock:(/*^block*/id)arg1 ;
-(id)URLForPersistentStore:(id)arg1 ;
-(id)migratePersistentStore:(id)arg1 toURL:(id)arg2 options:(id)arg3 withType:(id)arg4 error:(id*)arg5 ;
-(BOOL)replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id*)arg6 ;
-(BOOL)_canRouteToStore:(id)arg1 forContext:(id)arg2 ;
-(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_canSaveGraphRootedAtObject:(id)arg1 intoStore:(id)arg2 withPreviouslyChecked:(CFSetRef)arg3 withAcceptableEntities:(CFSetRef)arg4 ;
-(void)_assignObjects:(id)arg1 toStore:(id)arg2 ;
-(id)_newObjectGraphStyleRecordForRow:(id)arg1 andObject:(id)arg2 withContext:(id)arg3 ;
-(id)_newConflictRecordForObject:(id)arg1 andOriginalRow:(id)arg2 withContext:(id)arg3 ;
-(id)_conflictsWithRowCacheForObject:(id)arg1 withContext:(id)arg2 andStore:(id)arg3 ;
-(id)_fetchAllInstancesFromStore:(id)arg1 intoContext:(id)arg2 underlyingException:(id*)arg3 ;
-(void)_assignObject:(id)arg1 toPersistentStore:(id)arg2 forConfiguration:(id)arg3 ;
-(void)_removeAllPersistentStores;
-(void)_setQosClassOptions:(unsigned)arg1 ;
-(void)_setIsRegisteredWithCloudKit:(BOOL)arg1 ;
-(BOOL)_isRegisteredWithCloudKit;
-(void)_setIsRegisteredWithUbiquity:(BOOL)arg1 ;
-(BOOL)_isRegisteredWithUbiquity;
-(BOOL)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 error:(id*)arg3 ;
-(id)_xpcBundleIdentifier;
-(id)_xpcProcessName;
-(id)_retainedCurrentChangeTrackingToken;
-(id)persistentStoreCoordinator;
-(id)managedObjectIDForURIRepresentation:(id)arg1 ;
-(BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id*)arg6 ;
-(BOOL)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(NSArray *)persistentStores;
-(id)metadataForPersistentStore:(id)arg1 ;
-(void)setMetadata:(id)arg1 forPersistentStore:(id)arg2 ;
-(BOOL)_refreshTriggerValuesInStore:(id)arg1 error:(id*)arg2 ;
-(id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3 ;
-(id)currentPersistentHistoryTokenFromStores:(id)arg1 ;
-(void)addPersistentStoreWithDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)lock;
-(void)unlock;
-(NSManagedObjectModel *)managedObjectModel;
-(id)initWithManagedObjectModel:(id)arg1 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(id)addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)persistentStoreForURL:(id)arg1 ;
-(BOOL)removePersistentStore:(id)arg1 error:(id*)arg2 ;
@end

