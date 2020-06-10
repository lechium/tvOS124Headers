//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySocketDisconnected : PBCodable <NSCopying>
{
    NSString *_socketUUID;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *socketUUID; // @synthesize socketUUID=_socketUUID;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x00000001000313a8
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000312dc
- (unsigned long long)hash;	// IMP=0x0000000100031280
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000311a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000310f0
- (void)copyTo:(id)arg1;	// IMP=0x0000000100031084
- (void)writeTo:(id)arg1;	// IMP=0x0000000100031020
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100031018
- (id)dictionaryRepresentation;	// IMP=0x0000000100030d1c
- (id)description;	// IMP=0x0000000100030c68
@property(readonly, nonatomic) _Bool hasSocketUUID;
@property(readonly, nonatomic) _Bool hasTask;

@end
