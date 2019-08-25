/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLogMsgEventBatchTrafficProbe, GEOLogMsgEventCacheHit, GEOLogMsgEventClientACSuggestions, GEOLogMsgEventCommuteWindow, GEOLogMsgEventDirections, GEOLogMsgEventFullNavTrace, GEOLogMsgEventGenericAppError, GEOLogMsgEventGridDuration, GEOLogMsgEventListInteractionSession, GEOLogMsgEventLogFramework, NSMutableArray, GEOLogMsgEventMapLaunch, GEOLogMsgEventMapsWidgetsInteractionSession, GEOLogMsgEventNetwork, GEOLogMsgEventParkedCar, GEOLogMsgEventPlaceDataCache, GEOLogMsgEventProactiveSuggestionInteractionSession, GEOLogMsgEventRealtimeTrafficProbe, GEOLogMsgEventRefineSearchSession, LOGMSGEVENTLogMsgEventRideBookedSession, LOGMSGEVENTLogMsgEventRideBookingSession, GEOLogMsgEventStaleResource, GEOLogMsgEventStateTiming, LOGMSGEVENTLogMsgEventTableBookedSession, LOGMSGEVENTLogMsgEventTableBookingSession, GEOLogMsgEventTelemetric, GEOLogMsgEventTileCacheAnalytic, GEOLogMsgEventTileSetState, GEOLogMsgEventTimeToLeaveHypothesis, GEOLogMsgEventTimeToLeaveInitialTravelTime, GEOLogMsgEventTransitAppLaunch, GEOLogMsgEventUserAction, GEOLogMsgEventWifiConnectionQualityProbe;

@interface GEOLogMsgEvent : PBCodable <NSCopying> {

