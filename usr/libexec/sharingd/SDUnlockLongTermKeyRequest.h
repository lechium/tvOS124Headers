//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SDUnlockLongTermKeyRequest : PBRequest <NSCopying>
{
    NSData *_longTermKey;	// 8 = 0x8
    NSString *_requestID;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;	// IMP=0x0000000100045c3c
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100045b4c
- (unsigned long long)hash;	// IMP=0x0000000100045ab8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000459a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000458c4
- (void)copyTo:(id)arg1;	// IMP=0x000000010004582c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000457a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100045798
- (id)dictionaryRepresentation;	// IMP=0x0000000100045410
- (id)description;	// IMP=0x000000010004535c
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasRequestID;
@property(nonatomic) _Bool hasVersion;

@end

