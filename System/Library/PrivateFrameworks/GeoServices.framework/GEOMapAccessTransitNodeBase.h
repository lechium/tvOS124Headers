/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapTransitPoint.h>

@class NSString, GEOMapAccess;

@interface GEOMapAccessTransitNodeBase : NSObject <GEOMapTransitPoint> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapNodeTransit>* _node;
	double _boundingRadius;
	SCD_Struct_GE44 _boundingRect;
	SCD_Struct_GE30* _polygonPoints;
	long long _polygonPointsCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE30 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius;                       //@synthesize boundingRadius=_boundingRadius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE44 boundingRect;                //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE30* polygonPoints;              //@synthesize polygonPoints=_polygonPoints - In the implementation block
@property (nonatomic,readonly) long long polygonPointsCount;                //@synthesize polygonPointsCount=_polygonPointsCount - In the implementation block
-(SCD_Struct_GE30)coordinate;
-(unsigned long long)transitID;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)distanceInMetersFrom:(SCD_Struct_GE30)arg1 ;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE30*)polygonPoints;
-(long long)polygonPointsCount;
-(id)initWithMap:(id)arg1 node:(shared_ptr<geo::MapNodeTransit>*)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(SCD_Struct_GE44)boundingRect;
@end
