/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapAccessTransitNodeBase.h>
#import <libobjc.A.dylib/GEOMapTransitStation.h>

@class NSString;

@interface GEOMapAccessTransitStation : GEOMapAccessTransitNodeBase <GEOMapTransitStation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE30 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE44 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE30* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
