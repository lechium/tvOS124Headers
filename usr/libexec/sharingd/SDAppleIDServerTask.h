//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDAppleIDServerTask : NSObject
{
    _Bool _activated;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
    NSString *_appleID;	// 32 = 0x20
    NSString *_gsToken;	// 40 = 0x28
    NSURLSession *_session;	// 48 = 0x30
    NSDictionary *_taskInfo;	// 56 = 0x38
    long long _type;	// 64 = 0x40
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDictionary *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSString *gsToken; // @synthesize gsToken=_gsToken;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;	// IMP=0x00000001000be20c
- (void)_sendRequest;	// IMP=0x00000001000bdf2c
- (id)_parseServerResponse:(id)arg1;	// IMP=0x00000001000bdddc
- (id)_parseGetMyInfoResponse:(id)arg1;	// IMP=0x00000001000bd5f4
- (id)_parseFindPersonResponse:(id)arg1;	// IMP=0x00000001000bcfb8
- (id)_parseFetchCertificateResponse:(id)arg1;	// IMP=0x00000001000bc640
- (id)_parseCreateCertificateResponse:(id)arg1;	// IMP=0x00000001000bc23c
- (void)_handleTaskResponse:(id)arg1 withData:(id)arg2 error:(int)arg3;	// IMP=0x00000001000bb840
- (void)_invalidate;	// IMP=0x00000001000bb6a8
- (void)_handleServerError:(long long)arg1 withStatusCode:(long long)arg2 nextSuggestedAttemptDelay:(long long)arg3;	// IMP=0x00000001000bb30c
- (void)_handleGSTokenIsAvailable;	// IMP=0x00000001000baf34
- (void)invalidate;	// IMP=0x00000001000baec4
- (void)_activate;	// IMP=0x00000001000bad3c
- (id)urlRequest;	// IMP=0x00000001000baaf8
- (id)url;	// IMP=0x00000001000ba87c
- (_Bool)_isTaskInfoValid;	// IMP=0x00000001000ba2a8
- (void)_callResponseHandlerWithInfo:(id)arg1 error:(int)arg2;	// IMP=0x00000001000ba294
- (void)_callResponseHandlerWithInfo:(id)arg1 errorInfo:(id)arg2 error:(int)arg3;	// IMP=0x00000001000ba150
- (void)activate;	// IMP=0x00000001000ba0e0
- (id)description;	// IMP=0x00000001000ba0ac
- (id)initWithType:(long long)arg1 appleID:(id)arg2 info:(id)arg3;	// IMP=0x00000001000b9ed8

@end

