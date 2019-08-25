/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class GEOComposedRoute, MKRoutePolyline, NSArray, NSString, MKPolyline;

@interface MKRoute : NSObject {

	GEOComposedRoute* _geoComposedRoute;
	MKRoutePolyline* _polyline;
	NSArray* _steps;

}

@property (getter=_geoComposedRoute,nonatomic,readonly) GEOComposedRoute * geoComposedRoute;              //@synthesize geoComposedRoute=_geoComposedRoute - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * advisoryNotices; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) double expectedTravelTime; 
@property (nonatomic,readonly) unsigned long long transportType; 
@property (nonatomic,readonly) MKPolyline * polyline;                                                     //@synthesize polyline=_polyline - In the implementation block
@property (nonatomic,readonly) NSArray * steps;                                                           //@synthesize steps=_steps - In the implementation block
-(unsigned long long)transportType;
-(NSArray *)steps;
-(double)distance;
-(NSArray *)advisoryNotices;
-(id)_geoComposedRoute;
-(id)_initWithGEOComposedRoute:(id)arg1 ;
-(double)expectedTravelTime;
-(MKPolyline *)polyline;
-(id)_maneuverImageForStep:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(NSString *)name;
@end

