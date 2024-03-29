/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDate, GEOComposedRoute, NSMutableArray, NSArray, NSDictionary;

@interface GEOTraceRouteSimulator : NSObject {

	double _deltaT;
	double _horizontalAccuracy;
	double _verticalAccuracy;
	NSDate* _startTime;
	GEOComposedRoute* _route;
	SCD_Struct_GE30 _walkingStart;
	SCD_Struct_GE30 _walkingEnd;
	SCD_Struct_GE30 _origin;
	SCD_Struct_GE30 _destination;
	NSMutableArray* _mutableLocations;
	NSArray* _locations;
	NSDictionary* _pointTimestamps;
	double _duration;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                     //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE30 origin;                         //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE30 destination;                    //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableLocations;              //@synthesize mutableLocations=_mutableLocations - In the implementation block
@property (nonatomic,retain) NSArray * locations;                            //@synthesize locations=_locations - In the implementation block
@property (assign,nonatomic) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double deltaT;                                  //@synthesize deltaT=_deltaT - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;                      //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) double verticalAccuracy;                        //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE30 walkingStart;                   //@synthesize walkingStart=_walkingStart - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE30 walkingEnd;                     //@synthesize walkingEnd=_walkingEnd - In the implementation block
@property (nonatomic,readonly) NSDictionary * pointTimestamps;               //@synthesize pointTimestamps=_pointTimestamps - In the implementation block
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(double)horizontalAccuracy;
-(double)verticalAccuracy;
-(GEOComposedRoute *)route;
-(id)initWithRoute:(id)arg1 ;
-(NSArray *)locations;
-(NSMutableArray *)mutableLocations;
-(SCD_Struct_GE30)walkingStart;
-(SCD_Struct_GE30)walkingEnd;
-(double)deltaT;
-(void)addLocation:(SCD_Struct_GE30)arg1 withCourse:(double)arg2 altitude:(double)arg3 speed:(double)arg4 transport:(int)arg5 ;
-(void)generateLocationsWithSpeedOverride:(double)arg1 ;
-(double)estimateDuration;
-(void)simulateWalkingFrom:(SCD_Struct_GE30)arg1 to:(SCD_Struct_GE30)arg2 ;
-(void)generateLocations;
-(void)setDeltaT:(double)arg1 ;
-(void)setWalkingStart:(SCD_Struct_GE30)arg1 ;
-(void)setWalkingEnd:(SCD_Struct_GE30)arg1 ;
-(void)setMutableLocations:(NSMutableArray *)arg1 ;
-(NSDictionary *)pointTimestamps;
-(void)setDuration:(double)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(double)duration;
-(void)setDestination:(SCD_Struct_GE30)arg1 ;
-(SCD_Struct_GE30)destination;
-(SCD_Struct_GE30)origin;
-(void)setOrigin:(SCD_Struct_GE30)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
@end

