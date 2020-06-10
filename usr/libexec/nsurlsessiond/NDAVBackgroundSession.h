//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NDBackgroundSession.h"

#import "NDAVAssetDownloadSessionWrapperDelegate-Protocol.h"
#import "NDBackgroundSessionProtocol-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, NSURLSessionConfiguration;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NDAVBackgroundSession : NDBackgroundSession <NDBackgroundSessionProtocol, NDAVAssetDownloadSessionWrapperDelegate>
{
    NSMutableDictionary *_identifiersToAVWrappers;	// 232 = 0xe8
    NSMutableDictionary *_identifiersToThroughputMonitors;	// 240 = 0xf0
    NSMutableDictionary *_identifiersToTCPConnections;	// 248 = 0xf8
    NSMutableDictionary *_identifiersToDASActivities;	// 256 = 0x100
    NSURLSessionConfiguration *_clientConfig;	// 264 = 0x108
    NSObject<OS_dispatch_source> *_delayedWakeTimer;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000100059a60
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x00000001000596ac
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didResolveMediaSelectionPropertyList:(id)arg2;	// IMP=0x000000010005948c
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4;	// IMP=0x000000010005939c
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didUpdateProgressWithLastBytesWritten:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;	// IMP=0x0000000100059264
- (void)taskWithIdentifier:(unsigned long long)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0000000100058a24
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x00000001000587e8
- (void)cancelTCPConnectionForTask:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x0000000100058414
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x00000001000582e0
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000582c4
- (void)stopAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x00000001000581a8
- (void)startAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100057ebc
- (_Bool)ensureAVAssetDownloadSessionWrapperForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100057b8c
- (id)newAVAssetDownloadSessionWrapperForTaskInfo:(id)arg1;	// IMP=0x000000010005782c
- (long long)adjustedTCPConnectionPriorityForTaskPriority:(long long)arg1;	// IMP=0x0000000100057718
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x0000000100055fa0
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x0000000100055bac
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2;	// IMP=0x00000001000555f4
- (void)setPriority:(long long)arg1 forTCPConnectionWithTaskIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100055570
- (void)cancelAVDownloadAndFailTaskWithIdentifier:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x00000001000552c8
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000552c4
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000551c8
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x0000000100055154
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100054f30
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 childDownloadSessionIdentifier:(id)arg6 identifier:(unsigned long long)arg7 uniqueIdentifier:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x0000000100054864
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 reply:(CDUnknownBlockType)arg10;	// IMP=0x0000000100053d30
- (_Bool)hasEntitlementToSpecifyDownloadDestinationURL;	// IMP=0x0000000100053cbc
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 pipeHandle:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100053c9c
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100053c7c
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100053c5c
- (void)backgroundUpdatesDisabledForApplication:(id)arg1;	// IMP=0x0000000100053c58
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x00000001000537b4
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x00000001000533e4
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0000000100053018
- (id)destinationURLToUseForTask:(id)arg1;	// IMP=0x0000000100052b6c
- (id)downloadDirectoryToUse:(id)arg1;	// IMP=0x0000000100052ae4
- (id)avAssetDownloadsDirectory;	// IMP=0x00000001000525dc
- (void)updatePriorityForTaskID:(id)arg1;	// IMP=0x00000001000525d8
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x00000001000524d8
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x0000000100051e80
- (void)cancelThroughputMonitorForWrapper:(unsigned long long)arg1;	// IMP=0x0000000100051d6c
- (void)setupThroughputMonitorForWrapper:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3;	// IMP=0x0000000100051ba4
- (void)cancelDelayedCompletionWakeTimer;	// IMP=0x0000000100051a4c
- (void)setupDelayedCompletionWakeTimer;	// IMP=0x0000000100051624
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 archiveQueue:(id)arg9;	// IMP=0x0000000100051378

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
