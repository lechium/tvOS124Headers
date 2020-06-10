//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCMFitnessTracking : PBCodable <NSCopying>
{
    int _powerSource;	// 8 = 0x8
    _Bool _fitnessTrackingEnabled;	// 12 = 0xc
    struct {
        unsigned int powerSource:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool fitnessTrackingEnabled; // @synthesize fitnessTrackingEnabled=_fitnessTrackingEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001008ab304
- (unsigned long long)hash;	// IMP=0x00000001008ab2ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001008ab204
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001008ab180
- (void)copyTo:(id)arg1;	// IMP=0x00000001008ab140
- (void)writeTo:(id)arg1;	// IMP=0x00000001008ab0d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001008ab0d0
- (id)dictionaryRepresentation;	// IMP=0x00000001008aacb4
- (id)description;	// IMP=0x00000001008aac34
- (int)StringAsPowerSource:(id)arg1;	// IMP=0x00000001008aab90
- (id)powerSourceAsString:(int)arg1;	// IMP=0x00000001008aaafc
@property(nonatomic) _Bool hasPowerSource;
@property(nonatomic) int powerSource; // @synthesize powerSource=_powerSource;

@end
