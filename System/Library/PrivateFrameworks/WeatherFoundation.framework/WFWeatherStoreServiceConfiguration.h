/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWPathEvaluator, NSURLSession, WFAggregateDictionary, NSURL, NSMutableDictionary;

@interface WFWeatherStoreServiceConfiguration : NSObject <NSCopying> {

	NWPathEvaluator* _serviceConnectivityEvaluator;
	NSURLSession* _session;
	WFAggregateDictionary* _aggDictionary;
	NSURL* _cacheURL;
	NSMutableDictionary* _requestFormatterForForecastType;
	NSMutableDictionary* _requestParserForForecastType;
	Class _airQualityRequestFormatterClass;
	Class _airQualityParserClass;
	Class _cacheClass;
	NSURL* _serviceConnectivityEvaluationURL;

}

@property (nonatomic,retain) NSMutableDictionary * requestFormatterForForecastType;              //@synthesize requestFormatterForForecastType=_requestFormatterForForecastType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestParserForForecastType;                 //@synthesize requestParserForForecastType=_requestParserForForecastType - In the implementation block
@property (nonatomic,retain) Class airQualityRequestFormatterClass;                              //@synthesize airQualityRequestFormatterClass=_airQualityRequestFormatterClass - In the implementation block
@property (nonatomic,retain) Class airQualityParserClass;                                        //@synthesize airQualityParserClass=_airQualityParserClass - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) Class cacheClass;                                                   //@synthesize cacheClass=_cacheClass - In the implementation block
@property (nonatomic,retain) NSURL * serviceConnectivityEvaluationURL;                           //@synthesize serviceConnectivityEvaluationURL=_serviceConnectivityEvaluationURL - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,retain) WFAggregateDictionary * aggDictionary;                              //@synthesize aggDictionary=_aggDictionary - In the implementation block
@property (nonatomic,copy) NSURL * cacheURL;                                                     //@synthesize cacheURL=_cacheURL - In the implementation block
@property (nonatomic,readonly) NWPathEvaluator * serviceConnectivityEvaluator;                   //@synthesize serviceConnectivityEvaluator=_serviceConnectivityEvaluator - In the implementation block
@property (nonatomic,readonly) BOOL isServiceAvailable; 
+(id)generateUserAgent;
+(id)defaultConfigurationWithSourceBundleIdentifier:(id)arg1 ;
+(id)defaultConfiguration;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSession *)session;
-(NSURL *)cacheURL;
-(void)setAggDictionary:(WFAggregateDictionary *)arg1 ;
-(void)setRequestFormatter:(Class)arg1 forForecastType:(unsigned long long)arg2 ;
-(void)setRequestParser:(id)arg1 forForecastType:(unsigned long long)arg2 ;
-(void)setAirQualityFormatter:(Class)arg1 ;
-(void)setAirQualityParser:(Class)arg1 ;
-(void)setServiceConnectivityEvaluationURL:(NSURL *)arg1 ;
-(void)setRequestFormatterForForecastType:(NSMutableDictionary *)arg1 ;
-(void)setRequestParserForForecastType:(NSMutableDictionary *)arg1 ;
-(void)setCacheClass:(Class)arg1 ;
-(NSMutableDictionary *)requestParserForForecastType;
-(NSMutableDictionary *)requestFormatterForForecastType;
-(Class)cacheClass;
-(Class)airQualityRequestFormatterClass;
-(void)setAirQualityRequestFormatterClass:(Class)arg1 ;
-(Class)airQualityParserClass;
-(void)setAirQualityParserClass:(Class)arg1 ;
-(WFAggregateDictionary *)aggDictionary;
-(NSURL *)serviceConnectivityEvaluationURL;
-(NWPathEvaluator *)serviceConnectivityEvaluator;
-(id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 error:(id*)arg3 ;
-(id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id*)arg4 ;
-(BOOL)isServiceAvailable;
-(id)forecastRequestForType:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id*)arg4 ;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 date:(id)arg3 error:(id*)arg4 ;
-(void)setCacheURL:(NSURL *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
@end

