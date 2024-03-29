//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class ALCLNatalieFeatures, ALCMMotionContextMotionState;

@interface ALMotionState : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    ALCMMotionContextMotionState *_motion;	// 16 = 0x10
    ALCLNatalieFeatures *_natalieFeatures;	// 24 = 0x18
    _Bool _regularEntry;	// 32 = 0x20
    CDStruct_b5306035 _has;	// 36 = 0x24
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(retain, nonatomic) ALCLNatalieFeatures *natalieFeatures; // @synthesize natalieFeatures=_natalieFeatures;
@property(retain, nonatomic) ALCMMotionContextMotionState *motion; // @synthesize motion=_motion;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100142e28
- (unsigned long long)hash;	// IMP=0x0000000100142d44
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100142c40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100142b44
- (void)copyTo:(id)arg1;	// IMP=0x0000000100142aac
- (void)writeTo:(id)arg1;	// IMP=0x00000001001429f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001429f0
- (id)dictionaryRepresentation;	// IMP=0x00000001001424f4
- (id)description;	// IMP=0x0000000100142474
@property(readonly, nonatomic) _Bool hasNatalieFeatures;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;	// IMP=0x00000001001423a4

@end

