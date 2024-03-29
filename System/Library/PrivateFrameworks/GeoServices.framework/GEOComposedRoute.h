/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapAccessRestrictions.h>

@protocol GEOTransitRoutingIncidentMessage, GEOServerFormattedString;
@class NSHashTable, NSData, NSArray, NSString, NSDate, GEORoute, GEORouteSet, GEOMapRegion, NSMutableArray, GEOZilchDecoder, GEOTransitDecoderData, GEOTransitSuggestedRoute, GEOComposedWaypoint, GEORouteInitializerData, GEORouteAttributes, GEOStyleAttributes;

@interface GEOComposedRoute : NSObject <GEOMapAccessRestrictions> {

	NSHashTable* _observers;
	NSData* _pointData;
	BOOL _usesZilch;
	NSArray* _legs;
	NSArray* _composedGuidanceEvents;
	NSArray* _steps;
	NSString* _name;
	NSData* _routeID;
	unsigned _expectedTime;
	unsigned _distance;
	NSDate* _startDate;
	NSArray* _trafficIncidents;
	NSArray* _trafficIncidentOffsets;
	NSString* _trafficDescription;
	NSString* _longTrafficDescription;
	NSArray* _enrouteNotices;
	GEORoute* _geoRoute;
	GEORouteSet* _routeSet;
	NSArray* _maneuverDisplaySteps;
	BOOL _maneuverDisplayEnabled;
	unsigned long long _currentDisplayStep;
	double* _pointLengths;
	unsigned long long _selectedLegIndex;
	unsigned _firstVisiblePoint;
	GEOMapRegion* _boundingMapRegion;
	NSMutableArray* _sections;
	NSMutableArray* _snappedPaths;
	GEOZilchDecoder* _zilchDecoder;
	GEOTransitDecoderData* _decoderData;
	GEOTransitSuggestedRoute* _suggestedRoute;
	GEOTransitSuggestedRoute* _originalSuggestedRoute;
	NSArray* _routePlanningArtworks;
	id<GEOTransitRoutingIncidentMessage> _transitRoutingIncidentMessage;
	BOOL _shouldShowSchedule;
	NSArray* _rideSelections;
	NSArray* _currentSectionOptions;
	id<GEOServerFormattedString> _launchAndGoCardTitle;
	id<GEOServerFormattedString> _launchAndGoRouteTitle;
	id<GEOServerFormattedString> _launchAndGoRouteDescription;
	id<GEOServerFormattedString> _previewDurationFormatString;
	id<GEOServerFormattedString> _pickingDurationFormatString;
	id<GEOServerFormattedString> _planningDescriptionFormatString;
	id<GEOServerFormattedString> _transitDescriptionFormatString;
	NSArray* _transitAdvisories;
	id<GEOServerFormattedString> _transitRouteBadge;
	NSArray* _ticketedSegments;
	BOOL _isWalkingOnlyTransitRoute;
	GEOComposedWaypoint* _origin;
	GEOComposedWaypoint* _destination;
	GEORouteInitializerData* _routeInitializerData;

}

