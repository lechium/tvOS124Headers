//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface TRANSITPbRegionPreloadMarket : PBCodable <NSCopying>
{
    double _northWestLatitude;	// 8 = 0x8
    double _northWestLongitude;	// 16 = 0x10
    double _southEastLatitude;	// 24 = 0x18
    double _southEastLongitude;	// 32 = 0x20
    NSMutableArray *_tiles;	// 40 = 0x28
    struct {
        unsigned int northWestLatitude:1;
        unsigned int northWestLongitude:1;
        unsigned int southEastLatitude:1;
        unsigned int southEastLongitude:1;
    } _has;	// 48 = 0x30
}

@property(retain, nonatomic) NSMutableArray *tiles; // @synthesize tiles=_tiles;
@property(nonatomic) double southEastLongitude; // @synthesize southEastLongitude=_southEastLongitude;
@property(nonatomic) double southEastLatitude; // @synthesize southEastLatitude=_southEastLatitude;
@property(nonatomic) double northWestLongitude; // @synthesize northWestLongitude=_northWestLongitude;
@property(nonatomic) double northWestLatitude; // @synthesize northWestLatitude=_northWestLatitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010033f7b0
- (unsigned long long)hash;	// IMP=0x000000010033f608
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010033f4d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010033f2ac
- (void)copyTo:(id)arg1;	// IMP=0x000000010033f158
- (void)writeTo:(id)arg1;	// IMP=0x000000010033efa8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010033efa0
- (id)dictionaryRepresentation;	// IMP=0x000000010033e8c0
- (id)description;	// IMP=0x000000010033e840
- (id)tilesAtIndex:(unsigned long long)arg1;	// IMP=0x000000010033e828
- (unsigned long long)tilesCount;	// IMP=0x000000010033e810
- (void)addTiles:(id)arg1;	// IMP=0x000000010033e7a8
- (void)clearTiles;	// IMP=0x000000010033e790
@property(nonatomic) _Bool hasSouthEastLongitude;
@property(nonatomic) _Bool hasSouthEastLatitude;
@property(nonatomic) _Bool hasNorthWestLongitude;
@property(nonatomic) _Bool hasNorthWestLatitude;
- (void)dealloc;	// IMP=0x000000010033e5f0

@end
