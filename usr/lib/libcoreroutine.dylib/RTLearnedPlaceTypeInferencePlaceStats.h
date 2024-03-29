/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTLearnedPlaceTypeInferenceStats, RTLearnedPlace;

@interface RTLearnedPlaceTypeInferencePlaceStats : NSObject {

	RTLearnedPlaceTypeInferenceStats* _stats;
	RTLearnedPlace* _place;
	unsigned long long _visitsCount;

}

@property (nonatomic,retain) RTLearnedPlace * place;                                  //@synthesize place=_place - In the implementation block
@property (assign,nonatomic) unsigned long long visitsCount;                          //@synthesize visitsCount=_visitsCount - In the implementation block
@property (nonatomic,readonly) RTLearnedPlaceTypeInferenceStats * stats;              //@synthesize stats=_stats - In the implementation block
+(id)visitsWithDwellTimeBetweenDateRange:(id)arg1 start:(id)arg2 end:(id)arg3 ;
+(id)extractDailyStatsFromVisits:(id)arg1 ;
+(id)extractWeeklyStatsFromDailyStats:(id)arg1 ;
+(double)extractTopMedianDwellTimeFromVisits:(id)arg1 ;
-(unsigned long long)visitsCount;
-(RTLearnedPlaceTypeInferenceStats *)stats;
-(void)setPlace:(RTLearnedPlace *)arg1 ;
-(RTLearnedPlace *)place;
-(id)initWithPlace:(id)arg1 visits:(id)arg2 ;
-(void)setVisitsCount:(unsigned long long)arg1 ;
-(id)description;
-(void)log;
@end

