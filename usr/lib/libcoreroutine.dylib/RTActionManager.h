/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class RTDeviceLocationPredictor, RTLocationManager, RTEventManager, RTVisitManager, RTLearnedLocationManager, NSObject;

@interface RTActionManager : NSObject {

	unsigned long long _currentLocationOfInterestType;
	CLLocationCoordinate2D _currentLocationOfInterestCoordinate;
	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTLocationManager* _locationManager;
	RTEventManager* _eventManager;
	RTVisitManager* _visitManager;
	RTLearnedLocationManager* _learnedLocationManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;              //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTEventManager * eventManager;                                    //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,retain) RTVisitManager * visitManager;                                    //@synthesize visitManager=_visitManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTLocationManager *)locationManager;
-(RTVisitManager *)visitManager;
-(void)onLowConfidenceVisitNotification:(id)arg1 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)_handleLowConfidenceVisitIncident:(id)arg1 ;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)setVisitManager:(RTVisitManager *)arg1 ;
-(void)provideFeedbackForAction:(id)arg1 engagementResult:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPredictedConditionsForAction:(id)arg1 dateInterval:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(void)setEventManager:(RTEventManager *)arg1 ;
-(id)initWithDeviceLocationPredictor:(id)arg1 learnedLocationManager:(id)arg2 locationManager:(id)arg3 eventManager:(id)arg4 visitManager:(id)arg5 ;
-(RTEventManager *)eventManager;
-(void)startMonitoringPredictedConditionsForAction:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopMonitoringPredictedConditionsForAction:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchPredictedConditionsForAction:(id)arg1 dateInterval:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchPredictedConditionsForActionWithLocationRestriction:(id)arg1 dateInterval:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchPredictedConditionsForActionWithCalendarRestriction:(id)arg1 dateInterval:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

