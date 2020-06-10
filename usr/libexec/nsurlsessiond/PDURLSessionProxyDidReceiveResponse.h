//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveResponse : PBCodable <NSCopying>
{
    PDURLSessionProxyResponse *_response;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x000000010002e0c4
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002dfe0
- (unsigned long long)hash;	// IMP=0x000000010002df84
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002deac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002ddf4
- (void)copyTo:(id)arg1;	// IMP=0x000000010002dd88
- (void)writeTo:(id)arg1;	// IMP=0x000000010002dd24
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010002dd1c
- (id)dictionaryRepresentation;	// IMP=0x000000010002d9d0
- (id)description;	// IMP=0x000000010002d91c
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasTask;

@end

