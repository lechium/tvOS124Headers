/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVController.h>

@class MPPlaybackContext, MPCMediaPlayerLegacyPlayer, NSUUID;

@interface MPCMediaPlayerLegacyAVController : MPAVController {

	MPPlaybackContext* _fallbackPlaybackContext;
	MPCMediaPlayerLegacyPlayer* _mpcPlayer;
	NSUUID* _playlistManagerUUID;

}

@property (nonatomic,retain) MPPlaybackContext * fallbackPlaybackContext;                //@synthesize fallbackPlaybackContext=_fallbackPlaybackContext - In the implementation block
@property (assign,nonatomic,__weak) MPCMediaPlayerLegacyPlayer * mpcPlayer;              //@synthesize mpcPlayer=_mpcPlayer - In the implementation block
@property (nonatomic,retain) NSUUID * playlistManagerUUID;                               //@synthesize playlistManagerUUID=_playlistManagerUUID - In the implementation block
+(Class)playlistManagerClass;
-(void)_unregisterForPlaylistManager:(id)arg1 ;
-(void)playWithOptions:(unsigned long long)arg1 ;
-(void)_connectAVPlayer;
-(id)_expectedAssetTypesForPlaybackMode:(long long)arg1 ;
-(void)_registerForPlaylistManager:(id)arg1 ;
-(void)setMpcPlayer:(MPCMediaPlayerLegacyPlayer *)arg1 ;
-(BOOL)jumpToItemWithContentID:(id)arg1 ;
-(void)setPlaylistManagerUUID:(NSUUID *)arg1 ;
-(NSUUID *)playlistManagerUUID;
-(void)setFallbackPlaybackContext:(MPPlaybackContext *)arg1 ;
-(void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1 ;
-(void)_queueModificationsDidChangeNotification;
-(MPPlaybackContext *)fallbackPlaybackContext;
-(MPCMediaPlayerLegacyPlayer *)mpcPlayer;
-(id)init;
-(void)dealloc;
-(void)_setState:(long long)arg1 ;
@end

