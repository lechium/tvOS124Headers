//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSError, NSMutableArray, NSString, NSURLSessionTask, W5SpeedTestRequest, W5SpeedTestServer, W5SpeedTestUploadStream;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface W5SpeedTestManager : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_pendingRequests;	// 16 = 0x10
    W5SpeedTestRequest *_activeRequest;	// 24 = 0x18
    NSURLSessionTask *_currentSessionTask;	// 32 = 0x20
    W5SpeedTestServer *_cachedServer;	// 40 = 0x28
    NSMutableArray *_serverExcludeList;	// 48 = 0x30
    long long _serverNotViableCount;	// 56 = 0x38
    NSError *_uploadError;	// 64 = 0x40
    W5SpeedTestUploadStream *_uploadInputStream;	// 72 = 0x48
    NSObject<OS_dispatch_semaphore> *_uploadWait;	// 80 = 0x50
}

+ (id)__serverListURLs;	// IMP=0x0000000100005704
- (id)__longitudeFromServerRow:(id)arg1;	// IMP=0x0000000100006290
- (id)__latitudeFromServerRow:(id)arg1;	// IMP=0x00000001000061bc
- (id)__countryCodeFromServerRow:(id)arg1;	// IMP=0x00000001000060e8
- (id)__urlFromServerRow:(id)arg1;	// IMP=0x0000000100006014
- (id)__serverModelFromLine:(id)arg1;	// IMP=0x0000000100005e74
- (id)__subdomainAddressTrimmingPath:(id)arg1;	// IMP=0x0000000100005ddc
- (_Bool)__isServerViable:(id)arg1;	// IMP=0x0000000100005c2c
- (_Bool)__isServerInExcludeList:(id)arg1;	// IMP=0x0000000100005bd4
- (id)__serverList;	// IMP=0x000000010000578c
- (id)__findBestServerUsingLocation:(id)arg1;	// IMP=0x00000001000056fc
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000056ec
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100005678
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005660
- (void)__testUploadSpeedForSize:(long long)arg1 server:(id)arg2 timeout:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010000539c
- (id)__testUploadSpeedForSize:(long long)arg1 location:(id)arg2;	// IMP=0x0000000100005204
- (void)__testDownloadSpeedForSize:(long long)arg1 server:(id)arg2 timeout:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100004e24
- (id)__testDownloadSpeedForSize:(long long)arg1 location:(id)arg2;	// IMP=0x0000000100004c8c
- (id)__runSpeedTest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100004b48
- (void)__runRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004a1c
- (void)__nextRequest;	// IMP=0x0000000100004798
- (void)cancelRequestWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004590
- (id)__pendingRequestWithUUID:(id)arg1;	// IMP=0x0000000100004444
- (void)addRequest:(id)arg1;	// IMP=0x0000000100004324
- (void)dealloc;	// IMP=0x0000000100004264
- (id)init;	// IMP=0x000000010000417c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
