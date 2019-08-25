/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICSearchIndexerDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSString;

@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource> {

	BOOL _observingChanges;
	BOOL _needsReindexing;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSMutableSet* _objectIDsToProcess;
	NSMutableSet* _objectIDsBeingProcessed;
	NSMutableDictionary* _objectIDsByIdentifier;
	NSMutableDictionary* _identifiersByObjectID;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                 //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsToProcess;                            //@synthesize objectIDsToProcess=_objectIDsToProcess - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsBeingProcessed;                       //@synthesize objectIDsBeingProcessed=_objectIDsBeingProcessed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * objectIDsByIdentifier;                  //@synthesize objectIDsByIdentifier=_objectIDsByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifiersByObjectID;                  //@synthesize identifiersByObjectID=_identifiersByObjectID - In the implementation block
@property (assign,getter=isObservingChanges,nonatomic) BOOL observingChanges;              //@synthesize observingChanges=_observingChanges - In the implementation block
@property (assign) BOOL needsReindexing;                                                   //@synthesize needsReindexing=_needsReindexing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)didReindexForMigrationUserDefaultKeyForIdentifier:(id)arg1 ;
+(BOOL)isAccountReindexedForMigration:(id)arg1 ;
+(void)markAccountReindexedForMigration:(id)arg1 ;
+(void)unmarkAccountReindexedForMigration:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(void)loadState;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(id)newManagedObjectContext;
-(id)objectIDsNeedingIndexing;
-(void)stageForReindexing;
-(void)setObservingChanges:(BOOL)arg1 ;
-(void)stopObservingChanges;
-(id)dataSourceIdentifier;
-(BOOL)needsReindexing;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2 ;
-(id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2 ;
-(void)setObjectIDsToProcess:(NSMutableSet *)arg1 ;
-(void)setObjectIDsBeingProcessed:(NSMutableSet *)arg1 ;
-(void)setObjectIDsByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setIdentifiersByObjectID:(NSMutableDictionary *)arg1 ;
-(void)setNeedsReindexing:(BOOL)arg1 ;
-(id)searchableItemForObject:(id)arg1 ;
-(void)contextWillSave:(id)arg1 ;
-(void)resetContextObservers;
-(NSMutableSet *)objectIDsToProcess;
-(NSMutableDictionary *)objectIDsByIdentifier;
-(NSMutableDictionary *)identifiersByObjectID;
-(NSMutableSet *)objectIDsBeingProcessed;
-(id)allIndexableObjectIdentifiersByObjectID;
-(id)stateDefaultsKey;
-(void)clearObjectIDsToIgnoreAndStageForReindexing;
-(id)searchableItemIdentifiersByObjectIDsForObjectIDs:(id)arg1 ;
-(id)indexableObjectIDsWithIdentifiers:(id)arg1 ;
-(id)searchableItemIdentifiersToBeDeleted;
-(id)searchableItemsForObjectIDs:(id)arg1 ;
-(void)searchIndexerWillIndexObjectIDs:(id)arg1 ;
-(void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2 ;
-(void)searchIndexerWillDeleteSearchableItemsWithIdentifiers:(id)arg1 ;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithIdentifiers:(id)arg1 error:(id)arg2 ;
-(id)objectIDsFromSearchableItems:(id)arg1 ;
-(void)saveState;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
@end

