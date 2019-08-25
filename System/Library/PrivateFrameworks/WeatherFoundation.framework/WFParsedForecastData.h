/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, WFWeatherConditions, NSArray;

@interface WFParsedForecastData : NSObject {

	NSData* _rawData;
	WFWeatherConditions* _currentConditions;
	NSArray* _dailyForecasts;
	NSArray* _hourlyForecasts;

}

@property (nonatomic,copy) NSData * rawData;                                     //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,copy) WFWeatherConditions * currentConditions;              //@synthesize currentConditions=_currentConditions - In the implementation block
@property (nonatomic,copy) NSArray * dailyForecasts;                             //@synthesize dailyForecasts=_dailyForecasts - In the implementation block
@property (nonatomic,copy) NSArray * hourlyForecasts;                            //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
-(void)setRawData:(NSData *)arg1 ;
-(WFWeatherConditions *)currentConditions;
-(void)setCurrentConditions:(WFWeatherConditions *)arg1 ;
-(NSArray *)dailyForecasts;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(NSArray *)hourlyForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(NSData *)rawData;
@end
