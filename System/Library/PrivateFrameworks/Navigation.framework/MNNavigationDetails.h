/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MNActiveRouteDetails, MNLocation, GEONavigationGuidanceState, NSMapTable, NSMutableDictionary, MNActiveRouteInfo, NSArray, MNRoutePlanningDetails, NSString, GEOComposedRoute;

@interface MNNavigationDetails : NSObject <NSSecureCoding> {

	MNActiveRouteDetails* _activeRouteDetails;
	MNLocation* _location;
	unsigned long long _routeIndex;
	BOOL _isDetour;
	GEONavigationGuidanceState* _guidanceState;
	NSMapTable* _routeIDLookup;
	NSMutableDictionary* _routeLookup;
	MNActiveRouteInfo* _currentRoute;
	NSArray* _alternateRoutes;
	NSArray* _possibleCommuteDestinations;
	NSMutableDictionary* _trafficIncidentAlerts;
	BOOL _guidancePromptsEnabled;
	BOOL _isInVehicle;
	BOOL _traceIsPlaying;
	int _headingOrientation;
	int _navigationState;
	unsigned long long _state;
	MNRoutePlanningDetails* _routePlanningDetails;
	unsigned long long _reconnectionRouteIndex;
	double _proceedToRouteDistance;
	NSString* _displayString;
	double _remainingTime;
	double _remainingDistance;
	unsigned long long _closestStepIndex;
	double _distanceUntilSign;
	double _timeUntilSign;
	double _distanceUntilManeuver;
	double _timeUntilManeuver;
	NSString* _currentVoiceLanguage;
	NSString* _tracePath;
	double _traceDuration;
	double _tracePosition;
	NSArray* _traceBookmarks;
	NSMutableDictionary* _trackedCommuteDestinations;

}