@property (nonatomic,retain) NSData * routeID;                                                                  //@synthesize routeID=_routeID - In the implementation block
@property (nonatomic,readonly) GEORouteInitializerData * routeInitializerData; 
@property (assign,nonatomic,__weak) GEORouteSet * routeSet;                                                     //@synthesize routeSet=_routeSet - In the implementation block
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) BOOL usesZilch;                                                                  //@synthesize usesZilch=_usesZilch - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * origin;                                                    //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                                               //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) GEORouteAttributes * routeAttributes; 
@property (nonatomic,readonly) BOOL isNavigable; 
@property (nonatomic,readonly) NSData * directionsResponseID; 
@property (nonatomic,readonly) NSArray * steps;                                                                 //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) NSArray * legs;                                                                  //@synthesize legs=_legs - In the implementation block
@property (nonatomic,readonly) NSArray * composedGuidanceEvents;                                                //@synthesize composedGuidanceEvents=_composedGuidanceEvents - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * advisoryNotices; 
@property (nonatomic,readonly) NSArray * routeDescriptions; 
@property (nonatomic,retain) NSArray * trafficIncidents;                                                        //@synthesize trafficIncidents=_trafficIncidents - In the implementation block
@property (nonatomic,retain) NSArray * trafficIncidentOffsets;                                                  //@synthesize trafficIncidentOffsets=_trafficIncidentOffsets - In the implementation block
@property (nonatomic,readonly) NSString * trafficDescription;                                                   //@synthesize trafficDescription=_trafficDescription - In the implementation block
@property (nonatomic,readonly) NSString * longTrafficDescription;                                               //@synthesize longTrafficDescription=_longTrafficDescription - In the implementation block
@property (nonatomic,readonly) NSArray * enrouteNotices;                                                        //@synthesize enrouteNotices=_enrouteNotices - In the implementation block
@property (nonatomic,readonly) void* controlPoints; 
@property (nonatomic,readonly) unsigned long long stepsCount; 
@property (nonatomic,readonly) GEORoute * geoRoute;                                                             //@synthesize geoRoute=_geoRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                                             //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (nonatomic,readonly) NSDate * startDate;                                                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) unsigned distance;                                                               //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL maneuverDisplayEnabled;                                                       //@synthesize maneuverDisplayEnabled=_maneuverDisplayEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long currentDisplayStep;                                             //@synthesize currentDisplayStep=_currentDisplayStep - In the implementation block
@property (nonatomic,retain) NSArray * maneuverDisplaySteps;                                                    //@synthesize maneuverDisplaySteps=_maneuverDisplaySteps - In the implementation block
@property (assign,nonatomic) unsigned long long selectedLegIndex;                                               //@synthesize selectedLegIndex=_selectedLegIndex - In the implementation block
@property (assign,nonatomic) unsigned firstVisiblePoint;                                                        //@synthesize firstVisiblePoint=_firstVisiblePoint - In the implementation block
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,retain) GEOTransitSuggestedRoute * suggestedRoute;                                         //@synthesize suggestedRoute=_suggestedRoute - In the implementation block
@property (nonatomic,readonly) GEOTransitDecoderData * decoderData;                                             //@synthesize decoderData=_decoderData - In the implementation block
@property (nonatomic,readonly) GEOTransitSuggestedRoute * originalSuggestedRoute;                               //@synthesize originalSuggestedRoute=_originalSuggestedRoute - In the implementation block
@property (nonatomic,readonly) unsigned long long indexOfSuggestedRoute; 
@property (nonatomic,copy,readonly) NSArray * routePlanningArtworks;                                            //@synthesize routePlanningArtworks=_routePlanningArtworks - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage;              //@synthesize transitRoutingIncidentMessage=_transitRoutingIncidentMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRideClusters; 
@property (nonatomic,readonly) NSArray * rideSelections;                                                        //@synthesize rideSelections=_rideSelections - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> launchAndGoCardTitle;                               //@synthesize launchAndGoCardTitle=_launchAndGoCardTitle - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> launchAndGoRouteTitle;                              //@synthesize launchAndGoRouteTitle=_launchAndGoRouteTitle - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> launchAndGoRouteDescription;                        //@synthesize launchAndGoRouteDescription=_launchAndGoRouteDescription - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> previewDurationFormatString;                        //@synthesize previewDurationFormatString=_previewDurationFormatString - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> pickingDurationFormatString;                        //@synthesize pickingDurationFormatString=_pickingDurationFormatString - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> planningDescriptionFormatString;                    //@synthesize planningDescriptionFormatString=_planningDescriptionFormatString - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> transitDescriptionFormatString;                     //@synthesize transitDescriptionFormatString=_transitDescriptionFormatString - In the implementation block
@property (nonatomic,readonly) NSArray * transitAdvisories;                                                     //@synthesize transitAdvisories=_transitAdvisories - In the implementation block
@property (nonatomic,readonly) BOOL isWalkingOnlyTransitRoute;                                                  //@synthesize isWalkingOnlyTransitRoute=_isWalkingOnlyTransitRoute - In the implementation block
@property (nonatomic,readonly) id<GEOServerFormattedString> transitRouteBadge;                                  //@synthesize transitRouteBadge=_transitRouteBadge - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSchedule;                                                           //@synthesize shouldShowSchedule=_shouldShowSchedule - In the implementation block
@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) int routeType; 
@property (nonatomic,readonly) NSArray * sections;                                                              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;                                                //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) double* pointLengths;                                                            //@synthesize pointLengths=_pointLengths - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfTransitStops; 
@property (nonatomic,readonly) NSArray * baseTransitFares; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsNetworkTileLoad; 
-(NSDate *)startDate;
-(void)setRouteID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(NSData *)routeID;
-(GEOTransitSuggestedRoute *)suggestedRoute;
-(unsigned long long)stepsCount;
-(GEOTransitDecoderData *)decoderData;
-(int)transportType;
-(PolylineCoordinate)closestPointOnRoute:(SCD_Struct_GE30)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(int)routeType;
-(BOOL)isNavigable;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficColorsCount;
-(unsigned long long)trafficColorOffsetsCount;
-(unsigned long long)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(void)setExpectedTime:(unsigned)arg1 ;
-(BOOL)hasExpectedTime;
-(unsigned*)trafficColors;
-(unsigned*)trafficColorOffsets;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(NSArray *)steps;
-(void)setSteps:(NSArray *)arg1 ;
-(unsigned)distance;
-(unsigned)expectedTime;
-(NSArray *)advisoryNotices;
-(unsigned)historicTravelTime;
-(NSArray *)enrouteNotices;
-(void)setEnrouteNotices:(NSArray *)arg1 ;
-(NSArray *)routeDescriptions;
-(NSString *)trafficDescription;
-(id)initWithRoute:(id)arg1 ;
-(unsigned)pointCount;
-(void)_initializeManeuverDisplaySteps;
-(void)_createTrafficIncidentsForRouteInitializerData:(id)arg1 ;
-(void)_populateArtworkForSuggestedRoute:(id)arg1 decoderData:(id)arg2 ;
-(id)initWithSuggestedRoute:(id)arg1 decoderData:(id)arg2 ;
-(NSArray *)routePlanningArtworks;
-(void*)controlPoints;
-(GEOMapRegion *)boundingMapRegion;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(BOOL)_MapsCarPlay_isArray:(id)arg1 equalTo:(id)arg2 ;
-(BOOL)isWalkingOnlyTransitRoute;
-(GEORouteSet *)routeSet;
-(GEORoute *)geoRoute;
-(NSArray *)legs;
-(unsigned long long)numberOfTransitStops;
-(SCD_Struct_GE30)pointAt:(unsigned long long)arg1 ;
-(PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned long long)arg2 ;
-(SCD_Struct_GE30)pointAtRouteCoordinate:(PolylineCoordinate)arg1 ;
-(unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1 ;
-(id)legForStepIndex:(unsigned long long)arg1 ;
-(void)getFormOfWay:(int*)arg1 roadClass:(int*)arg2 at:(unsigned)arg3 ;
-(void)forEachSnappedPath:(/*^block*/id)arg1 ;
-(double)distanceBetweenRoutePointIndex:(unsigned)arg1 toPointIndex:(unsigned)arg2 ;
-(double)distanceBetweenLocation:(SCD_Struct_GE30)arg1 nextPointIndex:(unsigned)arg2 toPointIndex:(unsigned)arg3 ;
-(PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRouteCoordinate:(PolylineCoordinate)arg2 ;
-(PolylineCoordinate)_findRouteCoordinateWithOffset:(float)arg1 aPos:(const Matrix<float, 2, 1>*)arg2 aCoord:(const PolylineCoordinate*)arg3 bCoord:(const PolylineCoordinate*)arg4 pointOnSegment:(const Matrix<float, 2, 1>*)arg5 bounds:(const SCD_Struct_GE44*)arg6 ;
-(double)courseAtRouteCoordinateIndex:(unsigned)arg1 ;
-(BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned)arg1 end:(unsigned)arg2 ;
-(void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 rects:(SCD_Struct_GE44*)arg3 rectsCount:(unsigned long long)arg4 ;
-(void)_snapPaths:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addPaths:(id)arg1 forObserver:(id)arg2 ;
-(id)getHallForStop:(id)arg1 ;
-(id)getStationForHall:(id)arg1 ;
-(id)getStationForStop:(id)arg1 ;
-(id)_nextOptionForOption:(id)arg1 rideIndex:(unsigned long long)arg2 ;
-(void)_updateSectionOptions;
-(unsigned long long)_tripIndexForTripLeg:(id)arg1 ;
-(id)sectionOptionForTripIndex:(unsigned long long)arg1 ;
-(NSArray *)rideSelections;
-(void)_rebuildRouteForRideChange;
-(void)selectRide:(unsigned long long)arg1 forTripLeg:(id)arg2 ;
-(BOOL)allowsNetworkTileLoad;
-(id)initWithRoute:(id)arg1 origin:(id)arg2 destination:(id)arg3 ;
-(id)initWithRoute:(id)arg1 initializerData:(id)arg2 ;
-(void)updateRouteWithOrigin:(id)arg1 destination:(id)arg2 ;
-(id)initWithSuggestedRoute:(id)arg1 decoderData:(id)arg2 origin:(id)arg3 destination:(id)arg4 ;
-(GEORouteInitializerData *)routeInitializerData;
-(void)setIsWalkingOnlyTransitRoute:(BOOL)arg1 ;
-(void)setUsesZilch:(BOOL)arg1 ;
-(void)setLegs:(NSArray *)arg1 ;
-(void)setComposedGuidanceEvents:(NSArray *)arg1 ;
-(void)setPointData:(id)arg1 ;
-(id)pointData;
-(void)setBoundingMapRegion:(GEOMapRegion *)arg1 ;
-(id)enrouteNoticeWithIdentifier:(id)arg1 ;
-(NSArray *)baseTransitFares;
-(void)initializePointLengths;
-(void)setManeuverDisplaySteps:(NSArray *)arg1 ;
-(void)setCurrentDisplayStep:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSuggestedRoute;
-(PolylineCoordinate)coordinateAtOffset:(double)arg1 ;
-(PolylineCoordinate)routeCoordinateAtDistance:(double)arg1 beforeRouteCoordinate:(PolylineCoordinate)arg2 ;
-(double)distanceFromPoint:(PolylineCoordinate)arg1 toPoint:(PolylineCoordinate)arg2 ;
-(double)distanceFromPointIndex:(unsigned long long)arg1 toPointIndex:(unsigned long long)arg2 ;
-(double)stepDistanceFromPoint:(PolylineCoordinate)arg1 toPoint:(PolylineCoordinate)arg2 ;
-(id)stepForPointIndex:(unsigned)arg1 ;
-(unsigned long long)legIndexForPointIndex:(unsigned long long)arg1 ;
-(unsigned long long)legIndexForStepIndex:(unsigned long long)arg1 ;
-(id)legForPointIndex:(unsigned)arg1 ;
-(unsigned)trafficColorForDistanceRemaining:(double)arg1 ;
-(void)notifyTrafficUpdated;
-(void)setSelectedLegIndex:(unsigned long long)arg1 ;
-(void)maneuverDisplayHasChanged;
-(int)formOfWayAt:(unsigned)arg1 ;
-(double)approximateRoadWidthAtPointIndex:(unsigned)arg1 ;
-(SCD_Struct_GE69*)roadFeatureAtPointIndex:(unsigned)arg1 ;
-(int)transportTypeForStep:(id)arg1 ;
-(id)zilchDataFromStepIndex:(unsigned long long)arg1 ;
-(double)distanceBetweenStep:(id)arg1 andStep:(id)arg2 ;
-(double)remainingTimeAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(double)remainingDistanceAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(BOOL)checkDrivingArrivalForCoordinate:(SCD_Struct_GE30)arg1 coordinateOnRoute:(SCD_Struct_GE30)arg2 routePointIndex:(unsigned)arg3 distanceFromRoute:(double)arg4 arrivalMapRegion:(id)arg5 checkArrivalRadius:(BOOL)arg6 checkDistanceAlongRoute:(BOOL)arg7 checkRoadAccessPoints:(BOOL)arg8 isOnRoute:(BOOL)arg9 ;
-(SCD_Struct_GE30)locationAtDistance:(double)arg1 from:(id)arg2 ;
-(id)routeMatchAtDistance:(double)arg1 from:(id)arg2 stopAtEndOfTunnel:(BOOL)arg3 stopAtEndOfManeuver:(BOOL)arg4 date:(id)arg5 ;
-(void)roadFeaturesForRouteCoordinate:(PolylineCoordinate)arg1 distanceAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)supportsSnapping;
-(id)getSnappedPathsForVisibleRect:(SCD_Struct_GE44)arg1 rectsToSnap:(SCD_Struct_GE44*)arg2 rectsToSnapCount:(unsigned long long)arg3 observer:(id)arg4 ;
-(id)getSnappedPathsForLocation:(SCD_Struct_GE30)arg1 radius:(double)arg2 observer:(id)arg3 ;
-(void)clearPoints;
-(void)clearSnappedPathsForObserver:(id)arg1 ;
-(BOOL)isSnapping;
-(BOOL)isStopInTerminalStructure:(id)arg1 ;
-(BOOL)hasRideClusters;
-(void)initRideSelections;
-(id)sectionOptionForTripLeg:(id)arg1 ;
-(id)boardStepForSection:(id)arg1 ;
-(void)selectRide:(unsigned long long)arg1 forBoardStep:(id)arg2 ;
-(void)updateRouteWithRideSelections:(id)arg1 ;
-(id)ticketingSegmentsForSelectedRides;
-(void)setRouteSet:(GEORouteSet *)arg1 ;
-(unsigned long long)currentDisplayStep;
-(BOOL)maneuverDisplayEnabled;
-(void)setManeuverDisplayEnabled:(BOOL)arg1 ;
-(NSArray *)maneuverDisplaySteps;
-(unsigned)firstVisiblePoint;
-(void)setFirstVisiblePoint:(unsigned)arg1 ;
-(unsigned long long)selectedLegIndex;
-(BOOL)usesZilch;
-(NSArray *)composedGuidanceEvents;
-(NSArray *)trafficIncidents;
-(void)setTrafficIncidents:(NSArray *)arg1 ;
-(NSArray *)trafficIncidentOffsets;
-(void)setTrafficIncidentOffsets:(NSArray *)arg1 ;
-(NSString *)longTrafficDescription;
-(double*)pointLengths;
-(void)setSuggestedRoute:(GEOTransitSuggestedRoute *)arg1 ;
-(GEOTransitSuggestedRoute *)originalSuggestedRoute;
-(id<GEOTransitRoutingIncidentMessage>)transitRoutingIncidentMessage;
-(id<GEOServerFormattedString>)launchAndGoCardTitle;
-(id<GEOServerFormattedString>)launchAndGoRouteTitle;
-(id<GEOServerFormattedString>)launchAndGoRouteDescription;
-(id<GEOServerFormattedString>)previewDurationFormatString;
-(id<GEOServerFormattedString>)pickingDurationFormatString;
-(id<GEOServerFormattedString>)planningDescriptionFormatString;
-(id<GEOServerFormattedString>)transitDescriptionFormatString;
-(NSArray *)transitAdvisories;
-(id<GEOServerFormattedString>)transitRouteBadge;
-(BOOL)shouldShowSchedule;
-(void)setShouldShowSchedule:(BOOL)arg1 ;
-(id)initWithCompanionRoute:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(GEOComposedWaypoint *)destination;
-(GEOComposedWaypoint *)origin;
-(NSArray *)sections;
-(GEOStyleAttributes *)styleAttributes;
-(void)setSections:(NSArray *)arg1 ;
@end

