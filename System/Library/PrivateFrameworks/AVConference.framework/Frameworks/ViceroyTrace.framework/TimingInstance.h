/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TimingInstance : NSObject {

	float startTiming;
	float stopTiming;
	float totalTime;
	BOOL isRunning;

}

@property (assign,nonatomic) float startTiming; 
@property (assign,nonatomic) float stopTiming; 
@property (assign,nonatomic) float totalTime; 
@property (assign,nonatomic) BOOL isRunning; 
+(id)createTimingInstanceWithStartTime:(float)arg1 ;
-(void)setTotalTime:(float)arg1 ;
-(float)totalTime;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)setStartTiming:(float)arg1 ;
-(void)setStopTiming:(float)arg1 ;
-(float)startTiming;
-(float)stopTiming;
-(id)description;
-(BOOL)isRunning;
@end

