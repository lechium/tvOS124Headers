/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitBaseRouteLeg.h>

@class GEOComposedTransitTripRouteStep, NSArray, NSTimeZone, NSDate;

@interface GEOComposedTransitTripRouteLeg : GEOComposedTransitBaseRouteLeg {

	GEOComposedTransitTripRouteStep* _boardStep;
	GEOComposedTransitTripRouteStep* _alightStep;
	GEOComposedTransitTripRouteStep* _blockTransferStep;
	unsigned long long _numberOfTransitStops;
	unsigned long long _selectedRideOptionIndex;
	NSArray* _actionSheetDescriptions;
	NSArray* _routeDetailsOptionsArtwork;
	NSArray* _actionSheetOptionsArtwork;
	NSArray* _transitLineOptions;
	NSArray* _alightNotifications;

}

@property (nonatomic,readonly) id<GEOTransitSystem> transitSystem; 
@property (nonatomic,readonly) id<GEOTransitLine> transitLine; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * boardStep;               //@synthesize boardStep=_boardStep - In the implementation block
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * alightStep;              //@synthesize alightStep=_alightStep - In the implementation block
@property (nonatomic,readonly) NSTimeZone * departureTimeZone; 
@property (nonatomic,readonly) NSDate * departureTime; 
@property (nonatomic,readonly) NSArray * departureTimes; 
@property (nonatomic,readonly) NSArray * transitLineOptions;                              //@synthesize transitLineOptions=_transitLineOptions - In the implementation block
@property (nonatomic,readonly) double departureFrequencyMin; 
@property (nonatomic,readonly) double departureFrequencyMax; 
@property (nonatomic,readonly) NSDate * lastStepArrivalDate; 
@property (nonatomic,readonly) NSArray * routeLineArtwork; 
@property (nonatomic,readonly) unsigned long long rideOptionsCount; 
@property (assign,nonatomic) unsigned long long selectedRideOptionIndex;                  //@synthesize selectedRideOptionIndex=_selectedRideOptionIndex - In the implementation block
@property (nonatomic,readonly) BOOL notifyBeforeAlightStep; 
-(NSDate *)departureTime;
-(unsigned long long)numberOfTransitStops;
-(unsigned long long)rideOptionsCount;
-(void)setSelectedRideOptionIndex:(unsigned long long)arg1 ;
-(NSArray *)routeLineArtwork;
-(id<GEOTransitLine>)transitLine;
-(double)departureFrequencyMin;
-(double)departureFrequencyMax;
-(NSTimeZone *)departureTimeZone;
-(NSArray *)departureTimes;
-(id<GEOTransitSystem>)transitSystem;
-(BOOL)_needsStepData;
-(void)_cacheStepData;
-(GEOComposedTransitTripRouteStep *)boardStep;
-(id)blockTransferStep;
-(GEOComposedTransitTripRouteStep *)alightStep;
-(id)initWithComposedRoute:(id)arg1 tripIndex:(unsigned long long)arg2 stepRange:(NSRange)arg3 transitStepRange:(NSRange)arg4 pointRange:(NSRange)arg5 ;
-(id)routeDetailsPrimaryArtworkForRideOption:(unsigned long long)arg1 ;
-(id)actionSheetArtworkForRideOption:(unsigned long long)arg1 ;
-(id)actionSheetDescriptionForRideOption:(unsigned long long)arg1 ;
-(id)transitLineForRideOption:(unsigned long long)arg1 ;
-(NSDate *)lastStepArrivalDate;
-(BOOL)notifyBeforeAlightStep;
-(unsigned long long)selectedRideOptionIndex;
-(NSArray *)transitLineOptions;
@end

