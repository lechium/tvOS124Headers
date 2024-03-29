//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSArray, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface TrustURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    void *_context;	// 8 = 0x8
    NSArray *_URIs;	// 16 = 0x10
    unsigned long long _URIix;	// 24 = 0x18
    NSMutableData *_response;	// 32 = 0x20
    double _expiration;	// 40 = 0x28
    unsigned long long _numTasks;	// 48 = 0x30
}

@property unsigned long long numTasks; // @synthesize numTasks=_numTasks;
@property double expiration; // @synthesize expiration=_expiration;
@property(retain) NSMutableData *response; // @synthesize response=_response;
@property unsigned long long URIix; // @synthesize URIix=_URIix;
@property(retain) NSArray *URIs; // @synthesize URIs=_URIs;
@property void *context; // @synthesize context=_context;
- (void).cxx_destruct;	// IMP=0x0000000100040be0
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100040ad0
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100040560
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000001000404e0
- (_Bool)fetchNext:(id)arg1;	// IMP=0x0000000100040130
- (id)createNextRequest:(id)arg1;	// IMP=0x000000010004011c
- (id)init;	// IMP=0x0000000100040074

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

