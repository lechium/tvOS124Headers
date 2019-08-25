//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PBSBulletin, TVMusicPlayer;

@interface TVMusicVideoTitleController : NSObject
{
    PBSBulletin *_currentBulletin;	// 8 = 0x8
    TVMusicPlayer *_player;	// 16 = 0x10
}

+ (void)getStringForTitleLabel:(id *)arg1 subtitleLabel:(id *)arg2 forMusicVideo:(id)arg3;	// IMP=0x000000010002a160
+ (void)initialize;	// IMP=0x00000001000293d0
@property(retain, nonatomic) TVMusicPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) PBSBulletin *currentBulletin; // @synthesize currentBulletin=_currentBulletin;
- (void).cxx_destruct;	// IMP=0x000000010002a364
- (void)_hideCurrentBulletin;	// IMP=0x000000010002a0a0
- (void)_showBulletinWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0000000100029d7c
- (void)_showBulletinForMediaItem:(id)arg1;	// IMP=0x0000000100029be8
- (void)_scheduleBulletinWithTitleInfo:(id)arg1;	// IMP=0x0000000100029890
- (void)_scheduleEndBulletinForMediaItem:(id)arg1;	// IMP=0x00000001000297bc
- (void)_scheduleStartBulletinForMediaItem:(id)arg1;	// IMP=0x0000000100029730
- (void)_mediaItemDidChange:(id)arg1;	// IMP=0x00000001000295a8
@property(readonly, nonatomic) id <PBSBulletinServiceInterface> bulletinServiceProxy;
- (void)dealloc;	// IMP=0x00000001000294d4
- (id)initWithPlayer:(id)arg1;	// IMP=0x0000000100029404

@end

