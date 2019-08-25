/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@protocol CPLEngineTransportTask;
@class CPLResource;

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask {

	BOOL _backgroundTask;
	CPLResource* _cloudResource;
	id<CPLEngineTransportTask> _transportTask;
	/*^block*/id _launchHandler;
	/*^block*/id _cancelHandler;
	/*^block*/id _didStartHandler;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) CPLResource * cloudResource;                              //@synthesize cloudResource=_cloudResource - In the implementation block
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask;              //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,retain) id<CPLEngineTransportTask> transportTask;                 //@synthesize transportTask=_transportTask - In the implementation block
@property (nonatomic,readonly) id launchHandler;                                       //@synthesize launchHandler=_launchHandler - In the implementation block
@property (nonatomic,readonly) id cancelHandler;                                       //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,readonly) id didStartHandler;                                     //@synthesize didStartHandler=_didStartHandler - In the implementation block
@property (nonatomic,readonly) id progressHandler;                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,readonly) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)launch;
-(void)setCloudResource:(CPLResource *)arg1 ;
-(id)initWithLaunchHandler:(/*^block*/id)arg1 cancelHandler:(/*^block*/id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id<CPLEngineTransportTask>)transportTask;
-(void)setTransportTask:(id<CPLEngineTransportTask>)arg1 ;
-(void)setBackgroundTask:(BOOL)arg1 ;
-(CPLResource *)cloudResource;
-(id)launchHandler;
-(BOOL)isBackgroundTask;
-(void)cancelTask;
-(id)didStartHandler;
-(id)progressHandler;
-(id)completionHandler;
-(id)cancelHandler;
@end
