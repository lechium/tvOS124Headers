/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKGEORouteHypothesis.h>

@class NSDate, NSString;

@interface EKSyntheticGEORouteHypothesis : NSObject <EKGEORouteHypothesis> {

	BOOL _supportsLiveTraffic;
	int _transportType;
	NSDate* _conservativeDepartureDate;
	double _conservativeTravelTime;
	NSDate* _suggestedDepartureDate;
	double _estimatedTravelTime;
	NSDate* _aggressiveDepartureDate;
	double _aggressiveTravelTime;
	NSString* _routeName;
	unsigned long long _currentTrafficDensity;
	NSString* _trafficDensityDescription;
	long long _travelState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int transportType;                                     //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSDate * conservativeDepartureDate;                    //@synthesize conservativeDepartureDate=_conservativeDepartureDate - In the implementation block
@property (assign,nonatomic) double conservativeTravelTime;                         //@synthesize conservativeTravelTime=_conservativeTravelTime - In the implementation block
@property (nonatomic,retain) NSDate * suggestedDepartureDate;                       //@synthesize suggestedDepartureDate=_suggestedDepartureDate - In the implementation block
@property (assign,nonatomic) double estimatedTravelTime;                            //@synthesize estimatedTravelTime=_estimatedTravelTime - In the implementation block
@property (nonatomic,retain) NSDate * aggressiveDepartureDate;                      //@synthesize aggressiveDepartureDate=_aggressiveDepartureDate - In the implementation block
@property (assign,nonatomic) double aggressiveTravelTime;                           //@synthesize aggressiveTravelTime=_aggressiveTravelTime - In the implementation block
@property (nonatomic,retain) NSString * routeName;                                  //@synthesize routeName=_routeName - In the implementation block
@property (assign,nonatomic) BOOL supportsLiveTraffic;                              //@synthesize supportsLiveTraffic=_supportsLiveTraffic - In the implementation block
@property (assign,nonatomic) unsigned long long currentTrafficDensity;              //@synthesize currentTrafficDensity=_currentTrafficDensity - In the implementation block
@property (nonatomic,retain) NSString * trafficDensityDescription;                  //@synthesize trafficDensityDescription=_trafficDensityDescription - In the implementation block
@property (assign,nonatomic) long long travelState;                                 //@synthesize travelState=_travelState - In the implementation block
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(long long)travelState;
-(NSDate *)suggestedDepartureDate;
-(unsigned long long)currentTrafficDensity;
-(BOOL)supportsLiveTraffic;
-(void)setSupportsLiveTraffic:(BOOL)arg1 ;
-(double)estimatedTravelTime;
-(NSDate *)conservativeDepartureDate;
-(NSDate *)aggressiveDepartureDate;
-(NSString *)routeName;
-(void)setRouteName:(NSString *)arg1 ;
-(double)aggressiveTravelTime;
-(double)conservativeTravelTime;
-(NSString *)trafficDensityDescription;
-(void)setTravelState:(long long)arg1 ;
-(void)setConservativeDepartureDate:(NSDate *)arg1 ;
-(void)setConservativeTravelTime:(double)arg1 ;
-(void)setSuggestedDepartureDate:(NSDate *)arg1 ;
-(void)setEstimatedTravelTime:(double)arg1 ;
-(void)setAggressiveDepartureDate:(NSDate *)arg1 ;
-(void)setAggressiveTravelTime:(double)arg1 ;
-(void)setCurrentTrafficDensity:(unsigned long long)arg1 ;
-(void)setTrafficDensityDescription:(NSString *)arg1 ;
-(id)initWithStartDate:(id)arg1 conservativeTravelTime:(double)arg2 estimatedTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4 ;
@end

