//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSBulletinServiceDelegate.h"

@class NSNumber, NSString, PBBulletinService, PBSBulletin;

@interface PBMediaRemoteObserver : NSObject <PBSBulletinServiceDelegate>
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    NSNumber *_lastNotificationPID;	// 16 = 0x10
    _Bool _metadataUpdateRunning;	// 24 = 0x18
    _Bool _playing;	// 25 = 0x19
    _Bool _playingMusic;	// 26 = 0x1a
    _Bool _isMusicAppPlaying;	// 27 = 0x1b
    _Bool _isPodcastsAppPlaying;	// 28 = 0x1c
    int _nowPlayingProcessPID;	// 32 = 0x20
    NSNumber *_playbackRate;	// 40 = 0x28
    PBSBulletin *_currentBulletin;	// 48 = 0x30
    id <PBMediaRemoteObserverDelegate> _delegate;	// 56 = 0x38
    NSNumber *_trackIdentifier;	// 64 = 0x40
    NSString *_mediaType;	// 72 = 0x48
}

+ (id)_allAudioMediaTypes;	// IMP=0x00000001000bbee0
+ (id)_bulletinInfoForNowPlayingInfo:(id)arg1;	// IMP=0x00000001000bbb84
+ (id)sharedInstance;	// IMP=0x00000001000b9d64
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSNumber *trackIdentifier; // @synthesize trackIdentifier=_trackIdentifier;
@property(nonatomic) __weak id <PBMediaRemoteObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000bc020
- (void)_updateWithNowPlayingInfoDictionary:(id)arg1 playbackState:(unsigned int)arg2 nowPlayingPID:(int)arg3;	// IMP=0x00000001000bb120
- (void)_performMetadataUpdate;	// IMP=0x00000001000baaf0
- (void)_setNeedsMetadataUpdate;	// IMP=0x00000001000ba93c
- (void)_presentTrackChangeBulletinWithInfo:(id)arg1;	// IMP=0x00000001000ba66c
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x00000001000ba5e0
- (void)_nowPlayingAppDidChange:(id)arg1;	// IMP=0x00000001000ba46c
- (void)_nowPlayingAppPlaybackStateDidChange:(id)arg1;	// IMP=0x00000001000ba398
- (void)_nowPlayingInfoDidChange:(id)arg1;	// IMP=0x00000001000ba2c4
@property(readonly, nonatomic) int nowPlayingProcessPID; // @synthesize nowPlayingProcessPID=_nowPlayingProcessPID;
@property(retain, nonatomic) PBSBulletin *currentBulletin; // @synthesize currentBulletin=_currentBulletin;
@property(readonly, nonatomic) _Bool isPodcastsAppPlaying; // @synthesize isPodcastsAppPlaying=_isPodcastsAppPlaying;
@property(readonly, nonatomic) _Bool isMusicAppPlaying; // @synthesize isMusicAppPlaying=_isMusicAppPlaying;
@property(readonly, nonatomic) _Bool playingMusic; // @synthesize playingMusic=_playingMusic;
@property(readonly, nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(readonly, copy, nonatomic) NSNumber *playbackRate; // @synthesize playbackRate=_playbackRate;
- (_Bool)nowPlayingMediaTypeAudioOnly;	// IMP=0x00000001000b9fb8
- (void)stopObserving;	// IMP=0x00000001000b9f60
- (void)startObserving;	// IMP=0x00000001000b9e64
- (void)dealloc;	// IMP=0x00000001000b9e18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

