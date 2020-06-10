//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDateFormatter, NSMutableDictionary, NSOperationQueue, NSURL, NSURLSession, NSURLSessionConfiguration, PallasResponseVerifier;
@protocol NSURLSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface DownloadManager : NSObject
{
    _Bool _haveSyncedSplunkData;	// 8 = 0x8
    _Bool _currentlyBatchingSplunk;	// 9 = 0x9
    _Bool _haveSyncedSplunkState;	// 10 = 0xa
    _Bool _timerRunning;	// 11 = 0xb
    NSMutableDictionary *_downloadTasksInFlight;	// 16 = 0x10
    NSMutableDictionary *_cachedMetaDataForAssetType;	// 24 = 0x18
    NSURLSessionConfiguration *_backgroundDiscretionaryConfiguration;	// 32 = 0x20
    NSURLSessionConfiguration *_splunkDiscretionaryConfiguration;	// 40 = 0x28
    NSURLSessionConfiguration *_inProccessConfig;	// 48 = 0x30
    NSOperationQueue *_operationQueue;	// 56 = 0x38
    NSOperationQueue *_splunkOperationQueue;	// 64 = 0x40
    id <NSURLSessionDelegate> _delegate;	// 72 = 0x48
    id <NSURLSessionDelegate> _splunkDelegate;	// 80 = 0x50
    NSURLSession *_backgroundSession;	// 88 = 0x58
    NSURLSession *_splunkDiscretionarySession;	// 96 = 0x60
    NSURLSession *_inProcessSession;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_splunkStateQueue;	// 120 = 0x78
    long long _currentState;	// 128 = 0x80
    PallasResponseVerifier *_pallasVerifier;	// 136 = 0x88
    NSDateFormatter *_dateFormatter;	// 144 = 0x90
    NSURL *_splunkUrl;	// 152 = 0x98
    NSMutableDictionary *_currentSplunkEvent;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_timer;	// 168 = 0xa8
    NSDate *_previousTimeEstimatePoint;	// 176 = 0xb0
    CDUnknownBlockType _timerHandler;	// 184 = 0xb8
}

