/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface RTStateDepictionOnePredEl : NSObject {

	int _numOfClustEntries;
	double _aggregateTime_s;
	double _latestVisitTime_s;
	double _earliestVisitTime_s;
	NSMutableArray* _visitHist;
	double _density;

}

@property (assign,nonatomic) int numOfClustEntries;                   //@synthesize numOfClustEntries=_numOfClustEntries - In the implementation block
@property (assign,nonatomic) double aggregateTime_s;                  //@synthesize aggregateTime_s=_aggregateTime_s - In the implementation block
@property (assign,nonatomic) double latestVisitTime_s;                //@synthesize latestVisitTime_s=_latestVisitTime_s - In the implementation block
@property (assign,nonatomic) double earliestVisitTime_s;              //@synthesize earliestVisitTime_s=_earliestVisitTime_s - In the implementation block
@property (nonatomic,retain) NSMutableArray * visitHist;              //@synthesize visitHist=_visitHist - In the implementation block
@property (assign,nonatomic) double density;                          //@synthesize density=_density - In the implementation block
-(void)setNumOfClustEntries:(int)arg1 ;
-(void)setAggregateTime_s:(double)arg1 ;
-(void)setLatestVisitTime_s:(double)arg1 ;
-(void)setVisitHist:(NSMutableArray *)arg1 ;
-(int)numOfClustEntries;
-(double)aggregateTime_s;
-(double)latestVisitTime_s;
-(double)earliestVisitTime_s;
-(void)setEarliestVisitTime_s:(double)arg1 ;
-(NSMutableArray *)visitHist;
-(id)init;
-(void)setDensity:(double)arg1 ;
-(double)density;
@end

