/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableArray, PHChangeRequestHelper;

@interface PHRelationshipChangeRequestHelper : NSObject {

	BOOL _allowsInsert;
	BOOL _allowsMove;
	BOOL _allowsRemove;
	NSString* _relationshipName;
	NSString* _destinationEntityName;
	NSString* _destinationUUIDKeyPath;
	NSArray* _originalObjectIDs;
	NSMutableArray* _mutableObjectIDsAndUUIDs;
	/*^block*/id _isDestinationObjectValid;
	PHChangeRequestHelper* _changeRequestHelper;

}

@property (nonatomic,readonly) NSString * relationshipName;                            //@synthesize relationshipName=_relationshipName - In the implementation block
@property (nonatomic,retain) NSString * destinationEntityName;                         //@synthesize destinationEntityName=_destinationEntityName - In the implementation block
@property (nonatomic,retain) NSString * destinationUUIDKeyPath;                        //@synthesize destinationUUIDKeyPath=_destinationUUIDKeyPath - In the implementation block
@property (assign,nonatomic) BOOL allowsInsert;                                        //@synthesize allowsInsert=_allowsInsert - In the implementation block
@property (assign,nonatomic) BOOL allowsMove;                                          //@synthesize allowsMove=_allowsMove - In the implementation block
@property (assign,nonatomic) BOOL allowsRemove;                                        //@synthesize allowsRemove=_allowsRemove - In the implementation block
@property (nonatomic,retain) NSArray * originalObjectIDs;                              //@synthesize originalObjectIDs=_originalObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableObjectIDsAndUUIDs;                //@synthesize mutableObjectIDsAndUUIDs=_mutableObjectIDsAndUUIDs - In the implementation block
@property (nonatomic,copy) id isDestinationObjectValid;                                //@synthesize isDestinationObjectValid=_isDestinationObjectValid - In the implementation block
@property (nonatomic,retain) PHChangeRequestHelper * changeRequestHelper;              //@synthesize changeRequestHelper=_changeRequestHelper - In the implementation block
+(id)_offsetsFromSourceOIDs:(id)arg1 toManagedObjects:(id)arg2 ;
+(id)objectIDsOrUUIDsFromPHObjects:(id)arg1 ;
-(NSString *)relationshipName;
-(NSString *)destinationEntityName;
-(void)setDestinationEntityName:(NSString *)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithRelationshipName:(id)arg1 changeRequestHelper:(id)arg2 ;
-(id)initWithRelationshipName:(id)arg1 xpcDict:(id)arg2 changeRequestHelper:(id)arg3 ;
-(NSMutableArray *)mutableObjectIDsAndUUIDs;
-(void)setAllowsInsert:(BOOL)arg1 ;
-(void)setAllowsMove:(BOOL)arg1 ;
-(void)setAllowsRemove:(BOOL)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 unorderedMutableChildren:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyMutationsToManagedObjectToOneRelationship:(id)arg1 error:(id*)arg2 ;
-(NSArray *)originalObjectIDs;
-(void)setOriginalObjectIDs:(NSArray *)arg1 ;
-(void)setMutableObjectIDsAndUUIDs:(NSMutableArray *)arg1 ;
-(BOOL)allowsRemove;
-(BOOL)allowsInsert;
-(BOOL)allowsMove;
-(NSString *)destinationUUIDKeyPath;
-(id)isDestinationObjectValid;
-(BOOL)applyMutationsToManagedObject:(id)arg1 unorderedMutableChildren:(id)arg2 inserts:(id*)arg3 deletes:(id*)arg4 error:(id*)arg5 ;
-(PHChangeRequestHelper *)changeRequestHelper;
-(void)prepareIfNeededWithExistentObjectIDs:(id)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 orderedMutableChildren:(id)arg2 error:(id*)arg3 ;
-(void)setDestinationUUIDKeyPath:(NSString *)arg1 ;
-(void)setIsDestinationObjectValid:(id)arg1 ;
-(void)setChangeRequestHelper:(PHChangeRequestHelper *)arg1 ;
@end

