//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyGetAuthHeaders : PBCodable <NSCopying>
{
    PDURLSessionProxyResponse *_response;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x000000010000cea8
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000cdc4
- (unsigned long long)hash;	// IMP=0x000000010000cd68
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000cc90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000cbd8
- (void)copyTo:(id)arg1;	// IMP=0x000000010000cb6c
- (void)writeTo:(id)arg1;	// IMP=0x000000010000cb08
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000cb00
- (id)dictionaryRepresentation;	// IMP=0x000000010000c7b4
- (id)description;	// IMP=0x000000010000c700
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasTask;

@end

