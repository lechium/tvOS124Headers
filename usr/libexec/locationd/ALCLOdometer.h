//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCLOdometer : PBCodable <NSCopying>
{
    double _timestampGps;	// 8 = 0x8
    float _accuracy;	// 16 = 0x10
    float _distance;	// 20 = 0x14
    float _gpsAltitude;	// 24 = 0x18
    float _gpsSpeedAccuracy;	// 28 = 0x1c
    float _odometer;	// 32 = 0x20
    int _quality;	// 36 = 0x24
    float _rawSpeed;	// 40 = 0x28
    float _speed;	// 44 = 0x2c
    struct {
        unsigned int timestampGps:1;
        unsigned int accuracy:1;
        unsigned int distance:1;
        unsigned int gpsAltitude:1;
        unsigned int gpsSpeedAccuracy:1;
        unsigned int quality:1;
        unsigned int rawSpeed:1;
        unsigned int speed:1;
    } _has;	// 48 = 0x30
}

@property(nonatomic) double timestampGps; // @synthesize timestampGps=_timestampGps;
@property(nonatomic) float gpsSpeedAccuracy; // @synthesize gpsSpeedAccuracy=_gpsSpeedAccuracy;
@property(nonatomic) float odometer; // @synthesize odometer=_odometer;
@property(nonatomic) float rawSpeed; // @synthesize rawSpeed=_rawSpeed;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float gpsAltitude; // @synthesize gpsAltitude=_gpsAltitude;
@property(nonatomic) float accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) float distance; // @synthesize distance=_distance;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001008afeb4
- (unsigned long long)hash;	// IMP=0x00000001008afba4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001008af9ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001008af848
- (void)copyTo:(id)arg1;	// IMP=0x00000001008af6e8
- (void)writeTo:(id)arg1;	// IMP=0x00000001008af574
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001008af56c
- (id)dictionaryRepresentation;	// IMP=0x00000001008aeccc
- (id)description;	// IMP=0x00000001008aec4c
- (int)StringAsQuality:(id)arg1;	// IMP=0x00000001008aeba8
- (id)qualityAsString:(int)arg1;	// IMP=0x00000001008aeb14
@property(nonatomic) _Bool hasQuality;
@property(nonatomic) int quality; // @synthesize quality=_quality;
@property(nonatomic) _Bool hasTimestampGps;
@property(nonatomic) _Bool hasGpsSpeedAccuracy;
@property(nonatomic) _Bool hasRawSpeed;
@property(nonatomic) _Bool hasSpeed;
@property(nonatomic) _Bool hasGpsAltitude;
@property(nonatomic) _Bool hasAccuracy;
@property(nonatomic) _Bool hasDistance;

@end

