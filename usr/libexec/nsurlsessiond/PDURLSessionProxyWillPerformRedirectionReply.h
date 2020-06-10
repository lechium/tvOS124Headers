//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyRequest, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyWillPerformRedirectionReply : PBCodable <NSCopying>
{
    PDURLSessionProxyRequest *_request;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

@property(retain, nonatomic) PDURLSessionProxyRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x00000001000370b8
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100036fd4
- (unsigned long long)hash;	// IMP=0x0000000100036f78
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100036ea0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100036de8
- (void)copyTo:(id)arg1;	// IMP=0x0000000100036d7c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100036d18
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100036d10
- (id)dictionaryRepresentation;	// IMP=0x00000001000369c4
- (id)description;	// IMP=0x0000000100036910
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasTask;

@end
