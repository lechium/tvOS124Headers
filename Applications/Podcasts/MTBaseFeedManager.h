//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTURLSessionManager.h"

@class NSObject<OS_dispatch_queue>;

@interface MTBaseFeedManager : MTURLSessionManager
{
    long long _oncePerInstanceToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_feedProcessingQueue;	// 24 = 0x18
}

+ (void)standardDeviationForEpisodes:(id)arg1 standardDeviation:(double *)arg2 average:(double *)arg3;	// IMP=0x00000001001335c8
+ (void)postNotificationName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100133494
+ (void)didFinishUpdatingAllFeeds:(_Bool)arg1;	// IMP=0x0000000100133360
+ (void)didFinishUpdatingFeedUrl:(id)arg1;	// IMP=0x00000001001330f8
+ (void)didStartUpdatingFeedUrl:(id)arg1 cloudSyncUrl:(id)arg2;	// IMP=0x0000000100132f5c
+ (id)_metadataUrl;	// IMP=0x0000000100132ef8
+ (_Bool)isSubscribing;	// IMP=0x0000000100132ef0
+ (void)saveSubscriptionMetadata;	// IMP=0x0000000100132d90
+ (void)removeMetadataForPodcastUuid:(id)arg1;	// IMP=0x0000000100132d0c
+ (unsigned long long)updatingCount;	// IMP=0x0000000100132894
+ (_Bool)isUpdatingFeedUrl:(id)arg1;	// IMP=0x00000001001327f0
+ (_Bool)isUpdatingPodcastUuid:(id)arg1;	// IMP=0x0000000100132520
+ (void)initialize;	// IMP=0x000000010012e218
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *feedProcessingQueue; // @synthesize feedProcessingQueue=_feedProcessingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;	// IMP=0x0000000100133908
- (void)startDownloadForFeedUrl:(id)arg1 cloudSyncFeedUrl:(id)arg2 userInitiated:(_Bool)arg3 useBackgroundFetch:(_Bool)arg4;	// IMP=0x00000001001329f0
- (_Bool)abortUpdatesIfNetworkUnreachable:(_Bool)arg1;	// IMP=0x0000000100132900
- (_Bool)updatePodcastWithUuid:(id)arg1 withFeed:(id)arg2;	// IMP=0x0000000100130ab8
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x0000000100130278
- (_Bool)processFeedWithData:(id)arg1 requestUrl:(id)arg2 useBackgroundFetch:(_Bool)arg3;	// IMP=0x000000010012f548
- (void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2;	// IMP=0x000000010012e9c8
- (void)_removeTempFiles;	// IMP=0x000000010012e5e0
- (void)_enqueueTempFilesDeletion;	// IMP=0x000000010012e564
- (id)init;	// IMP=0x000000010012e3c4
- (void)configureSession:(id)arg1;	// IMP=0x000000010012e35c

@end