	double _usageEventTime;
	GEOLogMsgEventBatchTrafficProbe* _batchTrafficProbeCollection;
	GEOLogMsgEventCacheHit* _cacheHitEvent;
	GEOLogMsgEventClientACSuggestions* _clientAcSuggestions;
	GEOLogMsgEventCommuteWindow* _commuteWindow;
	GEOLogMsgEventDirections* _directionsEvent;
	int _eventType;
	GEOLogMsgEventFullNavTrace* _fullNavTrace;
	GEOLogMsgEventGenericAppError* _genericAppErrorEvent;
	GEOLogMsgEventGridDuration* _gridDuration;
	GEOLogMsgEventListInteractionSession* _listInteractionSession;
	GEOLogMsgEventLogFramework* _logFrameworkEvent;
	NSMutableArray* _logMsgStates;
	GEOLogMsgEventMapLaunch* _mapLaunchEvent;
	GEOLogMsgEventMapsWidgetsInteractionSession* _mapsWidgetsInteractionSession;
	GEOLogMsgEventNetwork* _networkEvent;
	GEOLogMsgEventParkedCar* _parkedCar;
	GEOLogMsgEventPlaceDataCache* _placeDataCacheEvent;
	GEOLogMsgEventProactiveSuggestionInteractionSession* _proactiveSuggestionInteractionSessionEvent;
	GEOLogMsgEventRealtimeTrafficProbe* _realtimeTrafficProbeCollection;
	GEOLogMsgEventRefineSearchSession* _refineSearchSession;
	LOGMSGEVENTLogMsgEventRideBookedSession* _rideBookedSession;
	LOGMSGEVENTLogMsgEventRideBookingSession* _rideBookingSession;
	GEOLogMsgEventStaleResource* _staleResourceEvent;
	GEOLogMsgEventStateTiming* _stateTimingEvent;
	LOGMSGEVENTLogMsgEventTableBookedSession* _tableBookedSession;
	LOGMSGEVENTLogMsgEventTableBookingSession* _tableBookingSession;
	GEOLogMsgEventTelemetric* _telemetric;
	GEOLogMsgEventTileCacheAnalytic* _tileCacheAnalytic;
	GEOLogMsgEventTileSetState* _tileSetStateEvent;
	GEOLogMsgEventTimeToLeaveHypothesis* _timeToLeaveHypothesisEvent;
	GEOLogMsgEventTimeToLeaveInitialTravelTime* _timeToLeaveInitialTravelTimeEvent;
	GEOLogMsgEventTransitAppLaunch* _transitAppLaunchEvent;
	GEOLogMsgEventUserAction* _userActionEvent;
	GEOLogMsgEventWifiConnectionQualityProbe* _wifiConnectionQualityProbeEvent;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasUsageEventTime; 
@property (assign,nonatomic) double usageEventTime; 
@property (nonatomic,retain) NSMutableArray * logMsgStates;                                                                                 //@synthesize logMsgStates=_logMsgStates - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                                                                                 //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActionEvent; 
@property (nonatomic,retain) GEOLogMsgEventUserAction * userActionEvent;                                                                    //@synthesize userActionEvent=_userActionEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasStateTimingEvent; 
@property (nonatomic,retain) GEOLogMsgEventStateTiming * stateTimingEvent;                                                                  //@synthesize stateTimingEvent=_stateTimingEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasTileSetStateEvent; 
@property (nonatomic,retain) GEOLogMsgEventTileSetState * tileSetStateEvent;                                                                //@synthesize tileSetStateEvent=_tileSetStateEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceDataCacheEvent; 
@property (nonatomic,retain) GEOLogMsgEventPlaceDataCache * placeDataCacheEvent;                                                            //@synthesize placeDataCacheEvent=_placeDataCacheEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkEvent; 
@property (nonatomic,retain) GEOLogMsgEventNetwork * networkEvent;                                                                          //@synthesize networkEvent=_networkEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasCacheHitEvent; 
@property (nonatomic,retain) GEOLogMsgEventCacheHit * cacheHitEvent;                                                                        //@synthesize cacheHitEvent=_cacheHitEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsEvent; 
@property (nonatomic,retain) GEOLogMsgEventDirections * directionsEvent;                                                                    //@synthesize directionsEvent=_directionsEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitAppLaunchEvent; 
@property (nonatomic,retain) GEOLogMsgEventTransitAppLaunch * transitAppLaunchEvent;                                                        //@synthesize transitAppLaunchEvent=_transitAppLaunchEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeToLeaveHypothesisEvent; 
@property (nonatomic,retain) GEOLogMsgEventTimeToLeaveHypothesis * timeToLeaveHypothesisEvent;                                              //@synthesize timeToLeaveHypothesisEvent=_timeToLeaveHypothesisEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeToLeaveInitialTravelTimeEvent; 
@property (nonatomic,retain) GEOLogMsgEventTimeToLeaveInitialTravelTime * timeToLeaveInitialTravelTimeEvent;                                //@synthesize timeToLeaveInitialTravelTimeEvent=_timeToLeaveInitialTravelTimeEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasLogFrameworkEvent; 
@property (nonatomic,retain) GEOLogMsgEventLogFramework * logFrameworkEvent;                                                                //@synthesize logFrameworkEvent=_logFrameworkEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsWidgetsInteractionSession; 
@property (nonatomic,retain) GEOLogMsgEventMapsWidgetsInteractionSession * mapsWidgetsInteractionSession;                                   //@synthesize mapsWidgetsInteractionSession=_mapsWidgetsInteractionSession - In the implementation block
@property (nonatomic,readonly) BOOL hasListInteractionSession; 
@property (nonatomic,retain) GEOLogMsgEventListInteractionSession * listInteractionSession;                                                 //@synthesize listInteractionSession=_listInteractionSession - In the implementation block
@property (nonatomic,readonly) BOOL hasRefineSearchSession; 
@property (nonatomic,retain) GEOLogMsgEventRefineSearchSession * refineSearchSession;                                                       //@synthesize refineSearchSession=_refineSearchSession - In the implementation block
@property (nonatomic,readonly) BOOL hasProactiveSuggestionInteractionSessionEvent; 
@property (nonatomic,retain) GEOLogMsgEventProactiveSuggestionInteractionSession * proactiveSuggestionInteractionSessionEvent;              //@synthesize proactiveSuggestionInteractionSessionEvent=_proactiveSuggestionInteractionSessionEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasMapLaunchEvent; 
@property (nonatomic,retain) GEOLogMsgEventMapLaunch * mapLaunchEvent;                                                                      //@synthesize mapLaunchEvent=_mapLaunchEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasRideBookingSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventRideBookingSession * rideBookingSession;                                                 //@synthesize rideBookingSession=_rideBookingSession - In the implementation block
@property (nonatomic,readonly) BOOL hasRideBookedSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventRideBookedSession * rideBookedSession;                                                   //@synthesize rideBookedSession=_rideBookedSession - In the implementation block
@property (nonatomic,readonly) BOOL hasTableBookingSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventTableBookingSession * tableBookingSession;                                               //@synthesize tableBookingSession=_tableBookingSession - In the implementation block
@property (nonatomic,readonly) BOOL hasTableBookedSession; 
@property (nonatomic,retain) LOGMSGEVENTLogMsgEventTableBookedSession * tableBookedSession;                                                 //@synthesize tableBookedSession=_tableBookedSession - In the implementation block
@property (nonatomic,readonly) BOOL hasStaleResourceEvent; 
@property (nonatomic,retain) GEOLogMsgEventStaleResource * staleResourceEvent;                                                              //@synthesize staleResourceEvent=_staleResourceEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasFullNavTrace; 
@property (nonatomic,retain) GEOLogMsgEventFullNavTrace * fullNavTrace;                                                                     //@synthesize fullNavTrace=_fullNavTrace - In the implementation block
@property (nonatomic,readonly) BOOL hasTelemetric; 
@property (nonatomic,retain) GEOLogMsgEventTelemetric * telemetric;                                                                         //@synthesize telemetric=_telemetric - In the implementation block
@property (nonatomic,readonly) BOOL hasClientAcSuggestions; 
@property (nonatomic,retain) GEOLogMsgEventClientACSuggestions * clientAcSuggestions;                                                       //@synthesize clientAcSuggestions=_clientAcSuggestions - In the implementation block
@property (nonatomic,readonly) BOOL hasRealtimeTrafficProbeCollection; 
@property (nonatomic,retain) GEOLogMsgEventRealtimeTrafficProbe * realtimeTrafficProbeCollection;                                           //@synthesize realtimeTrafficProbeCollection=_realtimeTrafficProbeCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasBatchTrafficProbeCollection; 
@property (nonatomic,retain) GEOLogMsgEventBatchTrafficProbe * batchTrafficProbeCollection;                                                 //@synthesize batchTrafficProbeCollection=_batchTrafficProbeCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasCommuteWindow; 
@property (nonatomic,retain) GEOLogMsgEventCommuteWindow * commuteWindow;                                                                   //@synthesize commuteWindow=_commuteWindow - In the implementation block
@property (nonatomic,readonly) BOOL hasGenericAppErrorEvent; 
@property (nonatomic,retain) GEOLogMsgEventGenericAppError * genericAppErrorEvent;                                                          //@synthesize genericAppErrorEvent=_genericAppErrorEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasWifiConnectionQualityProbeEvent; 
@property (nonatomic,retain) GEOLogMsgEventWifiConnectionQualityProbe * wifiConnectionQualityProbeEvent;                                    //@synthesize wifiConnectionQualityProbeEvent=_wifiConnectionQualityProbeEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasParkedCar; 
@property (nonatomic,retain) GEOLogMsgEventParkedCar * parkedCar;                                                                           //@synthesize parkedCar=_parkedCar - In the implementation block
@property (nonatomic,readonly) BOOL hasTileCacheAnalytic; 
@property (nonatomic,retain) GEOLogMsgEventTileCacheAnalytic * tileCacheAnalytic;                                                           //@synthesize tileCacheAnalytic=_tileCacheAnalytic - In the implementation block
@property (nonatomic,readonly) BOOL hasGridDuration; 
@property (nonatomic,retain) GEOLogMsgEventGridDuration * gridDuration;                                                                     //@synthesize gridDuration=_gridDuration - In the implementation block
+(Class)logMsgStateType;
+(void)_initializeAcceptedLogMsgStateTypes;
+(id)acceptedLogMsgStates;
+(id)acceptedLogMsgStatesForLogMsgEventType:(int)arg1 ;
+(BOOL)logMsgEventType:(int)arg1 acceptsLogMsgStateType:(int)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setEventType:(int)arg1 ;
-(void)setUserActionEvent:(GEOLogMsgEventUserAction *)arg1 ;
-(GEOLogMsgEventUserAction *)userActionEvent;
-(void)setMapLaunchEvent:(GEOLogMsgEventMapLaunch *)arg1 ;
-(GEOLogMsgEventMapLaunch *)mapLaunchEvent;
-(void)setStaleResourceEvent:(GEOLogMsgEventStaleResource *)arg1 ;
-(double)usageEventTime;
-(GEOLogMsgEventStaleResource *)staleResourceEvent;
-(void)setStateTimingEvent:(GEOLogMsgEventStateTiming *)arg1 ;
-(GEOLogMsgEventStateTiming *)stateTimingEvent;
-(void)setTileSetStateEvent:(GEOLogMsgEventTileSetState *)arg1 ;
-(GEOLogMsgEventTileSetState *)tileSetStateEvent;
-(void)setPlaceDataCacheEvent:(GEOLogMsgEventPlaceDataCache *)arg1 ;
-(GEOLogMsgEventPlaceDataCache *)placeDataCacheEvent;
-(void)setNetworkEvent:(GEOLogMsgEventNetwork *)arg1 ;
-(GEOLogMsgEventNetwork *)networkEvent;
-(void)setGridDuration:(GEOLogMsgEventGridDuration *)arg1 ;
-(GEOLogMsgEventGridDuration *)gridDuration;
-(void)setGenericAppErrorEvent:(GEOLogMsgEventGenericAppError *)arg1 ;
-(GEOLogMsgEventGenericAppError *)genericAppErrorEvent;
-(void)setCacheHitEvent:(GEOLogMsgEventCacheHit *)arg1 ;
-(GEOLogMsgEventCacheHit *)cacheHitEvent;
-(void)setDirectionsEvent:(GEOLogMsgEventDirections *)arg1 ;
-(GEOLogMsgEventDirections *)directionsEvent;
-(void)setTransitAppLaunchEvent:(GEOLogMsgEventTransitAppLaunch *)arg1 ;
-(GEOLogMsgEventTransitAppLaunch *)transitAppLaunchEvent;
-(void)setTimeToLeaveHypothesisEvent:(GEOLogMsgEventTimeToLeaveHypothesis *)arg1 ;
-(GEOLogMsgEventTimeToLeaveHypothesis *)timeToLeaveHypothesisEvent;
-(void)setTimeToLeaveInitialTravelTimeEvent:(GEOLogMsgEventTimeToLeaveInitialTravelTime *)arg1 ;
-(GEOLogMsgEventTimeToLeaveInitialTravelTime *)timeToLeaveInitialTravelTimeEvent;
-(void)setLogFrameworkEvent:(GEOLogMsgEventLogFramework *)arg1 ;
-(GEOLogMsgEventLogFramework *)logFrameworkEvent;
-(int)eventType;
-(void)setListInteractionSession:(GEOLogMsgEventListInteractionSession *)arg1 ;
-(GEOLogMsgEventListInteractionSession *)listInteractionSession;
-(void)setRefineSearchSession:(GEOLogMsgEventRefineSearchSession *)arg1 ;
-(GEOLogMsgEventRefineSearchSession *)refineSearchSession;
-(void)setMapsWidgetsInteractionSession:(GEOLogMsgEventMapsWidgetsInteractionSession *)arg1 ;
-(GEOLogMsgEventMapsWidgetsInteractionSession *)mapsWidgetsInteractionSession;
-(void)setProactiveSuggestionInteractionSessionEvent:(GEOLogMsgEventProactiveSuggestionInteractionSession *)arg1 ;
-(GEOLogMsgEventProactiveSuggestionInteractionSession *)proactiveSuggestionInteractionSessionEvent;
-(void)setCommuteWindow:(GEOLogMsgEventCommuteWindow *)arg1 ;
-(GEOLogMsgEventCommuteWindow *)commuteWindow;
-(void)setRideBookingSession:(LOGMSGEVENTLogMsgEventRideBookingSession *)arg1 ;
-(void)setRideBookedSession:(LOGMSGEVENTLogMsgEventRideBookedSession *)arg1 ;
-(void)setTableBookingSession:(LOGMSGEVENTLogMsgEventTableBookingSession *)arg1 ;
-(void)setTableBookedSession:(LOGMSGEVENTLogMsgEventTableBookedSession *)arg1 ;
-(void)setFullNavTrace:(GEOLogMsgEventFullNavTrace *)arg1 ;
-(void)setTelemetric:(GEOLogMsgEventTelemetric *)arg1 ;
-(GEOLogMsgEventTelemetric *)telemetric;
-(void)setClientAcSuggestions:(GEOLogMsgEventClientACSuggestions *)arg1 ;
-(GEOLogMsgEventClientACSuggestions *)clientAcSuggestions;
-(void)setWifiConnectionQualityProbeEvent:(GEOLogMsgEventWifiConnectionQualityProbe *)arg1 ;
-(GEOLogMsgEventWifiConnectionQualityProbe *)wifiConnectionQualityProbeEvent;
-(void)setRealtimeTrafficProbeCollection:(GEOLogMsgEventRealtimeTrafficProbe *)arg1 ;
-(GEOLogMsgEventRealtimeTrafficProbe *)realtimeTrafficProbeCollection;
-(void)setBatchTrafficProbeCollection:(GEOLogMsgEventBatchTrafficProbe *)arg1 ;
-(GEOLogMsgEventBatchTrafficProbe *)batchTrafficProbeCollection;
-(void)setParkedCar:(GEOLogMsgEventParkedCar *)arg1 ;
-(GEOLogMsgEventParkedCar *)parkedCar;
-(void)setTileCacheAnalytic:(GEOLogMsgEventTileCacheAnalytic *)arg1 ;
-(GEOLogMsgEventTileCacheAnalytic *)tileCacheAnalytic;
-(NSMutableArray *)logMsgStates;
-(void)unregisterLogMsgStateOfType:(int)arg1 ;
-(id)logMsgStateOfType:(int)arg1 ;
-(BOOL)acceptsLogMsgStateType:(int)arg1 ;
-(void)addLogMsgState:(id)arg1 ;
-(void)setUsageEventTime:(double)arg1 ;
-(void)unregisterLogMsgStatesOfTypes:(id)arg1 ;
-(unsigned long long)logMsgStatesCount;
-(void)clearLogMsgStates;
-(id)logMsgStateAtIndex:(unsigned long long)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(BOOL)hasUserActionEvent;
-(BOOL)hasStateTimingEvent;
-(BOOL)hasTileSetStateEvent;
-(BOOL)hasPlaceDataCacheEvent;
-(BOOL)hasNetworkEvent;
-(BOOL)hasCacheHitEvent;
-(BOOL)hasDirectionsEvent;
-(BOOL)hasTransitAppLaunchEvent;
-(BOOL)hasTimeToLeaveHypothesisEvent;
-(BOOL)hasTimeToLeaveInitialTravelTimeEvent;
-(BOOL)hasLogFrameworkEvent;
-(BOOL)hasMapsWidgetsInteractionSession;
-(BOOL)hasListInteractionSession;
-(BOOL)hasRefineSearchSession;
-(BOOL)hasProactiveSuggestionInteractionSessionEvent;
-(BOOL)hasMapLaunchEvent;
-(BOOL)hasRideBookingSession;
-(BOOL)hasRideBookedSession;
-(BOOL)hasTableBookingSession;
-(BOOL)hasTableBookedSession;
-(BOOL)hasStaleResourceEvent;
-(BOOL)hasFullNavTrace;
-(BOOL)hasTelemetric;
-(BOOL)hasClientAcSuggestions;
-(BOOL)hasRealtimeTrafficProbeCollection;
-(BOOL)hasBatchTrafficProbeCollection;
-(BOOL)hasCommuteWindow;
-(BOOL)hasGenericAppErrorEvent;
-(BOOL)hasWifiConnectionQualityProbeEvent;
-(BOOL)hasParkedCar;
-(BOOL)hasTileCacheAnalytic;
-(BOOL)hasGridDuration;
-(void)setLogMsgStates:(NSMutableArray *)arg1 ;
-(LOGMSGEVENTLogMsgEventRideBookingSession *)rideBookingSession;
-(LOGMSGEVENTLogMsgEventRideBookedSession *)rideBookedSession;
-(LOGMSGEVENTLogMsgEventTableBookingSession *)tableBookingSession;
-(LOGMSGEVENTLogMsgEventTableBookedSession *)tableBookedSession;
-(GEOLogMsgEventFullNavTrace *)fullNavTrace;
-(void)setHasUsageEventTime:(BOOL)arg1 ;
-(BOOL)hasUsageEventTime;
-(unsigned long long)numberOfLogMsgStatesOfType:(int)arg1 ;
-(unsigned long long)numberOfLogMsgStatesOfType:(int)arg1 stateOrigin:(id)arg2 ;
-(id)logMsgStateOfType:(int)arg1 stateOrigin:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

