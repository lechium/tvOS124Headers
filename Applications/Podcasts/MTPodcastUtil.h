//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTPodcastUtil : NSObject
{
}

+ (unsigned long long)countOfUnplayedEpisodesForPodcastUuid:(id)arg1;	// IMP=0x00000001000b6f14
+ (id)episodeTitlesForPredicate:(id)arg1;	// IMP=0x00000001000b6d2c
+ (unsigned long long)episodeCountForPredicate:(id)arg1;	// IMP=0x00000001000b6b98
+ (id)stringForATVFeedLastChangedForDate:(id)arg1;	// IMP=0x00000001000b6964
+ (id)stringForATVFeedLastChangedForPodcast:(id)arg1;	// IMP=0x00000001000b68f0
+ (id)stringForEpisodesInFeedCount:(long long)arg1;	// IMP=0x00000001000b674c
+ (id)stringForNewEpisodeCount:(long long)arg1 titleCase:(_Bool)arg2;	// IMP=0x00000001000b64d8
+ (id)stringForNewEpisodeCount:(long long)arg1;	// IMP=0x00000001000b64c8
+ (id)stringForUnplayedEpisodeCount:(unsigned long long)arg1 withSavedEpisodeCount:(unsigned long long)arg2;	// IMP=0x00000001000b6294
+ (id)stringForSavedEpisodeCount:(long long)arg1;	// IMP=0x00000001000b60f0
+ (id)stringForUnplayedEpisodeCount:(long long)arg1 titleCase:(_Bool)arg2;	// IMP=0x00000001000b5e7c
+ (id)stringForUnplayedEpisodeCount:(long long)arg1;	// IMP=0x00000001000b5e6c
+ (id)stringForMostRecentEpisodeCount:(long long)arg1;	// IMP=0x00000001000b5d2c
+ (id)stringForEpisodeCount:(long long)arg1;	// IMP=0x00000001000b5b88

@end
