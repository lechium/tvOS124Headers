//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTRecencyUtil : NSObject
{
}

+ (id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 uuidsToExclude:(id)arg3 watchedAtTheEnd:(_Bool)arg4;	// IMP=0x00000001000bff40
+ (id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 uuidsToExclude:(id)arg3;	// IMP=0x00000001000bfed0
+ (id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001000bfec0
+ (id)recentlyPlayedPodcastsWithContext:(id)arg1;	// IMP=0x00000001000bfeb0
+ (id)episodesForListenNowWithContext:(id)arg1 limit:(long long)arg2;	// IMP=0x00000001000bfce0
+ (id)episodeToResumeWithContext:(id)arg1;	// IMP=0x00000001000bfae0
+ (id)nextEpisodeForEpisodicPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ctx:(id)arg4;	// IMP=0x00000001000bf524
+ (id)nextEpisodeForEpisodicPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3;	// IMP=0x00000001000bf4b4
+ (id)nextEpisodeForSerialPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ctx:(id)arg4;	// IMP=0x00000001000bf134
+ (id)nextEpisodeForSerialPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3;	// IMP=0x00000001000bf0c4
+ (id)nextEpisodeToPlayForPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ctx:(id)arg4;	// IMP=0x00000001000bee18
+ (id)nextEpisodeToPlayForPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3;	// IMP=0x00000001000beda8
+ (id)nextEpisodeToPlayForPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x00000001000bed40

@end

