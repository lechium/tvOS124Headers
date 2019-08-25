/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVPPlayer, TVPPlaybackState;

@interface TVBackgroundAudioController : NSObject {

	TVPPlayer* _audioPlayer;
	unsigned long long _deactivationReasons;
	BOOL _deactivated;
	BOOL _stoppedOnDeactivation;
	double _delayedPlaybackInterval;

}

@property (nonatomic,readonly) TVPPlaybackState * state; 
+(id)sharedBackgroundAudioController;
-(BOOL)play;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)setCurrentMediaItemFromAudioElement:(id)arg1 ;
-(void)_cancelDelayedPlay;
-(BOOL)playWithDelay:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(TVPPlaybackState *)state;
-(void)stop;
-(void)_stop;
-(void)pause;
@end

