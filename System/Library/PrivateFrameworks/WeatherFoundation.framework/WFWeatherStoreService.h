/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFWeatherStore.h>

@protocol OS_dispatch_queue;
@class WFWeatherStoreServiceConfiguration, NSObject, NSMutableDictionary, WFWeatherStoreCache, NSString;

@interface WFWeatherStoreService : NSObject <WFWeatherStore> {

	WFWeatherStoreServiceConfiguration* _configuration;
	/*^block*/id _forecastRequestStartingCallback;
	/*^block*/id _locationGeocodeForCoordinateRequestStartingCallback;
	NSObject*<OS_dispatch_queue> _incomingRequestQueue;
	NSObject*<OS_dispatch_queue> _parseQueue;
	NSObject*<OS_dispatch_queue> _mapQueue;
	NSMutableDictionary* _UUIDToCallbackMap;
	NSMutableDictionary* _UUIDToURLMap;
	NSMutableDictionary* _URLToTaskMap;
	NSMutableDictionary* _URLToCallbackMap;
	WFWeatherStoreCache* _cache;

}

@property (retain) NSObject*<OS_dispatch_queue> incomingRequestQueue;                           //@synthesize incomingRequestQueue=_incomingRequestQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> parseQueue;                                     //@synthesize parseQueue=_parseQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> mapQueue;                                       //@synthesize mapQueue=_mapQueue - In the implementation block
@property (retain) NSMutableDictionary * UUIDToCallbackMap;                                     //@synthesize UUIDToCallbackMap=_UUIDToCallbackMap - In the implementation block
@property (retain) NSMutableDictionary * UUIDToURLMap;                                          //@synthesize UUIDToURLMap=_UUIDToURLMap - In the implementation block
@property (retain) NSMutableDictionary * URLToTaskMap;                                          //@synthesize URLToTaskMap=_URLToTaskMap - In the implementation block
@property (retain) NSMutableDictionary * URLToCallbackMap;                                      //@synthesize URLToCallbackMap=_URLToCallbackMap - In the implementation block
@property (nonatomic,copy) WFWeatherStoreServiceConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
@property (retain) WFWeatherStoreCache * cache;                                                 //@synthesize cache=_cache - In the implementation block
@property (nonatomic,copy) id forecastRequestStartingCallback;                                  //@synthesize forecastRequestStartingCallback=_forecastRequestStartingCallback - In the implementation block
@property (nonatomic,copy) id locationGeocodeForCoordinateRequestStartingCallback;              //@synthesize locationGeocodeForCoordinateRequestStartingCallback=_locationGeocodeForCoordinateRequestStartingCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)mapQueue;
-(void)setMapQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(void)forecastForLocation:(id)arg1 atDate:(id)arg2 requestIdentifier:(id)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)hourlyForecastForLocation:(id)arg1 requestIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dailyForecastForLocation:(id)arg1 requestIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)airQualityForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)invalidateCacheWithIdentifier:(id)arg1 ;
-(id)locationGeocodeForCoordinateRequestStartingCallback;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)setParseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setURLToTaskMap:(NSMutableDictionary *)arg1 ;
-(void)setURLToCallbackMap:(NSMutableDictionary *)arg1 ;
-(void)setUUIDToURLMap:(NSMutableDictionary *)arg1 ;
-(void)setUUIDToCallbackMap:(NSMutableDictionary *)arg1 ;
-(void)_cancelWithRequestIdentifier:(id)arg1 ;
-(BOOL)_cacheParsedForecastData:(id)arg1 type:(unsigned long long)arg2 location:(id)arg3 date:(id)arg4 requestIdentifier:(id)arg5 ;
-(BOOL)_forecastConditionsForType:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 requestIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_isConnectivityAvailableForWeatherHost:(id*)arg1 ;
-(id)_taskForURL:(id)arg1 ;
-(void)_executeCallbacksForURL:(id)arg1 conditions:(id)arg2 error:(id)arg3 ;
-(void)_setTask:(id)arg1 requestIdentifier:(id)arg2 callback:(/*^block*/id)arg3 forURL:(id)arg4 ;
-(id)forecastRequestStartingCallback;
-(void)_addCallback:(/*^block*/id)arg1 requestIdentifier:(id)arg2 forURL:(id)arg3 ;
-(void)_executeCallbacksForURL:(id)arg1 parsedForecastData:(id)arg2 error:(id)arg3 ;
-(NSMutableDictionary *)URLToCallbackMap;
-(NSMutableDictionary *)URLToTaskMap;
-(NSMutableDictionary *)UUIDToCallbackMap;
-(NSMutableDictionary *)UUIDToURLMap;
-(void)_cleanupCallbacksAndTasksForURL:(id)arg1 ;
-(void)setIncomingRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)incomingRequestQueue;
-(void)setForecastRequestStartingCallback:(id)arg1 ;
-(void)setLocationGeocodeForCoordinateRequestStartingCallback:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(id)init;
-(WFWeatherStoreServiceConfiguration *)configuration;
-(void)setConfiguration:(WFWeatherStoreServiceConfiguration *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setCache:(WFWeatherStoreCache *)arg1 ;
-(WFWeatherStoreCache *)cache;
@end

