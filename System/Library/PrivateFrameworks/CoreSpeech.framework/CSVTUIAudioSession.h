/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSVTUIAudioSession
@required
-(BOOL)isRecording;
-(void)stopRecording;
-(BOOL)hasAudioRoute;
-(BOOL)startRecording;
-(BOOL)prepareRecord;
-(void)releaseAudioSession;
-(BOOL)hasCorrectAudioRoute;
-(void)updateMeters;
-(void)setEndpointerDelegate:(id)arg1;
-(void)resetEndPointer;
-(unsigned long long)audioSource;
-(void)setDelegate:(id)arg1;
-(float)averagePower;

@end

