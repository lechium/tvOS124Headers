//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileKeyList, NSMutableArray;

@interface CLMapDataSourceBase : NSObject
{
    _Bool _debug;	// 8 = 0x8
    NSMutableArray *_cacheHints;	// 16 = 0x10
    NSMutableArray *_cache;	// 24 = 0x18
    GEOTileKeyList *_pending;	// 32 = 0x20
    _Bool _allowsNetworkUsage;	// 40 = 0x28
    int _tileSetStyle;	// 44 = 0x2c
    long long _zoomLevel;	// 48 = 0x30
}

@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) int tileSetStyle; // @synthesize tileSetStyle=_tileSetStyle;
@property(nonatomic) _Bool allowsNetworkUsage; // @synthesize allowsNetworkUsage=_allowsNetworkUsage;
- (id)tileForKey:(struct _GEOTileKey *)arg1;	// IMP=0x00000001006e8d9c
- (void)updateTileCache;	// IMP=0x00000001006e8988
- (void)clearTileCache;	// IMP=0x00000001006e895c
- (void)downloadTilesForKeys:(id)arg1;	// IMP=0x00000001006e7d58
- (void)openConnections;	// IMP=0x00000001006e7c54
- (void)closeConnections;	// IMP=0x00000001006e7b50
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001006e7a38
- (void)removeAllCacheHints;	// IMP=0x00000001006e78a8
- (void)removeCacheHint:(id)arg1;	// IMP=0x00000001006e77dc
- (void)addCacheHint:(id)arg1;	// IMP=0x00000001006e76f4
- (void)dealloc;	// IMP=0x00000001006e7670
- (id)initWithTileSetStyle:(int)arg1 zoomLevel:(long long)arg2;	// IMP=0x00000001006e7494

@end

