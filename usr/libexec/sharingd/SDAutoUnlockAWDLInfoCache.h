//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDAutoUnlockAWDLInfoCache : PBCodable <NSCopying>
{
    unsigned int _cacheID;	// 8 = 0x8
    NSData *_infoData;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    struct {
        unsigned int cacheID:1;
        unsigned int version:1;
    } _has;	// 28 = 0x1c
}

@property(retain, nonatomic) NSData *infoData; // @synthesize infoData=_infoData;
@property(nonatomic) unsigned int cacheID; // @synthesize cacheID=_cacheID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;	// IMP=0x000000010013ece4
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010013ec04
- (unsigned long long)hash;	// IMP=0x000000010013eb70
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010013ea68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010013e994
- (void)copyTo:(id)arg1;	// IMP=0x000000010013e8f8
- (void)writeTo:(id)arg1;	// IMP=0x000000010013e860
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010013e858
- (id)dictionaryRepresentation;	// IMP=0x000000010013e414
- (id)description;	// IMP=0x000000010013e360
@property(readonly, nonatomic) _Bool hasInfoData;
@property(nonatomic) _Bool hasCacheID;
@property(nonatomic) _Bool hasVersion;

@end

