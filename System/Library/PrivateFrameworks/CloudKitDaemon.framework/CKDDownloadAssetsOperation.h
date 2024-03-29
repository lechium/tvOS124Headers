/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSArray, NSMutableArray, NSMapTable, CKDCancelTokenGroup;

@interface CKDDownloadAssetsOperation : CKDDatabaseOperation {

	/*^block*/id _downloadPreparationBlock;
	/*^block*/id _downloadProgressBlock;
	/*^block*/id _downloadCommandBlock;
	/*^block*/id _downloadCompletionBlock;
	/*^block*/id _urlFilledOutBlock;
	NSMutableDictionary* _keyOrErrorForHostname;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _assetsToDownload;
	NSArray* _packageIndexSets;
	NSArray* _assetsToDownloadInMemory;
	NSArray* _assetURLInfosToFillOut;
	NSMutableArray* _MMCSItemsToDownload;
	NSMutableArray* _MMCSItemsToDownloadInMemory;
	NSMapTable* _downloadTasksByPackages;
	CKDCancelTokenGroup* _cancelTokens;
	unsigned long long _maxPackageDownloadsPerBatch;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSArray * assetsToDownload;                                  //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
@property (nonatomic,retain) NSArray * packageIndexSets;                                  //@synthesize packageIndexSets=_packageIndexSets - In the implementation block
@property (nonatomic,retain) NSArray * assetsToDownloadInMemory;                          //@synthesize assetsToDownloadInMemory=_assetsToDownloadInMemory - In the implementation block
@property (nonatomic,retain) NSArray * assetURLInfosToFillOut;                            //@synthesize assetURLInfosToFillOut=_assetURLInfosToFillOut - In the implementation block
@property (nonatomic,retain) NSMutableArray * MMCSItemsToDownload;                        //@synthesize MMCSItemsToDownload=_MMCSItemsToDownload - In the implementation block
@property (nonatomic,retain) NSMutableArray * MMCSItemsToDownloadInMemory;                //@synthesize MMCSItemsToDownloadInMemory=_MMCSItemsToDownloadInMemory - In the implementation block
@property (nonatomic,retain) NSMapTable * downloadTasksByPackages;                        //@synthesize downloadTasksByPackages=_downloadTasksByPackages - In the implementation block
@property (nonatomic,retain) CKDCancelTokenGroup * cancelTokens;                          //@synthesize cancelTokens=_cancelTokens - In the implementation block
@property (assign,nonatomic) unsigned long long maxPackageDownloadsPerBatch;              //@synthesize maxPackageDownloadsPerBatch=_maxPackageDownloadsPerBatch - In the implementation block
@property (nonatomic,copy) id downloadPreparationBlock;                                   //@synthesize downloadPreparationBlock=_downloadPreparationBlock - In the implementation block
@property (nonatomic,copy) id downloadProgressBlock;                                      //@synthesize downloadProgressBlock=_downloadProgressBlock - In the implementation block
@property (nonatomic,copy) id downloadCommandBlock;                                       //@synthesize downloadCommandBlock=_downloadCommandBlock - In the implementation block
@property (nonatomic,copy) id downloadCompletionBlock;                                    //@synthesize downloadCompletionBlock=_downloadCompletionBlock - In the implementation block
@property (nonatomic,copy) id urlFilledOutBlock;                                          //@synthesize urlFilledOutBlock=_urlFilledOutBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyOrErrorForHostname;                 //@synthesize keyOrErrorForHostname=_keyOrErrorForHostname - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAssetsToDownload:(NSArray *)arg1 ;
-(NSArray *)assetsToDownload;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(id)CKStatusReportLogGroups;
-(CKDCancelTokenGroup *)cancelTokens;
-(void)setCancelTokens:(CKDCancelTokenGroup *)arg1 ;
-(NSArray *)packageIndexSets;
-(NSArray *)assetsToDownloadInMemory;
-(NSArray *)assetURLInfosToFillOut;
-(NSMutableArray *)MMCSItemsToDownload;
-(BOOL)_prepareForDownload;
-(BOOL)_download;
-(BOOL)_postProcess;
-(id)downloadPreparationBlock;
-(id)downloadProgressBlock;
-(id)downloadCommandBlock;
-(id)downloadCompletionBlock;
-(NSMutableDictionary *)keyOrErrorForHostname;
-(id)_tryToFillInTheDerivativeTemplateWithAsset:(id)arg1 ;
-(void)_didDownloadAsset:(id)arg1 error:(id)arg2 ;
-(void)_didPrepareAsset:(id)arg1 ;
-(void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2 ;
-(void)_didCommandForAsset:(id)arg1 command:(id)arg2 ;
-(void)setMMCSItemsToDownloadInMemory:(NSMutableArray *)arg1 ;
-(void)setMMCSItemsToDownload:(NSMutableArray *)arg1 ;
-(void)setDownloadTasksByPackages:(NSMapTable *)arg1 ;
-(void)_removeUntrackedMMCSItems:(id)arg1 ;
-(NSMapTable *)downloadTasksByPackages;
-(void)_collectMetricsFromMMCSOperationMetrics:(id)arg1 ;
-(void)_didDownloadMMCSItem:(id)arg1 inMemory:(BOOL)arg2 error:(id)arg3 ;
-(void)_didDownloadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3 ;
-(void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2 ;
-(void)_collectMetricsFromCompletedItemGroup:(id)arg1 ;
-(void)_didDownloadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3 ;
-(void)_downloadPackageSectionsWithSectionEnumerator:(id)arg1 task:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_downloadPackageSectionAtIndex:(long long)arg1 task:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)maxPackageDownloadsPerBatch;
-(void)_downloadPackageSectionsWithPendingTasks:(id)arg1 downloadingTasks:(id)arg2 completedTasks:(id)arg3 ;
-(void)_downloadPackageSectionsWithTask:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)MMCSItemsToDownloadInMemory;
-(void)_downloadMMCSItems:(id)arg1 downloadTasksByPackages:(id)arg2 shouldFetchAssetContentInMemory:(BOOL)arg3 ;
-(void)setMaxPackageDownloadsPerBatch:(unsigned long long)arg1 ;
-(void)_didMakeProgressForMMCSItem:(id)arg1 inMemory:(BOOL)arg2 ;
-(void)_collectMetricsFromCompletedItemGroupSet:(id)arg1 ;
-(void)_didDownloadMMCSItems:(id)arg1 inMemory:(BOOL)arg2 error:(id)arg3 ;
-(id)urlFilledOutBlock;
-(void)setDownloadPreparationBlock:(id)arg1 ;
-(void)setDownloadProgressBlock:(id)arg1 ;
-(void)setDownloadCommandBlock:(id)arg1 ;
-(void)setDownloadCompletionBlock:(id)arg1 ;
-(void)setUrlFilledOutBlock:(id)arg1 ;
-(void)_didCommandForMMCSItem:(id)arg1 command:(id)arg2 ;
-(void)setKeyOrErrorForHostname:(NSMutableDictionary *)arg1 ;
-(void)setPackageIndexSets:(NSArray *)arg1 ;
-(void)setAssetsToDownloadInMemory:(NSArray *)arg1 ;
-(void)setAssetURLInfosToFillOut:(NSArray *)arg1 ;
-(void)cancel;
-(void)main;
-(NSObject*<OS_dispatch_queue>)queue;
@end

