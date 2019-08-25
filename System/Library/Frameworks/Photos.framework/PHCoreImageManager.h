/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Photos/Photos-Structs.h>
@class NSObject, NSMapTable, PHConcurrentMapTable, NSMutableSet;

@interface PHCoreImageManager : NSObject {

	NSObject*<OS_dispatch_queue> _requestLookupTableIsolationQueue;
	NSMapTable* _requestLookupTable;
	PHConcurrentMapTable* _perDomainPreheatItemMapTables;
	PHConcurrentMapTable* _perDomainCloudPreheatItemMapTables;
	PHConcurrentMapTable* _perDomainHighPriorityRequestWaitGroups;
	NSMutableSet* _preheatBlobsToConsiderForCleanup;
	NSObject*<OS_dispatch_queue> _CPLDownloadUpdateIsolationQueue;
	NSObject*<OS_dispatch_queue> _CPLDownloadFireAndForgetRequestQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestLookupTableIsolationQueue;                  //@synthesize requestLookupTableIsolationQueue=_requestLookupTableIsolationQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * requestLookupTable;                                                //@synthesize requestLookupTable=_requestLookupTable - In the implementation block
@property (nonatomic,retain) PHConcurrentMapTable * perDomainPreheatItemMapTables;                           //@synthesize perDomainPreheatItemMapTables=_perDomainPreheatItemMapTables - In the implementation block
@property (nonatomic,retain) PHConcurrentMapTable * perDomainCloudPreheatItemMapTables;                      //@synthesize perDomainCloudPreheatItemMapTables=_perDomainCloudPreheatItemMapTables - In the implementation block
@property (nonatomic,retain) PHConcurrentMapTable * perDomainHighPriorityRequestWaitGroups;                  //@synthesize perDomainHighPriorityRequestWaitGroups=_perDomainHighPriorityRequestWaitGroups - In the implementation block
@property (nonatomic,retain) NSMutableSet * preheatBlobsToConsiderForCleanup;                                //@synthesize preheatBlobsToConsiderForCleanup=_preheatBlobsToConsiderForCleanup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> CPLDownloadUpdateIsolationQueue;                   //@synthesize CPLDownloadUpdateIsolationQueue=_CPLDownloadUpdateIsolationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> CPLDownloadFireAndForgetRequestQueue;              //@synthesize CPLDownloadFireAndForgetRequestQueue=_CPLDownloadFireAndForgetRequestQueue - In the implementation block
+(CGSize)_aspectedSizeWithSize:(CGSize)arg1 maxDimension:(double)arg2 ;
+(long long)_plImageVersionFromPHImageRequestOptionsVersion:(long long)arg1 ;
+(id)_degradedFormatWithPolicy:(long long)arg1 request:(id)arg2 hasAdjustmentsHandler:(/*^block*/id)arg3 ;
+(id)_descriptionForDomain:(id)arg1 ;
+(CGImageRef)_newResizedImageForImage:(CGImageRef)arg1 withSize:(CGSize)arg2 normalizedCropRect:(CGRect)arg3 contentMode:(long long)arg4 ;
+(void)_chooseFormatsForSize:(CGSize)arg1 contentMode:(long long)arg2 srcAspectRatio:(double)arg3 options:(id)arg4 hasAdjustmentsHandler:(/*^block*/id)arg5 desiredImagePixelSize:(CGSize*)arg6 bestFormat:(id*)arg7 degradedFormat:(id*)arg8 ;
+(long long)_wantedCloudPlaceholderKindForImageFormat:(id)arg1 ;
+(void)runBlockAsPrivilegedAsPhotosApp:(/*^block*/id)arg1 ;
+(id)_debugFilenameForAsset:(id)arg1 ;
+(id)_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3 ;
+(id)_fastestDegradedFormatForRequest:(id)arg1 hasAdjustmentsHandler:(/*^block*/id)arg2 ;
+(id)sharedInstance;
-(void)_updateCPLDownloadStatesOnStatusDidChangeNotification:(id)arg1 ;
-(void)_updateCPLDownloadStatesOnConnectionLostNotification:(id)arg1 ;
-(PHConcurrentMapTable *)perDomainHighPriorityRequestWaitGroups;
-(NSMutableSet *)preheatBlobsToConsiderForCleanup;
-(void)_inq_main_cleanupPreheatBlobs;
-(PHConcurrentMapTable *)perDomainCloudPreheatItemMapTables;
-(PHConcurrentMapTable *)perDomainPreheatItemMapTables;
-(void)_considerPreheatItemForCleanup:(id)arg1 asset:(id)arg2 domain:(id)arg3 ;
-(id)_preheatItemMapTableWithFormat:(int)arg1 CPLPrefetching:(BOOL)arg2 domain:(id)arg3 createIfNeeded:(BOOL)arg4 ;
-(id)_preheatItemSourceWithFormat:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)CPLDownloadUpdateIsolationQueue;
-(void)asyncEnumeratePendingCPLDownloadRequestsWithBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRequest:(id)arg1 withDownloadContext:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)requestLookupTableIsolationQueue;
-(NSMapTable *)requestLookupTable;
-(void)asyncEnumeratePendingRequestsWithBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_resizeUIImage:(id)arg1 withRequest:(id)arg2 ;
-(void)_fetchAnySizeImageAsNon5551BytesPossiblyThruAssetsdAndCPLWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(CGSize)arg4 wantsProperties:(BOOL)arg5 networkAccessAllowed:(BOOL)arg6 networkAccessForced:(BOOL)arg7 trackCPLDownload:(BOOL)arg8 sync:(BOOL)arg9 completionHandler:(/*^block*/id)arg10 ;
-(id)_setupCPLDownloadWaitGroupForRequest:(id)arg1 withTimeout:(unsigned long long)arg2 ;
-(void)_fireAndForgetCPLDownloadWithRequest:(id)arg1 format:(int)arg2 ;
-(void)_clearCPLDownloadWaitGroupForRequest:(id)arg1 ;
-(void)_fetchAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 optimalSourcePixelSize:(CGSize)arg5 sync:(BOOL)arg6 fireAndForgetCPLDownload:(BOOL)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)_asyncGenerateLiveRenderedImageWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 desiredImagePixelSize:(CGSize)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_originalPreheatItemCreateTransientWithAsset:(id)arg1 optimalSourcePixelSize:(CGSize)arg2 options:(unsigned)arg3 domain:(id)arg4 ;
-(id)_fastFetchAdjustmentDataWithRequest:(id)arg1 ;
-(void)_handleSyncImageRequestForBRGA5551:(id)arg1 ;
-(void)_registerRequest:(id)arg1 ;
-(void)_unregisterRequest:(id)arg1 ;
-(void)_fetchAdjustmentDataThruAssetsdAndCPLHandlerWithRequest:(id)arg1 networkAccessAllowed:(BOOL)arg2 trackCPLDownload:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_preheatItemWithAsset:(id)arg1 format:(int)arg2 CPLPrefetching:(BOOL)arg3 domain:(id)arg4 ;
-(void)_fetchPreheatableAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 preheatItem:(id)arg5 optimalSourcePixelSize:(CGSize)arg6 sync:(BOOL)arg7 fireAndForgetCPLDownload:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)_handleNormalImageRequest:(id)arg1 library:(id)arg2 deliveryMode:(long long)arg3 degradedFormat:(id)arg4 bestFormat:(id)arg5 optimalSourcePixelSize:(CGSize)arg6 wantsImageDataOrURL:(BOOL)arg7 sync:(BOOL)arg8 isFinalStageOfStagedRequest:(BOOL)arg9 isResponseToSharedStreamsDownload:(BOOL)arg10 ;
-(id)_preheatItemCreateIfNeededWithAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(CGSize)arg3 options:(unsigned)arg4 CPLPrefetching:(BOOL)arg5 outDidExist:(BOOL*)arg6 domain:(id)arg7 ;
-(id)_highPriorityRequestWaitGroupWithDomain:(id)arg1 ;
-(void)_performPreheatReferenceCountingOperationForAssets:(id)arg1 CPLPrefetching:(BOOL)arg2 domain:(id)arg3 operation:(long long)arg4 passingTestHandler:(/*^block*/id)arg5 ;
-(void)_processImageRequest:(id)arg1 sync:(BOOL)arg2 ;
-(void)_cancelAsynchronousRequestWithID:(int)arg1 ;
-(void)setRequestLookupTableIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRequestLookupTable:(NSMapTable *)arg1 ;
-(void)setPerDomainPreheatItemMapTables:(PHConcurrentMapTable *)arg1 ;
-(void)setPerDomainCloudPreheatItemMapTables:(PHConcurrentMapTable *)arg1 ;
-(void)setPerDomainHighPriorityRequestWaitGroups:(PHConcurrentMapTable *)arg1 ;
-(void)setPreheatBlobsToConsiderForCleanup:(NSMutableSet *)arg1 ;
-(void)setCPLDownloadUpdateIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)CPLDownloadFireAndForgetRequestQueue;
-(void)setCPLDownloadFireAndForgetRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

