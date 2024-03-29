/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSString, PHChangeRequestHelper, NSDictionary, PHRelationshipChangeRequestHelper, NSDate, PHObjectPlaceholder, NSData, PHMemoryFeature, NSManagedObjectID;

@interface PHMemoryChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {

	BOOL _clientEntitled;
	BOOL _clientEntitledToMemoryMutation;
	NSString* _clientName;
	BOOL _incrementPlayCount;
	BOOL _incrementShareCount;
	BOOL _incrementViewCount;
	int _clientProcessID;
	PHChangeRequestHelper* _helper;
	NSDictionary* _movieAssetState;
	PHRelationshipChangeRequestHelper* _keyAssetHelper;
	PHRelationshipChangeRequestHelper* _representativeAssetsHelper;
	PHRelationshipChangeRequestHelper* _curatedAssetsHelper;
	PHRelationshipChangeRequestHelper* _extendedCuratedAssetsHelper;
	PHRelationshipChangeRequestHelper* _movieCuratedAssetsHelper;

}

@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * keyAssetHelper;                           //@synthesize keyAssetHelper=_keyAssetHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * representativeAssetsHelper;               //@synthesize representativeAssetsHelper=_representativeAssetsHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * curatedAssetsHelper;                      //@synthesize curatedAssetsHelper=_curatedAssetsHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * extendedCuratedAssetsHelper;              //@synthesize extendedCuratedAssetsHelper=_extendedCuratedAssetsHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * movieCuratedAssetsHelper;                 //@synthesize movieCuratedAssetsHelper=_movieCuratedAssetsHelper - In the implementation block
@property (nonatomic,readonly) BOOL clientEntitledToMemoryMutation;                                          //@synthesize clientEntitledToMemoryMutation=_clientEntitledToMemoryMutation - In the implementation block
@property (assign,nonatomic) unsigned long long category; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedMemory; 
@property (assign,getter=isRejected,nonatomic) BOOL rejected; 
@property (assign,getter=isFavorite,nonatomic) BOOL favorite; 
@property (assign,getter=isPending,nonatomic) BOOL pending; 
@property (assign,getter=isUserCreated,nonatomic) BOOL userCreated; 
@property (assign,nonatomic) double score; 
@property (nonatomic,readonly) NSDictionary * movieAssetState;                                               //@synthesize movieAssetState=_movieAssetState - In the implementation block
@property (nonatomic,retain) NSData * movieData; 
@property (nonatomic,retain) NSData * photosGraphData; 
@property (assign,nonatomic) long long photosGraphVersion; 
@property (nonatomic,retain) NSDate * lastViewedDate; 
@property (nonatomic,retain) NSDate * lastMoviePlayedDate; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) unsigned long long notificationState; 
@property (nonatomic,retain) PHMemoryFeature * blacklistedFeature; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled;                                  //@synthesize clientEntitled=_clientEntitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                                        //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                                                          //@synthesize clientProcessID=_clientProcessID - In the implementation block
@property (getter=isNew,readonly) BOOL new; 
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                                               //@synthesize helper=_helper - In the implementation block
@property (getter=isMutated,readonly) BOOL mutated; 
+(BOOL)canGenerateUUIDWithoutEntitlements;
+(id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 subcategory:(unsigned long long)arg5 representativeAssets:(id)arg6 curatedAssets:(id)arg7 keyAsset:(id)arg8 ;
+(BOOL)_shouldAcceptProposedAttributes:(id)arg1 ;
+(long long)_titleFormatForProposedAttributes:(id)arg1 ;
+(id)_preferredAttributesForMemoryCreationFromObject:(id)arg1 withSuccess:(BOOL)arg2 title:(id)arg3 subtitle:(id)arg4 error:(id)arg5 proposedAttributes:(id)arg6 ;
+(id)validateMemoryTitle:(id)arg1 error:(id*)arg2 ;
+(id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 representativeAssets:(id)arg5 curatedAssets:(id)arg6 keyAsset:(id)arg7 ;
+(id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 assets:(id)arg5 curatedAssets:(id)arg6 keyAsset:(id)arg7 ;
+(id)preferredAttributesForMemoryCreationFromCollectionList:(id)arg1 proposedAttributes:(id)arg2 ;
+(id)changeRequestForRemotelyViewedMemoryWithLocalIdentifier:(id)arg1 ;
+(id)changeRequestForMemory:(id)arg1 ;
+(void)deleteMemories:(id)arg1 ;
+(id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 subcategory:(unsigned long long)arg5 representativeAssets:(id)arg6 curatedAssets:(id)arg7 extendedCuratedAssets:(id)arg8 keyAsset:(id)arg9 ;
+(id)preferredAttributesForMemoryCreationFromPeople:(id)arg1 proposedAttributes:(id)arg2 ;
+(id)preferredAttributesForMemoryCreationFromAssetCollection:(id)arg1 proposedAttributes:(id)arg2 ;
-(double)score;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(void)setScore:(double)arg1 ;
-(BOOL)isFavorite;
-(NSData *)photosGraphData;
-(void)setSubcategory:(unsigned long long)arg1 ;
-(NSDictionary *)movieAssetState;
-(PHMemoryFeature *)blacklistedFeature;
-(void)setMovieCuratedAssets:(id)arg1 ;
-(NSString *)managedEntityName;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)isClientEntitled;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(int)clientProcessID;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(PHChangeRequestHelper *)helper;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)didMutate;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)isMutated;
-(void)_prepareAssetIDsIfNeeded;
-(NSDate *)lastMoviePlayedDate;
-(void)setRepresentativeAssets:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 keyAsset:(id)arg4 ;
-(PHRelationshipChangeRequestHelper *)representativeAssetsHelper;
-(PHRelationshipChangeRequestHelper *)curatedAssetsHelper;
-(PHRelationshipChangeRequestHelper *)extendedCuratedAssetsHelper;
-(PHRelationshipChangeRequestHelper *)keyAssetHelper;
-(PHRelationshipChangeRequestHelper *)movieCuratedAssetsHelper;
-(id)_mutableRepresentativeAssetObjectIDsAndUUIDs;
-(id)_mutableCuratedAssetObjectIDsAndUUIDs;
-(id)_mutableExtendedCuratedAssetObjectIDsAndUUIDs;
-(id)_mutableKeyAssetObjectIDsAndUUIDs;
-(BOOL)clientEntitledToMemoryMutation;
-(void)setQueryHintObject:(id)arg1 ;
-(void)incrementShareCount;
-(NSManagedObjectID *)objectID;
-(void)setFavorite:(BOOL)arg1 ;
-(void)setRejected:(BOOL)arg1 ;
-(void)setBlacklistedFeature:(PHMemoryFeature *)arg1 ;
-(void)setUserCreated:(BOOL)arg1 ;
-(void)setKeyAsset:(id)arg1 ;
-(void)setNotificationState:(unsigned long long)arg1 ;
-(unsigned long long)subcategory;
-(void)setPhotosGraphData:(NSData *)arg1 ;
-(long long)photosGraphVersion;
-(void)setPhotosGraphVersion:(long long)arg1 ;
-(void)setMovieData:(NSData *)arg1 ;
-(void)setQueryHintObjects:(id)arg1 ;
-(unsigned long long)notificationState;
-(BOOL)isRejected;
-(BOOL)isPending;
-(NSData *)movieData;
-(NSDate *)lastViewedDate;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)isUserCreated;
-(void)setLastViewedDate:(NSDate *)arg1 ;
-(void)incrementViewCount;
-(void)setLastMoviePlayedDate:(NSDate *)arg1 ;
-(void)incrementPlayCount;
-(PHObjectPlaceholder *)placeholderForCreatedMemory;
-(BOOL)isNew;
-(NSString *)clientName;
-(void)setMovieStateData:(id)arg1 forAsset:(id)arg2 ;
-(NSString *)description;
-(NSString *)uuid;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
@end

