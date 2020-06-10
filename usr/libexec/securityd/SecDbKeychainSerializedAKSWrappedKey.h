//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SecDbKeychainSerializedAKSWrappedKey : PBCodable <NSCopying>
{
    NSData *_refKeyBlob;	// 8 = 0x8
    unsigned int _type;	// 16 = 0x10
    NSData *_wrappedKey;	// 24 = 0x18
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *refKeyBlob; // @synthesize refKeyBlob=_refKeyBlob;
@property(retain, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
- (void).cxx_destruct;	// IMP=0x000000010005a48c
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010005a410
- (unsigned long long)hash;	// IMP=0x000000010005a390
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005a2a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005a1e0
- (void)copyTo:(id)arg1;	// IMP=0x000000010005a16c
- (void)writeTo:(id)arg1;	// IMP=0x000000010005a0f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100059e88
- (id)dictionaryRepresentation;	// IMP=0x0000000100059d9c
- (id)description;	// IMP=0x0000000100059cf4
@property(readonly, nonatomic) _Bool hasRefKeyBlob;

@end

