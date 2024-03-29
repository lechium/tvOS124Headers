/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_GE169* v;
	GEOFeatureStyleAttributes* _sharedAttributes;
	SCD_Struct_GE170* extAttrs;
	unsigned char countExtAttrs;
	unsigned char countAttrs;
	char featureType;

}
+(id)airportStyleAttributes;
+(id)searchResultStyleAttributes;
+(id)homeStyleAttributes;
+(id)workStyleAttributes;
+(id)parkedCarStyleAttributes;
+(id)restaurantStyleAttributes;
+(id)calendarEventStyleAttributes;
+(id)frequentLocationStyleAttributes;
+(id)gasStationStyleAttributes;
+(id)evChargerStyleAttributes;
+(id)hotelStyleAttributes;
+(id)carRentalStyleAttributes;
+(id)ticketedEventStyleAttributes;
+(id)inviteStyleAttributes;
+(id)styleAttributesForPlace:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isLabelPOI;
-(void)replaceAttributes:(const SCD_Struct_GE169*)arg1 count:(unsigned)arg2 ;
-(int)poiType;
-(id)copyWithAirportStyleAttributes;
-(BOOL)isLandmarkPOI;
-(BOOL)isSearchResult;
-(BOOL)isTransit;
-(BOOL)isDrivable;
-(BOOL)isWalkable;
-(BOOL)isTunnel;
-(BOOL)isBridge;
-(BOOL)isRailway;
-(int)rampType;
-(char)featureType;
-(int)drivingSide;
-(BOOL)hasDrivingSide;
-(id)initWithPlaceDataStyleAttributes:(id)arg1 ;
-(id)initWithPlaceStyleAttributes:(id)arg1 ;
-(unsigned)lineType;
-(void)sort;
-(void)setExtAttributes:(const SCD_Struct_GE170*)arg1 count:(unsigned)arg2 ;
-(id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(const SCD_Struct_GE170*)arg2 extAttributeCount:(unsigned char)arg3 ;
-(id)initWithStyleAttributes:(id)arg1 ;
-(id)initWithGEOStyleAttributes:(id)arg1 ;
-(BOOL)isSuperset:(id)arg1 ;
-(BOOL)hasAttributes;
-(BOOL)isRamp;
-(int)rampDirection;
-(BOOL)isFreeway;
-(BOOL)isBorder;
-(BOOL)shouldSuppress3DBuildingStrokes;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAttributes:(unsigned)arg1 ;
-(void)removeKey:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
@end

