/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSError;

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _lock;
	NSMutableArray* _transportTasks;
	BOOL _shouldStop;
	NSError* _badError;
	NSError* _stopError;
	BOOL _hasResetQueue;
	unsigned long long _successfullyDownloadedResourcesCount;
	unsigned long long _failedDownloadedResourcesCount;
	unsigned long long _total;
	unsigned long long _activeTransferTaskCount;
	unsigned long long _transportTaskCount;

}
-(void)launch;
-(id)taskIdentifier;
-(void)taskDidFinishWithError:(id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)_transportTaskDidFinish:(id)arg1 ;
-(void)_completeBackgroundDownloadForResource:(id)arg1 error:(id)arg2 withTransaction:(id)arg3 ;
-(void)_downloadTask:(id)arg1 didFinishWithErrorLocked:(id)arg2 ;
-(void)_updateActiveDownloadTaskCount;
-(BOOL)_isErrorCountingForARetry:(id)arg1 ;
-(void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1 ;
-(void)_finishTaskLocked;
-(void)_enqueueTasksLocked;
-(id)description;
-(void)cancel;
@end

