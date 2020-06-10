//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDownload-Protocol.h"

@class ASAssetRepository, MobileAssetReport, NSDictionary, NSString, NSURL, NSURLRequest;
@protocol ASDownloadDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ASDownload : NSObject <ASDownload>
{
    struct __MobileAsset *_asset;	// 8 = 0x8
    NSURL *_remoteURL;	// 16 = 0x10
    NSURL *_archiveURL;	// 24 = 0x18
    NSURL *_assetURL;	// 32 = 0x20
    NSURL *_localCacheServerURL;	// 40 = 0x28
    NSDictionary *_downloadOptions;	// 48 = 0x30
    NSString *_currentOperationString;	// 56 = 0x38
    float _lastProgressUpdate;	// 64 = 0x40
    _Bool _checkedForLocalCache;	// 68 = 0x44
    _Bool _downloadDidEnd;	// 69 = 0x45
    _Bool _cancelled;	// 70 = 0x46
    _Bool _paused;	// 71 = 0x47
    MobileAssetReport *_report;	// 72 = 0x48
    NSObject<OS_dispatch_semaphore> *_pauseSemaphore;	// 80 = 0x50
    id <ASDownloadDelegate> _delegate;	// 88 = 0x58
    CDUnknownBlockType _progressHandler;	// 96 = 0x60
    CDUnknownBlockType _pauseCompletion;	// 104 = 0x68
    CDUnknownBlockType _resumeCompletion;	// 112 = 0x70
    CDUnknownBlockType _cancelCompletion;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_queue;	// 128 = 0x80
    _Bool downloadDidEnd;	// 136 = 0x88
    _Bool _isPreinstalled;	// 137 = 0x89
    _Bool _isAutoUpdate;	// 138 = 0x8a
    _Bool _isBackgrounded;	// 139 = 0x8b
    _Bool _nowServingDidFail;	// 140 = 0x8c
    _Bool _didUseNowServing;	// 141 = 0x8d
    ASAssetRepository *_assetRepository;	// 144 = 0x90
    NSURLRequest *_lastNowServingRequest;	// 152 = 0x98
}

