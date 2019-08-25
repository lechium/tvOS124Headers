//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPodcastAndEpisodeProcessor.h"

@class NSArray, NSMutableDictionary;

@interface MTPodcastDerivedPropertyObserver : MTPodcastAndEpisodeProcessor
{
    NSMutableDictionary *_cache;	// 8 = 0x8
    NSMutableDictionary *_handlers;	// 16 = 0x10
    NSMutableDictionary *_podcastCache;	// 24 = 0x18
    NSArray *_podcastDependencies;	// 32 = 0x20
    NSArray *_episodePropertiesToFetch;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray *episodePropertiesToFetch; // @synthesize episodePropertiesToFetch=_episodePropertiesToFetch;
@property(retain, nonatomic) NSArray *podcastDependencies; // @synthesize podcastDependencies=_podcastDependencies;
@property(retain, nonatomic) NSMutableDictionary *podcastCache; // @synthesize podcastCache=_podcastCache;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;	// IMP=0x00000001000e745c
- (void)_updateWithNotification:(id)arg1;	// IMP=0x00000001000e72b4
- (void)removeDerivedPropertyChangeHandler:(id)arg1;	// IMP=0x00000001000e721c
- (id)addDerivedPropertyChangeHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e713c
- (void)notifyObserversForPodcast:(id)arg1;	// IMP=0x00000001000e6ef8
- (id)countOfUserEpisodesForEpisodes:(id)arg1 andPredicateForUserEpisodes:(id)arg2;	// IMP=0x00000001000e6e28
- (id)countOfFeedEpisodesForEpisodes:(id)arg1;	// IMP=0x00000001000e6d48
- (id)countOfSavedEpisodesForEpisodes:(id)arg1;	// IMP=0x00000001000e6c68
- (id)countOfAudioEpisodesForEpisodes:(id)arg1;	// IMP=0x00000001000e6b88
- (id)countOfMyMediaEpisodesForEpisodes:(id)arg1 andPredicateForMyEpisodes:(id)arg2;	// IMP=0x00000001000e6a64
- (id)countOfUnplayedMediaEpisodesForEpisodes:(id)arg1 andPredicateForEpisodesOnUnplayedTab:(id)arg2;	// IMP=0x00000001000e68e8
- (id)countOfUnplayedEpisodesForEpisodes:(id)arg1 andPredicateForEpisodesOnUnplayedTab:(id)arg2;	// IMP=0x00000001000e67c4
- (id)countOfNewEpisodesForEpisodes:(id)arg1;	// IMP=0x00000001000e66e4
- (id)uuidOfNewestEpisodeForEpisodes:(id)arg1;	// IMP=0x00000001000e664c
- (id)dateOfNewestEpisodeForEpisodes:(id)arg1;	// IMP=0x00000001000e65b4
- (void)setDependentPropertyValue:(id)arg1 forKey:(id)arg2 forPodcastUuid:(id)arg3;	// IMP=0x00000001000e64b4
- (id)dependentPropertyForKey:(id)arg1 forPodcastUuid:(id)arg2;	// IMP=0x00000001000e6424
- (_Bool)setDerivedPropertyValue:(id)arg1 forKey:(id)arg2 forPodcast:(id)arg3;	// IMP=0x00000001000e62cc
- (id)derivedPropertyValueForKey:(id)arg1 forPodcast:(id)arg2;	// IMP=0x00000001000e61e8
- (id)derivedPropertiesForPodcast:(id)arg1;	// IMP=0x00000001000e6104
- (id)countOfMyMediaEpisodesForPodcast:(id)arg1;	// IMP=0x00000001000e60ec
- (id)countOfUnplayedEpisodesForPodcast:(id)arg1;	// IMP=0x00000001000e60d4
- (id)countOfNewEpisodesForPodcast:(id)arg1;	// IMP=0x00000001000e60bc
- (id)_predicateForEpisodesToUpdateWithPodcastUuid:(id)arg1 predicateForUnplayedInUnplayedTab:(id)arg2 predicateForUserEpisodes:(id)arg3 predicateForListenNowEpisode:(id)arg4;	// IMP=0x00000001000e5c18
- (void)updateFlagForEpisodes:(id)arg1 predicateForUnplayedTab:(id)arg2 predicateForUserEpisodes:(id)arg3 podcastUuid:(id)arg4 ctx:(id)arg5;	// IMP=0x00000001000e5250
- (void)episodeResultsChangedForPodcastUuid:(id)arg1;	// IMP=0x00000001000e4d50
- (id)createEpisodeObserverForPodcastUuid:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x00000001000e4ba4
- (id)episodeSortDescriptorsForPodcast:(id)arg1;	// IMP=0x00000001000e4a40
- (id)episodePredicateForPodcast:(id)arg1;	// IMP=0x00000001000e4a2c
- (id)podcastPredicate;	// IMP=0x00000001000e4a18
- (void)reportStatsForPodcasts:(id)arg1;	// IMP=0x00000001000e4460
- (id)createQueryObserver;	// IMP=0x00000001000e3fb8
- (void)updateEpisodePredicateForChangedResults:(id)arg1;	// IMP=0x00000001000e3860
- (id)init;	// IMP=0x00000001000e35e8

@end
