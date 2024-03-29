/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSData, GEOMapRegion, GEORoute;

@interface GEORouteBuilder : NSObject {

	BOOL _usesZilch;
	NSMutableArray* _steps;
	NSMutableArray* _composedGuidanceEvents;
	NSMutableArray* _legs;
	NSData* _pointsData;
	NSMutableArray* _pointSections;
	GEOMapRegion* _boundingMapRegion;
	GEORoute* _route;

}
-(id)initWithRoute:(id)arg1 ;
-(void)buildRoute:(id)arg1 ;
-(id)_composedRouteStepForStep:(id)arg1 route:(id)arg2 ;
-(id)_composedRouteLegForSteps:(id)arg1 route:(id)arg2 ;
-(void)_buildPointSectionsForRoute:(id)arg1 ;
@end

