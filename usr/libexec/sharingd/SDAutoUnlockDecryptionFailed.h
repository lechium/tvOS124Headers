//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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

