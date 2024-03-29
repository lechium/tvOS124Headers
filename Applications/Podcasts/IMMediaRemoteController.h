//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAVPlayer, MPRemoteCommandCenter, NSArray;

@interface IMMediaRemoteController : NSObject
{
    IMAVPlayer *_player;	// 8 = 0x8
    NSArray *_supportedPlaybackRates;	// 16 = 0x10
    MPRemoteCommandCenter *_remoteCommandCenter;	// 24 = 0x18
}

@property(retain, nonatomic) MPRemoteCommandCenter *remoteCommandCenter; // @synthesize remoteCommandCenter=_remoteCommandCenter;
@property(retain, nonatomic) NSArray *supportedPlaybackRates; // @synthesize supportedPlaybackRates=_supportedPlaybackRates;
@property(retain, nonatomic) IMAVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;	// IMP=0x00000001001abbdc
- (void)_updatePlaybackSpeed;	// IMP=0x00000001001abad0
- (long long)remoteSetPlayhead:(id)arg1;	// IMP=0x00000001001ab9e4
- (long long)remoteSkipForward:(id)arg1;	// IMP=0x00000001001ab914
- (long long)remoteSkipBackward:(id)arg1;	// IMP=0x00000001001ab868
- (long long)remoteChangePlaybackRate:(id)arg1;	// IMP=0x00000001001ab648
- (long long)remoteSeekBackward:(id)arg1;	// IMP=0x00000001001ab5ac
- (long long)remoteSeekForward:(id)arg1;	// IMP=0x00000001001ab510
- (long long)remotePreviousTrack:(id)arg1;	// IMP=0x00000001001ab480
- (long long)remoteNextTrack:(id)arg1;	// IMP=0x00000001001ab438
- (void)remoteTogglePlayPauseCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ab35c
- (long long)remoteStop:(id)arg1;	// IMP=0x00000001001ab308
- (void)remotePlayCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ab234
- (long long)remotePause:(id)arg1;	// IMP=0x00000001001ab18c
- (struct __CFArray *)copySupportedCommands;	// IMP=0x00000001001ab100
- (void)tearDownRemoteCommandCenter:(id)arg1;	// IMP=0x00000001001aae70
- (void)setupRemoteCommandCenter:(id)arg1;	// IMP=0x00000001001aa8e0
- (void)dealloc;	// IMP=0x00000001001aa7ac
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000001001aa528

@end

