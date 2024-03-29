//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEAppProxyProvider.h>

#import "NPWaldoDelegate-Protocol.h"
#import "NSPManagerDelegate-Protocol.h"

@class NSDictionary, NSMutableString, NSObject, NSPManager, NSString, NSTimer, NetworkServiceProxyStats;
@protocol OS_nw_path_evaluator;

@interface NetworkServiceProxyProvider : NEAppProxyProvider <NPWaldoDelegate, NSPManagerDelegate>
{
    _Bool _isWaldoRequestPending;	// 8 = 0x8
    NSPManager *_manager;	// 16 = 0x10
    long long _setupOnce;	// 24 = 0x18
    NSDictionary *_currentNetworkCharacteristics;	// 32 = 0x20
    NetworkServiceProxyStats *_statistics;	// 40 = 0x28
    NSTimer *_resurrectionTimer;	// 48 = 0x30
    NSMutableString *_requestLog;	// 56 = 0x38
    NSObject<OS_nw_path_evaluator> *_defaultEvaluator;	// 64 = 0x40
}

@property(retain) NSObject<OS_nw_path_evaluator> *defaultEvaluator; // @synthesize defaultEvaluator=_defaultEvaluator;
@property(retain) NSMutableString *requestLog; // @synthesize requestLog=_requestLog;
@property(retain) NSTimer *resurrectionTimer; // @synthesize resurrectionTimer=_resurrectionTimer;
@property(retain) NetworkServiceProxyStats *statistics; // @synthesize statistics=_statistics;
@property(retain) NSDictionary *currentNetworkCharacteristics; // @synthesize currentNetworkCharacteristics=_currentNetworkCharacteristics;
@property _Bool isWaldoRequestPending; // @synthesize isWaldoRequestPending=_isWaldoRequestPending;
@property long long setupOnce; // @synthesize setupOnce=_setupOnce;
@property(retain) NSPManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;	// IMP=0x000000010000affc
- (id)copyStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 outWaldoInfo:(id *)arg3;	// IMP=0x000000010000a658
- (_Bool)isLocationServicesEnabledForApp:(id)arg1;	// IMP=0x000000010000a228
- (void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(id)arg3 forClient:(id)arg4;	// IMP=0x000000010000a100
- (void)addConnectionMetrics:(id)arg1;	// IMP=0x000000010000a07c
- (void)addRequestMetrics:(id)arg1;	// IMP=0x0000000100009ff8
- (void)handleKeyBagData:(id)arg1 usageData:(id)arg2 fromClient:(id)arg3;	// IMP=0x0000000100009b00
- (void)refreshWaldoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000936c
- (void)establishTrustWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009264
- (void)establishTrustForEdgeSets:(id)arg1 edgeSetIndex:(unsigned long long)arg2 success:(_Bool)arg3 changed:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100008f24
- (void)refreshMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008c74
- (void)fetchHostsFilesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007f98
- (void)fetchWaldoFile:(id)arg1 currentTimestamp:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007764
- (id)waldoRequiresTFO:(id)arg1;	// IMP=0x00000001000074b8
- (void)waldo:(id)arg1 didFinishSampleProbingWithSuccess:(_Bool)arg2;	// IMP=0x00000001000073a8
- (void)waldo:(id)arg1 didFinishProbingWithSuccess:(_Bool)arg2;	// IMP=0x0000000100007298
- (void)waldoDidSaveToKeychain:(id)arg1;	// IMP=0x0000000100007234
- (void)waldo:(id)arg1 fetchDayPassForURL:(id)arg2 ifExpired:(id)arg3 session:(id)arg4 dataHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000070d0
- (void)fetchURL:(id)arg1 ifExpired:(id)arg2 requestType:(int)arg3 session:(id)arg4 dataHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010000643c
- (void)getCurrentConnectionStatisticsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000642c
- (void)handlePathChange:(id)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x0000000100005f98
- (void)pushAllDayPassesToKernelUpdateGeneration:(_Bool)arg1;	// IMP=0x0000000100005e9c
- (void)waldoNeedsPolicyReset;	// IMP=0x0000000100005e38
- (id)waldoGetCurrentConfiguration;	// IMP=0x0000000100005dc0
- (id)currentPath;	// IMP=0x0000000100005db4
- (_Bool)hasNetworkPath;	// IMP=0x0000000100005d20
- (_Bool)resetNetworkCharacteristicsWithPath:(id)arg1;	// IMP=0x0000000100005bec
- (_Bool)handleNewFlow:(id)arg1;	// IMP=0x0000000100005b70
- (void)handleAppMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005804
- (void)handleMetricsResetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005768
- (void)handleMetricsReportWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000056c8
- (void)handleStatisticsRequestWithCompletionHandler:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005458
- (void)doTuscanyRefreshWithForceNewDayPass:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005210
- (void)handleTuscanyRefresh:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004fc4
- (void)handleReset;	// IMP=0x0000000100004f80
- (void)stopProxyWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004e40
- (void)startProxyWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004dcc
- (_Bool)setupResurrectionTimer;	// IMP=0x0000000100004860
- (void)setupManager;	// IMP=0x00000001000045d0
- (void)setupEdgeSet:(id)arg1;	// IMP=0x00000001000044ec
- (void)setup;	// IMP=0x0000000100004310
- (id)init;	// IMP=0x00000001000042ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

