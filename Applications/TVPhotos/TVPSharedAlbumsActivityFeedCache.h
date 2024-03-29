//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PHAssetCollection;

@interface TVPSharedAlbumsActivityFeedCache : NSObject
{
    PHAssetCollection *_activityFeedCollection;	// 8 = 0x8
    NSArray *_activityPhotoBatches;	// 16 = 0x10
    NSArray *_sortedMostRecentlyModifiedAssets;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010000f4c4
@property(copy, nonatomic) NSArray *sortedMostRecentlyModifiedAssets; // @synthesize sortedMostRecentlyModifiedAssets=_sortedMostRecentlyModifiedAssets;
@property(copy, nonatomic) NSArray *activityPhotoBatches; // @synthesize activityPhotoBatches=_activityPhotoBatches;
@property(retain, nonatomic) PHAssetCollection *activityFeedCollection; // @synthesize activityFeedCollection=_activityFeedCollection;
- (void).cxx_destruct;	// IMP=0x000000010000f778
- (_Bool)loadCache;	// IMP=0x000000010000f5b4
- (_Bool)hasFeedInfo;	// IMP=0x000000010000f544

@end

