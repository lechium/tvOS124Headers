/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOComposedWaypoint, GEOLocation, GEODirectionsRequest, NSString, GEODirectionsResponse, GEORoute, GEORouteAttributes;

@interface MNRoutePlanningDetails : PBCodable <NSCopying> {

	GEOComposedWaypoint* _destination;
	GEOLocation* _lastLocation;
	int _navigationType;
	GEOComposedWaypoint* _origin;
	GEODirectionsRequest* _request;
	NSString* _requestingAppIdentifier;
	GEODirectionsResponse* _response;
	GEORoute* _route;
	GEORouteAttributes* _routeAttributes;
	unsigned _routeIndex;
	NSString* _traceFileName;
	int _transportType;
	BOOL _copyTracesToCrashReporterDirectory;
	BOOL _fullGuidance;
	BOOL _guidancePromptsEnabled;
	BOOL _isForReconnecting;
	BOOL _isTraceRecording;
	BOOL _shouldPrepare;
	SCD_Struct_MN8 _has;

}

@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                       //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOComposedWaypoint * origin;                            //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOComposedWaypoint * destination;                       //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) GEODirectionsRequest * request;                          //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) GEODirectionsResponse * response;                        //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) BOOL hasRouteIndex; 
@property (assign,nonatomic) unsigned routeIndex;                                     //@synthesize routeIndex=_routeIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                    //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationType; 
@property (assign,nonatomic) int navigationType;                                      //@synthesize navigationType=_navigationType - In the implementation block
@property (assign,nonatomic) BOOL hasGuidancePromptsEnabled; 
@property (assign,nonatomic) BOOL guidancePromptsEnabled;                             //@synthesize guidancePromptsEnabled=_guidancePromptsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsForReconnecting; 
@property (assign,nonatomic) BOOL isForReconnecting;                                  //@synthesize isForReconnecting=_isForReconnecting - In the implementation block
@property (assign,nonatomic) BOOL hasShouldPrepare; 
@property (assign,nonatomic) BOOL shouldPrepare;                                      //@synthesize shouldPrepare=_shouldPrepare - In the implementation block
@property (nonatomic,readonly) BOOL hasLastLocation; 
@property (nonatomic,retain) GEOLocation * lastLocation;                              //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasRoute; 
@property (nonatomic,retain) GEORoute * route;                                        //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) BOOL hasFullGuidance; 
@property (assign,nonatomic) BOOL fullGuidance;                                       //@synthesize fullGuidance=_fullGuidance - In the implementation block
@property (nonatomic,readonly) BOOL hasTraceFileName; 
@property (nonatomic,retain) NSString * traceFileName;                                //@synthesize traceFileName=_traceFileName - In the implementation block
@property (assign,nonatomic) BOOL hasIsTraceRecording; 
@property (assign,nonatomic) BOOL isTraceRecording;                                   //@synthesize isTraceRecording=_isTraceRecording - In the implementation block
@property (assign,nonatomic) BOOL hasCopyTracesToCrashReporterDirectory; 
@property (assign,nonatomic) BOOL copyTracesToCrashReporterDirectory;                 //@synthesize copyTracesToCrashReporterDirectory=_copyTracesToCrashReporterDirectory - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestingAppIdentifier; 
@property (nonatomic,retain) NSString * requestingAppIdentifier;                      //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRouteIndex:(unsigned)arg1 ;
-(void)setHasRouteIndex:(BOOL)arg1 ;
-(BOOL)hasRouteIndex;
-(unsigned)routeIndex;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(BOOL)hasRouteAttributes;
-(GEORouteAttributes *)routeAttributes;
-(GEORoute *)route;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setRoute:(GEORoute *)arg1 ;
-(void)setLastLocation:(GEOLocation *)arg1 ;
-(void)setRequest:(GEODirectionsRequest *)arg1 ;
-(void)setResponse:(GEODirectionsResponse *)arg1 ;
-(BOOL)hasDestination;
-(BOOL)hasOrigin;
-(BOOL)hasRequest;
-(BOOL)hasResponse;
-(GEOLocation *)lastLocation;
-(NSString *)requestingAppIdentifier;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
-(void)setHasGuidancePromptsEnabled:(BOOL)arg1 ;
-(BOOL)hasGuidancePromptsEnabled;
-(BOOL)guidancePromptsEnabled;
-(BOOL)hasRoute;
-(void)setNavigationType:(int)arg1 ;
-(void)setTraceFileName:(NSString *)arg1 ;
-(void)setHasNavigationType:(BOOL)arg1 ;
-(BOOL)hasNavigationType;
-(id)navigationTypeAsString:(int)arg1 ;
-(int)StringAsNavigationType:(id)arg1 ;
-(BOOL)isForReconnecting;
-(void)setIsForReconnecting:(BOOL)arg1 ;
-(void)setHasIsForReconnecting:(BOOL)arg1 ;
-(BOOL)hasIsForReconnecting;
-(BOOL)shouldPrepare;
-(void)setShouldPrepare:(BOOL)arg1 ;
-(void)setHasShouldPrepare:(BOOL)arg1 ;
-(BOOL)hasShouldPrepare;
-(BOOL)hasLastLocation;
-(BOOL)fullGuidance;
-(void)setFullGuidance:(BOOL)arg1 ;
-(void)setHasFullGuidance:(BOOL)arg1 ;
-(BOOL)hasFullGuidance;
-(BOOL)hasTraceFileName;
-(BOOL)isTraceRecording;
-(void)setIsTraceRecording:(BOOL)arg1 ;
-(void)setHasIsTraceRecording:(BOOL)arg1 ;
-(BOOL)hasIsTraceRecording;
-(void)setCopyTracesToCrashReporterDirectory:(BOOL)arg1 ;
-(void)setHasCopyTracesToCrashReporterDirectory:(BOOL)arg1 ;
-(BOOL)hasCopyTracesToCrashReporterDirectory;
-(BOOL)hasRequestingAppIdentifier;
-(NSString *)traceFileName;
-(BOOL)copyTracesToCrashReporterDirectory;
-(int)navigationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(GEOComposedWaypoint *)destination;
-(GEOComposedWaypoint *)origin;
-(void)setOrigin:(GEOComposedWaypoint *)arg1 ;
-(GEODirectionsRequest *)request;
-(GEODirectionsResponse *)response;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

