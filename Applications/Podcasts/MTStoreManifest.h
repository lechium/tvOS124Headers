//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTItemListManifest.h"

@class NSArray, NSNumber;

@interface MTStoreManifest : MTItemListManifest
{
    _Bool _playerItemsNeedLoading;	// 8 = 0x8
    _Bool _initiatedByAnotherUser;	// 9 = 0x9
    unsigned long long _loadStatus;	// 16 = 0x10
    long long _playbackOrder;	// 24 = 0x18
    NSArray *_episodeAdamIds;	// 32 = 0x20
    NSNumber *_podcastAdamId;	// 40 = 0x28
    double _initialPlayheadPosition;	// 48 = 0x30
    unsigned long long _initialIndex;	// 56 = 0x38
}

+ (void)fetchPlayerItemsForStoreTrackIDs:(id)arg1 initiatedByAnotherUser:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003e950
+ (void)fetchPlayerItemsForStoreTrackIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e8fc
+ (id)storeMediaDictionariesToPlayerItems:(id)arg1 initiatedByAnotherUser:(_Bool)arg2;	// IMP=0x000000010003db2c
+ (id)storeMediaDictionariesToPlayerItems:(id)arg1;	// IMP=0x000000010003db1c
+ (id)_episodeStorePlatformDictionaryFromSiriAssetInfo:(id)arg1 episodeAdamId:(id)arg2;	// IMP=0x000000010003d9bc
+ (id)podcastStorePlatformDictionaryFromSiriAssetInfo:(id)arg1 podcastAdamId:(id)arg2;	// IMP=0x000000010003d6a8
+ (id)playerItemsFromPodcastStorePlatformDictionary:(id)arg1 oldestEpisode:(_Bool)arg2 restricted:(out _Bool *)arg3 initiatedByAnotherUser:(_Bool)arg4;	// IMP=0x000000010003d3d8
+ (id)activityTypeSuffix;	// IMP=0x000000010003d3a4
+ (id)createManifestForActivity:(id)arg1;	// IMP=0x000000010003d208
@property(nonatomic) _Bool initiatedByAnotherUser; // @synthesize initiatedByAnotherUser=_initiatedByAnotherUser;
@property(nonatomic) _Bool playerItemsNeedLoading; // @synthesize playerItemsNeedLoading=_playerItemsNeedLoading;
@property(nonatomic) unsigned long long initialIndex; // @synthesize initialIndex=_initialIndex;
@property(nonatomic) double initialPlayheadPosition; // @synthesize initialPlayheadPosition=_initialPlayheadPosition;
@property(retain, nonatomic) NSNumber *podcastAdamId; // @synthesize podcastAdamId=_podcastAdamId;
@property(retain, nonatomic) NSArray *episodeAdamIds; // @synthesize episodeAdamIds=_episodeAdamIds;
@property(nonatomic) long long playbackOrder; // @synthesize playbackOrder=_playbackOrder;
@property(nonatomic) unsigned long long loadStatus; // @synthesize loadStatus=_loadStatus;
- (void).cxx_destruct;	// IMP=0x000000010003ef4c
- (_Bool)userActivityContainsPlayhead;	// IMP=0x000000010003d3d0
- (id)activity;	// IMP=0x000000010003d114
- (void)_loadItemsFromEpisodeAdamIdsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010003cbd8
- (void)_updateLoadStatus:(_Bool)arg1;	// IMP=0x000000010003cb28
- (id)initWithItems:(id)arg1 initialIndex:(unsigned long long)arg2;	// IMP=0x000000010003c81c
- (id)initWithItems:(id)arg1;	// IMP=0x000000010003c80c
- (id)initWithStoreMediaDictionaries:(id)arg1 initialIndex:(unsigned long long)arg2;	// IMP=0x000000010003c778
- (void)load:(CDUnknownBlockType)arg1;	// IMP=0x000000010003be08
- (id)_initWithPodcastStorePlatformDictionary:(id)arg1 oldestEpisode:(_Bool)arg2;	// IMP=0x000000010003bd30
- (id)_initWithEpisodeAdamIds:(id)arg1 playheadPosition:(double)arg2 initialIndex:(unsigned long long)arg3;	// IMP=0x000000010003bc68
- (id)initWithPodcastAdamId:(id)arg1 siriAssetInfo:(id)arg2 oldestEpisode:(_Bool)arg3 initiatedByAnotherUser:(_Bool)arg4;	// IMP=0x000000010003bb18
- (id)initWithEpisodeAdamId:(id)arg1 siriAssetInfo:(id)arg2 initialIndex:(unsigned long long)arg3 initiatedByAnotherUser:(_Bool)arg4;	// IMP=0x000000010003b8a8
- (id)initWithEpisodeAdamIds:(id)arg1 initialIndex:(unsigned long long)arg2;	// IMP=0x000000010003b898

@end

