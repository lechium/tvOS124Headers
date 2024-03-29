/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TVMediaInfo;


@protocol TVMediaController
@property (assign,getter=isPlaybackEnabled,nonatomic) BOOL playbackEnabled; 
@property (assign,nonatomic) BOOL showsVideoControls; 
@property (nonatomic,copy) TVMediaInfo * mediaInfo; 
@property (assign,nonatomic,__weak) id<TVMediaControllerDelegate> delegate; 
@property (nonatomic,readonly) long long state; 
@property (assign,nonatomic) BOOL shouldZoomWhenTransitioningToBackground; 
@required
-(void)play;
-(void)setDelegate:(id)arg1;
-(long long)state;
-(id<TVMediaControllerDelegate>)delegate;
-(void)stop;
-(void)pause;
-(void)setShouldZoomWhenTransitioningToBackground:(BOOL)arg1;
-(void)transitionToForeground:(BOOL)arg1 animated:(BOOL)arg2;
-(TVMediaInfo *)mediaInfo;
-(void)setMediaInfo:(id)arg1;
-(void)setPlaybackEnabled:(BOOL)arg1;
-(BOOL)showsVideoControls;
-(void)setShowsVideoControls:(BOOL)arg1;
-(BOOL)shouldZoomWhenTransitioningToBackground;
-(BOOL)isPlaybackEnabled;

@end