@property (retain) NSMutableDictionary * trackedCommuteDestinations;                     //@synthesize trackedCommuteDestinations=_trackedCommuteDestinations - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) MNActiveRouteDetails * activeRouteDetails;                //@synthesize activeRouteDetails=_activeRouteDetails - In the implementation block
@property (nonatomic,retain) MNRoutePlanningDetails * routePlanningDetails;              //@synthesize routePlanningDetails=_routePlanningDetails - In the implementation block
@property (nonatomic,retain) MNLocation * location;                                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL guidancePromptsEnabled;                                //@synthesize guidancePromptsEnabled=_guidancePromptsEnabled - In the implementation block
@property (assign,nonatomic) BOOL isDetour;                                              //@synthesize isDetour=_isDetour - In the implementation block
@property (assign,nonatomic) int headingOrientation;                                     //@synthesize headingOrientation=_headingOrientation - In the implementation block
@property (assign,nonatomic) int navigationState;                                        //@synthesize navigationState=_navigationState - In the implementation block
@property (nonatomic,retain) GEONavigationGuidanceState * guidanceState;                 //@synthesize guidanceState=_guidanceState - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * currentRoute; 
@property (nonatomic,readonly) unsigned long long routeIndex;                            //@synthesize routeIndex=_routeIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long reconnectionRouteIndex;                //@synthesize reconnectionRouteIndex=_reconnectionRouteIndex - In the implementation block
@property (nonatomic,readonly) NSArray * alternateRoutes; 
@property (nonatomic,readonly) int navigationType; 
@property (nonatomic,readonly) unsigned long long stepIndex; 
@property (nonatomic,readonly) unsigned long long legIndex; 
@property (assign,nonatomic) double proceedToRouteDistance;                              //@synthesize proceedToRouteDistance=_proceedToRouteDistance - In the implementation block
@property (nonatomic,retain) NSString * displayString;                                   //@synthesize displayString=_displayString - In the implementation block
@property (assign,nonatomic) double remainingTime;                                       //@synthesize remainingTime=_remainingTime - In the implementation block
@property (assign,nonatomic) double remainingDistance;                                   //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (assign,nonatomic) unsigned long long closestStepIndex;                        //@synthesize closestStepIndex=_closestStepIndex - In the implementation block
@property (assign,nonatomic) double distanceUntilSign;                                   //@synthesize distanceUntilSign=_distanceUntilSign - In the implementation block
@property (assign,nonatomic) double timeUntilSign;                                       //@synthesize timeUntilSign=_timeUntilSign - In the implementation block
@property (assign,nonatomic) double distanceUntilManeuver;                               //@synthesize distanceUntilManeuver=_distanceUntilManeuver - In the implementation block
@property (assign,nonatomic) double timeUntilManeuver;                                   //@synthesize timeUntilManeuver=_timeUntilManeuver - In the implementation block
@property (nonatomic,retain) NSString * currentVoiceLanguage;                            //@synthesize currentVoiceLanguage=_currentVoiceLanguage - In the implementation block
@property (nonatomic,readonly) NSArray * possibleCommuteDestinations;                    //@synthesize possibleCommuteDestinations=_possibleCommuteDestinations - In the implementation block
@property (assign,nonatomic) BOOL isInVehicle;                                           //@synthesize isInVehicle=_isInVehicle - In the implementation block
@property (nonatomic,copy) NSString * tracePath;                                         //@synthesize tracePath=_tracePath - In the implementation block
@property (assign,nonatomic) BOOL traceIsPlaying;                                        //@synthesize traceIsPlaying=_traceIsPlaying - In the implementation block
@property (assign,nonatomic) double traceDuration;                                       //@synthesize traceDuration=_traceDuration - In the implementation block
@property (assign,nonatomic) double tracePosition;                                       //@synthesize tracePosition=_tracePosition - In the implementation block
@property (nonatomic,retain) NSArray * traceBookmarks;                                   //@synthesize traceBookmarks=_traceBookmarks - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)routeIndex;
-(unsigned long long)stepIndex;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(int)navigationState;
-(void)setNavigationState:(int)arg1 ;
-(void)setRemainingTime:(double)arg1 ;
-(double)remainingTime;
-(BOOL)guidancePromptsEnabled;
-(void)setHeadingOrientation:(int)arg1 ;
-(GEOComposedRoute *)currentRoute;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(void)setTracePosition:(double)arg1 ;
-(void)setProceedToRouteDistance:(double)arg1 ;
-(void)setClosestStepIndex:(unsigned long long)arg1 ;
-(void)setDistanceUntilSign:(double)arg1 ;
-(void)setTimeUntilSign:(double)arg1 ;
-(void)setDistanceUntilManeuver:(double)arg1 ;
-(void)setTimeUntilManeuver:(double)arg1 ;
-(void)setRemainingDistance:(double)arg1 ;
-(void)setIsInVehicle:(BOOL)arg1 ;
-(void)setCurrentVoiceLanguage:(NSString *)arg1 ;
-(MNRoutePlanningDetails *)routePlanningDetails;
-(double)remainingDistance;
-(NSString *)currentVoiceLanguage;
-(void)setTracePath:(NSString *)arg1 ;
-(void)setTraceDuration:(double)arg1 ;
-(void)setRoutePlanningDetails:(MNRoutePlanningDetails *)arg1 ;
-(void)setIsDetour:(BOOL)arg1 ;
-(id)routeInfoForRoute:(id)arg1 ;
-(MNActiveRouteDetails *)activeRouteDetails;
-(unsigned long long)reconnectionRouteIndex;
-(double)distanceUntilSign;
-(double)timeUntilSign;
-(double)distanceUntilManeuver;
-(double)timeUntilManeuver;
-(BOOL)isDetour;
-(NSArray *)possibleCommuteDestinations;
-(BOOL)isInVehicle;
-(NSString *)tracePath;
-(double)traceDuration;
-(NSArray *)traceBookmarks;
-(BOOL)traceIsPlaying;
-(double)tracePosition;
-(void)setActiveRouteDetails:(id)arg1 withAlternateRoutes:(id)arg2 ;
-(void)copySerializableValuesFrom:(id)arg1 ;
-(id)routeInfoForID:(id)arg1 ;
-(void)updateETAResponseForRoute:(id)arg1 ;
-(id)updateWithTrafficIncidentAlertDetails:(id)arg1 ;
-(id)removeTrafficIncidentAlertWithDetails:(id)arg1 ;
-(void)updatePossibleCommuteDestinations:(id)arg1 ;
-(void)setTraceBookmarks:(NSArray *)arg1 ;
-(GEONavigationGuidanceState *)guidanceState;
-(double)proceedToRouteDistance;
-(unsigned long long)closestStepIndex;
-(NSMutableDictionary *)trackedCommuteDestinations;
-(void)setTrackedCommuteDestinations:(NSMutableDictionary *)arg1 ;
-(void)_updateRouteIDLookup;
-(unsigned long long)legIndex;
-(void)setGuidanceState:(GEONavigationGuidanceState *)arg1 ;
-(int)headingOrientation;
-(NSArray *)alternateRoutes;
-(void)setAlternateRoutes:(NSArray *)arg1 ;
-(int)navigationType;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(MNLocation *)location;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)setLocation:(MNLocation *)arg1 ;
@end

