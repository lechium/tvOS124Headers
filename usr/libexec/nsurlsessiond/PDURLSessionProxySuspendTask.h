//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySuspendTask : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x00000001000394d0
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100039448
- (unsigned long long)hash;	// IMP=0x0000000100039430
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100039388
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100039304
- (void)copyTo:(id)arg1;	// IMP=0x00000001000392dc
- (void)writeTo:(id)arg1;	// IMP=0x00000001000392b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000392b0
- (id)dictionaryRepresentation;	// IMP=0x0000000100039014
- (id)description;	// IMP=0x0000000100038f60
@property(readonly, nonatomic) _Bool hasTask;

@end

