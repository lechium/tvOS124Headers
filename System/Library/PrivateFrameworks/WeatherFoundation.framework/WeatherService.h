/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <WeatherFoundation/WeatherServiceProtocol.h>
#import <WeatherFoundation/WeatherServicePrivateProtocol.h>

@protocol OS_dispatch_queue;
@class WFTemperatureUnitProvider, NSMutableArray, NSObject, WFWeatherStoreService, WFQueryDispatcher, NSMapTable, NSArray, NSString;

@interface WeatherService : NSObject <WeatherServiceProtocol, WeatherServicePrivateProtocol> {

	WFTemperatureUnitProvider* _temperatureUnitProvider;
	NSMutableArray* _clients;
	NSObject*<OS_dispatch_queue> _clientQueue;
	WFWeatherStoreService* _internalService;
	WFQueryDispatcher* _queryDispatcher;
	NSMapTable* _clientDictionary;

}

@property (retain) WFWeatherStoreService * internalService;                                    //@synthesize internalService=_internalService - In the implementation block
@property (retain) WFQueryDispatcher * queryDispatcher;                                        //@synthesize queryDispatcher=_queryDispatcher - In the implementation block
@property (retain) NSMapTable * clientDictionary;                                              //@synthesize clientDictionary=_clientDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * clients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) WFTemperatureUnitProvider * temperatureUnitProvider;              //@synthesize temperatureUnitProvider=_temperatureUnitProvider - In the implementation block
+(id)sharedService;
-(id)initWithStore:(id)arg1 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(void)airQualityForLocation:(id)arg1 locale:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4 ;
-(void)setInternalService:(WFWeatherStoreService *)arg1 ;
-(void)setQueryDispatcher:(WFQueryDispatcher *)arg1 ;
-(void)setClientDictionary:(NSMapTable *)arg1 ;
-(void)setTemperatureUnitProvider:(WFTemperatureUnitProvider *)arg1 ;
-(WFWeatherStoreService *)internalService;
-(void)queryDispatcherDidReceiveResponse:(id)arg1 identifier:(id)arg2 ;
-(WFQueryDispatcher *)queryDispatcher;
-(WFTemperatureUnitProvider *)temperatureUnitProvider;
-(id)clientForPid:(int)arg1 ;
-(void)forecastForLocation:(id)arg1 atDate:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4 ;
-(void)hourlyForecastForLocation:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)dailyForecastForLocation:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)locationForString:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)locationForCoordinate:(CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2 ;
-(void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)temperatureUnitWithIdentifier:(id)arg1 ;
-(void)replaceTemperatureUnitWith:(int)arg1 identifier:(id)arg2 ;
-(void)reachabilityConfigurationForIdentifier:(id)arg1 ;
-(void)invalidateCache:(id)arg1 ;
-(void)addClient:(id)arg1 forPid:(int)arg2 ;
-(void)performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1 ;
-(NSMapTable *)clientDictionary;
-(NSArray *)clients;
-(id)init;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
@end

