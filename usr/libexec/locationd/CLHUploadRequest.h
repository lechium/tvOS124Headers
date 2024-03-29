//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLHEndpointSelector, CLHRequestArchive, NSData, NSDictionary, NSURL, NSURLRequest;

@interface CLHUploadRequest : NSObject
{
    NSData *_payload;	// 8 = 0x8
    unsigned int _requestTypeCode;	// 16 = 0x10
    NSURL *_endpoint;	// 24 = 0x18
    NSDictionary *_headers;	// 32 = 0x20
    CLHEndpointSelector *_endpointSelector;	// 40 = 0x28
    CLHRequestArchive *_requestArchive;	// 48 = 0x30
}

@property(readonly) CLHRequestArchive *requestArchive; // @synthesize requestArchive=_requestArchive;
@property(readonly) CLHEndpointSelector *endpointSelector; // @synthesize endpointSelector=_endpointSelector;
@property(retain, nonatomic) NSURL *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) unsigned int requestTypeCode; // @synthesize requestTypeCode=_requestTypeCode;
- (id)description;	// IMP=0x00000001007e680c
- (id)jsonObject;	// IMP=0x00000001007e6790
@property(readonly) NSURLRequest *URLRequest;
- (id)initWithArchive:(id)arg1;	// IMP=0x00000001007e6268
- (id)initWithRequest:(id)arg1 endpoint:(id)arg2 headers:(id)arg3;	// IMP=0x00000001007e619c
- (void)dealloc;	// IMP=0x00000001007e6104
- (id)initWithPayload:(id)arg1 requestTypeCode:(unsigned int)arg2 endpoint:(id)arg3 headers:(id)arg4;	// IMP=0x00000001007e6040

@end

