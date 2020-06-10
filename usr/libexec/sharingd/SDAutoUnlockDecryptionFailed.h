//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDAutoUnlockDecryptionFailed : PBCodable <NSCopying>
{
    unsigned int _errorCode;	// 8 = 0x8
    unsigned int _version;	// 12 = 0xc
    struct {
        unsigned int errorCode:1;
        unsigned int version:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b94a4
- (unsigned long long)hash;	// IMP=0x00000001000b9440
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b9364
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b92cc
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b9258
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b91dc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b91d4
- (id)dictionaryRepresentation;	// IMP=0x00000001000b8dd8
- (id)description;	// IMP=0x00000001000b8d24
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasVersion;

@end

