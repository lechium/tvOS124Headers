//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLMapDataSourceBase.h"

@interface CLBuildingDataSource : CLMapDataSourceBase
{
}

+ (id)sharedDataSource;	// IMP=0x00000001006ea57c
- (id)buildingsWithinDistance:(double)arg1 ofCoordinate:(CDStruct_2c43369c)arg2 status:(int *)arg3;	// IMP=0x00000001006ea82c
@property(readonly, nonatomic) int mapMatchingTileSetStyle;
@property(readonly, nonatomic) long long mapMatchingZoomLevel;
- (id)initWithTileSetStyle:(int)arg1 zoomLevel:(long long)arg2;	// IMP=0x00000001006ea3fc

@end
