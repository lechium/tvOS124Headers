//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

@interface ALSNearbyRequest : PBRequest
{
    long long _latitude;	// 8 = 0x8
    long long _longitude;	// 16 = 0x10
    int _numberOfSurroundingWifis;	// 24 = 0x18
    int _radius;	// 28 = 0x1c
    int _technology;	// 32 = 0x20
    int _wifiGranularity;	// 36 = 0x24
    _Bool _needCellsTowers;	// 40 = 0x28
    struct {
        unsigned int numberOfSurroundingWifis:1;
        unsigned int radius:1;
        unsigned int technology:1;
        unsigned int wifiGranularity:1;
        unsigned int needCellsTowers:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) int radius; // @synthesize radius=_radius;
@property(nonatomic) int wifiGranularity; // @synthesize wifiGranularity=_wifiGranularity;
@property(nonatomic) int technology; // @synthesize technology=_technology;
@property(nonatomic) int numberOfSurroundingWifis; // @synthesize numberOfSurroundingWifis=_numberOfSurroundingWifis;
@property(nonatomic) _Bool needCellsTowers; // @synthesize needCellsTowers=_needCellsTowers;
@property(nonatomic) long long longitude; // @synthesize longitude=_longitude;
@property(nonatomic) long long latitude; // @synthesize latitude=_latitude;
- (unsigned long long)hash;	// IMP=0x0000000100601cc0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100601b68
- (void)copyTo:(id)arg1;	// IMP=0x00000001006019e4
- (Class)responseClass;	// IMP=0x00000001006019d0
- (unsigned int)requestTypeCode;	// IMP=0x00000001006019c8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100601874
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010060186c
- (id)dictionaryRepresentation;	// IMP=0x0000000100600fec
- (id)description;	// IMP=0x0000000100600f6c
@property(nonatomic) _Bool hasRadius;
@property(nonatomic) _Bool hasWifiGranularity;
@property(nonatomic) _Bool hasTechnology;
@property(nonatomic) _Bool hasNumberOfSurroundingWifis;
@property(nonatomic) _Bool hasNeedCellsTowers;
- (void)dealloc;	// IMP=0x0000000100600d94

@end

