//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RTCReportingBackend.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSOperationQueue, NSString;

@interface HTTPSPostBackend : RTCReportingBackend
{
    NSString *_postURL;	// 216 = 0xd8
    _Bool _useDefaultPostURL;	// 224 = 0xe0
    NSString *_realtimePostURL;	// 232 = 0xe8
    _Bool _useDefaultRealtimePostURL;	// 240 = 0xf0
    NSMutableArray *_batchedEvents;	// 248 = 0xf8
    NSOperationQueue *_queue;	// 256 = 0x100
    int _numberOfFilters;	// 264 = 0x108
    struct filterTag *_filters;	// 272 = 0x110
    _Bool _dnuEnabled;	// 280 = 0x118
    int _dnuType;	// 284 = 0x11c
    int _eventThreshold;	// 288 = 0x120
    int _extrasOnInternal;	// 292 = 0x124
    NSNumber *_overrideSampling;	// 296 = 0x128
    NSMutableDictionary *_eventMethodCounts;	// 304 = 0x130
    NSString *_uuidRespectDnu;	// 312 = 0x138
    NSString *_uuidOverrideDnu;	// 320 = 0x140
    NSString *_uuidCustom;	// 328 = 0x148
    _Bool _forceEventLogging;	// 336 = 0x150
    _Bool _immutable;	// 337 = 0x151
}

@property(copy) NSString *postURL; // @synthesize postURL=_postURL;
- (unsigned long long)batchedEventsSize;	// IMP=0x000000010001f680
- (void)setCorrelatedSessionID:(id)arg1;	// IMP=0x000000010001f53c
- (id)flushMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001edc4
- (id)sendMessage:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 flag:(int)arg6;	// IMP=0x000000010001e6c0
- (void)filterEvent:(id)arg1;	// IMP=0x000000010001e220
- (int)updateState;	// IMP=0x000000010001e1dc
- (int)updateBackendState;	// IMP=0x000000010001d424
- (_Bool)isFrameworkEnabledForClient:(id)arg1;	// IMP=0x000000010001d2a0
- (void)resetBackendStateWithClient:(id)arg1;	// IMP=0x000000010001d140
- (_Bool)matchClientNameAndServiceID:(id)arg1 clientName:(id)arg2 serviceID:(id)arg3;	// IMP=0x000000010001d064
- (_Bool)updatePostLink:(id)arg1;	// IMP=0x000000010001cde8
- (_Bool)matchStringWithList:(id)arg1 wholeString:(id)arg2 whitelist:(_Bool)arg3;	// IMP=0x000000010001cc88
- (_Bool)matchExactStringWithList:(id)arg1 wholeString:(id)arg2 whitelist:(_Bool)arg3;	// IMP=0x000000010001cb2c
- (void)createFiltersFromArray:(id)arg1;	// IMP=0x000000010001c89c
- (void)postJSONMessage:(id)arg1 withFlag:(int)arg2 method:(id)arg3 responseCode:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010001bf20
- (id)createMessageForPostAndLogging:(id)arg1 prettyJsonString:(id *)arg2;	// IMP=0x000000010001b90c
- (void)prepareEventForMessage:(id)arg1 frameworkData:(id)arg2;	// IMP=0x000000010001b8b4
- (id)batchEvent:(id)arg1;	// IMP=0x000000010001b598
- (id)newEventDictfromPayload:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5;	// IMP=0x000000010001b0cc
- (void)dealloc;	// IMP=0x000000010001afd4
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;	// IMP=0x000000010001abec

@end

