//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPPlaylist.h"

#import "MPRequestResponseControllerDelegate.h"
#import "TVMusicAirplayDetectorDelegate.h"
#import "TVPMusicPlaylistTransitioning.h"

@class MPAVRoute, MPCPlayerResponse, MPCPlayerResponseItem, MPRequestResponseController, NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<TVMusicPlayQueueDelegate>, NSString, TVMusicAirplayDetector;

@interface TVMusicPlayQueue : TVPPlaylist <MPRequestResponseControllerDelegate, TVMusicAirplayDetectorDelegate, TVPMusicPlaylistTransitioning>
{
    _Bool _isNewPlayQueue;	// 8 = 0x8
    _Bool _supportsShuffle;	// 9 = 0x9
    _Bool _supportsRepeat;	// 10 = 0xa
    long long _repeatMode;	// 16 = 0x10
    _Bool _shuffleEnabled;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_invalidationQueue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_invalidationTimer;	// 40 = 0x28
    TVMusicAirplayDetector *_airplayDetector;	// 48 = 0x30
    _Bool _isRadioPlayback;	// 56 = 0x38
    _Bool _isVideoPlayback;	// 57 = 0x39
    _Bool _isAirplayActive;	// 58 = 0x3a
    _Bool _isUpdating;	// 59 = 0x3b
    _Bool _externalEndpointsAvailable;	// 60 = 0x3c
    _Bool _pendingElapsedTimeChange;	// 61 = 0x3d
    _Bool _transitioningPlaylist;	// 62 = 0x3e
    NSObject<TVMusicPlayQueueDelegate> *_delegate;	// 64 = 0x40
    MPCPlayerResponseItem *_lastPlayingItem;	// 72 = 0x48
    NSString *_radioStationName;	// 80 = 0x50
    double _pendingElapsedTime;	// 88 = 0x58
    MPRequestResponseController *_requestResponseController;	// 96 = 0x60
    MPCPlayerResponse *_playerResponse;	// 104 = 0x68
    NSArray *_mediaItems;	// 112 = 0x70
    MPCPlayerResponse *_previousPlayerResponse;	// 120 = 0x78
    CDStruct_fce57115 _durationSnapshot;	// 128 = 0x80
}

