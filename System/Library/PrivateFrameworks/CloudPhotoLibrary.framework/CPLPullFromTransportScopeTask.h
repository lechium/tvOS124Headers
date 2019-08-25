/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportDownloadBatchTask, CPLEngineTransportQueryTask, CPLEngineTransportGroup, CPLEngineTransportGetCurrentSyncAnchorTask;
@class NSObject, CPLEngineTransport, CPLLibraryInfo, CPLFeatureVersionHistory, CPLLibraryState;

@interface CPLPullFromTransportScopeTask : CPLEngineScopedTask {

	NSObject*<OS_dispatch_queue> _queue;
	CPLEngineTransport* _transport;
	id<CPLEngineTransportDownloadBatchTask> _downloadTask;
	id<CPLEngineTransportQueryTask> _queryTask;
	CPLLibraryInfo* _currentLibraryInfo;
	Class _currentQueryClass;
	BOOL _ignoreNewBatches;
	BOOL _useCourtesyMingling;
	unsigned long long _rewindFeatureVersion;
	NSData* _rewindSyncAnchor;
	CPLFeatureVersionHistory* _versionHistory;
	id<CPLEngineTransportGroup> _transportGroup;
	unsigned long long _totalAssetCountForScope;
	BOOL _hasCachedTotalAssetCountForScope;
	long long _taskItem;
	BOOL _hasFetchedInitialSyncAnchor;
	BOOL _shouldStoreInitialSyncAnchor;
	NSData* _initialSyncAnchor;
	CPLLibraryInfo* _initialLibraryInfo;
	CPLLibraryState* _initialLibraryState;
	id<CPLEngineTransportGetCurrentSyncAnchorTask> _fetchInitialSyncAnchorTask;

}
-(void)launch;
-(id)taskIdentifier;
-(id)initWithEngineLibrary:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;
-(BOOL)checkScopeIsValidInTransaction:(id)arg1 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(void)_launch;
-(unsigned long long)_totalAssetCountForScope;
-(void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(NSData*)arg2 inTransaction:(id)arg3 ;
-(void)_cancelAllTasks;
-(void)_launchFetchChangesFromSyncAnchor:(NSData*)arg1 ;
-(void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(NSData*)arg1 ;
-(void)_handleNewBatchFromChanges:(id)arg1 updatedLibraryInfo:(id)arg2 updatedLibraryState:(id)arg3 newSyncAnchor:(NSData*)arg4 ;
-(void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2 ;
-(void)_storeInitialSyncAnchorIfNecessaryInTransaction:(id)arg1 ;
-(void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 inTransaction:(id)arg3 ;
-(void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 ;
-(void)_launchNextQueryTask;
-(void)_launchPullTasksAndDisableQueries:(BOOL)arg1 ;
-(void)_launchQueryForClass:(Class)arg1 cursor:(id)arg2 ;
-(void)_fetchInitialSyncAnchor;
-(void)_checkServerFeatureVersionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancel;
@end

