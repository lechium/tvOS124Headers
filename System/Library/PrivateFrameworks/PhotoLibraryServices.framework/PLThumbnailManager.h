/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLThumbPersistenceManager;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableDictionary, NSLock, NSMutableSet, NSMutableArray, PLThumbnailCascadingDownscaleContext, PLPhotoLibraryPathManager;

@interface PLThumbnailManager : NSObject {

	NSMutableDictionary* _thumbManagersByFormat;
	id<PLThumbPersistenceManager> _lastUsedThumbManager;
	int _lastUsedThumbManagerFormatID;
	NSLock* _thumbManagersLock;
	NSMutableSet* _previouslyRequestedThumbnailFixOIDs;
	NSMutableSet* _requestedThumbnailFixAssets;
	NSMutableArray* _alreadyFailedAssetObjectIDsForRebuild;
	NSLock* _fixLock;
	PLThumbnailCascadingDownscaleContext* _downscaleContext;
	id _observerToken;
	PLPhotoLibraryPathManager* _pathManager;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * thumbManagersByFormat;              //@synthesize thumbManagersByFormat=_thumbManagersByFormat - In the implementation block
@property (nonatomic,retain) id observerToken;                                                  //@synthesize observerToken=_observerToken - In the implementation block
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;                         //@synthesize pathManager=_pathManager - In the implementation block
+(id)defaultThumbnailManager;
+(BOOL)isMissingThumbnailTables;
+(BOOL)hasThumbnailVersionMismatch;
+(void)removeObsoleteMetadata;
+(id)cameraPreviewWellAssetFetchRequest;
+(void)refetchAndSaveCameraPreviewWellImageIfNecessaryForAssetDidSave:(id)arg1 ;
+(void)saveCameraPreviewWellImageForAsset:(id)arg1 ;
+(BOOL)hasRebuildThumbnailsRequest;
+(id)supportedThumbnailFormatIDs;
+(void)resetThumbnails;
+(BOOL)useImageTableForFormat:(int)arg1 ;
+(id)_allPossibleThumbnailFormatIDs;
+(int)_configurationThumbnailVersion;
+(int)thumbnailVersionCurrent;
+(int)_configurationThumbnailFormat;
+(BOOL)_thumbnailChangeContainsOnlyTableDeprecationsFromVersion:(int)arg1 toVersion:(int)arg2 fromFormat:(int)arg3 toFormat:(int)arg4 ;
+(BOOL)hasDeprecationsOnly;
+(void)removeThumbnailTablesUnsupportedOnly:(BOOL)arg1 ;
+(id)_missingThumbnailPredicate;
+(id)_rebuildThumbnailsQueue;
+(void)_recordRebuildThumbnailsAttempt;
+(void)removeRebuildThumbnailsRequest:(const char*)arg1 ;
+(id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)arg1 ;
+(int)_supportedThumbnailFormatIDFromGeneralFormatID:(int)arg1 ;
+(id)_supportedTableFormats;
+(id)_fastThumbPersistenceManagers;
+(id)_imageTableSpecifications;
+(id)_slowThumbPersistenceManagers;
+(id)_preheatItemSourcesByFormatID;
+(id)_cameraPreviewWellMetadataQueue;
+(id)_fetchCameraPreviewWellMetadata;
+(id)cameraPreviewWellAssetUUIDFromPersistedFile;
+(void)_saveCameraPreviewWellImage:(CGImageRef)arg1 assetUUID:(id)arg2 ;
+(id)_allowedForCameraPreviewWellPredicate;
+(void)_refetchAndSaveCameraPreviewWellImage;
+(BOOL)_cameraPreviewWellMetadataLoadAndUpdateIfNeeded:(id*)arg1 ;
+(BOOL)_compareAsset:(id)arg1 toMetadata:(id)arg2 ;
+(void)_updateCameraPreviewWellMetadataFromAsset:(id)arg1 ;
+(id)cameraPreviewWellImageQueue;
+(id)imageTableForFormat:(int)arg1 ;
+(void)addRebuildThumbnailsRequest;
+(BOOL)hasMissingThumbnailsInLibrary:(id)arg1 ;
+(void)rebuildAllMissingThumbnails;
+(BOOL)isRebuildingThumbnails;
+(BOOL)hasExceededRebuildThumbnailRequestLimit;
+(void)handleRebuildThumbnailRequestPersistentFailure;
+(id)supportedThumbnailFormats;
+(BOOL)cameraPreviewWellSupportedOnCurrentDevice;
+(BOOL)assetIsAllowedForCameraPreviewWell:(id)arg1 ;
+(BOOL)assetIsCameraPreviewWellAsset:(id)arg1 ;
-(id)thumbnailJPEGPathForPhoto:(id)arg1 ;
-(id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1 ;
-(void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2 ;
-(void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3 ;
-(id)initWithPhotoLibraryPathManager:(id)arg1 ;
-(void)setObserverToken:(id)arg1 ;
-(id)observerToken;
-(id)_thumbManagerForFormatID:(int)arg1 ;
-(long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 error:(id*)arg2 ;
-(void)_discardAlreadyFailedAssetObjectIDsForRebuild;
-(void)_setThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4 ;
-(id)_dataForAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9 ;
-(id)placeholderDataForFormat:(int)arg1 photoImageSize:(CGSize)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(CGImageRef)newImageForAsset:(id)arg1 format:(id)arg2 ;
-(void)discardCachedThumbnailDownscalerContexts;
-(void)setThumbnailsForAsset:(id)arg1 withImage:(id)arg2 ;
-(id)dataForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 width:(int*)arg4 height:(int*)arg5 bytesPerRow:(int*)arg6 dataWidth:(int*)arg7 dataHeight:(int*)arg8 imageDataOffset:(int*)arg9 ;
-(id)_tableDescriptions;
-(id)preheatItemSourceForFormatID:(int)arg1 ;
-(NSMutableDictionary *)thumbManagersByFormat;
-(PLPhotoLibraryPathManager *)pathManager;
-(void)dealloc;
@end