+ (CDStruct_912cb5d2)_tracklistRangeForRadioPlayback:(_Bool)arg1;	// IMP=0x0000000100037638
+ (_Bool)_isNewTracklist:(id)arg1 equalToOldTracklist:(id)arg2;	// IMP=0x00000001000371cc
@property(nonatomic, getter=isTransitioningPlaylist) _Bool transitioningPlaylist; // @synthesize transitioningPlaylist=_transitioningPlaylist;
@property(retain, nonatomic) MPCPlayerResponse *previousPlayerResponse; // @synthesize previousPlayerResponse=_previousPlayerResponse;
@property(retain, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) MPCPlayerResponse *playerResponse; // @synthesize playerResponse=_playerResponse;
@property(retain, nonatomic) MPRequestResponseController *requestResponseController; // @synthesize requestResponseController=_requestResponseController;
@property(nonatomic, getter=isPendingElapsedTimeChange) _Bool pendingElapsedTimeChange; // @synthesize pendingElapsedTimeChange=_pendingElapsedTimeChange;
@property(nonatomic) double pendingElapsedTime; // @synthesize pendingElapsedTime=_pendingElapsedTime;
@property _Bool externalEndpointsAvailable; // @synthesize externalEndpointsAvailable=_externalEndpointsAvailable;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) _Bool isAirplayActive; // @synthesize isAirplayActive=_isAirplayActive;
@property(nonatomic) _Bool isVideoPlayback; // @synthesize isVideoPlayback=_isVideoPlayback;
@property(nonatomic) _Bool isRadioPlayback; // @synthesize isRadioPlayback=_isRadioPlayback;
@property(retain, nonatomic) NSString *radioStationName; // @synthesize radioStationName=_radioStationName;
@property(nonatomic) CDStruct_fce57115 durationSnapshot; // @synthesize durationSnapshot=_durationSnapshot;
@property(retain, nonatomic) MPCPlayerResponseItem *lastPlayingItem; // @synthesize lastPlayingItem=_lastPlayingItem;
@property(nonatomic) __weak NSObject<TVMusicPlayQueueDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportsRepeat; // @synthesize supportsRepeat=_supportsRepeat;
@property(nonatomic) _Bool supportsShuffle; // @synthesize supportsShuffle=_supportsShuffle;
- (void).cxx_destruct;	// IMP=0x0000000100037de4
- (void)_activeSystemRouteDidChange:(id)arg1;	// IMP=0x0000000100037b38
- (void)_repeatModeSettingDidChange:(id)arg1;	// IMP=0x0000000100037a04
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x00000001000379f8
- (id)convertPreviousIndexPathToIndexPathForUpdatedPlaylist:(id)arg1;	// IMP=0x0000000100037644
- (_Bool)_isUserSubscribed;	// IMP=0x0000000100037150
- (void)_updatePlayQueue;	// IMP=0x00000001000358f0
- (long long)_repeatModeFromRepeatType:(long long)arg1;	// IMP=0x00000001000358d8
- (long long)_tracklistRepeatMode;	// IMP=0x0000000100035874
- (id)_playEventFromGenericObject:(id)arg1;	// IMP=0x00000001000355e0
- (id)_mediaItemForMPCPlayerResponseItem:(id)arg1 section:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010003511c
- (void)_updateMediaItemsWithTrackList:(id)arg1;	// IMP=0x0000000100034e98
- (void)_performPlayerCommandRequest:(id)arg1 name:(id)arg2;	// IMP=0x0000000100034bf0
- (void)_performPlayerCommand:(long long)arg1 name:(id)arg2;	// IMP=0x0000000100034a6c
- (void)_performInternalPlayerCommand:(long long)arg1;	// IMP=0x0000000100034a2c
- (id)_createGlobalPlayerPathWithRoute:(id)arg1;	// IMP=0x0000000100034950
- (void)_updatePlayerPathWithRoute:(id)arg1;	// IMP=0x0000000100034778
- (void)airplayDetectorAirplayEnded:(id)arg1;	// IMP=0x00000001000344ec
- (void)airplayDetectorAirplayStarted:(id)arg1;	// IMP=0x0000000100034260
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;	// IMP=0x0000000100033f34
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;	// IMP=0x0000000100033d94
- (id)metadataObjectMatchingIdentifierSet:(id)arg1;	// IMP=0x0000000100033a58
@property(readonly, nonatomic) _Bool isMusicAppQueue;
@property(readonly, nonatomic) _Bool isLocalDeviceQueue;
- (void)addToPlayQueueWithPlaybackIntent:(id)arg1 playNext:(_Bool)arg2;	// IMP=0x0000000100033570
- (_Bool)canAddToPlayQueueAtEndWithPlaybackIntent:(id)arg1;	// IMP=0x0000000100033498
- (_Bool)canAddToPlayQueueNextWithPlaybackIntent:(id)arg1;	// IMP=0x00000001000333c0
- (void)clearPlayQueueWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100033080
- (void)replacePlayQueueWithPlaybackIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032be0
- (long long)repeatMode;	// IMP=0x0000000100032bd0
- (void)_setRepeatMode:(long long)arg1;	// IMP=0x0000000100032acc
- (void)_setRepeatType:(long long)arg1;	// IMP=0x0000000100032820
- (void)setRepeatMode:(long long)arg1;	// IMP=0x00000001000327a0
- (_Bool)shuffleEnabled;	// IMP=0x0000000100032790
- (void)_setShuffleEnabled:(_Bool)arg1;	// IMP=0x0000000100032690
- (void)setShuffleEnabled:(_Bool)arg1 preserveCurrentItem:(_Bool)arg2;	// IMP=0x0000000100032450
@property(readonly, nonatomic) MPCPlayerResponse *lastPlayerResponse;
@property(readonly, nonatomic) double currentPlayingDuration;
@property(readonly, nonatomic) double currentPlayingElapsedTime;
- (void)setElapsedTime:(double)arg1;	// IMP=0x00000001000320f4
- (void)changeToItemAtIndex:(long long)arg1;	// IMP=0x0000000100031dbc
- (void)changeToPreviousItem;	// IMP=0x0000000100031d20
- (void)changeToNextItem;	// IMP=0x0000000100031c84
- (void)rewind;	// IMP=0x0000000100031bdc
- (void)fastForward;	// IMP=0x0000000100031b34
- (void)stop;	// IMP=0x0000000100031b1c
- (void)pause;	// IMP=0x0000000100031b04
- (void)play;	// IMP=0x0000000100031a00
- (id)responseTrackList;	// IMP=0x00000001000319ac
@property(readonly, nonatomic) long long playerState;
@property(readonly, nonatomic) MPCPlayerResponseItem *currentPlayingItem;
- (void)stopUpdating;	// IMP=0x00000001000317bc
- (void)startUpdating;	// IMP=0x0000000100031744
- (void)updatePlayerPath;	// IMP=0x00000001000316c8
- (void)moveItemAtIndexToPlayNext:(long long)arg1;	// IMP=0x0000000100031400
- (_Bool)canMoveItemAtIndexToPlayNext:(long long)arg1;	// IMP=0x0000000100031290
@property(retain, nonatomic) MPAVRoute *audioRoute;
@property(readonly, nonatomic) NSString *audioRouteName;
- (_Bool)isMediaItem:(id)arg1 matchingResponseItem:(id)arg2;	// IMP=0x0000000100031044
- (id)currentMediaItem;	// IMP=0x0000000100030f38
- (unsigned long long)activeListIndex;	// IMP=0x0000000100030e9c
- (unsigned long long)count;	// IMP=0x0000000100030e50
- (id)trackList;	// IMP=0x0000000100030e44
- (id)activeList;	// IMP=0x0000000100030e38
- (void)dealloc;	// IMP=0x0000000100030dc0
- (id)initWithMediaItems:(id)arg1 index:(long long)arg2 isCollection:(_Bool)arg3;	// IMP=0x00000001000300f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

