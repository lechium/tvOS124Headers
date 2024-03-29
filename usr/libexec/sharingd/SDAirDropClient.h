//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "SDAirDropFileZipperDelegate-Protocol.h"
#import "SDBonjourResolverDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableSet, NSNumber, NSProgress, NSString, NSURL, NSURLResponse, NSURLSession, NSURLSessionUploadTask, SDAirDropFileZipper, SDAirDropPeerMetric, SDBonjourResolver, SDStatusMonitor;
@protocol OS_dispatch_queue, SDAirDropClientDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropClient : NSObject <SDAirDropFileZipperDelegate, SDBonjourResolverDelegate, NSURLSessionDataDelegate>
{
    NSURLResponse *_askResponse;	// 8 = 0x8
    NSURLSessionUploadTask *_askTask;	// 16 = 0x10
    _Bool _cancelled;	// 24 = 0x18
    NSString *_clientBundleID;	// 32 = 0x20
    NSString *_compressionType;	// 40 = 0x28
    NSString *_connectionKey;	// 48 = 0x30
    _Bool _conversionNotified;	// 56 = 0x38
    _Bool _conversionObserver;	// 57 = 0x39
    NSProgress *_conversionProgress;	// 64 = 0x40
    _Bool _discover;	// 72 = 0x48
    NSURLResponse *_discoverResponse;	// 80 = 0x50
    NSURLSessionUploadTask *_discoverTask;	// 88 = 0x58
    int _failCount;	// 96 = 0x60
    struct CGImage *_fileIcon;	// 104 = 0x68
    NSMutableArray *_fileURLs;	// 112 = 0x70
    NSMutableDictionary *_fileURLToConversionNeeded;	// 120 = 0x78
    NSMutableSet *_generatedFiles;	// 128 = 0x80
    struct __SecIdentity *_identity;	// 136 = 0x88
    NSArray *_items;	// 144 = 0x90
    long long _lastEvent;	// 152 = 0x98
    NSMutableArray *_mediaFormatConversionDestinations;	// 160 = 0xa0
    SDAirDropPeerMetric *_metric;	// 168 = 0xa8
    SDStatusMonitor *_monitor;	// 176 = 0xb0
    NSMutableArray *_otherStuff;	// 184 = 0xb8
    _Bool _p2pRetained;	// 192 = 0xc0
    struct __SFNode *_person;	// 200 = 0xc8
    _Bool _personAdded;	// 208 = 0xd0
    unsigned int _powerAssertionID;	// 212 = 0xd4
    NSProgress *_progress;	// 216 = 0xd8
    NSMutableDictionary *_properties;	// 224 = 0xe0
    _Bool _providedStream;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_queue;	// 240 = 0xf0
    _Bool _queueSuspended;	// 248 = 0xf8
    NSMutableData *_receiverData;	// 256 = 0x100
    SDBonjourResolver *_resolver;	// 264 = 0x108
    NSNumber *_sendingLivePhotoJPEGs;	// 272 = 0x110
    struct __SecTrust *_serverTrust;	// 280 = 0x118
    NSURL *_serverURL;	// 288 = 0x120
    NSURLSession *_session;	// 296 = 0x128
    _Bool _shouldPublishProgress;	// 304 = 0x130
    struct CGImage *_smallFileIcon;	// 312 = 0x138
    double _startTime;	// 320 = 0x140
    NSURL *_tmpDirectoryToCleanUp;	// 328 = 0x148
    _Bool _transactionStarted;	// 336 = 0x150
    NSProgress *_transferProgress;	// 344 = 0x158
    _Bool _uploadFinished;	// 352 = 0x160
    NSURLResponse *_uploadResponse;	// 360 = 0x168
    NSURLSessionUploadTask *_uploadTask;	// 368 = 0x170
    NSMutableArray *_weblocURLs;	// 376 = 0x178
    SDAirDropFileZipper *_zipper;	// 384 = 0x180
    _Bool _zipperFinished;	// 392 = 0x188
    int _clientPid;	// 396 = 0x18c
    id <SDAirDropClientDelegate> _delegate;	// 400 = 0x190
    CDStruct_4c969caf _auditToken;	// 408 = 0x198
}

