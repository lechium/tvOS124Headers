/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPPlaybackProgressAnimatorDelegate <NSObject>
@optional
-(void)playbackProgressAnimator:(id)arg1 didPresentElapsedTime:(double)arg2;
-(void)playbackProgressAnimator:(id)arg1 didFinishAnimatingToElapsedTime:(double)arg2;
-(double)currentElapsedTimeForPlaybackProgressAnimator:(id)arg1;

@required
-(void)playbackProgressAnimator:(id)arg1 updateTitlesForElapsedTime:(double)arg2 withPlaybackDuration:(double)arg3;

@end

