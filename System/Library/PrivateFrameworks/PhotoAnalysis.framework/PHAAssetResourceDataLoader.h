/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHAAssetResourceDataLoading.h>

@protocol OS_dispatch_queue, PHADownloadRequestManagement;
@class NSObject, NSMutableSet, PHPhotoLibrary, NSString;

@interface PHAAssetResourceDataLoader : NSObject <PHAAssetResourceDataLoading> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _activeDownloads;
	PHPhotoLibrary* _photoLibrary;
	id<PHADownloadRequestManagement> _downloadRequestManager;

}

@property (nonatomic,retain) id<PHADownloadRequestManagement> downloadRequestManager;              //@synthesize downloadRequestManager=_downloadRequestManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataLoaderWithDefaultConfigurationForPhotoLibrary:(id)arg1 ;
-(void)cancelAllDownloads;
-(id)assetResourceFromAcceptableAssetResources:(id)arg1 options:(id)arg2 ;
-(void)requestDataForAssetResource:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDownloadRequestManager:(id<PHADownloadRequestManagement>)arg1 ;
-(id)_localFileURLForAssetResource:(id)arg1 error:(id*)arg2 ;
-(id)_firstLocallyAvailableAssetResourceFromAssetResources:(id)arg1 ;
-(id<PHADownloadRequestManagement>)downloadRequestManager;
-(void)_inq_downloadAssetResource:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_inq_cancelAllDownloads;
-(id)init;
@end