@property __weak id <SDAirDropClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldPublishProgress; // @synthesize shouldPublishProgress=_shouldPublishProgress;
@property(copy) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property int clientPid; // @synthesize clientPid=_clientPid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void).cxx_destruct;	// IMP=0x0000000100100c90
- (void)donateTransferInteractionToDuet;	// IMP=0x0000000100100bbc
- (void)convertMediaItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100100bb0
- (void)generatePreviewForFileURL:(id)arg1;	// IMP=0x0000000100100bac
- (void)stop;	// IMP=0x00000001001006b4
@property(readonly) NSString *personID;
- (_Bool)send;	// IMP=0x00000001001002cc
- (void)resolve;	// IMP=0x0000000100100188
- (void)start;	// IMP=0x00000001000ffc1c
- (void)startSending;	// IMP=0x00000001000ff614
- (id)tmpDirectory;	// IMP=0x00000001000ff448
- (void)cancelSendingClassroom;	// IMP=0x00000001000ff380
- (void)startSendingClassroom;	// IMP=0x00000001000ff134
- (void)startPublishingProgress;	// IMP=0x00000001000feec0
- (void)removeFileIconsFromProperties;	// IMP=0x00000001000fedcc
- (void)appendFileURL:(id)arg1 withBase:(id)arg2 toItems:(id)arg3;	// IMP=0x00000001000fe948
- (void)validateAirDropItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fe348
- (_Bool)replaceFileURLsWithRealPaths;	// IMP=0x00000001000fe188
- (_Bool)splitOutFileURLs;	// IMP=0x00000001000fdd78
- (id)realPathURL:(struct __CFURL *)arg1;	// IMP=0x00000001000fdb28
- (id)webURLFromInternetLocationFile:(id)arg1;	// IMP=0x00000001000fda5c
- (id)internetLocationFile:(struct __CFURL *)arg1;	// IMP=0x00000001000fd854
- (id)temporaryWeblocURL:(struct __CFURL *)arg1;	// IMP=0x00000001000fd61c
- (void)startZipping;	// IMP=0x00000001000fd4fc
- (void)sendRequest:(id)arg1;	// IMP=0x00000001000fce9c
- (id)discoverBodyDataInFormat:(long long)arg1;	// IMP=0x00000001000fce18
- (id)askBodyDataInFormat:(long long)arg1;	// IMP=0x00000001000fca64
- (void)addHashesAndValidationRecordToRequest:(id)arg1;	// IMP=0x00000001000fc8e8
- (void)bonjourResolverDidChange:(id)arg1;	// IMP=0x00000001000fc418
- (void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void *)arg3;	// IMP=0x00000001000fc240
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x00000001000fc0ec
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000fbaec
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x00000001000fb68c
@property(readonly) struct __SecTrust *secTrustRef;
- (void)logInterfaceUsedForSending:(id)arg1;	// IMP=0x00000001000fb620
- (void)releasePeerToPeerIfPossible:(id)arg1;	// IMP=0x00000001000fb598
- (_Bool)connectionOverP2P:(struct __CFData *)arg1;	// IMP=0x00000001000fb340
- (struct __SecKey *)copyReceiverPublicKey;	// IMP=0x00000001000fb1d8
- (void)evaluateReceiverTrust:(struct __SecTrust *)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fb004
- (void)didFail:(id)arg1;	// IMP=0x00000001000fad28
- (_Bool)shouldCancelTransferForError:(id)arg1;	// IMP=0x00000001000fac24
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000001000fab5c
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x00000001000faad4
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000001000faa28
- (void)didFinishLoading;	// IMP=0x00000001000fa75c
- (void)retryRequestForError:(id)arg1;	// IMP=0x00000001000fa570
- (void)finishOperation;	// IMP=0x00000001000fa114
- (void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2;	// IMP=0x00000001000f9fa8
- (_Bool)parseDiscoverResponse:(struct __CFError **)arg1;	// IMP=0x00000001000f9dc4
- (_Bool)parseAskResponse:(struct __CFError **)arg1;	// IMP=0x00000001000f9ba8
- (void)storeArrayValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00000001000f9b30
- (void)storeStringValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00000001000f9a60
- (void)storeDataValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00000001000f9990
- (void)storePropertyValue:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00000001000f9898
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000f9828
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000f92d0
- (void)setSpotlightMetadata:(id)arg1;	// IMP=0x00000001000f92cc
- (id)whereFromInfo;	// IMP=0x00000001000f91ec
- (void)didFinishSendingAskBodyData;	// IMP=0x00000001000f919c
- (void)didStartSendingAskBodyData;	// IMP=0x00000001000f90f0
- (void)notifyClientForEvent:(long long)arg1 withProperty:(void *)arg2;	// IMP=0x00000001000f8858
- (void)releaseIdleSleepAssertion;	// IMP=0x00000001000f8774
- (void)addBlockerInfo:(struct __CFDictionary *)arg1 toProperties:(struct __CFDictionary *)arg2;	// IMP=0x00000001000f8550
- (double)getTransferRate;	// IMP=0x00000001000f84b8
- (void)createSession;	// IMP=0x00000001000f8088
- (_Bool)requireAWDL;	// IMP=0x00000001000f8034
- (void)removeObservers;	// IMP=0x00000001000f7fe4
- (void)addObservers;	// IMP=0x00000001000f7f04
- (void)currentPeerChanged:(id)arg1;	// IMP=0x00000001000f7e70
- (void)legacyModeChanged:(id)arg1;	// IMP=0x00000001000f7e20
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x00000001000f7da8
- (void)systemWillSleep:(id)arg1;	// IMP=0x00000001000f7d58
- (void)dealloc;	// IMP=0x00000001000f7c38
- (id)initWithPerson:(struct __SFNode *)arg1 items:(id)arg2 forDiscovery:(_Bool)arg3;	// IMP=0x00000001000f775c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

