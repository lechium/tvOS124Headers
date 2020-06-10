//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray, NSString;

@interface ALSLocationRequest : PBRequest
{
    NSString *_appBundleId;	// 8 = 0x8
    NSMutableArray *_cdmaCellTowers;	// 16 = 0x10
    NSMutableArray *_cdmaEvdoTowers;	// 24 = 0x18
    NSMutableArray *_cellTowers;	// 32 = 0x20
    NSMutableArray *_lteCellTowers;	// 40 = 0x28
    int _numberOfSurroundingCdmaCells;	// 48 = 0x30
    int _numberOfSurroundingCdmaEvdoCells;	// 52 = 0x34
    int _numberOfSurroundingCells;	// 56 = 0x38
    int _numberOfSurroundingLteCells;	// 60 = 0x3c
    int _numberOfSurroundingScdmaCells;	// 64 = 0x40
    int _numberOfSurroundingWifis;	// 68 = 0x44
    NSMutableArray *_scdmaCellTowers;	// 72 = 0x48
    NSMutableArray *_wirelessAPs;	// 80 = 0x50
    struct {
        unsigned int numberOfSurroundingCdmaCells:1;
        unsigned int numberOfSurroundingCdmaEvdoCells:1;
        unsigned int numberOfSurroundingCells:1;
        unsigned int numberOfSurroundingLteCells:1;
        unsigned int numberOfSurroundingScdmaCells:1;
        unsigned int numberOfSurroundingWifis:1;
    } _has;	// 88 = 0x58
}

@property(nonatomic) int numberOfSurroundingScdmaCells; // @synthesize numberOfSurroundingScdmaCells=_numberOfSurroundingScdmaCells;
@property(retain, nonatomic) NSMutableArray *scdmaCellTowers; // @synthesize scdmaCellTowers=_scdmaCellTowers;
@property(nonatomic) int numberOfSurroundingLteCells; // @synthesize numberOfSurroundingLteCells=_numberOfSurroundingLteCells;
@property(retain, nonatomic) NSMutableArray *lteCellTowers; // @synthesize lteCellTowers=_lteCellTowers;
@property(nonatomic) int numberOfSurroundingCdmaEvdoCells; // @synthesize numberOfSurroundingCdmaEvdoCells=_numberOfSurroundingCdmaEvdoCells;
@property(nonatomic) int numberOfSurroundingCdmaCells; // @synthesize numberOfSurroundingCdmaCells=_numberOfSurroundingCdmaCells;
@property(retain, nonatomic) NSMutableArray *cdmaEvdoTowers; // @synthesize cdmaEvdoTowers=_cdmaEvdoTowers;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowers; // @synthesize cdmaCellTowers=_cdmaCellTowers;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(nonatomic) int numberOfSurroundingWifis; // @synthesize numberOfSurroundingWifis=_numberOfSurroundingWifis;
@property(nonatomic) int numberOfSurroundingCells; // @synthesize numberOfSurroundingCells=_numberOfSurroundingCells;
@property(retain, nonatomic) NSMutableArray *wirelessAPs; // @synthesize wirelessAPs=_wirelessAPs;
@property(retain, nonatomic) NSMutableArray *cellTowers; // @synthesize cellTowers=_cellTowers;
- (unsigned long long)hash;	// IMP=0x00000001005fdde4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001005fdb24
- (void)copyTo:(id)arg1;	// IMP=0x00000001005fd678
- (Class)responseClass;	// IMP=0x00000001005fd664
- (unsigned int)requestTypeCode;	// IMP=0x00000001005fd65c
- (void)writeTo:(id)arg1;	// IMP=0x00000001005fce00
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001005fcdf8
- (id)dictionaryRepresentation;	// IMP=0x00000001005fbab8
- (id)description;	// IMP=0x00000001005fba38
@property(nonatomic) _Bool hasNumberOfSurroundingScdmaCells;
- (id)scdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00000001005fb9cc
- (unsigned long long)scdmaCellTowersCount;	// IMP=0x00000001005fb9b4
- (void)addScdmaCellTower:(id)arg1;	// IMP=0x00000001005fb94c
- (void)clearScdmaCellTowers;	// IMP=0x00000001005fb934
@property(nonatomic) _Bool hasNumberOfSurroundingLteCells;
- (id)lteCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00000001005fb8c8
- (unsigned long long)lteCellTowersCount;	// IMP=0x00000001005fb8b0
- (void)addLteCellTower:(id)arg1;	// IMP=0x00000001005fb848
- (void)clearLteCellTowers;	// IMP=0x00000001005fb830
@property(nonatomic) _Bool hasNumberOfSurroundingCdmaEvdoCells;
@property(nonatomic) _Bool hasNumberOfSurroundingCdmaCells;
- (id)cdmaEvdoTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00000001005fb770
- (unsigned long long)cdmaEvdoTowersCount;	// IMP=0x00000001005fb758
- (void)addCdmaEvdoTower:(id)arg1;	// IMP=0x00000001005fb6f0
- (void)clearCdmaEvdoTowers;	// IMP=0x00000001005fb6d8
- (id)cdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00000001005fb6c0
- (unsigned long long)cdmaCellTowersCount;	// IMP=0x00000001005fb6a8
- (void)addCdmaCellTower:(id)arg1;	// IMP=0x00000001005fb640
- (void)clearCdmaCellTowers;	// IMP=0x00000001005fb628
@property(readonly, nonatomic) _Bool hasAppBundleId;
@property(nonatomic) _Bool hasNumberOfSurroundingWifis;
@property(nonatomic) _Bool hasNumberOfSurroundingCells;
- (id)wirelessAPAtIndex:(unsigned long long)arg1;	// IMP=0x00000001005fb550
- (unsigned long long)wirelessAPsCount;	// IMP=0x00000001005fb538
- (void)addWirelessAP:(id)arg1;	// IMP=0x00000001005fb4d0
- (void)clearWirelessAPs;	// IMP=0x00000001005fb4b8
- (id)cellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00000001005fb4a0
- (unsigned long long)cellTowersCount;	// IMP=0x00000001005fb488
- (void)addCellTower:(id)arg1;	// IMP=0x00000001005fb420
- (void)clearCellTowers;	// IMP=0x00000001005fb408
- (void)dealloc;	// IMP=0x00000001005fb340

@end
