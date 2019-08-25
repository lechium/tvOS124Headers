//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

#import "MTPlaybackIdentifierComposing.h"

@interface MTPlaybackIdentifierUtil : MTSingleton <MTPlaybackIdentifierComposing>
{
}

- (long long)_episodeContextSortFromString:(id)arg1;	// IMP=0x00000001000bdfa8
- (long long)_episodeContextFromString:(id)arg1;	// IMP=0x00000001000bdf54
- (unsigned long long)_playReasonFromString:(id)arg1;	// IMP=0x00000001000bdf00
- (long long)_episodeOrderFromString:(id)arg1;	// IMP=0x00000001000bde84
- (id)_playbackRequestIdentifierWithHost:(id)arg1 queryComponents:(id)arg2;	// IMP=0x00000001000bdbf4
- (id)_playbackRequestIdentifierWithHost:(id)arg1 queryKey:(id)arg2 value:(id)arg3;	// IMP=0x00000001000bdae0
- (unsigned long long)_playQueueTypeForRequestURL:(id)arg1;	// IMP=0x00000001000bd8a4
- (id)requestIdentifierForPlayerItem:(id)arg1;	// IMP=0x00000001000bd3d8
- (void)fetchPlayerItemsForPlaybackQueueRequestIdentifiers:(id)arg1 initiatedByAnotherUser:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bc908
- (void)fetchPlayerItemsForPlaybackQueueRequestIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bc8b4
- (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForPlayerItem:(id)arg1;	// IMP=0x00000001000bc7c4
- (id)requestIdentifiersForManifest:(id)arg1 queueStatus:(out unsigned long long *)arg2;	// IMP=0x00000001000bc128
- (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForManifest:(id)arg1 queueStatus:(out unsigned long long *)arg2;	// IMP=0x00000001000bc0d0
- (id)podcastUuidForSetPlaybackQueueRequestIdentifier:(id)arg1;	// IMP=0x00000001000bbbd4
- (id)episodeUuidForSetPlaybackQueueRequestIdentifier:(id)arg1;	// IMP=0x00000001000bb88c
- (struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForIdentifiers:(id)arg1;	// IMP=0x00000001000bb7cc
- (id)universalPlaybackQueueRequestIdentifierForEpisode:(id)arg1;	// IMP=0x00000001000bb384
- (id)universalPlaybackQueueIdentifiersForStationUuid:(id)arg1 limit:(long long)arg2 queueStatus:(out unsigned long long *)arg3;	// IMP=0x00000001000baf64
- (id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 podcastFeedUrl:(id)arg5;	// IMP=0x00000001000bad3c
- (id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeGuid:(id)arg2 episodeStoreId:(long long)arg3 podcastFeedUrl:(id)arg4;	// IMP=0x00000001000baca8
- (id)localPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2;	// IMP=0x00000001000bac38
- (id)localPlaybackQueueIdentifierForStationUuid:(id)arg1;	// IMP=0x00000001000bac28
- (id)playbackQueueIdentifierForPodcastAdamId:(id)arg1 sampPlaybackOrder:(id)arg2;	// IMP=0x00000001000bab14
- (id)universalPlaybackQueueIdentifiersForPodcastUuid:(id)arg1 playbackOrder:(long long)arg2 limit:(long long)arg3 queueStatus:(out unsigned long long *)arg4;	// IMP=0x00000001000ba6f4
- (id)universalPlaybackQueueIdentifiersForPodcastUuid:(id)arg1 sampPlaybackOrder:(id)arg2 limit:(long long)arg3 queueStatus:(out unsigned long long *)arg4;	// IMP=0x00000001000ba664
- (id)_universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 context:(long long)arg7 contextSortType:(long long)arg8 sampPlaybackOrder:(id)arg9;	// IMP=0x00000001000ba0e8
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 context:(long long)arg7 contextSortType:(long long)arg8;	// IMP=0x00000001000ba004
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 sampPlaybackOrder:(id)arg7;	// IMP=0x00000001000b9f18
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6;	// IMP=0x00000001000b9e44
- (id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3;	// IMP=0x00000001000b9db4
- (id)universalPlaybackQueueIdentifierForPodcastFeedUrl:(id)arg1 podcastStoreId:(long long)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 sampPlaybackOrder:(id)arg5;	// IMP=0x00000001000b9d0c
- (id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 episodeUuid:(id)arg2 sampPlaybackOrder:(id)arg3;	// IMP=0x00000001000b9c28
- (id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 sampPlaybackOrder:(id)arg2;	// IMP=0x00000001000b9bc0
- (id)playbackQueueIdentifierForEpisodeAdamId:(id)arg1;	// IMP=0x00000001000b9ba0
- (id)playbackQueueIdentifierForPlayMyPodcastsWithPlaybackOrder:(id)arg1;	// IMP=0x00000001000b9b80
- (_Bool)isUniversalPlaybackIdentifierURLString:(id)arg1;	// IMP=0x00000001000b9afc
- (_Bool)isSubscribeCommandURLString:(id)arg1;	// IMP=0x00000001000b9a78
- (_Bool)isLocalSetPlaybackQueueURLString:(id)arg1;	// IMP=0x00000001000b990c
- (id)playbackRequestURLWithPlayReason:(unsigned long long)arg1 baseRequestURLString:(id)arg2;	// IMP=0x00000001000b966c

@end
