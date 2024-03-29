/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

@interface GEOMapBuildingFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	SCD_Struct_GE30 _centerCoordinate;
	double _radius;

}
-(id)initWithMap:(id)arg1 centerCoordinate:(SCD_Struct_GE30)arg2 radius:(double)arg3 ;
-(void)findBuildingsWithHandler:(/*^block*/id)arg1 ;
-(void)cancel;
@end

