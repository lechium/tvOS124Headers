/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSIncrementalStore.h>
#import <libobjc.A.dylib/NSSQLModelProvider.h>
#import <libobjc.A.dylib/NSCoreDataKeyedArchivingDelegate.h>

@class NSDictionary, NSGenerationalRowCache, NSString, NSXPCStoreConnectionManager, NSSQLModel, NSSQLCore, NSXPCStoreNotificationObserver;

@interface NSXPCStore : NSIncrementalStore <NSSQLModelProvider, NSCoreDataKeyedArchivingDelegate> {

	NSDictionary* _metadata;
	NSGenerationalRowCache* _cache;
	NSString* _fileBackedFuturesDirectory;
	NSXPCStoreConnectionManager* _connectionManager;
	NSSQLModel* _model;
	NSSQLCore* _core;
	NSString* _sanityCheckToken;
	NSXPCStoreNotificationObserver* _observer;
	NSString* _remoteStoreChangedNotificationName;
	int _stateLock;

}

@property (copy,readonly) NSString * remoteStoreChangedNotificationName;              //@synthesize remoteStoreChangedNotificationName=_remoteStoreChangedNotificationName - In the implementation block
+(BOOL)_isOnExtendedTimeout;
+(int)debugDefault;
+(BOOL)_allowCoreDataFutures;
+(void)setDebugDefault:(int)arg1 ;
+(void)initialize;
+(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
+(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(id)sqlCore;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(void)setSQLCore:(id)arg1 ;
-(Class)objectIDFactoryForSQLEntity:(id)arg1 ;
-(id)fileBackedFuturesDirectory;
-(id)sendMessage:(id)arg1 fromContext:(id)arg2 interrupts:(unsigned long long*)arg3 error:(id*)arg4 ;
-(NSString *)remoteStoreChangedNotificationName;
-(BOOL)load:(id*)arg1 ;
-(void)setupRemoteStoreObserver;
-(void)_setMetadata:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(id)_sanityCheckToken;
-(void)_setSanityCheckToken:(id)arg1 ;
-(void)_freeQueryGenerationWithIdentifier:(id)arg1 ;
-(void)cacheFetchedRows:(id)arg1 forManagedObjects:(id)arg2 generation:(id)arg3 ;
-(void)decodePrefetchArray:(id)arg1 forSources:(id)arg2 context:(id)arg3 ;
-(id)decodeResults:(id)arg1 forFetch:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void)_commitChangesForRequestContext:(id)arg1 ;
-(id)_executeSaveRequestForContext:(id)arg1 error:(id*)arg2 ;
-(id)executeSaveRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)executeFetchRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)executeBatchDeleteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)executePersistentHistoryRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)_createAndCacheRowForObjectWithID:(id)arg1 propertyValues:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)decodeResults:(id)arg1 forFaultOfObjectWithID:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)decodeValue:(id)arg1 forRelationship:(id)arg2 onSource:(id)arg3 inContext:(id)arg4 error:(id*)arg5 ;
-(void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 generation:(id)arg4 ;
-(BOOL)_allowCoreDataFutures;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(BOOL)supportsConcurrentRequestHandling;
-(id)_rawMetadata__;
-(BOOL)supportsGenerationalQuerying;
-(id)currentQueryGeneration;
-(void)freeQueryGenerationWithIdentifier:(id)arg1 ;
-(id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(id)executePullChangesRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)ancillaryModels;
-(id)ancillarySQLModels;
-(void)cacheContents:(id)arg1 ofRelationship:(id)arg2 onObjectWithID:(id)arg3 withTimestamp:(double)arg4 generation:(id)arg5 ;
-(id)_cachedRowForObjectWithID:(id)arg1 generation:(id)arg2 ;
-(void)decodePrefetchResult:(id)arg1 forSources:(id)arg2 context:(id)arg3 ;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(id)entityForEntityDescription:(id)arg1 ;
-(NSScalarObjectID*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(id)_cachedRowForRelationship:(id)arg1 onObjectWithID:(id)arg2 generation:(id)arg3 ;
-(void)_clearCachedRowForObjectWithID:(id)arg1 generation:(id)arg2 ;
-(id)currentChangeToken;
-(Class)_objectIDClass;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2 ;
-(NSScalarObjectID*)newForeignKeyID:(long long)arg1 entity:(id)arg2 ;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadMetadata:(id*)arg1 ;
-(id)connectionManager;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)type;
-(void)setIdentifier:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)disconnect;
-(id)model;
-(id)serviceName;
-(id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3 ;
@end

