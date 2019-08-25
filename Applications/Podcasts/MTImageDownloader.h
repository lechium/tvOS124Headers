//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTURLSessionManager.h"

@class MTImageStore, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MTImageDownloader : MTURLSessionManager
{
    _Bool _hasPurgedTemporaryResourcesDirectory;	// 8 = 0x8
    NSMutableDictionary *_clientRequestsByUrl;	// 16 = 0x10
    MTImageStore *_imageStore;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_syncQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_imageWorkQueue;	// 40 = 0x28
}

@property(nonatomic) _Bool hasPurgedTemporaryResourcesDirectory; // @synthesize hasPurgedTemporaryResourcesDirectory=_hasPurgedTemporaryResourcesDirectory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageWorkQueue; // @synthesize imageWorkQueue=_imageWorkQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) MTImageStore *imageStore; // @synthesize imageStore=_imageStore;
@property(retain, nonatomic) NSMutableDictionary *clientRequestsByUrl; // @synthesize clientRequestsByUrl=_clientRequestsByUrl;
- (void).cxx_destruct;	// IMP=0x000000010002b644
- (double)_urlSessionResourceTimeout;	// IMP=0x000000010002b588
- (_Bool)_shouldDiscardTransparency;	// IMP=0x000000010002b580
- (id)_temporaryImagePathByCopyingDownloadedContent:(id)arg1 uuid:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002b184
- (id)_temporaryImagePathForDownloadedImageWithUuid:(id)arg1;	// IMP=0x000000010002b07c
- (id)_keyForImageDownloaderTempFilename:(id)arg1;	// IMP=0x000000010002afdc
- (id)_temporaryResourcesDirectory;	// IMP=0x000000010002af88
- (void)_onImageWorkQueuePurgeUnneededItemsInTemporaryResourcesDirectoryIfNecessary;	// IMP=0x000000010002a724
- (void)cleanupTemporaryResourcesDirectoryIfNecessary;	// IMP=0x000000010002a698
- (void)_dequeueClientRequests:(id)arg1;	// IMP=0x000000010002a298
- (id)_clientRequestsForUrl:(id)arg1;	// IMP=0x000000010002a0b0
- (long long)_enqueueClientInfoWithUrl:(id)arg1 key:(id)arg2 podcastUuid:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100029ccc
- (void)_finishProcessingClientRequests:(id)arg1 originalUrl:(id)arg2 success:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000001000299b8
- (void)_saveArtworkImageUrl:(id)arg1 forPodcastUuids:(id)arg2 logHeader:(id)arg3;	// IMP=0x0000000100029664
- (void)_processFinishedDownloadWithContentURL:(id)arg1 originalUrl:(id)arg2 actualRequestUrl:(id)arg3 finishedWithContentHandler:(CDUnknownBlockType)arg4 processedKeys:(id)arg5;	// IMP=0x0000000100027d28
- (void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2;	// IMP=0x0000000100027690
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x00000001000274c4
- (void)configureSession:(id)arg1;	// IMP=0x000000010002743c
- (_Bool)_completeUsingExistingDownloadedImageForUuid:(id)arg1 imageUrl:(id)arg2;	// IMP=0x0000000100027070
- (void)_downloadImageUrl:(id)arg1 cacheKey:(id)arg2 podcastUuid:(id)arg3 userInitiated:(_Bool)arg4 backgroundFetch:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;	// IMP=0x0000000100026cf0
- (void)downloadImageUrl:(id)arg1 cacheKey:(id)arg2 userInitiated:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0000000100026c6c
- (void)downloadImageForPodcastUuid:(id)arg1 imageUrl:(id)arg2 userInitiated:(_Bool)arg3 useBackgroundFetch:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x0000000100026be4
- (void)downloadImageForPodcastUuid:(id)arg1 userInitiated:(_Bool)arg2 backgroundFetch:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x00000001000269d0
- (id)init;	// IMP=0x0000000100026864

@end

