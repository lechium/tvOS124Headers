//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TVHKMediaEntityFetchRequest, TVHKMediaEntityServer, TVHSAsynchronousWorkToken;

@interface TVHGeniusMixPlaybackMonitor : NSObject
{
    id <TVPPlayback> _player;	// 8 = 0x8
    TVHKMediaEntityServer *_mediaEntityServer;	// 16 = 0x10
    TVHKMediaEntityFetchRequest *_fetchRequest;	// 24 = 0x18
    TVHSAsynchronousWorkToken *_fetchRequestWorkToken;	// 32 = 0x20
    unsigned long long _monitorToken;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010000e054
@property(nonatomic) unsigned long long monitorToken; // @synthesize monitorToken=_monitorToken;
@property(retain, nonatomic) TVHSAsynchronousWorkToken *fetchRequestWorkToken; // @synthesize fetchRequestWorkToken=_fetchRequestWorkToken;
@property(copy, nonatomic) TVHKMediaEntityFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) TVHKMediaEntityServer *mediaEntityServer; // @synthesize mediaEntityServer=_mediaEntityServer;
@property(retain, nonatomic) id <TVPPlayback> player; // @synthesize player=_player;
- (void).cxx_destruct;	// IMP=0x000000010000ee2c
- (void)_stop;	// IMP=0x000000010000ed00
- (void)_stopObservingMediaServer:(id)arg1;	// IMP=0x000000010000ec70
- (void)_startObservingMediaServer:(id)arg1;	// IMP=0x000000010000ebd8
- (void)_handleFetchResponse:(id)arg1 player:(id)arg2;	// IMP=0x000000010000e75c
- (void)_handleCurrentPlaybackMediaItemDidChangeNotification:(id)arg1;	// IMP=0x000000010000e358
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x000000010000e2ac
- (void)_handleMediaServerConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x000000010000e214
- (void)startMonitoringPlaybackWithPlayer:(id)arg1 fetchRequest:(id)arg2 mediaEntityServer:(id)arg3;	// IMP=0x000000010000e158
- (void)dealloc;	// IMP=0x000000010000e10c

@end
