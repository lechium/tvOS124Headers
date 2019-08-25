/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATDownloadProgressObserver.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSMutableDictionary, NSXPCConnection, MPStoreDownloadManager, NSHashTable, NSObject, NSArray, NSString;

@interface MPMediaDownloadManager : NSObject <ATDownloadProgressObserver, NSXPCListenerDelegate, MPStoreDownloadManagerObserver> {

	NSMutableOrderedSet* _cachedATDownloads;
	NSMutableDictionary* _cachedProgressMap;
	NSMutableOrderedSet* _cachedATUnEnqueuedDownloads;
	NSXPCConnection* __downloadProgressConnection;
	NSXPCConnection* __keepLocalTaskConnection;
	MPStoreDownloadManager* _storeDownloadManager;
	NSHashTable* _downloadObservers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	BOOL _prefetchATAssets;
	BOOL _callerCanConnectToAirTraffic;

}

@property (nonatomic,readonly) NSArray * allMediaDownloadLibraryIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)_checkEntitlementToConnectToAirTraffic;
-(id)_keepLocalTaskConnection;
-(id)_downloadProgressConnection;
-(void)cancelDownloads:(id)arg1 ;
-(BOOL)_isValidMediaAsset:(id)arg1 ;
-(id)_statusChangeObservers;
-(void)_notifyObserversOfDownloadCompleteForAssets:(id)arg1 withError:(id)arg2 ;
-(id)_updateCacheAndGetMediaDownloadToReportForATAssetDownloadProgress:(id)arg1 ;
-(void)_notifyObserversOfAssetDownloadProgress:(id)arg1 ;
-(id)_updateCacheAndGetMediaDownloadToReportForStoreDownloadProgress:(id)arg1 ;
-(void)atcWillEnqueueDownloads:(id)arg1 cancelDownloads:(id)arg2 ;
-(void)atcDidEnqueueAsset:(id)arg1 ;
-(void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2 ;
-(void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2 ;
-(void)_prefectchAllATDownloads;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2 ;
-(NSArray *)allMediaDownloadLibraryIdentifiers;
-(BOOL)hasActiveDownloads;
-(void)prioritizeDownload:(long long)arg1 ;
-(void)enqueueAssetForDownload:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)sendKeepLocalStatusChanged:(long long)arg1 forLibraryIdentifier:(long long)arg2 entityType:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)activeDownloadForMediaItemPersistentID:(long long)arg1 ;
-(id)activeDownloadForStoreID:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)_init;
@end

