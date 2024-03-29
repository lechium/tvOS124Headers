/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@protocol OS_dispatch_source;
@class RTLocationAwarenessMetrics, RTMetricManager, RTAuthorizationManager, RTWiFiManager, CLLocation, NSDate, RTLocationAwarenessManagerConfig, RTLocationManager, NSObject, NSNumber, RTMotionActivityManager, RTPowerAssertion, RTXPCActivityManager, RTInvocationDispatcher, NSMapTable;

@interface RTLocationAwarenessManager : RTService {

	BOOL _activeRequestInterrupted;
	BOOL _activeRequestFulfilled;
	BOOL _activeRequestCoarseLocationReceived;
	BOOL _activeRequestLocationServiceOn;
	BOOL _activeRequestRoutineOn;
	BOOL _activeRequestWifiOn;
	RTLocationAwarenessMetrics* _metrics;
	RTMetricManager* _metricManager;
	RTAuthorizationManager* _authorizationManager;
	RTWiFiManager* _wifiManager;
	CLLocation* _lastLocationAnyPositive;
	CLLocation* _lastLocationLessThan200m;
	CLLocation* _lastLocationLessThan55m;
	CLLocation* _lastLocationLessThan20m;
	CLLocation* _lastLocationLessThan10m;
	NSDate* _scheduledHeartbeatFiringTime;
	NSDate* _scheduledRestTimerFiringTime;
	RTLocationAwarenessManagerConfig* _config;
	NSMapTable* _requesterToHeartbeatBucket;
	NSMapTable* _heartbeatBucketToRequesters;
	RTLocationManager* _locationManager;
	NSObject*<OS_dispatch_source> _heartbeatTimer;
	NSObject*<OS_dispatch_source> _restTimer;
	NSDate* _activeOnset;
	NSNumber* _minHeartbeatBucket;
	CLLocation* _lastValidLocation;
	RTMotionActivityManager* _motionActivityManager;
	RTPowerAssertion* _xpcActivityPowerAssertion;
	RTXPCActivityManager* _xpcActivityManager;
	NSDate* _stationaryStartTimestamp;
	RTInvocationDispatcher* _heartbeatBuffer;

}

