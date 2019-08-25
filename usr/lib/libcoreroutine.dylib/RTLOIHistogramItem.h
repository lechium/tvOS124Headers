/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTLocationOfInterest;

@interface RTLOIHistogramItem : NSObject {

	RTLocationOfInterest* _locationOfInterest;
	double _timeOfStay;
	double _probability;
	long long _numOfEvents;

}

@property (nonatomic,retain) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (assign,nonatomic) double timeOfStay;                                      //@synthesize timeOfStay=_timeOfStay - In the implementation block
@property (assign,nonatomic) double probability;                                     //@synthesize probability=_probability - In the implementation block
@property (assign,nonatomic) long long numOfEvents;                                  //@synthesize numOfEvents=_numOfEvents - In the implementation block
-(double)probability;
-(RTLocationOfInterest *)locationOfInterest;
-(double)timeOfStay;
-(void)setTimeOfStay:(double)arg1 ;
-(long long)numOfEvents;
-(void)setNumOfEvents:(long long)arg1 ;
-(void)setProbability:(double)arg1 ;
-(id)initWithLocationOfInterest:(id)arg1 timeOfStay:(double)arg2 andNumOfEvents:(long long)arg3 ;
-(void)setLocationOfInterest:(RTLocationOfInterest *)arg1 ;
-(id)description;
@end

