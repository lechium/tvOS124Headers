/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_queue;
@class NSObject, RTLocationStore, RTLearnedLocationManager, RTDefaultsManager, RTPersistenceManager, RTMapAccess, RTPlatform, RTBBDataProvider, RTMetricManager, RTReachabilityManager, RTGeoRouteStore, RTMotionActivityManager, RTBatteryManager, NSString;

@interface RTRouteManager : NSObject <RTPurgable> {

	BOOL _learningInProgress;
	BOOL _allowPersistRoutes;
	BOOL _chargerConnected;
	NSObject*<OS_dispatch_queue> _queue;
	RTLocationStore* _locationStore;
	RTLearnedLocationManager* _learnedLocationManager;
	RTDefaultsManager* _defaultsManager;
	RTPersistenceManager* _persistenceManager;
	Class _routeFinderClass;
	RTMapAccess* _mapAccess;
	RTPlatform* _platform;
	RTBBDataProvider* _bbDataProvider;
	RTMetricManager* _metricManager;
	RTReachabilityManager* _reachabilityManager;
	RTGeoRouteStore* _geoRouteStore;
	RTMotionActivityManager* _motionActivityManager;
	RTBatteryManager* _batteryManager;
	double _minMotionAutomotiveRatio;
	double _sampleRateForLearning;
	double _maxLocationUncertainty;
	long long _reachability;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTLocationStore * locationStore;                                //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;              //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                            //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                      //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) Class routeFinderClass;                                         //@synthesize routeFinderClass=_routeFinderClass - In the implementation block
@property (nonatomic,retain) RTMapAccess * mapAccess;                                        //@synthesize mapAccess=_mapAccess - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                          //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTBBDataProvider * bbDataProvider;                              //@synthesize bbDataProvider=_bbDataProvider - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTReachabilityManager * reachabilityManager;                    //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,retain) RTGeoRouteStore * geoRouteStore;                                //@synthesize geoRouteStore=_geoRouteStore - In the implementation block
@property (nonatomic,retain) RTMotionActivityManager * motionActivityManager;                //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,retain) RTBatteryManager * batteryManager;                              //@synthesize batteryManager=_batteryManager - In the implementation block
@property (assign,nonatomic) BOOL learningInProgress;                                        //@synthesize learningInProgress=_learningInProgress - In the implementation block
@property (assign,nonatomic) double minMotionAutomotiveRatio;                                //@synthesize minMotionAutomotiveRatio=_minMotionAutomotiveRatio - In the implementation block
@property (assign,nonatomic) double sampleRateForLearning;                                   //@synthesize sampleRateForLearning=_sampleRateForLearning - In the implementation block
@property (assign,nonatomic) double maxLocationUncertainty;                                  //@synthesize maxLocationUncertainty=_maxLocationUncertainty - In the implementation block
@property (assign,nonatomic) BOOL allowPersistRoutes;                                        //@synthesize allowPersistRoutes=_allowPersistRoutes - In the implementation block
@property (assign,nonatomic) long long reachability;                                         //@synthesize reachability=_reachability - In the implementation block
@property (assign,nonatomic) BOOL chargerConnected;                                          //@synthesize chargerConnected=_chargerConnected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)_setup;
-(long long)reachability;
-(void)setReachability:(long long)arg1 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)shutdown;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(RTMetricManager *)metricManager;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(void)fetchRoutesBetweenStartDate:(id)arg1 endDate:(id)arg2 includeLocations:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)removeRoutesAssociatedToVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)sortRoutes:(id)arg1 toLocationOfInterestWithIdentifier:(id)arg2 fromLocation:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)fetchAllRoutesWithHandler:(/*^block*/id)arg1 includeLocations:(BOOL)arg2 ;
-(RTLocationStore *)locationStore;
-(void)setLocationStore:(RTLocationStore *)arg1 ;
-(id)initWithLocationStore:(id)arg1 learnedLocationManager:(id)arg2 defaultsManager:(id)arg3 persistenceManager:(id)arg4 routeFinderClass:(Class)arg5 platform:(id)arg6 bbDataProvider:(id)arg7 metricManager:(id)arg8 reachabilityManager:(id)arg9 geoRouteStore:(id)arg10 motionActivityManager:(id)arg11 batteryManager:(id)arg12 ;
-(RTMapAccess *)mapAccess;
-(void)setMapAccess:(RTMapAccess *)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(RTMotionActivityManager *)motionActivityManager;
-(void)purgeManager:(id)arg1 performPurgeOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)setMotionActivityManager:(RTMotionActivityManager *)arg1 ;
-(void)onLearnedLocationManagerNotification:(id)arg1 ;
-(void)fetchRoutesToLocationOfInterestWithIdentifier:(id)arg1 fromLocationOfInterestWithIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)learnRoutesBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)injectRoutes:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)clearAllRoutesWithHandler:(/*^block*/id)arg1 ;
-(RTBatteryManager *)batteryManager;
-(void)onBatteryNotification:(id)arg1 ;
-(RTReachabilityManager *)reachabilityManager;
-(void)setBatteryManager:(RTBatteryManager *)arg1 ;
-(void)setReachabilityManager:(RTReachabilityManager *)arg1 ;
-(void)onReachabilityNotification:(id)arg1 ;
-(void)setChargerConnected:(BOOL)arg1 ;
-(void)_fetchRoutesToLocationOfInterestWithIdentifier:(id)arg1 fromLocationOfInterestWithIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchRoutesWithPredicate:(id)arg1 includeLocations:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchRoutesBetweenStartDate:(id)arg1 endDate:(id)arg2 includeLocations:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchAllRoutesWithHandler:(/*^block*/id)arg1 includeLocations:(BOOL)arg2 ;
-(id)_locationOfInterestForVisit:(id)arg1 fromLocationsOfInterest:(id)arg2 ;
-(void)_statsForLocations:(id)arg1 typeDistribution:(id*)arg2 majorGapLength:(double*)arg3 ;
-(double)maxLocationUncertainty;
-(BOOL)chargerConnected;
-(void)_learnRoutesForTransitions:(id)arg1 currentTransitionIndex:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_learnRouteForTransition:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_sampledForLearning;
-(Class)routeFinderClass;
-(void)_submitMetricLearnedRouteInstanceWithNumberOfInputLocations:(int)arg1 numberOfFilteredLocations:(int)arg2 length:(int)arg3 recoveryTime:(int)arg4 failureReason:(int)arg5 latitude:(double)arg6 longitude:(double)arg7 majorGapLength:(int)arg8 locationTypeDistribution:(id)arg9 roadClassDistribution:(id)arg10 ;
-(RTGeoRouteStore *)geoRouteStore;
-(BOOL)allowPersistRoutes;
-(void)_persistRoute:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_statsForRoute:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_learnRoutesBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(double)minMotionAutomotiveRatio;
-(void)_invalidateMapAccess;
-(void)_displayLivabilityAlertIfAppropriate;
-(void)_buildTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)learningInProgress;
-(void)setLearningInProgress:(BOOL)arg1 ;
-(void)_learnRoutesSinceLastProcessedDateWithHandler:(/*^block*/id)arg1 ;
-(void)_sortRoutes:(id)arg1 toLocationOfInterestWithIdentifier:(id)arg2 fromLocation:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_sortRoutes:(id)arg1 toLocationOfInterestWithIdentifier:(id)arg2 fromLocationOfInterestWithIdentifier:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_updateGeoRoutes:(id)arg1 toLocationOfInterestWithIdentifier:(id)arg2 fromLocationOfInterestWithIdentifier:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_submitMetricRankRoutesInstanceWithNumberOfInputRoutes:(int)arg1 highestRankedRouteScore:(int)arg2 ;
-(void)_injectRoutes:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_clearRoutesPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTBBDataProvider *)bbDataProvider;
-(double)sampleRateForLearning;
-(void)fetchPredictedRoutesToLocationOfInterestWithIdentifier:(id)arg1 fromLocation:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setRouteFinderClass:(Class)arg1 ;
-(void)setBbDataProvider:(RTBBDataProvider *)arg1 ;
-(void)setGeoRouteStore:(RTGeoRouteStore *)arg1 ;
-(void)setMinMotionAutomotiveRatio:(double)arg1 ;
-(void)setSampleRateForLearning:(double)arg1 ;
-(void)setMaxLocationUncertainty:(double)arg1 ;
-(void)setAllowPersistRoutes:(BOOL)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

