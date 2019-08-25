/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapAccessLine.h>
#import <libobjc.A.dylib/GEOMapRoad.h>

@class NSString;

@interface GEOMapAccessRoad : GEOMapAccessLine <GEOMapRoad> {

	shared_ptr<geo::MapEdgeRoad>* _roadEdge;
	unsigned long long _roadID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE30* coordinates; 
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) int formOfWay; 
@property (nonatomic,readonly) int travelDirection; 
@property (nonatomic,readonly) double roadWidth; 
@property (nonatomic,readonly) unsigned long long speedLimit; 
@property (nonatomic,readonly) BOOL speedLimitIsMPH; 
@property (nonatomic,readonly) unsigned long long roadID; 
@property (nonatomic,readonly) BOOL isTunnel; 
@property (nonatomic,readonly) BOOL isBridge; 
@property (nonatomic,readonly) BOOL isRail; 
@property (nonatomic,readonly) int rampType; 
@property (nonatomic,readonly) NSString * internalRoadName; 
+(double)estimatedWidthForRoad:(SCD_Struct_GE69*)arg1 ;
-(BOOL)isTunnel;
-(BOOL)isBridge;
-(int)rampType;
-(unsigned long long)roadID;
-(int)roadClass;
-(int)formOfWay;
-(int)travelDirection;
-(double)roadWidth;
-(unsigned long long)speedLimit;
-(BOOL)speedLimitIsMPH;
-(BOOL)isRail;
-(NSString *)internalRoadName;
-(id)initWithMap:(id)arg1 roadEdge:(shared_ptr<geo::MapEdgeRoad>*)arg2 ;
-(void)roadFeaturesWithHandler:(/*^block*/id)arg1 ;
-(void)roadEdgesWithHandler:(/*^block*/id)arg1 ;
-(id)findRoadsFrom:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsFromPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsToPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsFromNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsToNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)tileKeys;
-(NSString *)description;
@end

