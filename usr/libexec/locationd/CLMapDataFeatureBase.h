//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLMapDataSourceBase, GEOVectorTile, NSString;

@interface CLMapDataFeatureBase : NSObject
{
    CDStruct_c707fdd0 *_feature;	// 8 = 0x8
    GEOVectorTile *_tile;	// 16 = 0x10
    unsigned long long _mapMatcherFeatureKey;	// 24 = 0x18
    CLMapDataSourceBase *_dataSource;	// 32 = 0x20
    struct CLDistanceCalc _distCalc;	// 40 = 0x28
    _Bool _debug;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x0000000100788d6c
- (float)_distanceBetweenTilePointsInTile:(id)arg1 fromPoint:(CDStruct_b2fbf00d)arg2 toPoint:(CDStruct_b2fbf00d)arg3;	// IMP=0x0000000100788cb4
@property(readonly, nonatomic) _Bool debug;
@property(readonly, nonatomic) NSString *description;
@property(readonly, nonatomic) CDStruct_c707fdd0 *feature;
@property(readonly, nonatomic) GEOVectorTile *tile;
@property(readonly, nonatomic) unsigned long long sectionCount;
@property(readonly, nonatomic) char *name;
@property(readonly, nonatomic) unsigned long long uniqueIdentifier;
- (void)dealloc;	// IMP=0x0000000100788b30
- (id)initWithFeature:(CDStruct_c707fdd0 *)arg1 inTile:(id)arg2 fromDataSource:(id)arg3;	// IMP=0x0000000100788a28

@end
