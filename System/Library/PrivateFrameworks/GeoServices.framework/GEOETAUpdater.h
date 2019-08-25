/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOETAUpdaterDelegate;
@class NSString, GEOETATrafficUpdateRequest, GEOLocation, GEORouteMatch, GEOComposedRoute, GEOComposedWaypoint, GEORouteAttributes, NSTimer, NSData, GEOCommonOptions, GEOApplicationAuditToken;

@interface GEOETAUpdater : NSObject {

	id<GEOETAUpdaterDelegate> _delegate;
	NSString* _requestingAppIdentifier;
	GEOETATrafficUpdateRequest* _currentETARequest;
	GEOLocation* _userLocation;
	GEORouteMatch* _routeMatch;
	GEOComposedRoute* _route;
	GEOComposedWaypoint* _destination;
	GEORouteAttributes* _routeAttributes;
	long long _etaState;
	BOOL _allowRequests;
	BOOL _shouldUseConditionalRequest;
	BOOL _shouldUpdateTrafficOnRoute;
	double _requestInterval;
	NSTimer* _etaIdleTimer;
	double _lastETARequestTime;
	double _debugTimeWindowDuration;
	unsigned long long _maxAlternateRoutesCount;
	NSData* _directionsResponseID;
	GEOCommonOptions* _commonOptions;
	GEOApplicationAuditToken* _auditToken;

}

@property (readonly) BOOL requestInProgress; 
@property (assign,nonatomic,__weak) id<GEOETAUpdaterDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * requestingAppIdentifier;                      //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                                //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,retain) GEOLocation * userLocation;                              //@synthesize userLocation=_userLocation - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * destination;                       //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                    //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,retain) NSData * directionsResponseID;                           //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;                   //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL allowRequests;                                      //@synthesize allowRequests=_allowRequests - In the implementation block
@property (assign,nonatomic) BOOL shouldUseConditionalRequest;                        //@synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateTrafficOnRoute;                         //@synthesize shouldUpdateTrafficOnRoute=_shouldUpdateTrafficOnRoute - In the implementation block
@property (assign,nonatomic) double requestInterval;                                  //@synthesize requestInterval=_requestInterval - In the implementation block
@property (assign,nonatomic) double debugTimeWindowDuration;                          //@synthesize debugTimeWindowDuration=_debugTimeWindowDuration - In the implementation block
@property (assign,nonatomic) unsigned long long maxAlternateRoutesCount;              //@synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount - In the implementation block
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(GEOLocation *)userLocation;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(GEOComposedRoute *)route;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(void)cancelRequest;
-(void)setShouldUpdateTrafficOnRoute:(BOOL)arg1 ;
-(void)requestUpdate;
-(void)_clearTimer;
-(void)_continueUpdateRequests;
-(void)_sendRequest:(id)arg1 shouldCallWillSendCallback:(BOOL)arg2 ;
-(id)routesForETAUpdateRequest;
-(double)_currentTime;
-(BOOL)_shouldStartConditionalETARequest;
-(void)_startConditionalConnectionETARequest;
-(void)_updateRequest:(id)arg1 ;
-(int)_requestModeForRequest:(id)arg1 ;
-(id)currentStep;
-(double)percentageOfCurrentStepRemaining;
-(void)_updateRequestModeForRequest:(id)arg1 withResponse:(id)arg2 ;
-(BOOL)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2 ;
-(BOOL)updateRouteWithETATrafficUpdateResponse:(id)arg1 step:(id)arg2 percentOfStepRemaining:(double)arg3 ;
-(double)_calculateNextTransitionTime;
-(void)_startStateWaitingForBestTimeStart:(id)arg1 ;
-(BOOL)_updateRouteWithETATrafficUpdateResponse:(id)arg1 ;
-(id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3 ;
-(BOOL)requestInProgress;
-(void)startUpdateRequests;
-(void)stopUpdateRequests;
-(NSString *)requestingAppIdentifier;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
-(BOOL)allowRequests;
-(void)setAllowRequests:(BOOL)arg1 ;
-(BOOL)shouldUseConditionalRequest;
-(void)setShouldUseConditionalRequest:(BOOL)arg1 ;
-(BOOL)shouldUpdateTrafficOnRoute;
-(double)requestInterval;
-(void)setRequestInterval:(double)arg1 ;
-(double)debugTimeWindowDuration;
-(void)setDebugTimeWindowDuration:(double)arg1 ;
-(unsigned long long)maxAlternateRoutesCount;
-(void)setMaxAlternateRoutesCount:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<GEOETAUpdaterDelegate>)arg1 ;
-(id<GEOETAUpdaterDelegate>)delegate;
-(void)reset;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(GEOComposedWaypoint *)destination;
-(GEOApplicationAuditToken *)auditToken;
@end

