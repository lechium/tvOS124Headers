/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapBuildingSection.h>

@class NSString;

@interface GEOMapAccessBuildingSection : NSObject <GEOMapBuildingSection> {

	SCD_Struct_GE30* _coordinates;
	unsigned long long _coordinateCount;
	double _baseHeight;
	double _height;
	unsigned long long _sectionIndex;
	SCD_Struct_GE30 _centerCoordinate;
	double _radius;

}

@property (nonatomic,readonly) SCD_Struct_GE30 centerCoordinate;                //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                   //@synthesize radius=_radius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE30* coordinates;                    //@synthesize coordinates=_coordinates - In the implementation block
@property (nonatomic,readonly) unsigned long long coordinateCount;              //@synthesize coordinateCount=_coordinateCount - In the implementation block
@property (nonatomic,readonly) double baseHeight;                               //@synthesize baseHeight=_baseHeight - In the implementation block
@property (nonatomic,readonly) double height;                                   //@synthesize height=_height - In the implementation block
-(unsigned long long)coordinateCount;
-(SCD_Struct_GE30*)coordinates;
-(SCD_Struct_GE30)centerCoordinate;
-(double)baseHeight;
-(id)initWithFeature:(SCD_Struct_GE107*)arg1 sectionIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(double)radius;
-(double)height;
@end
