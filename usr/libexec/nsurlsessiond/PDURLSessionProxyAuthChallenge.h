//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface PDURLSessionProxyAuthChallenge : PBCodable <NSCopying>
{
    NSData *_archiveList;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

@property(retain, nonatomic) NSData *archiveList; // @synthesize archiveList=_archiveList;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;	// IMP=0x000000010004bbd8
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010004bb2c
- (unsigned long long)hash;	// IMP=0x000000010004bac0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010004b9e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004b930
- (void)copyTo:(id)arg1;	// IMP=0x000000010004b8b8
- (void)writeTo:(id)arg1;	// IMP=0x000000010004b848
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010004b840
- (id)dictionaryRepresentation;	// IMP=0x000000010004b508
- (id)description;	// IMP=0x000000010004b454
@property(readonly, nonatomic) _Bool hasArchiveList;
@property(nonatomic) _Bool hasVersion;

@end