@property (nonatomic,retain) RTLocationAwarenessMetrics * metrics;                         //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                              //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTWiFiManager * wifiManager;                                  //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocationAnyPositive;                         //@synthesize lastLocationAnyPositive=_lastLocationAnyPositive - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocationLessThan200m;                        //@synthesize lastLocationLessThan200m=_lastLocationLessThan200m - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocationLessThan55m;                         //@synthesize lastLocationLessThan55m=_lastLocationLessThan55m - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocationLessThan20m;                         //@synthesize lastLocationLessThan20m=_lastLocationLessThan20m - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocationLessThan10m;                         //@synthesize lastLocationLessThan10m=_lastLocationLessThan10m - In the implementation block
@property (nonatomic,retain) NSDate * scheduledHeartbeatFiringTime;                        //@synthesize scheduledHeartbeatFiringTime=_scheduledHeartbeatFiringTime - In the implementation block
@property (nonatomic,retain) NSDate * scheduledRestTimerFiringTime;                        //@synthesize scheduledRestTimerFiringTime=_scheduledRestTimerFiringTime - In the implementation block
@property (assign,nonatomic) BOOL activeRequestInterrupted;                                //@synthesize activeRequestInterrupted=_activeRequestInterrupted - In the implementation block
@property (assign,nonatomic) BOOL activeRequestFulfilled;                                  //@synthesize activeRequestFulfilled=_activeRequestFulfilled - In the implementation block
@property (assign,nonatomic) BOOL activeRequestCoarseLocationReceived;                     //@synthesize activeRequestCoarseLocationReceived=_activeRequestCoarseLocationReceived - In the implementation block
@property (assign,nonatomic) BOOL activeRequestLocationServiceOn;                          //@synthesize activeRequestLocationServiceOn=_activeRequestLocationServiceOn - In the implementation block
@property (assign,nonatomic) BOOL activeRequestRoutineOn;                                  //@synthesize activeRequestRoutineOn=_activeRequestRoutineOn - In the implementation block
@property (assign,nonatomic) BOOL activeRequestWifiOn;                                     //@synthesize activeRequestWifiOn=_activeRequestWifiOn - In the implementation block
@property (nonatomic,readonly) RTLocationAwarenessManagerConfig * config;                  //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSMapTable * requesterToHeartbeatBucket;                      //@synthesize requesterToHeartbeatBucket=_requesterToHeartbeatBucket - In the implementation block
@property (nonatomic,retain) NSMapTable * heartbeatBucketToRequesters;                     //@synthesize heartbeatBucketToRequesters=_heartbeatBucketToRequesters - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                          //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> heartbeatTimer;                 //@synthesize heartbeatTimer=_heartbeatTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> restTimer;                      //@synthesize restTimer=_restTimer - In the implementation block
@property (nonatomic,copy) NSDate * activeOnset;                                           //@synthesize activeOnset=_activeOnset - In the implementation block
@property (nonatomic,retain) NSNumber * minHeartbeatBucket;                                //@synthesize minHeartbeatBucket=_minHeartbeatBucket - In the implementation block
@property (nonatomic,retain) CLLocation * lastValidLocation;                               //@synthesize lastValidLocation=_lastValidLocation - In the implementation block
@property (nonatomic,retain) RTMotionActivityManager * motionActivityManager;              //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,retain) RTPowerAssertion * xpcActivityPowerAssertion;                 //@synthesize xpcActivityPowerAssertion=_xpcActivityPowerAssertion - In the implementation block
@property (nonatomic,retain) RTXPCActivityManager * xpcActivityManager;                    //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
@property (nonatomic,copy) NSDate * stationaryStartTimestamp;                              //@synthesize stationaryStartTimestamp=_stationaryStartTimestamp - In the implementation block
@property (nonatomic,copy) RTInvocationDispatcher * heartbeatBuffer;                       //@synthesize heartbeatBuffer=_heartbeatBuffer - In the implementation block
+(id)powerAssertion;
+(long long)localHourFromTimestamp:(id)arg1 ;
+(id)createDefaultDispatchTimerWithQueue:(id)arg1 ;
+(void)invalidateDispatchTimer:(id)arg1 ;
+(void)pauseDispatchTimer:(id)arg1 ;
-(void)setActiveRequestInterrupted:(BOOL)arg1 ;
-(BOOL)activeRequestInterrupted;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(void)_setup;
-(RTWiFiManager *)wifiManager;
-(RTLocationManager *)locationManager;
-(RTAuthorizationManager *)authorizationManager;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(void)_shutdown;
-(RTMetricManager *)metricManager;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(void)setWifiManager:(RTWiFiManager *)arg1 ;
-(id)initWithLocationManager:(id)arg1 config:(id)arg2 metricManager:(id)arg3 motionActivityManager:(id)arg4 authorizationManager:(id)arg5 wifiManager:(id)arg6 xpcActivityManager:(id)arg7 ;
-(RTMotionActivityManager *)motionActivityManager;
-(RTXPCActivityManager *)xpcActivityManager;
-(void)setXpcActivityManager:(RTXPCActivityManager *)arg1 ;
-(void)setMotionActivityManager:(RTMotionActivityManager *)arg1 ;
-(BOOL)addLocationHeartbeatRequester:(id)arg1 interval:(double)arg2 error:(id*)arg3 ;
-(void)removeLocationHeartbeatRequester:(id)arg1 ;
-(CLLocation *)lastLocationAnyPositive;
-(id)updateWithLocation:(id)arg1 oneIntervalHistogram:(id)arg2 lastLocation:(id)arg3 ;
-(void)setLastLocationAnyPositive:(CLLocation *)arg1 ;
-(CLLocation *)lastLocationLessThan200m;
-(void)setLastLocationLessThan200m:(CLLocation *)arg1 ;
-(CLLocation *)lastLocationLessThan55m;
-(void)setLastLocationLessThan55m:(CLLocation *)arg1 ;
-(CLLocation *)lastLocationLessThan20m;
-(void)setLastLocationLessThan20m:(CLLocation *)arg1 ;
-(CLLocation *)lastLocationLessThan10m;
-(void)setLastLocationLessThan10m:(CLLocation *)arg1 ;
-(double)metricAge;
-(BOOL)activeRequestInterruptedCheck;
-(void)setActiveRequestRoutineOn:(BOOL)arg1 ;
-(void)setActiveRequestWifiOn:(BOOL)arg1 ;
-(void)setActiveRequestLocationServiceOn:(BOOL)arg1 ;
-(void)logActiveRequestStatus;
-(void)incrementBasicHistogram:(id)arg1 forTimestamp:(id)arg2 ;
-(BOOL)activeRequestFulfilled;
-(BOOL)activeRequestCoarseLocationReceived;
-(BOOL)activeRequestLocationServiceOn;
-(BOOL)activeRequestRoutineOn;
-(BOOL)activeRequestWifiOn;
-(void)resetActiveRequestSummaryVariables;
-(void)setActiveOnset:(NSDate *)arg1 ;
-(RTInvocationDispatcher *)heartbeatBuffer;
-(NSDate *)scheduledRestTimerFiringTime;
-(void)setActiveRequestFulfilled:(BOOL)arg1 ;
-(void)setActiveRequestCoarseLocationReceived:(BOOL)arg1 ;
-(void)updateLocationAwarenessHistogramsWithLocations:(id)arg1 ;
-(void)considerSubmittingCurrentMetrics;
-(void)updateHeartbeatTimerDelayForTimestamp:(id)arg1 withDelay:(double)arg2 ;
-(void)considerUpdateActiveRequestMetrics;
-(void)onLeechedLocationNotification:(id)arg1 ;
-(void)onMotionActivityManagerNotificationActivityNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)heartbeatTimer;
-(NSObject*<OS_dispatch_source>)restTimer;
-(void)onRest;
-(BOOL)validInterval:(double)arg1 ;
-(id)heartbeatBucketForInterval:(double)arg1 ;
-(NSMapTable *)requesterToHeartbeatBucket;
-(NSMapTable *)heartbeatBucketToRequesters;
-(void)updateMinHeartbeatBucket;
-(void)_updateXPCActivityForObserverCount:(unsigned long long)arg1 ;
-(void)setXpcActivityPowerAssertion:(RTPowerAssertion *)arg1 ;
-(void)hourlySingleShotWithHandler:(/*^block*/id)arg1 ;
-(void)setMinHeartbeatBucket:(NSNumber *)arg1 ;
-(void)adjustHeartbeatTimer;
-(NSNumber *)minHeartbeatBucket;
-(double)intervalForHeartbeatBucket:(id)arg1 ;
-(double)starvingDurationTillNow;
-(double)nextFiringDelayWithHeartbeatInterval:(double)arg1 starvingDuration:(double)arg2 ;
-(NSDate *)activeOnset;
-(void)considerRequestingForLocation;
-(void)onHeartbeat;
-(void)resetOneShotDispatchTimer:(id)arg1 withStart:(unsigned long long)arg2 eventHandler:(/*^block*/id)arg3 ;
-(void)setScheduledHeartbeatFiringTime:(NSDate *)arg1 ;
-(void)heartbeatTasks;
-(void)considerUpdatingHeartbeatDelayMetrics;
-(NSDate *)scheduledHeartbeatFiringTime;
-(CLLocation *)lastValidLocation;
-(NSDate *)stationaryStartTimestamp;
-(void)onNoOpLocationNotification:(id)arg1 ;
-(void)setScheduledRestTimerFiringTime:(NSDate *)arg1 ;
-(BOOL)validLocation:(id)arg1 ;
-(BOOL)coarseLocation:(id)arg1 ;
-(void)setLastValidLocation:(CLLocation *)arg1 ;
-(void)setStationaryStartTimestamp:(NSDate *)arg1 ;
-(void)setRequesterToHeartbeatBucket:(NSMapTable *)arg1 ;
-(void)setHeartbeatBucketToRequesters:(NSMapTable *)arg1 ;
-(void)setHeartbeatTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setRestTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(RTPowerAssertion *)xpcActivityPowerAssertion;
-(void)setHeartbeatBuffer:(RTInvocationDispatcher *)arg1 ;
-(id)init;
-(void)setMetrics:(RTLocationAwarenessMetrics *)arg1 ;
-(RTLocationAwarenessMetrics *)metrics;
-(RTLocationAwarenessManagerConfig *)config;
@end

