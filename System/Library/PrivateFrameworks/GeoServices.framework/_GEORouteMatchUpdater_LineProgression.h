/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedTransitTripRouteStep;

@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater {

	GEOComposedTransitTripRouteStep* _boardStep;
	GEOComposedTransitTripRouteStep* _alightStep;
	PolylineCoordinate _startRouteCoordinate;

}
-(id)initWithTransitRouteMatcher:(id)arg1 tripLeg:(id)arg2 ;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(unsigned long long)priority;
@end