+ (id)downloadWithAsset:(struct __MobileAsset *)arg1 downloadDelegate:(id)arg2 assetRepository:(id)arg3;	// IMP=0x0000000100022898
+ (id)downloadWithAsset:(struct __MobileAsset *)arg1 downloadOptions:(id)arg2 downloadDelegate:(id)arg3 assetRepository:(id)arg4;	// IMP=0x0000000100022848
+ (id)downloadsDict;	// IMP=0x00000001000227d0
+ (id)downloadsDictQueue;	// IMP=0x0000000100022768
+ (void)setContentCacheURLs:(id)arg1;	// IMP=0x00000001000226b0
@property(retain, nonatomic) NSURLRequest *lastNowServingRequest; // @synthesize lastNowServingRequest=_lastNowServingRequest;
@property(nonatomic) _Bool didUseNowServing; // @synthesize didUseNowServing=_didUseNowServing;
@property(nonatomic) _Bool nowServingDidFail; // @synthesize nowServingDidFail=_nowServingDidFail;
@property(nonatomic) _Bool isBackgrounded; // @synthesize isBackgrounded=_isBackgrounded;
@property(retain, nonatomic) ASAssetRepository *assetRepository; // @synthesize assetRepository=_assetRepository;
@property(nonatomic) _Bool isAutoUpdate; // @synthesize isAutoUpdate=_isAutoUpdate;
@property(nonatomic) _Bool isPreinstalled; // @synthesize isPreinstalled=_isPreinstalled;
@property(retain, nonatomic) NSString *currentOperationString; // @synthesize currentOperationString=_currentOperationString;
@property(retain, nonatomic) NSDictionary *downloadOptions; // @synthesize downloadOptions=_downloadOptions;
@property(copy, nonatomic) CDUnknownBlockType cancelCompletion; // @synthesize cancelCompletion=_cancelCompletion;
@property(copy, nonatomic) CDUnknownBlockType resumeCompletion; // @synthesize resumeCompletion=_resumeCompletion;
@property(copy, nonatomic) CDUnknownBlockType pauseCompletion; // @synthesize pauseCompletion=_pauseCompletion;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) NSURL *localCacheServerURL; // @synthesize localCacheServerURL=_localCacheServerURL;
@property(readonly, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(readonly, nonatomic) NSURL *archiveURL; // @synthesize archiveURL=_archiveURL;
@property(retain, nonatomic) id <ASDownloadDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct __MobileAsset *mobileAsset; // @synthesize mobileAsset=_asset;
@property(nonatomic) _Bool downloadDidEnd; // @synthesize downloadDidEnd;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (id)downloadRequestForURL:(id)arg1 useQueuingService:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100028148
@property(readonly, nonatomic, getter=isStalled) _Bool stalled;
- (void)usePreinstalledAssetArchive:(id)arg1;	// IMP=0x0000000100027fc8
- (void)logDownload:(_Bool)arg1;	// IMP=0x0000000100027f0c
- (int)verifyArchiveHash;	// IMP=0x0000000100027b30
- (void)notifyResumeClients:(int)arg1;	// IMP=0x0000000100027aa4
- (void)notifyPauseClients:(int)arg1;	// IMP=0x0000000100027998
- (void)notifyCancelClients:(int)arg1;	// IMP=0x000000010002793c
- (_Bool)verifyFreeDiskSpace:(long long)arg1 error:(id *)arg2;	// IMP=0x00000001000277b8
- (void)fireErrorWithError:(id)arg1;	// IMP=0x0000000100027670
- (void)fireErrorInDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;	// IMP=0x0000000100027630
- (void)fireProgressWithOperation:(id)arg1 progress:(float)arg2 callbackState:(id)arg3;	// IMP=0x000000010002751c
- (void)resetProgressWithOperation:(id)arg1;	// IMP=0x00000001000274e4
- (void)downloadDidFail:(id)arg1;	// IMP=0x0000000100027408
- (void)_downloadDidFail:(id)arg1;	// IMP=0x0000000100027018
- (void)_retryDownloadWithoutNowServing;	// IMP=0x0000000100026dfc
- (void)_retryDownloadAfterInterval:(id)arg1 withQueueToken:(id)arg2;	// IMP=0x0000000100026bc4
- (void)downloadDidFinish;	// IMP=0x0000000100025d14
- (void)cancel:(CDUnknownBlockType)arg1;	// IMP=0x0000000100025ca0
- (void)_cancel:(CDUnknownBlockType)arg1;	// IMP=0x00000001000257c8
- (void)cancellationDidFinish:(int)arg1;	// IMP=0x00000001000257ac
- (void)resume:(CDUnknownBlockType)arg1;	// IMP=0x0000000100025738
- (void)_resume:(CDUnknownBlockType)arg1;	// IMP=0x00000001000253a4
- (void)resumeDidFinish:(int)arg1;	// IMP=0x00000001000251c0
- (void)waitForUnpause;	// IMP=0x00000001000250e8
- (void)pause:(CDUnknownBlockType)arg1;	// IMP=0x0000000100025074
- (void)_pause:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024d08
- (void)pauseDidFinish:(int)arg1;	// IMP=0x0000000100024b1c
- (int)resumeAfterDownload;	// IMP=0x0000000100024a90
- (void)stopObservingDownload;	// IMP=0x0000000100024958
- (void)updateOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000245dc
- (void)_saveDownloadOptions;	// IMP=0x0000000100024490
- (void)startBackgroundedDownload:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024270
- (void)_startDownload:(CDUnknownBlockType)arg1;	// IMP=0x00000001000237b8
- (void)_handleFileURLDownload;	// IMP=0x00000001000235a8
- (void)startDownload:(CDUnknownBlockType)arg1;	// IMP=0x0000000100023510
- (int)populateURLs;	// IMP=0x0000000100023410
- (void)_populatelocalCacheServerURL;	// IMP=0x0000000100023128
@property(readonly, nonatomic) NSDictionary *assetAttributes;
- (id)assetType;	// IMP=0x00000001000230c0
@property(readonly, nonatomic) _Bool useStreamingZip;
- (_Bool)boolDownloadOption:(id)arg1 default:(_Bool)arg2;	// IMP=0x0000000100022f70
- (id)downloadOption:(id)arg1;	// IMP=0x0000000100022ee0
- (void)setDownloadOptionsOnQueue:(id)arg1;	// IMP=0x0000000100022e6c
- (void)dealloc;	// IMP=0x0000000100022c00
- (id)initWithAsset:(struct __MobileAsset *)arg1 downloadDelegate:(id)arg2 assetRepository:(id)arg3;	// IMP=0x0000000100022ad0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
