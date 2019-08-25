/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, NSSet, NSMutableArray, NSMutableDictionary, NSCloudKitMirroringDelegateOptions, PFCloudKitMirroredRelationshipCache, NSURL;

@interface PFCloudKitImportZoneContext : NSObject {

	NSArray* _updatedRecords;
	NSDictionary* _deletedRecordTypeToRecordID;
	NSSet* _deletedObjectIDs;
	NSArray* _modifiedRecords;
	NSMutableArray* _updatedRelationships;
	NSArray* _deletedRelationships;
	NSMutableDictionary* _recordTypeToRecordNameToObjectID;
	NSMutableDictionary* _recordTypeToUnresolvedRecordNames;
	NSArray* _importOperations;
	NSArray* _invalidatedPendingRelationships;
	NSArray* _pendingRelationshipsToTry;
	NSCloudKitMirroringDelegateOptions* _mirroringOptions;
	PFCloudKitMirroredRelationshipCache* _relCache;
	NSURL* _fileBackedFuturesDirectory;

}

@property (nonatomic,readonly) NSSet * deletedObjectIDs;                                           //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSArray * modifiedRecords;                                          //@synthesize modifiedRecords=_modifiedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * deletedRelationships;                                     //@synthesize deletedRelationships=_deletedRelationships - In the implementation block
@property (nonatomic,readonly) NSArray * updatedRelationships;                                     //@synthesize updatedRelationships=_updatedRelationships - In the implementation block
@property (nonatomic,readonly) NSArray * importOperations;                                         //@synthesize importOperations=_importOperations - In the implementation block
@property (nonatomic,readonly) NSArray * invalidatedPendingRelationships;                          //@synthesize invalidatedPendingRelationships=_invalidatedPendingRelationships - In the implementation block
@property (nonatomic,readonly) NSArray * pendingRelationshipsToTry;                                //@synthesize pendingRelationshipsToTry=_pendingRelationshipsToTry - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
@property (nonatomic,readonly) PFCloudKitMirroredRelationshipCache * relCache;                     //@synthesize relCache=_relCache - In the implementation block
@property (nonatomic,readonly) NSURL * fileBackedFuturesDirectory;                                 //@synthesize fileBackedFuturesDirectory=_fileBackedFuturesDirectory - In the implementation block
-(NSURL *)fileBackedFuturesDirectory;
-(id)objectIDForRecordWithName:(id)arg1 ofType:(id)arg2 ;
-(id)initWithUpdatedRecords:(id)arg1 deletedRecordTypeToRecordIDs:(id)arg2 options:(id)arg3 fileBackedFuturesDirectory:(id)arg4 ;
-(void)addObjectID:(id)arg1 toCache:(id)arg2 andUniqueIdentifier:(id)arg3 ;
-(void)addUnresolvedRecordName:(id)arg1 forRecordType:(id)arg2 toCache:(id)arg3 ;
-(void)addObjectID:(id)arg1 toCache:(id)arg2 forRecordWithType:(id)arg3 andUniqueIdentifier:(id)arg4 ;
-(id)initWithUpdatedRecords:(id)arg1 deletedRecordTypeToRecordIDs:(id)arg2 options:(id)arg3 fileBackedFuturesDirectory:(id)arg4 relationshipCache:(id)arg5 ;
-(NSArray *)updatedRelationships;
-(BOOL)initializeCachesWithManagedObjectContext:(id)arg1 andObservedStore:(id)arg2 error:(id*)arg3 ;
-(void)registerObjectID:(id)arg1 forInsertedRecord:(id)arg2 ;
-(void)addMirroredRelationshipToLink:(id)arg1 ;
-(BOOL)populateUnresolvedIDsWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(NSArray *)modifiedRecords;
-(NSArray *)deletedRelationships;
-(NSArray *)importOperations;
-(NSArray *)invalidatedPendingRelationships;
-(NSArray *)pendingRelationshipsToTry;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(PFCloudKitMirroredRelationshipCache *)relCache;
-(NSSet *)deletedObjectIDs;
-(void)dealloc;
@end

