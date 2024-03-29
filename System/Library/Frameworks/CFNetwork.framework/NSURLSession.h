/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSOperationQueue, NSURLSessionConfiguration, NSString, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface NSURLSession : NSObject

@property (retain) NSOperationQueue * delegateQueue; 
@property (retain) id<NSURLSessionDelegate> delegate; 
@property (copy) NSURLSessionConfiguration * _local_immutable_configuration; 
@property (retain,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (assign) BOOL invalid; 
@property (assign) BOOL _isSharedSession; 
@property (copy) NSString * _uuid; 
@property (copy) NSDictionary * _atsState; 
@property (retain) NSMutableDictionary * _altSvc; 
@property (retain) NSMutableSet * _h2BlacklistedHosts; 
@property (retain) NSMutableDictionary * _coalescing; 
@property (copy) id _connBlock; 
@property (copy,readonly) NSURLSessionConfiguration * configuration; 
@property (copy) NSString * sessionDescription; 
+(id)_errorFromError:(id)arg1 forTask:(id)arg2 ;
+(id)_sharedSessionForConnection;
+(void)_getActiveSessionIdentifiersWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)_obliterateAllBackgroundSessionsWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
+(id)sessionWithConfiguration:(id)arg1 ;
+(id)sharedSession;
+(void)_releaseProcessAssertionForSessionIdentifier:(id)arg1 ;
+(void)_sendPendingCallbacksForSessionIdentifier:(id)arg1 ;
-(BOOL)can_delegate_task_needNewBodyStream;
-(void)delegate_task:(id)arg1 needNewBodyStream:(/*^block*/id)arg2 ;
-(BOOL)can_delegate_task__schemeUpgraded;
-(void)delegate_task:(id)arg1 _schemeUpgraded:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)addDelegateBlock:(/*^block*/id)arg1 ;
-(void)finalizeDelegateWithError:(id)arg1 ;
-(BOOL)can_delegate_companionAvailabilityChanged;
-(void)delegate_companionAvailabilityChanged:(BOOL)arg1 ;
-(void)resetWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)can_delegate_dataTask_didReceiveResponse;
-(void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)delegate_dataTask:(id)arg1 didBecomeStreamTask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_dataTask_didBecomeDownloadTask;
-(BOOL)can_delegate_dataTask_didBecomeStreamTask;
-(void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task_willPerformHTTPRedirection;
-(void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)can_delegate_didReceiveChallenge;
-(void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)can_delegate_task_didReceiveChallenge;
-(void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_dataTask_willCacheResponse;
-(void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task_didFinishCollectingMetrics;
-(void)delegate_task:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task_didCompleteWithError;
-(void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(BOOL)can_delegate_dataTask_didReceiveData;
-(void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task_willSendRequestForEstablishedConnection;
-(void)delegate_task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task_isWaitingForConnectionWithReason;
-(void)delegate_task:(id)arg1 isWaitingForConnectionWithReason:(long long)arg2 ;
-(BOOL)can_delegate_task_isWaitingForConnection;
-(void)delegate_task_isWaitingForConnection:(id)arg1 ;
-(BOOL)can_delegate_taskIsWaitingForConnectivity;
-(void)delegate_taskIsWaitingForConnectivity:(id)arg1 ;
-(BOOL)can_delegate_task_conditionalRequirementsChanged;
-(void)delegate_task:(id)arg1 conditionalRequirementsChanged:(BOOL)arg2 ;
-(BOOL)can_delegate_needConnectedSocket;
-(void)delegate_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task_didSendBodyData;
-(void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4 ;
-(BOOL)can_delegate_downloadTaskNeedsDownloadDirectory;
-(id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1 ;
-(BOOL)can_delegate_openFileAtPath;
-(int)delegate_openFileAtPath:(id)arg1 mode:(int)arg2 ;
-(BOOL)can_delegate_downloadTask_didWriteData;
-(void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)can_delegate_downloadTask_didFinishDownloadingToURL;
-(void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_downloadTask_didReceiveResponse;
-(void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)can_delegate_downloadTask_didResumeAtOffset;
-(void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3 ;
-(BOOL)isBackgroundSession;
-(id)downloadTaskWithResumeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_useTLSSessionCacheFromSession:(id)arg1 ;
-(BOOL)can_delegate_willRetryBackgroundDataTask;
-(void)delegate_willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2 ;
-(BOOL)can_delegate_task_willBeginDelayedRequest;
-(void)delegate_task:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_AVAssetDownloadTask_didReceiveDownloadToken;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didReceiveDownloadToken:(unsigned long long)arg2 ;
-(BOOL)can_delegate_didFinishEventsForBackgroundURLSession;
-(void)delegate_didFinishEventsForBackgroundURLSession;
-(BOOL)can_delegate_readClosedForStreamTask;
-(void)delegate_readClosedForStreamTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)can_delegate_writeClosedForStreamTask;
-(void)delegate_writeClosedForStreamTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)delegate_streamTask:(id)arg1 didBecomeInputStream:(id)arg2 outputStream:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)can_delegate_streamTask_didBecomeInputStream_outputStream;
-(id)streamTaskWithHostName:(id)arg1 port:(long long)arg2 ;
-(BOOL)can_delegate_task_isWaitingForConnectionWithError;
-(void)delegate_task:(id)arg1 isWaitingForConnectionWithError:(id)arg2 ;
-(BOOL)can_delegate_AVAssetDownloadTask_didWriteData;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(BOOL)can_delegate_AVAssetDownloadTask_didLoadTimeRange;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didLoadTimeRange:(SCD_Struct_NS46)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(SCD_Struct_NS46)arg4 ;
-(BOOL)can_delegate_AVAssetDownloadTask_didResolveMediaSelection;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didResolveMediaSelection:(id)arg2 ;
-(BOOL)can_delegate_AVAssetDownloadTask_didFinishDownloadingToURL;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_AVAssetDownloadTask_willDownloadToURL;
-(void)delegate_AVAssetDownloadTask:(id)arg1 willDownloadToURL:(id)arg2 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 ;
-(void)getAllTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)can_delegate_AVAggregateAssetDownloadTask_didCompleteForMediaSelection;
-(void)delegate_AVAggregateAssetDownloadTask:(id)arg1 didCompleteForMediaSelection:(id)arg2 ;
-(BOOL)can_delegate_AVAggregateAssetDownloadTask_willDownloadToURL;
-(void)delegate_AVAggregateAssetDownloadTask:(id)arg1 willDownloadToURL:(id)arg2 ;
-(BOOL)can_delegate_AVAggregateAssetDownloadTask_didLoadTimeRange;
-(void)delegate_AVAggregateAssetDownloadTask:(id)arg1 didLoadTimeRange:(SCD_Struct_NS46)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(SCD_Struct_NS46)arg4 forMediaSelection:(id)arg5 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(BOOL)can_delegate_task_actually_didCompleteWithError;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)remote_externalAuthenticator_task:(id)arg1 getAuthHeadersForResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_betterRouteDiscoveredForStreamTask;
-(void)delegate_betterRouteDiscoveredForStreamTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)can_delegate_connectionEstablishedForStreamTask;
-(void)delegate_connectionEstablishedForStreamTask:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2 ;
-(id)_AVAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)aggregateAssetDownloadTaskWithURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 ;
-(id)streamTaskWithNetService:(id)arg1 ;
-(id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataTaskWithHTTPGetRequest:(id)arg1 ;
-(CFDictionaryRef)_copyATSState;
-(id)_copyConfiguration;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)invalidateAndCancel;
-(id)dataTaskWithRequest:(id)arg1 ;
-(void)finishTasksAndInvalidate;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithResumeData:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(id)downloadTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataTaskWithURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURLSessionConfiguration *)configuration;
@end

