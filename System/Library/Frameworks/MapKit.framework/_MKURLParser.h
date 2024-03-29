/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class GEOMapURLParser, NSString, GEOUserSessionEntity, GEOURLExtraStorage;

@interface _MKURLParser : NSObject {

	GEOMapURLParser* parser;

}

@property (readonly) unsigned long long mapType; 
@property (readonly) unsigned long long transportType; 
@property (readonly) BOOL trackingModeSpecified; 
@property (readonly) long long trackingMode; 
@property (readonly) BOOL exactPositionSpecified; 
@property (readonly) CLLocationCoordinate2D centerCoordinate; 
@property (readonly) CGSize span; 
@property (readonly) float zoomLevel; 
@property (readonly) NSString * addressString; 
@property (readonly) NSString * directionsSourceAddressString; 
@property (readonly) NSString * directionsDestinationAddressString; 
@property (readonly) NSString * searchQuery; 
@property (readonly) NSString * label; 
@property (readonly) CLLocationCoordinate2D searchCoordinate; 
@property (readonly) SCD_Struct_MK5 searchRegion; 
@property (readonly) int searchProviderID; 
@property (readonly) unsigned long long searchUID; 
@property (readonly) NSString * contentProvider; 
@property (readonly) NSString * contentProviderID; 
@property (readonly) NSString * abRecordID; 
@property (readonly) NSString * abAddressID; 
@property (readonly) NSString * cnContactIdentifier; 
@property (readonly) NSString * cnAddressIdentifier; 
@property (readonly) GEOUserSessionEntity * userSessionEntity; 
@property (readonly) double altitude; 
@property (readonly) double rotation; 
@property (readonly) double tilt; 
@property (readonly) double roll; 
@property (readonly) unsigned long long lineMUID; 
@property (copy,readonly) NSString * lineName; 
@property (readonly) long long favoritesType; 
@property (readonly) BOOL tester; 
@property (readonly) GEOURLExtraStorage * extraStorage; 
+(BOOL)isValidMapURL:(id)arg1 ;
-(double)altitude;
-(unsigned long long)transportType;
-(unsigned long long)mapType;
-(NSString *)searchQuery;
-(CLLocationCoordinate2D)centerCoordinate;
-(BOOL)parseIncludingCustomParameters:(BOOL)arg1 ;
-(long long)trackingMode;
-(BOOL)trackingModeSpecified;
-(BOOL)exactPositionSpecified;
-(CGSize)span;
-(float)zoomLevel;
-(NSString *)addressString;
-(NSString *)directionsSourceAddressString;
-(NSString *)directionsDestinationAddressString;
-(CLLocationCoordinate2D)searchCoordinate;
-(SCD_Struct_MK5)searchRegion;
-(int)searchProviderID;
-(unsigned long long)searchUID;
-(NSString *)contentProvider;
-(NSString *)contentProviderID;
-(NSString *)abRecordID;
-(NSString *)abAddressID;
-(NSString *)cnContactIdentifier;
-(NSString *)cnAddressIdentifier;
-(GEOUserSessionEntity *)userSessionEntity;
-(double)tilt;
-(double)roll;
-(unsigned long long)lineMUID;
-(NSString *)lineName;
-(long long)favoritesType;
-(BOOL)tester;
-(GEOURLExtraStorage *)extraStorage;
-(NSString *)label;
-(id)initWithURL:(id)arg1 ;
-(double)rotation;
@end

