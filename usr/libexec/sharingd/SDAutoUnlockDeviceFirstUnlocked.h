//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDAutoUnlockDeviceFirstUnlocked : PBCodable <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b5870
- (unsigned long long)hash;	// IMP=0x00000001000b5834
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b5780
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b570c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b56dc
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b56ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b56a4
- (id)dictionaryRepresentation;	// IMP=0x00000001000b53d0
- (id)description;	// IMP=0x00000001000b531c
@property(nonatomic) _Bool hasVersion;

@end

