//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTVEpisodeSplitViewController.h"

@class MTUuidQueryObserver;

@interface MTTVListenNowViewController : MTTVEpisodeSplitViewController
{
    MTUuidQueryObserver *_podcastsObserver;	// 8 = 0x8
    unsigned long long _podcastState;	// 16 = 0x10
}

@property(nonatomic) unsigned long long podcastState; // @synthesize podcastState=_podcastState;
@property(retain, nonatomic) MTUuidQueryObserver *podcastsObserver; // @synthesize podcastsObserver=_podcastsObserver;
- (void).cxx_destruct;	// IMP=0x00000001000506a4
- (id)emptyContentViewControllerForCurrentPodcastState;	// IMP=0x0000000100050630
- (void)startObserveringPodcasts;	// IMP=0x0000000100050374
- (void)viewDidLoad;	// IMP=0x00000001000502b8
- (id)init;	// IMP=0x0000000100050228

@end

