/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PSITableDelegate.h>
#import <libobjc.A.dylib/PSIQueryDelegate.h>
#import <libobjc.A.dylib/PSIGroupCacheDelegate.h>

@protocol OS_dispatch_queue;
@class PSITokenizer, NSDictionary, PSIIntArray, PSIWordEmbeddingTable, PSITripTable, PSIStatement, NSObject, NSMutableString, NSMutableArray, NSString;

@interface PSIDatabase : NSObject <PSITableDelegate, PSIQueryDelegate, PSIGroupCacheDelegate> {

	sqlite3Ref _inqDatabase;
	BOOL _databaseIsValid;
	NSDictionary* _inqPreparedStatements;
	PSIIntArray* _matchingIds;
	PSIWordEmbeddingTable* _inqWordEmbeddingTable;
	PSITripTable* _inqTripTable;
	PSIStatement* _assetUUIDByAssetIdWithAssetIdsStatement;
	PSIStatement* _collectionResultByCollectionIdWithCollectionIdsStatement;
	PSIStatement* _inqAssetIdsByGroupIdForAssetIdsStatement;
	PSIStatement* _inqCollectionIdsByGroupIdForCollectionIdsStatement;
	PSIStatement* _inqNumberOfAssetsMatchingGroupWithIdStatement;
	PSIStatement* _inqNumberOfAssetsByGroupIdMatchingGroupsWithIdsStatement;
	PSIStatement* _inqNumberOfCollectionsMatchingGroupWithIdStatement;
	PSIStatement* _inqNumberOfCollectionsByGroupIdMatchingGroupsWithIdsStatement;
	PSIStatement* _inqIdsOfAllGroupsStatement;
	PSIStatement* _inqIdsOfAllGroupsMatchedByAssetsStatement;
	PSIStatement* _inqIdsOfAllGroupsMatchedByCollectionsStatement;
	PSIStatement* _inqRemoveUnmatchedGroupsFromGroupsStatement;
	PSIStatement* _inqIdsOfAllGroupsInPrefixStatement;
	PSIStatement* _inqRemoveGroupsFromPrefixStatement;
	PSIStatement* _inqRemoveUnmatchedGroupsFromPrefixStatement;
	PSIStatement* _inqIdsOfAllGroupsInLookupStatement;
	PSIStatement* _inqRemoveGroupsFromLookupStatement;
	PSIStatement* _inqRemoveUnmatchedGroupsFromLookupStatement;
	CFDictionaryRef _inqGroupObjectsById;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _searchQueue;
	NSObject*<OS_dispatch_queue> _groupResultsQueue;
	NSDictionary* _inqSearchMetadata;
	long long _options;
	PSITokenizer* _tokenizer;
	NSMutableString* _tokenizerOutputString;
	NSMutableArray* _tokenizerOutputTokens;
	NSMutableArray* _tokenizerOutputNormalizedTokens;
	SCD_Struct_PS37 _tokenizerOutputRanges[8];
	NSString* _path;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) PSITokenizer * tokenizer; 
