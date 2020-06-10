//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class CLHEndpointSelector, NSDateFormatter, NSMutableArray, NSOperationQueue, NSString, NSURLSession;
@protocol CLHNetworkControllerDelegate, OS_dispatch_queue;

@interface CLHNetworkController : NSObject <NSURLSessionDataDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSURLSession *_session;	// 24 = 0x18
    NSMutableArray *_activeTasks;	// 32 = 0x20
    NSDateFormatter *_dateFormatter;	// 40 = 0x28
    double _timeout;	// 48 = 0x30
    CLHEndpointSelector *_endpointSelector;	// 56 = 0x38
    id <CLHNetworkControllerDelegate> _delegate;	// 64 = 0x40
}

@property(retain, nonatomic) id <CLHNetworkControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CLHEndpointSelector *endpointSelector; // @synthesize endpointSelector=_endpointSelector;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000001007e7278
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001007e6e7c
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000001007e6d6c
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x00000001007e6c70
- (void)submitRequest:(id)arg1;	// IMP=0x00000001007e6b08
- (void)dealloc;	// IMP=0x00000001007e6a5c
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001007e6900

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
