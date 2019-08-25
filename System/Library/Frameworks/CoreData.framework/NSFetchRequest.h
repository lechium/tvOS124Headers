/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSPredicate, NSEntityDescription, NSString;

@interface NSFetchRequest : NSPersistentStoreRequest <NSSecureCoding, NSCoding> {

	NSArray* _groupByProperties;
	NSPredicate* _havingPredicate;
	id* _additionalPrivateIvars;
	NSArray* _valuesToFetch;
	NSEntityDescription* _entity;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned long long _batchSize;
	unsigned long long _fetchLimit;
	NSArray* _relationshipKeyPathsForPrefetching;
	struct {
		unsigned distinctValuesOnly : 1;
		unsigned includesSubentities : 1;
		unsigned includesPropertyValues : 1;
		unsigned resultType : 3;
		unsigned returnsObjectsAsFaults : 1;
		unsigned excludePendingChanges : 1;
		unsigned isInUse : 1;
		unsigned entityIsName : 1;
		unsigned refreshesRefetched : 1;
		unsigned propertiesValidated : 1;
		unsigned disableCaching : 1;
		unsigned _RESERVED : 19;
	}  _flags;

}

@property (nonatomic,retain) NSEntityDescription * entity; 
@property (nonatomic,readonly) NSString * entityName; 
@property (nonatomic,retain) NSPredicate * predicate; 
@property (nonatomic,retain) NSArray * sortDescriptors; 
@property (assign,nonatomic) unsigned long long fetchLimit; 
@property (nonatomic,retain) NSArray * affectedStores; 
@property (assign,nonatomic) unsigned long long resultType; 
@property (assign,nonatomic) BOOL includesSubentities; 
@property (assign,nonatomic) BOOL includesPropertyValues; 
@property (assign,nonatomic) BOOL returnsObjectsAsFaults; 
@property (nonatomic,copy) NSArray * relationshipKeyPathsForPrefetching; 
@property (assign,nonatomic) BOOL includesPendingChanges; 
@property (assign,nonatomic) BOOL returnsDistinctResults; 
@property (nonatomic,copy) NSArray * propertiesToFetch; 
@property (assign,nonatomic) unsigned long long fetchOffset; 
@property (assign,nonatomic) unsigned long long fetchBatchSize; 
@property (assign,nonatomic) BOOL shouldRefreshRefetchedObjects; 
@property (nonatomic,copy) NSArray * propertiesToGroupBy; 
@property (nonatomic,retain) NSPredicate * havingPredicate; 
+(BOOL)accessInstanceVariablesDirectly;
+(id)_newDenormalizedFetchProperties:(id)arg1 ;
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)fetchRequestWithEntityName:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(void)_setFlagsFromXPCEncoding:(id)arg1 ;
-(id)_XPCEncodedFlags;
-(NSPredicate *)havingPredicate;
-(NSArray *)relationshipKeyPathsForPrefetching;
-(NSArray *)propertiesToFetch;
-(id)_newNormalizedFetchProperties:(id)arg1 ;
-(NSArray *)propertiesToGroupBy;
-(id)encodeForXPC;
-(BOOL)_disablePersistentStoreResultCaching;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(void)setShouldRefreshRefetchedObjects:(BOOL)arg1 ;
-(BOOL)includesPropertyValues;
-(BOOL)returnsDistinctResults;
-(NSArray *)affectedStores;
-(BOOL)returnsObjectsAsFaults;
-(BOOL)shouldRefreshRefetchedObjects;
-(void)_setDisablePersistentStoreResultCaching:(BOOL)arg1 ;
-(void)_throwIfNotEditable;
-(BOOL)_isEditable;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7 ;
-(BOOL)includesPendingChanges;
-(id)_newValidatedProperties:(id)arg1 groupBy:(BOOL)arg2 error:(id*)arg3 ;
-(id)groupByProperties;
-(void)setGroupByProperties:(id)arg1 ;
-(BOOL)_isCachingFetchRequest;
-(void)_setAsyncResultHandle:(id)arg1 ;
-(id)_asyncResultHandle;
-(id)_copyForDirtyContext;
-(void)_incrementInUseCounter;
-(unsigned long long)requestType;
-(unsigned long long)resultType;
-(void)setResultType:(unsigned long long)arg1 ;
-(NSEntityDescription *)entity;
-(void)setEntity:(NSEntityDescription *)arg1 ;
-(BOOL)hasChanges;
-(void)setPropertiesToFetch:(NSArray *)arg1 ;
-(void)setPropertiesToGroupBy:(NSArray *)arg1 ;
-(id)initWithEntityName:(id)arg1 ;
-(void)setFetchBatchSize:(unsigned long long)arg1 ;
-(void)setReturnsObjectsAsFaults:(BOOL)arg1 ;
-(void)setIncludesPropertyValues:(BOOL)arg1 ;
-(void)setIncludesPendingChanges:(BOOL)arg1 ;
-(id)stores;
-(void)setIncludesSubentities:(BOOL)arg1 ;
-(BOOL)includesSubentities;
-(unsigned long long)fetchBatchSize;
-(void)setHavingPredicate:(NSPredicate *)arg1 ;
-(void)setFetchOffset:(unsigned long long)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(NSString *)entityName;
-(void)setRelationshipKeyPathsForPrefetching:(NSArray *)arg1 ;
-(unsigned long long)fetchLimit;
-(void)setAffectedStores:(NSArray *)arg1 ;
-(unsigned long long)fetchOffset;
-(void)setReturnsDistinctResults:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(id)execute:(id*)arg1 ;
@end
