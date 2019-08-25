//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseFeedManager.h"

@class NSMutableDictionary;

@interface MTSubscriptionManager : MTBaseFeedManager
{
    unsigned long long _maxSubscribeDownloadForSerialWithSeasons;	// 8 = 0x8
    NSMutableDictionary *_feedUrlsToParams;	// 16 = 0x10
}

+ (_Bool)isSubscribing;	// IMP=0x00000001000f7edc
@property(readonly, nonatomic) NSMutableDictionary *feedUrlsToParams; // @synthesize feedUrlsToParams=_feedUrlsToParams;
@property(readonly, nonatomic) unsigned long long maxSubscribeDownloadForSerialWithSeasons; // @synthesize maxSubscribeDownloadForSerialWithSeasons=_maxSubscribeDownloadForSerialWithSeasons;
- (void).cxx_destruct;	// IMP=0x00000001000f7f04
- (void)showSubscriptionFailureDialog:(id)arg1;	// IMP=0x00000001000f7c84
- (void)removeSubscribeParamsForFeedUrl:(id)arg1;	// IMP=0x00000001000f7bd4
- (void)addSubscribeParams:(id)arg1 forFeedUrl:(id)arg2;	// IMP=0x00000001000f7b00
- (id)subscribeParamsForFeedUrl:(id)arg1;	// IMP=0x00000001000f7a3c
- (void)subscribeToPodcastWithParams:(id)arg1;	// IMP=0x00000001000f7734
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x00000001000f748c
- (_Bool)_addEpisode:(id)arg1 toMyEpisodesInPodcast:(id)arg2 persist:(_Bool)arg3;	// IMP=0x00000001000f725c
- (_Bool)_addNewestEpisodeToPodcast:(id)arg1;	// IMP=0x00000001000f70a4
- (_Bool)_addLatestSeasonForSerialWithNoSeasonsPodcast:(id)arg1;	// IMP=0x00000001000f6d34
- (_Bool)_addLatestSeasonForSerialWithSeasonsPodcast:(id)arg1;	// IMP=0x00000001000f6b4c
- (_Bool)_addLatestSeasonToPodcast:(id)arg1;	// IMP=0x00000001000f6978
- (_Bool)processFeedWithData:(id)arg1 requestUrl:(id)arg2 useBackgroundFetch:(_Bool)arg3;	// IMP=0x00000001000f5d68
- (id)init;	// IMP=0x00000001000f5cd8

@end

