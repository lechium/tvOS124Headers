//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCLStairClimbingModel : PBCodable <NSCopying>
{
    float _machineFrequency;	// 8 = 0x8
}

@property(nonatomic) float machineFrequency; // @synthesize machineFrequency=_machineFrequency;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100398014
- (unsigned long long)hash;	// IMP=0x0000000100397fac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100397f50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100397ef8
- (void)copyTo:(id)arg1;	// IMP=0x0000000100397ee4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100397ecc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100397ec4
- (id)dictionaryRepresentation;	// IMP=0x0000000100397c80
- (id)description;	// IMP=0x0000000100397c00

@end

