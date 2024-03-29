/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class GEOPDLinkedPlace, GEOMapItemIdentifier, GEOFeatureStyleAttributes;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {

	GEOPDLinkedPlace* _linkedPlace;
	GEOMapItemIdentifier* _identifier;
	GEOFeatureStyleAttributes* _styleAttributes;

}
-(SCD_Struct_GE30)coordinate;
-(id)_identifier;
-(unsigned long long)_muid;
-(int)referenceFrame;
-(id)_styleAttributes;
-(int)_resultProviderID;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_responseStatusIsIncomplete;
-(BOOL)_hasResultProviderID;
-(BOOL)_hasMUID;
-(BOOL)_isInLinkedPlaceRelationship;
-(id)initWithLinkedPlace:(id)arg1 ;
-(id)name;
-(id)description;
-(BOOL)isValid;
@end

