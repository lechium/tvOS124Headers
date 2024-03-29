//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCMCoarseElevation : PBCodable <NSCopying>
{
    unsigned int _elevationAscended;	// 8 = 0x8
    int _source;	// 12 = 0xc
    struct {
        unsigned int source:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100396028
- (unsigned long long)hash;	// IMP=0x0000000100395fd0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100395f30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100395eac
- (void)copyTo:(id)arg1;	// IMP=0x0000000100395e6c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100395e04
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100395dfc
- (id)dictionaryRepresentation;	// IMP=0x0000000100395a10
- (id)description;	// IMP=0x0000000100395990
- (int)StringAsSource:(id)arg1;	// IMP=0x0000000100395938
- (id)sourceAsString:(int)arg1;	// IMP=0x00000001003958dc
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;

@end

