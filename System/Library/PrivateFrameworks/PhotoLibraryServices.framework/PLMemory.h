/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLSearchableAssetCollection.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>

@class NSString, NSDate, NSDictionary, NSData, PLManagedAsset, NSSet;

@interface PLMemory : PLManagedObject <PLSearchableAssetCollection, PLCloudDeletable> {

	BOOL _needsPersistenceUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) NSDate * keyAssetCreationDate; 
@property (nonatomic,readonly) NSDate * searchableStartDate; 
@property (nonatomic,readonly) NSDate * searchableEndDate; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (assign,nonatomic) BOOL needsPersistenceUpdate;                      //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,nonatomic) short category; 
@property (assign,nonatomic) short subcategory; 
@property (assign,nonatomic) BOOL rejected; 
@property (assign,nonatomic) BOOL favorite; 
@property (assign,nonatomic) BOOL pending; 
@property (assign,nonatomic) BOOL userCreated; 
@property (nonatomic,retain) NSDictionary * movieAssetState; 
@property (nonatomic,retain) NSData * movieData; 
@property (assign,nonatomic) long long photosGraphVersion; 
@property (nonatomic,retain) NSData * photosGraphData; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) short cloudLocalState; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (nonatomic,retain) NSDate * lastViewedDate; 
@property (nonatomic,retain) NSDate * lastMoviePlayedDate; 
@property (nonatomic,retain) NSData * assetListPredicate; 
@property (nonatomic,retain) NSSet * representativeAssets; 
@property (nonatomic,retain) NSSet * curatedAssets; 
@property (nonatomic,retain) NSSet * extendedCuratedAssets; 
@property (nonatomic,retain) NSSet * movieCuratedAssets; 
@property (assign,nonatomic) short notificationState; 
@property (nonatomic,retain) NSData * blacklistedFeature; 
@property (assign,nonatomic) long long playCount; 
@property (assign,nonatomic) long long shareCount; 
@property (assign,nonatomic) long long viewCount; 
@property (assign,nonatomic) long long pendingPlayCount; 
@property (assign,nonatomic) long long pendingShareCount; 
@property (assign,nonatomic) long long pendingViewCount; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)baseSearchIndexPredicate;
+(id)memoriesToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2 ;
+(id)memoryWithUUID:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)memoriesWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 creationDate:(id)arg5 ;
+(void)deleteMemoriesWithObjectIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(BOOL)arg2 ;
+(void)deletePendingMemoriesCreatedBefore:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(BOOL)indexTitleForMemoryCategory:(unsigned long long)arg1 ;
+(id)memoriesToPrefetchInPhotoLibrary:(id)arg1 ;
+(id)_memoriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4 ;
+(BOOL)_shouldPrefetchMemoryMovieCuratedAssetsInPhotoLibrary:(id)arg1 ;
+(id)entityName;
-(void)delete;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1 ;
-(BOOL)supportsCloudUpload;
-(long long)cloudDeletionType;
-(id)cplMemoryChange;
-(id)cplFullRecord;
-(NSString *)keyAssetUUID;
-(void)prepareForDeletion;
-(void)persistMetadataToFileSystem;
-(id)searchIndexContents;
-(NSDate *)searchableStartDate;
-(NSDate *)searchableEndDate;
-(NSDate *)keyAssetCreationDate;
-(unsigned long long)searchIndexCategory;
-(void)willSave;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(void)didSave;
-(BOOL)needsPersistenceUpdate;
-(void)removePersistedFileSystemData;
-(NSString *)cloudUUIDForDeletion;
-(id)calculateKeyAsset;
-(BOOL)isSyncableChange;
-(void)updateWithCPLMemoryChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(BOOL)isValidForPersistence;
-(unsigned long long)numberOfAssets;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
@end
