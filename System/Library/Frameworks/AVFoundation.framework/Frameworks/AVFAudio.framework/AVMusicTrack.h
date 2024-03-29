/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioUnit;

@interface AVMusicTrack : NSObject {

	void* _impl;

}

@property (nonatomic,retain) AVAudioUnit * destinationAudioUnit; 
@property (assign,nonatomic) AVBeatRange loopRange; 
@property (assign,getter=isLoopingEnabled,nonatomic) BOOL loopingEnabled; 
@property (assign,nonatomic) long long numberOfLoops; 
@property (assign,nonatomic) double offsetTime; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,getter=isSoloed,nonatomic) BOOL soloed; 
@property (assign,nonatomic) double lengthInBeats; 
@property (assign,nonatomic) double lengthInSeconds; 
@property (nonatomic,readonly) unsigned long long timeResolution; 
-(id)initWithImpl:(MusicTrackImpl*)arg1 ;
-(void)setDestinationAudioUnit:(AVAudioUnit *)arg1 ;
-(AVAudioUnit *)destinationAudioUnit;
-(AVBeatRange)loopRange;
-(void)setLoopRange:(AVBeatRange)arg1 ;
-(double)offsetTime;
-(void)setOffsetTime:(double)arg1 ;
-(BOOL)isSoloed;
-(void)setSoloed:(BOOL)arg1 ;
-(BOOL)usesAutomatedParameters;
-(void)setUsesAutomatedParameters:(BOOL)arg1 ;
-(double)lengthInBeats;
-(void)setLengthInBeats:(double)arg1 ;
-(double)lengthInSeconds;
-(void)setLengthInSeconds:(double)arg1 ;
-(unsigned long long)timeResolution;
-(OpaqueMusicTrackRef)track;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isLoopingEnabled;
-(BOOL)isMuted;
-(long long)numberOfLoops;
-(void)setNumberOfLoops:(long long)arg1 ;
-(void)dealloc;
-(unsigned long long)index;
@end

