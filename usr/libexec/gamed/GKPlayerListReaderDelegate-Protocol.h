//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GKDataTransport, GKDatabaseConnection, NSSet, NSString;
@protocol GKDataReader, GKDataWriter;

@protocol GKPlayerListReaderDelegate <NSObject>
- (int)familiarityForProfileLoadWithRelativePlayer:(NSString *)arg1;
- (NSSet *)mergeNetworkLoadedProfileResources:(NSSet *)arg1 withSparseListResources:(NSSet *)arg2;
- (id <GKDataWriter>)listCacheWriterWithLanguage:(NSString *)arg1 connection:(GKDatabaseConnection *)arg2;
- (id <GKDataReader>)listNetworkReaderWithTransport:(GKDataTransport *)arg1 cachedListResponse:(NSSet *)arg2;
- (id <GKDataReader>)listCacheReaderWithLanguage:(NSString *)arg1 connection:(GKDatabaseConnection *)arg2;

@optional
- (NSString *)localPlayerForLoadingProfileRelativeToPlayer:(NSString *)arg1;
@end

