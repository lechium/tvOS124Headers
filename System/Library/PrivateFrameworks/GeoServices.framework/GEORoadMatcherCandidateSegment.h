/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureRoad, GEOMapFeatureJunction;

@interface GEORoadMatcherCandidateSegment : NSObject {

	double _score;
	GEOMapFeatureRoad* _road;
	SCD_Struct_GE30 _coordinateOnSegment;
	double _distanceFromSegment;
	double _segmentAngle;
	GEOMapFeatureJunction* _junction;
	double _distanceInMetersFromJunction;

}

@property (nonatomic,readonly) double score;                                     //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) GEOMapFeatureRoad * road;                         //@synthesize road=_road - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE30 coordinateOnSegment;              //@synthesize coordinateOnSegment=_coordinateOnSegment - In the implementation block
@property (nonatomic,readonly) double distanceFromSegment;                       //@synthesize distanceFromSegment=_distanceFromSegment - In the implementation block
@property (nonatomic,readonly) double segmentAngle;                              //@synthesize segmentAngle=_segmentAngle - In the implementation block
@property (nonatomic,readonly) GEOMapFeatureJunction * junction;                 //@synthesize junction=_junction - In the implementation block
@property (nonatomic,readonly) double distanceFromJunction;                      //@synthesize distanceInMetersFromJunction=_distanceInMetersFromJunction - In the implementation block
-(double)score;
-(double)distanceFromJunction;
-(GEOMapFeatureRoad *)road;
-(id)initWithCoordinate:(SCD_Struct_GE30)arg1 angle:(double)arg2 road:(id)arg3 startCoordinate:(SCD_Struct_GE30)arg4 endCoordinate:(SCD_Struct_GE30)arg5 ;
-(SCD_Struct_GE30)coordinateOnSegment;
-(double)distanceFromSegment;
-(double)segmentAngle;
-(GEOMapFeatureJunction *)junction;
@end

