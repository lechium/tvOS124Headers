//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyRequest, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDataTaskWithRequest : PBRequest <NSCopying>
{
    unsigned long long _taskSequenceNumber;	// 8 = 0x8
    PDURLSessionProxyRequest *_currentRequest;	// 16 = 0x10
    PDURLSessionProxyRequest *_originalRequest;	// 24 = 0x18
    PDURLSessionProxyTaskMessage *_task;	// 32 = 0x20
    struct {
        unsigned int taskSequenceNumber:1;
    } _has;	// 40 = 0x28
}

@property(nonatomic) unsigned long long taskSequenceNumber; // @synthesize taskSequenceNumber=_taskSequenceNumber;
@property(retain, nonatomic) PDURLSessionProxyRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) PDURLSessionProxyRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x000000010000c67c
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000c500
- (unsigned long long)hash;	// IMP=0x000000010000c450
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000c30c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000c200
- (void)copyTo:(id)arg1;	// IMP=0x000000010000c148
- (void)writeTo:(id)arg1;	// IMP=0x000000010000c0a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000c098
- (id)dictionaryRepresentation;	// IMP=0x000000010000bba0
- (id)description;	// IMP=0x000000010000baec
@property(nonatomic) _Bool hasTaskSequenceNumber;
@property(readonly, nonatomic) _Bool hasCurrentRequest;
@property(readonly, nonatomic) _Bool hasOriginalRequest;
@property(readonly, nonatomic) _Bool hasTask;

@end

