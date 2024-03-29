/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol ATAssetLinkDelegate, OS_dispatch_queue;
@class NSObject, MPStoreDownloadManager, NSMutableDictionary, NSString;

@interface ATMPStoreAssetLink : NSObject <MPStoreDownloadManagerObserver, ATAssetLink> {

	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	MPStoreDownloadManager* _downloadManager;
	NSMutableDictionary* _assetMap;
	NSMutableDictionary* _downloadsMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)maximumBatchSize;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(void)prioritizeAsset:(id)arg1 ;
-(id)_dataClassForStoreKind:(id)arg1 ;
-(id)_assetTypeForStoreKind:(id)arg1 ;
-(void)_enqueueAssets:(id)arg1 ;
-(id)_errorForFinishedDownload:(id)arg1 ;
-(void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(BOOL)arg3 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(BOOL)linkIsReady;
-(BOOL)isOpen;
-(id)init;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(id<ATAssetLinkDelegate>)delegate;
-(unsigned long long)priority;
-(BOOL)open;
-(void)close;
@end

