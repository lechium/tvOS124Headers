/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>

@class NSPersistentHistoryToken, NSArray, NSNumber;

@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest {

	NSPersistentHistoryToken* _token;
	long long _resultType;
	NSArray* _transactionIDs;
	NSNumber* _transactionNumber;
	struct {
		unsigned _useQueryGenerationToken : 1;
		unsigned _deleteHistoryRequest : 1;
		unsigned _fetchTransactionForToken : 1;
		unsigned _reservedPersistentHistoryChangeRequestDescription : 29;
	}  _persistentHistoryChangeRequestDescriptionFlags;
	id* _additionalPrivateIvars;

}

@property (assign) long long resultType;                            //@synthesize resultType=_resultType - In the implementation block
@property (readonly) NSPersistentHistoryToken * token;              //@synthesize token=_token - In the implementation block
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)fetchHistoryTransactionForToken:(id)arg1 ;
+(id)deleteHistoryBeforeDate:(id)arg1 ;
+(id)fetchHistoryAfterDate:(id)arg1 ;
+(id)fetchHistoryAfterTransaction:(id)arg1 ;
+(id)deleteHistoryBeforeTransaction:(id)arg1 ;
+(id)fetchHistoryAfterToken:(id)arg1 ;
+(id)deleteHistoryBeforeToken:(id)arg1 ;
-(id)propertiesToFetch;
-(id)propertiesToGroupBy;
-(id)encodeForXPC;
-(BOOL)isFetchTransactionForToken;
-(id)initWithTransactionToken:(id)arg1 ;
-(id)initWithDate:(id)arg1 delete:(BOOL)arg2 ;
-(id)initWithToken:(id)arg1 delete:(BOOL)arg2 ;
-(id)propertiesToFetchForEntity:(id)arg1 includeTransactionStrings:(BOOL)arg2 ;
-(id)initWithTransactionIDs:(id)arg1 ;
-(id)initWithTransactionID:(id)arg1 delete:(BOOL)arg2 transactionOnly:(BOOL)arg3 ;
-(BOOL)includesPropertyValues;
-(id)propertiesToFetchForEntity:(id)arg1 ;
-(id)entityNameToFetch;
-(BOOL)useQueryGenerationToken;
-(void)setUseQueryGenerationToken:(BOOL)arg1 ;
-(BOOL)returnsDistinctResults;
-(unsigned long long)requestType;
-(long long)resultType;
-(void)setResultType:(long long)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)setFetchBatchSize:(unsigned long long)arg1 ;
-(BOOL)includesSubentities;
-(unsigned long long)fetchBatchSize;
-(id)transactionNumber;
-(id)initWithToken:(id)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchLimit;
-(unsigned long long)fetchOffset;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)date;
-(BOOL)isDelete;
-(id)sortDescriptors;
-(id)predicate;
-(NSPersistentHistoryToken *)token;
@end