@property (readonly) NSObject*<OS_dispatch_queue> groupResultsQueue; 
@property (nonatomic,copy,readonly) NSString * path;                              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) long long options;                                 //@synthesize options=_options - In the implementation block
+(void)dropDatabaseAtPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(sqlite3Ref)_openDatabaseAtPath:(id)arg1 options:(long long)arg2 ;
+(void)_dropDatabase:(sqlite3Ref)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)searchDatabaseLog;
+(BOOL)integrityCheckDatabase:(sqlite3Ref)arg1 ;
-(id)allAssetUUIDsForGroupsWithCategories:(id)arg1 ;
-(id)allCollectionUUIDsWithCollectionType:(unsigned long long)arg1 ;
-(void)dropDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPath:(id)arg1 options:(long long)arg2 searchMetadata:(id)arg3 ;
-(id)wordEmbeddingVersion;
-(void)removeAllTripsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeTripsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCollectionsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAssetsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAssets:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addCollections:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addTrips:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAssetUUIDsForAssetIDs:(CFArrayRef)arg1 creationDateSorted:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)executeQuery:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
-(const CFSetRef)groupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3 ;
-(id)wordEmbeddingMatchesForToken:(id)arg1 ;
-(id)groupResultWithDateFilter:(id)arg1 ;
-(id)groupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)groupResultsQueue;
-(id)suggestionWhitelistedScenes;
-(id)meNodeIdentifier;
-(id)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2 ;
-(id)assetUUIDByAssetIdWithAssetIds:(id)arg1 ;
-(id)collectionResultByCollectionIdWithCollectionIds:(id)arg1 ;
-(id)tripResultByTripIdWithTripIds:(id)arg1 ;
-(void)executeStatementFromString:(id)arg1 ;
-(void)executeStatementFromString:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2 ;
-(id)statementFromString:(id)arg1 ;
-(void)executeStatement:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2 ;
-(long long)lastInsertedRowID;
-(void)executeStatement:(id)arg1 ;
-(void)linkTripWithId:(long long)arg1 toGroupWithId:(long long)arg2 ;
-(void)bindMatchingIds:(CFArrayRef)arg1 range:(NSRange)arg2 ;
-(void)unbindMatchingIds;
-(void)bindMatchingIds:(CFSetRef)arg1 ;
-(id)allTripUUIDs;
-(void)_inqPrepareAndExecuteStatement:(const char*)arg1 ;
-(sqlite3_stmtRef)_inqPrepareStatement:(const char*)arg1 ;
-(void)_inqPerformBatch:(/*^block*/id)arg1 ;
-(void)_inqSync:(/*^block*/id)arg1 ;
-(void)_inqAsync:(/*^block*/id)arg1 ;
-(void)_inqRemoveUUID:(id)arg1 objectType:(unsigned long long)arg2 isInBatch:(BOOL)arg3 ;
-(unsigned long long)_inqAssetIdWithAsset:(id)arg1 ;
-(void)_inqUpdateGATableWithGroupId:(unsigned long long)arg1 assetId:(unsigned long long)arg2 ;
-(unsigned long long)_inqUpdateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out BOOL*)arg5 ;
-(void)_inqRemoveUnusedGroups;
-(void)_inqUpdateSearchTermsWithSearchableTermsByGroupIds:(id)arg1 ;
-(unsigned long long)_inqCollectionIdWithCollection:(id)arg1 ;
-(void)_inqUpdateGCTableWithGroupId:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 ;
-(void)_removeUUIDs:(id)arg1 objectType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_inqExecutePreparedStatement:(sqlite3_stmtRef)arg1 withStatementBlock:(/*^block*/id)arg2 ;
-(CFSetRef)_inqNewGroupIdsWithCategories:(id)arg1 ;
-(CFArrayRef)_inqNewAssetIdsForGroupId:(unsigned long long)arg1 dateFilter:(id)arg2 ;
-(id)_inqAssetUUIDsForAssetIds:(CFSetRef)arg1 ;
-(id)newQueryWithSearchText:(id)arg1 queryTokens:(id)arg2 useWildcardSearchText:(BOOL)arg3 ;
-(id)_inqContentStringForGroupId:(unsigned long long)arg1 ;
-(CFArrayRef)_inqNewAssetIdsWithDateFilter:(id)arg1 ;
-(CFArrayRef)_inqNewCollectionIdsWithDateFilter:(id)arg1 ;
-(CFSetRef)_inqNewGroupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3 ;
-(id)_inqDequeueGroupObjectWithId:(unsigned long long)arg1 isCachedGroup:(BOOL*)arg2 ;
-(CFArrayRef)_inqNewCollectionIdsForGroupId:(unsigned long long)arg1 dateFilter:(id)arg2 ;
-(id)_inqGroupsWithMatchingGroupIds:(CFSetRef)arg1 dateFilter:(id)arg2 includeObjects:(BOOL)arg3 matchingPredicateBlock:(/*^block*/id)arg4 ;
-(id)_inqAssetUUIDByAssetIdWithAssetIds:(id)arg1 ;
-(id)_inqCollectionResultByCollectionIdWithCollectionIds:(id)arg1 ;
-(id)_inqGroupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2 ;
-(id)_inqAssetIdsByGroupIdForAssetIds:(id)arg1 ;
-(id)_inqCollectionIdsByGroupIdForCollectionIds:(id)arg1 ;
-(id)_inqNewSynonymTextsByOwningGroupIdWithGroupIds:(CFSetRef)arg1 ;
-(id)_inqNumberOfAssetsByGroupIdMatchingGroupsWithIds:(id)arg1 ;
-(id)_inqNumberOfCollectionsByGroupIdMatchingGroupsWithIds:(id)arg1 ;
-(unsigned long long)_inqAssetIdForUUID:(id)arg1 ;
-(void)_prepareTokenOutput:(tokenOutput_t*)arg1 forIndexing:(BOOL)arg2 ;
-(unsigned long long)_inqUpdateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 shouldUpdateOwningGroupId:(BOOL)arg5 didUpdateGroup:(out BOOL*)arg6 ;
-(void)_inqGetTokensFromString:(id)arg1 forIndexing:(BOOL)arg2 useWildcard:(BOOL)arg3 tokenOutput:(tokenOutput_t*)arg4 ;
-(unsigned long long)_inqGroupIdForCategory:(short)arg1 owningGroupId:(unsigned long long)arg2 contentString:(id)arg3 identifier:(id)arg4 insertIfNeeded:(BOOL)arg5 tokenOutput:(const tokenOutput_t*)arg6 shouldUpdateOwningGroupId:(BOOL)arg7 didUpdateGroup:(out BOOL*)arg8 ;
-(void)_inqAddToSearchTableWithGroupId:(unsigned long long)arg1 text:(id)arg2 category:(short)arg3 textIsSearchable:(BOOL)arg4 ;
-(unsigned long long)_inqCollectionIdForUUID:(id)arg1 ;
-(CFSetRef)_inqNewGroupIdsWithOwningGroupIds:(CFSetRef)arg1 ;
-(void)_inqInsertToSearchTablesWithGroupId:(unsigned long long)arg1 text:(id)arg2 identifier:(id)arg3 category:(short)arg4 ;
-(unsigned long long)_inqAssetIdForUUID:(id)arg1 uuid_0:(unsigned long long*)arg2 uuid_1:(unsigned long long*)arg3 ;
-(unsigned long long)_inqCollectionIdForUUID:(id)arg1 uuid_0:(unsigned long long*)arg2 uuid_1:(unsigned long long*)arg3 ;
-(void)_inqExecutePreparedStatement:(sqlite3_stmtRef)arg1 allowError:(int)arg2 withStatementBlock:(/*^block*/id)arg3 ;
-(id)_inqGroupWithStatement:(sqlite3_stmtRef)arg1 dateFilter:(id)arg2 includeObjects:(BOOL)arg3 ;
-(void)_inSearchQueueAsync:(/*^block*/id)arg1 ;
-(void)updateSearchMetadata:(id)arg1 ;
-(void)addAsset:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addCollection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addTrip:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeAssetWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCollectionWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeTripWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)newQueryWithSearchText:(id)arg1 ;
-(id)newQueryWithSearchText:(id)arg1 representedObjects:(id)arg2 useWildcardSearchText:(BOOL)arg3 ;
-(id)newQueryWithSearchText:(id)arg1 identifiers:(id)arg2 useWildcardSearchText:(BOOL)arg3 ;
-(id)_inqOwningContentStringForGroupResult:(id)arg1 ;
-(id)_inqAssetUUIDsForAssetIds:(CFArrayRef)arg1 range:(NSRange)arg2 creationDateSorted:(BOOL)arg3 ;
-(id)_inqCollectionResultsForCollectionIds:(CFArrayRef)arg1 range:(NSRange)arg2 ;
-(id)_inqGroupResultWithDateFilter:(id)arg1 ;
-(CFSetRef)_inqNewGroupIdsMatchingString:(id)arg1 textIsSearchable:(BOOL)arg2 ;
-(id)_inqGroupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_processNextKeywordSuggestionsForQuery:(id)arg1 groupResults:(id)arg2 allowIdentifiers:(BOOL)arg3 ;
-(unsigned long long)_inqNumberOfAssetsMatchingGroupWithId:(unsigned long long)arg1 ;
-(unsigned long long)_inqNumberOfCollectionsMatchingGroupWithId:(unsigned long long)arg1 ;
-(id)dumpPrefixStrings;
-(id)dumpLookupStrings;
-(BOOL)assetExistsWithUUID:(id)arg1 ;
-(void)_inqRecycleGroups;
-(CFSetRef)_inqNewSurvivingGroupIdsForDeleteOperationWithMatchingGroupIds:(CFSetRef)arg1 ;
-(CFSetRef)_inqNewGroupIdsForAssetId:(unsigned long long)arg1 ;
-(CFSetRef)_inqNewGroupIdsForAssetIds:(CFSetRef)arg1 ;
-(CFSetRef)_inqNewGroupIdsForCollectionId:(unsigned long long)arg1 ;
-(CFSetRef)_inqNewGroupIdsForCollectionIds:(CFSetRef)arg1 ;
-(void)prepareForNumberOfMatchingIds:(unsigned long long)arg1 ;
-(void)unprepareMatchingIds;
-(void)bindMatchingIds:(const long long*)arg1 numberOfMatchingIds:(unsigned long long)arg2 ;
-(void)_executeQuery:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
-(void)group:(id)arg1 fetchOwningContentString:(BOOL)arg2 assetIdRange:(NSRange)arg3 collectionIdRange:(NSRange)arg4 tripIdRange:(NSRange)arg5 completionHandler:(/*^block*/id)arg6 ;
-(unsigned long long)updateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out BOOL*)arg5 ;
-(long long)insertAsset:(id)arg1 ;
-(long long)insertCollection:(id)arg1 ;
-(long long)insertTrip:(id)arg1 ;
-(long long)insertGroup:(id)arg1 ;
-(void)removeUnusedGroups;
-(void)linkAssetWithId:(long long)arg1 toGroupWithId:(long long)arg2 ;
-(void)linkCollectionWithId:(long long)arg1 toGroupWithId:(long long)arg2 ;
-(id)allGroupIds;
-(id)groupIdsInPrefixTable;
-(id)groupIdsInLookupTable;
-(void)dealloc;
-(long long)options;
-(NSString *)path;
-(PSITokenizer *)tokenizer;
@end