@property(readonly, nonatomic) CDUnknownBlockType timerHandler; // @synthesize timerHandler=_timerHandler;
@property(readonly, nonatomic) _Bool timerRunning; // @synthesize timerRunning=_timerRunning;
@property(readonly, nonatomic) NSDate *previousTimeEstimatePoint; // @synthesize previousTimeEstimatePoint=_previousTimeEstimatePoint;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSMutableDictionary *currentSplunkEvent; // @synthesize currentSplunkEvent=_currentSplunkEvent;
@property(readonly, nonatomic) NSURL *splunkUrl; // @synthesize splunkUrl=_splunkUrl;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) PallasResponseVerifier *pallasVerifier; // @synthesize pallasVerifier=_pallasVerifier;
@property(readonly, nonatomic) _Bool haveSyncedSplunkState; // @synthesize haveSyncedSplunkState=_haveSyncedSplunkState;
@property(readonly, nonatomic) _Bool currentlyBatchingSplunk; // @synthesize currentlyBatchingSplunk=_currentlyBatchingSplunk;
@property(readonly, nonatomic) _Bool haveSyncedSplunkData; // @synthesize haveSyncedSplunkData=_haveSyncedSplunkData;
@property(readonly) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *splunkStateQueue; // @synthesize splunkStateQueue=_splunkStateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *downloadStateQueue; // @synthesize downloadStateQueue=_downloadStateQueue;
@property(readonly, nonatomic) NSURLSession *inProcessSession; // @synthesize inProcessSession=_inProcessSession;
@property(readonly, nonatomic) NSURLSession *splunkDiscretionarySession; // @synthesize splunkDiscretionarySession=_splunkDiscretionarySession;
@property(readonly, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(readonly, nonatomic) id <NSURLSessionDelegate> splunkDelegate; // @synthesize splunkDelegate=_splunkDelegate;
@property(readonly, nonatomic) id <NSURLSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSOperationQueue *splunkOperationQueue; // @synthesize splunkOperationQueue=_splunkOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NSURLSessionConfiguration *inProccessConfig; // @synthesize inProccessConfig=_inProccessConfig;
@property(readonly, nonatomic) NSURLSessionConfiguration *splunkDiscretionaryConfiguration; // @synthesize splunkDiscretionaryConfiguration=_splunkDiscretionaryConfiguration;
@property(readonly, nonatomic) NSURLSessionConfiguration *backgroundDiscretionaryConfiguration; // @synthesize backgroundDiscretionaryConfiguration=_backgroundDiscretionaryConfiguration;
@property(readonly, nonatomic) NSMutableDictionary *cachedMetaDataForAssetType; // @synthesize cachedMetaDataForAssetType=_cachedMetaDataForAssetType;
@property(readonly, nonatomic) NSMutableDictionary *downloadTasksInFlight; // @synthesize downloadTasksInFlight=_downloadTasksInFlight;
- (void)handleSuccessfulDownload:(id)arg1 task:(id)arg2 shouldMove:(_Bool)arg3 extractorExists:(_Bool)arg4 postedDate:(id)arg5;	// IMP=0x000000010001cdfc
- (long long)processAssetDownload:(id)arg1 with:(id)arg2 and:(id)arg3 shouldMove:(_Bool)arg4 extractorExists:(_Bool)arg5;	// IMP=0x000000010001cd10
- (void)taskFinishedUpdateState:(id)arg1 with:(long long)arg2;	// IMP=0x000000010001c8d8
- (void)retryTask:(id)arg1 retryUrl:(id)arg2;	// IMP=0x000000010001c770
- (void)sendNotification:(id)arg1 suffix:(id)arg2;	// IMP=0x000000010001c718
- (void)sendNotification:(id)arg1;	// IMP=0x000000010001c658
- (void)registerXmlDownloadJob:(id)arg1 using:(id)arg2 with:(id)arg3 clientName:(id)arg4 onCompletion:(CDUnknownBlockType)arg5;	// IMP=0x000000010001bf6c
- (void)registerAssetDownloadJob:(id)arg1 forThis:(id)arg2 withBase:(id)arg3 relativeTo:(id)arg4 startingAt:(id)arg5 withLength:(id)arg6 extractWith:(id)arg7 using:(id)arg8 with:(id)arg9 notify:(unsigned long long)arg10 onCompletion:(CDUnknownBlockType)arg11;	// IMP=0x000000010001bdc4
- (_Bool)checkDownloadIsSyncing:(id)arg1 with:(id)arg2;	// IMP=0x000000010001bd5c
- (void)updateProgressIfRequired:(id)arg1 totalWritten:(long long)arg2 totalExpected:(long long)arg3 notify:(_Bool)arg4;	// IMP=0x000000010001baac
- (void)startDownloadAndUpdateState:(id)arg1 for:(id)arg2 startingAt:(id)arg3 withLength:(id)arg4 extractWith:(id)arg5 modified:(id)arg6 options:(id)arg7 using:(id)arg8 with:(id)arg9 notify:(unsigned long long)arg10;	// IMP=0x000000010001b418
- (void)addLiveServerRequest:(id)arg1 using:(id)arg2 with:(id)arg3 task:(id)arg4 options:(id)arg5;	// IMP=0x000000010001b150
- (void)startDownloadAndUpdateState:(id)arg1 for:(id)arg2 modified:(id)arg3 options:(id)arg4 using:(id)arg5 with:(id)arg6;	// IMP=0x000000010001b110
- (long long)massageXmlAndPersist:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4 postedDate:(id)arg5;	// IMP=0x000000010001ae00
- (long long)massageXmlAndPersist:(id)arg1 descriptor:(id)arg2 assets:(id)arg3 transformations:(id)arg4 to:(id)arg5 postedDate:(id)arg6 receiptResults:(id *)arg7;	// IMP=0x000000010001a314
- (id)getBackgroundDownloadTask:(id)arg1 downloadSize:(long long)arg2 for:(id)arg3 startingAt:(id)arg4 withLength:(id)arg5 extractWith:(id)arg6 options:(id)arg7 modified:(id)arg8;	// IMP=0x000000010001a074
- (void)getCurrentInflightDownloads:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019db4
- (void)syncSplunkTasks;	// IMP=0x0000000100019afc
- (void)pallasRequestV2:(id)arg1 normalizedType:(id)arg2 options:(id)arg3 using:(id)arg4 with:(id)arg5 clientName:(id)arg6 then:(CDUnknownBlockType)arg7;	// IMP=0x000000010001836c
- (void)pallasRequestV1:(id)arg1 sessionId:(id)arg2 options:(id)arg3 then:(CDUnknownBlockType)arg4;	// IMP=0x00000001000171c8
- (void)pallasRequestV1:(id)arg1 sessionId:(id)arg2 then:(CDUnknownBlockType)arg3;	// IMP=0x00000001000171b4
- (id)createAssetAudience:(_Bool)arg1;	// IMP=0x0000000100017170
- (void)checkSplunkStatus:(id)arg1 failureReason:(id)arg2 productVersion:(id)arg3 sessionId:(id)arg4 nonce:(id)arg5 url:(id)arg6 statusCode:(long long)arg7 assetAudience:(id)arg8 version:(id)arg9 receiptResults:(id)arg10;	// IMP=0x0000000100016a9c
- (id)createDefaultEventDictionary:(id)arg1 sessionId:(id)arg2 nonce:(id)arg3 url:(id)arg4 statusCode:(long long)arg5 assetAudience:(id)arg6 uuid:(id)arg7 assetType:(id)arg8 version:(id)arg9 receiptResults:(id)arg10;	// IMP=0x0000000100016808
- (void)isDownloading:(id)arg1 then:(CDUnknownBlockType)arg2;	// IMP=0x00000001000164ec
- (void)allDownloading:(CDUnknownBlockType)arg1;	// IMP=0x00000001000162f8
- (void)queryNSUrlSessiondAndUpdateState;	// IMP=0x0000000100015bac
- (void)sendDownloadResult:(id)arg1 with:(long long)arg2;	// IMP=0x0000000100015a1c
- (void)configDownload:(id)arg1 clientName:(id)arg2 using:(id)arg3 with:(id)arg4;	// IMP=0x0000000100015694
- (void)sendEvents:(id)arg1 sessionId:(id)arg2;	// IMP=0x000000010001522c
- (_Bool)addInFailedJobs:(id)arg1 finalEvents:(id)arg2;	// IMP=0x0000000100014d04
- (void)handleSplunkReportFinished:(id)arg1 result:(_Bool)arg2;	// IMP=0x0000000100014b44
- (void)initializeSessionsAsync;	// IMP=0x0000000100014844
- (void)updateEstimateInfo:(double)arg1;	// IMP=0x00000001000145e0
- (void)startDownloadTimer;	// IMP=0x000000010001428c
- (void)stopTimerIfNoDownloadsInProgress;	// IMP=0x0000000100014200
- (void)dealloc;	// IMP=0x0000000100014008
- (id)init;	// IMP=0x0000000100013d68

@end
