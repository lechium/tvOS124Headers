//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVNPMetadataPlayerCommandDelegate.h"

@class NSDictionary, NSString, TVNPDataImageLoader, TVNPEndpointRouteConnection, TVNPMetadataPlayer;

@interface TVNPMediaRemoteObserver : NSObject <TVNPMetadataPlayerCommandDelegate>
{
    _Bool _isObserving;	// 8 = 0x8
    _Bool _airtunesIsPlaying;	// 9 = 0x9
    NSDictionary *_airtunesTimeData;	// 16 = 0x10
    NSString *_lastTrackIdentifier;	// 24 = 0x18
    TVNPDataImageLoader *_imageLoader;	// 32 = 0x20
    TVNPEndpointRouteConnection *_routeConnection;	// 40 = 0x28
    id <NSCopying> _routeConnectionObserverToken;	// 48 = 0x30
    TVNPMetadataPlayer *_player;	// 56 = 0x38
}

@property(retain, nonatomic) TVNPMetadataPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;	// IMP=0x000000010001d2dc
- (void)_updateTimeStampFromAirtunesd:(id)arg1;	// IMP=0x000000010001d228
- (void)_updateMediaItemMetadata:(id)arg1 routeConnection:(id)arg2;	// IMP=0x000000010001cc20
- (void)_deregisterAsObserver;	// IMP=0x000000010001cba4
- (void)_registerAsObserver;	// IMP=0x000000010001cb1c
- (void)_nowPlayingInfoDidChange:(id)arg1;	// IMP=0x000000010001c620
- (void)metadataPlayerSentCommand:(unsigned int)arg1 withOptions:(id)arg2;	// IMP=0x000000010001c608
- (void)reset;	// IMP=0x000000010001c534
- (void)prepareForPlaybackWithEndpoint:(id)arg1;	// IMP=0x000000010001c25c
- (void)prepareForPlayback;	// IMP=0x000000010001c204
- (id)init;	// IMP=0x000000010001c184

@end

