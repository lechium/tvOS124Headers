/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BSStopWatch : NSObject {

	double _startTimestamp;

}

@property (nonatomic,readonly) double elapsedTime; 
-(double)_timeIntervalSinceInternalClockReference;
-(id)_initWithStartTime:(double)arg1 ;
-(id)initWithDistantPast;
-(id)init;
-(void)reset;
-(double)elapsedTime;
@end

