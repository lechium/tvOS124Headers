/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPMusicNowPlayingViewDelegate <NSObject>
@required
-(void)nowPlayingViewPlaylistWillBecomeVisible:(id)arg1;
-(void)nowPlayingView:(id)arg1 playlistWillBecomeHiddenWithExecutionBlock:(/*^block*/id)arg2;
-(void)nowPlayingViewPlaylistDidBecomeHidden:(id)arg1;
-(void)nowPlayingViewDidSelectContextMenu:(id)arg1;
-(void)nowPlayingViewDidSelectRepeat:(id)arg1;
-(void)nowPlayingViewDidSelectShuffle:(id)arg1;
-(BOOL)nowPlayingViewShouldHandlePressPlayPause:(id)arg1;
-(void)nowPlayingViewDidPressPlayPause:(id)arg1;
-(id)nothingPlayingArtworkForNowPlayingView:(id)arg1;
-(id)focusIndexPathForNowPlayingView:(id)arg1;

@end

