//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ASURLSessionManager.h"

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ASAssetMetadataDownloader : ASURLSessionManager
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_data;	// 16 = 0x10
    NSMutableDictionary *_completions;	// 24 = 0x18
    double _defaultNetworkTimeout;	// 32 = 0x20
}

@property(nonatomic) double defaultNetworkTimeout; // @synthesize defaultNetworkTimeout=_defaultNetworkTimeout;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2;	// IMP=0x000000010003d0f8
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000010003ce44
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010003ca54
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;	// IMP=0x000000010003ca14
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000010003c7cc
- (void)downloadMetadataFromURL:(id)arg1 withOptions:(id)arg2 ifNewerThan:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010003c498
- (id)_lastModifiedDateFromResponse:(id)arg1;	// IMP=0x000000010003c418
- (id)_translateError:(id)arg1;	// IMP=0x000000010003c31c
- (void)dealloc;	// IMP=0x000000010003c29c
- (id)init;	// IMP=0x000000010003c1d0
- (id)_sessionForOptions:(id)arg1;	// IMP=0x000000010003c0ac
- (_Bool)_canUseBackgroundSession;	// IMP=0x000000010003c004
- (id)sessionConfigurationWithIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x000000010003be88

@end

