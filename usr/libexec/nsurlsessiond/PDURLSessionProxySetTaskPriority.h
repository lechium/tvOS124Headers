//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySetTaskPriority : PBCodable <NSCopying>
{
    unsigned int _priority;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    struct {
        unsigned int priority:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x000000010000a128
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000a064
- (unsigned long long)hash;	// IMP=0x0000000100009ff4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100009f10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100009e60
- (void)copyTo:(id)arg1;	// IMP=0x0000000100009de8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100009d78
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100009d70
- (id)dictionaryRepresentation;	// IMP=0x00000001000099b0
- (id)description;	// IMP=0x00000001000098fc
@property(nonatomic) _Bool hasPriority;
@property(readonly, nonatomic) _Bool hasTask;

@end

