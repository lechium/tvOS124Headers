/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>
#import <libobjc.A.dylib/ISVitalitySettings.h>

@class NSString;

@interface ISVitalitySpecificSettings : ISSettings <ISVitalitySettings> {

	long long _behavior;
	double _preDuration;
	double _postDuration;
	double _startSeekTolerance;
	double _maximumRate;
	double _maximumDeceleration;
	double _relativeStart;
	double _relativeEnd;
	long long _maximumNumberOfFrames;
	double _playbackRate;
	double _endTimeOffset;
	double _minimumVisibilityFactor;
	double _maximumDelayBeforePlayback;
	double _minimumDurationForColorMismatch;

}

@property (assign,nonatomic) long long behavior;                                  //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) double preDuration;                                  //@synthesize preDuration=_preDuration - In the implementation block
@property (assign,nonatomic) double postDuration;                                 //@synthesize postDuration=_postDuration - In the implementation block
@property (assign,nonatomic) double startSeekTolerance;                           //@synthesize startSeekTolerance=_startSeekTolerance - In the implementation block
@property (assign,nonatomic) double maximumRate;                                  //@synthesize maximumRate=_maximumRate - In the implementation block
@property (assign,nonatomic) double maximumDeceleration;                          //@synthesize maximumDeceleration=_maximumDeceleration - In the implementation block
@property (assign,nonatomic) double relativeStart;                                //@synthesize relativeStart=_relativeStart - In the implementation block
@property (assign,nonatomic) double relativeEnd;                                  //@synthesize relativeEnd=_relativeEnd - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfFrames;                     //@synthesize maximumNumberOfFrames=_maximumNumberOfFrames - In the implementation block
@property (assign,nonatomic) double playbackRate;                                 //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) double endTimeOffset;                                //@synthesize endTimeOffset=_endTimeOffset - In the implementation block
@property (assign,nonatomic) double minimumVisibilityFactor;                      //@synthesize minimumVisibilityFactor=_minimumVisibilityFactor - In the implementation block
@property (assign,nonatomic) double maximumDelayBeforePlayback;                   //@synthesize maximumDelayBeforePlayback=_maximumDelayBeforePlayback - In the implementation block
@property (assign,nonatomic) double minimumDurationForColorMismatch;              //@synthesize minimumDurationForColorMismatch=_minimumDurationForColorMismatch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setPlaybackRate:(double)arg1 ;
-(double)playbackRate;
-(double)postDuration;
-(double)preDuration;
-(void)setMinimumVisibilityFactor:(double)arg1 ;
-(void)setPreDuration:(double)arg1 ;
-(double)maximumRate;
-(double)maximumDeceleration;
-(double)relativeEnd;
-(long long)maximumNumberOfFrames;
-(double)endTimeOffset;
-(double)minimumVisibilityFactor;
-(double)maximumDelayBeforePlayback;
-(double)minimumDurationForColorMismatch;
-(void)setMaximumDeceleration:(double)arg1 ;
-(double)startSeekTolerance;
-(void)setEndTimeOffset:(double)arg1 ;
-(void)setMaximumDelayBeforePlayback:(double)arg1 ;
-(void)setPostDuration:(double)arg1 ;
-(void)setMaximumRate:(double)arg1 ;
-(void)setRelativeStart:(double)arg1 ;
-(void)setRelativeEnd:(double)arg1 ;
-(void)setMaximumNumberOfFrames:(long long)arg1 ;
-(void)setStartSeekTolerance:(double)arg1 ;
-(void)setMinimumDurationForColorMismatch:(double)arg1 ;
-(double)relativeStart;
-(void)setDefaultValues;
-(long long)behavior;
-(void)setBehavior:(long long)arg1 ;
@end

