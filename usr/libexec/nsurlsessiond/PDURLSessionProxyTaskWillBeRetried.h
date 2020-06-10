//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyError, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyTaskWillBeRetried : PBCodable <NSCopying>
{
    PDURLSessionProxyError *_error;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

@property(retain, nonatomic) PDURLSessionProxyError *error; // @synthesize error=_error;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x000000010004abf8
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010004ab14
- (unsigned long long)hash;	// IMP=0x000000010004aab8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010004a9e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004a928
- (void)copyTo:(id)arg1;	// IMP=0x000000010004a8bc
- (void)writeTo:(id)arg1;	// IMP=0x000000010004a858
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010004a850
- (id)dictionaryRepresentation;	// IMP=0x000000010004a504
- (id)description;	// IMP=0x000000010004a450
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasTask;

@end
