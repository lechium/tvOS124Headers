/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MPMediaItem, VUIMPMediaItemDownloadControllerState, NSMutableArray;

@interface VUIMPMediaItemDownloadController : NSObject {

	NSObject*<OS_dispatch_queue> _observerDispatchQueue;
	MPMediaItem* _mediaItem;
	VUIMPMediaItemDownloadControllerState* _state;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	NSMutableArray* _observers;

}

@property (nonatomic,retain) MPMediaItem * mediaItem;                                                 //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy) VUIMPMediaItemDownloadControllerState * state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * observers;                                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL supportsCancellation; 
@property (nonatomic,readonly) BOOL supportsPausing; 
@property (getter=isRestoreDownload,nonatomic,readonly) BOOL restoreDownload; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerDispatchQueue;                      //@synthesize observerDispatchQueue=_observerDispatchQueue - In the implementation block
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(void)cancelDownload;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(VUIMPMediaItemDownloadControllerState *)state;
-(void)setState:(VUIMPMediaItemDownloadControllerState *)arg1 ;
-(void)invalidate;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(void)addObserver:(id)arg1 ;
-(void)_setState:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)supportsCancellation;
-(BOOL)supportsPausing;
-(void)_enqueueAsyncProcessingQueueBlock:(/*^block*/id)arg1 ;
-(id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3 ;
-(void)_onProcessingQueue_invalidate;
-(BOOL)isRestoreDownload;
-(void)_onProcessingQueue_cancelDownload;
-(void)_onProcessingQueue_pauseDownload;
-(void)_onProcessingQueue_resumeDownload;
-(void)pauseDownload;
-(void)resumeDownload;
-(void)setObserverDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_enqueueAsyncStrongSelfProcessingQueueBlock:(/*^block*/id)arg1 ;
-(void)_onProcessingQueue_setState:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerDispatchQueue;
-(void)_notifyObservers:(id)arg1 stateDidChange:(id)arg2 ;
-(void)_enqueueObserverQueueBlock:(/*^block*/id)arg1 ;
@end

