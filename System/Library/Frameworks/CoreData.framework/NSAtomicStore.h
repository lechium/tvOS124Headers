/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStore.h>

@class NSMutableDictionary;

@interface NSAtomicStore : NSPersistentStore {

	NSMutableDictionary* _nodeCache;
	NSMutableDictionary* _entityCache;
	NSMutableDictionary* _storeMetadata;
	long long _nextReference;
	void* _reserved4;
	void* _reserved5;

}
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(void)initialize;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(BOOL)load:(id*)arg1 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)_rawMetadata__;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)_registerCacheNode:(id)arg1 ;
-(void)addCacheNodes:(id)arg1 ;
-(id)cacheNodes;
-(void)willRemoveCacheNodes:(id)arg1 ;
-(id)cacheNodeForObjectID:(id)arg1 ;
-(id)newCacheNodeForManagedObject:(id)arg1 ;
-(void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2 ;
-(id)newReferenceObjectForManagedObject:(id)arg1 ;
-(id)objectIDForEntity:(id)arg1 referenceObject:(id)arg2 ;
-(id)referenceObjectForObjectID:(id)arg1 ;
-(void)_insertNodeIntoMainCache:(id)arg1 ;
-(void)_insertNodeIntoEntityCache:(id)arg1 ;
-(id)executeFetchRequest:(id)arg1 withContext:(id)arg2 ;
-(id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2 ;
-(id)executeCountRequest:(id)arg1 withContext:(id)arg2 ;
-(id)executeRefreshRequest:(id)arg1 withContext:(id)arg2 ;
-(id)_retrieveNodesSatisfyingRequest:(id)arg1 ;
-(id)_retrieveNodeForObjectID:(id)arg1 ;
-(id)_getNewIDForObject:(id)arg1 ;
-(void)_addObject:(id)arg1 ;
-(id)_retrieveNodeForObject:(id)arg1 ;
-(void)_removeObject:(id)arg1 ;
-(void)_updateObject:(id)arg1 ;
-(void)_storeNextReferenceInMetadata;
-(void)_deleteNodeFromMainCache:(id)arg1 ;
-(void)_deleteNodeFromEntityCache:(id)arg1 ;
-(void)_didLoadMetadata;
-(void)_preflightCrossCheck;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id)_retainedObjectIDForEntity:(id)arg1 referenceObject:(id)arg2 ;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)save:(id*)arg1 ;
@end

