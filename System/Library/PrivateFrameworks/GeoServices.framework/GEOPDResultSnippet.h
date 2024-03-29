/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray, GEOPDPriceDescription, GEOPDRating;

@interface GEOPDResultSnippet : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _category;
	NSMutableArray* _childPlaces;
	unsigned _distanceDisplayThreshold;
	NSString* _locationString;
	NSString* _name;
	GEOPDPriceDescription* _priceDescription;
	GEOPDRating* _priceRange;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                                   //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL hasPriceRange; 
@property (nonatomic,retain) GEOPDRating * priceRange;                              //@synthesize priceRange=_priceRange - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationString; 
@property (nonatomic,retain) NSString * locationString;                             //@synthesize locationString=_locationString - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceDisplayThreshold; 
@property (assign,nonatomic) unsigned distanceDisplayThreshold;                     //@synthesize distanceDisplayThreshold=_distanceDisplayThreshold - In the implementation block
@property (nonatomic,retain) NSMutableArray * childPlaces;                          //@synthesize childPlaces=_childPlaces - In the implementation block
@property (nonatomic,readonly) BOOL hasPriceDescription; 
@property (nonatomic,retain) GEOPDPriceDescription * priceDescription;              //@synthesize priceDescription=_priceDescription - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)childPlaceType;
+(id)resultSnippetForPlaceData:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasCategory;
-(BOOL)hasName;
-(void)addChildPlace:(id)arg1 ;
-(void)setPriceRange:(GEOPDRating *)arg1 ;
-(void)setLocationString:(NSString *)arg1 ;
-(unsigned long long)childPlacesCount;
-(void)clearChildPlaces;
-(id)childPlaceAtIndex:(unsigned long long)arg1 ;
-(void)setPriceDescription:(GEOPDPriceDescription *)arg1 ;
-(BOOL)hasPriceRange;
-(BOOL)hasLocationString;
-(void)setDistanceDisplayThreshold:(unsigned)arg1 ;
-(void)setHasDistanceDisplayThreshold:(BOOL)arg1 ;
-(BOOL)hasDistanceDisplayThreshold;
-(BOOL)hasPriceDescription;
-(GEOPDRating *)priceRange;
-(NSString *)locationString;
-(unsigned)distanceDisplayThreshold;
-(NSMutableArray *)childPlaces;
-(void)setChildPlaces:(NSMutableArray *)arg1 ;
-(GEOPDPriceDescription *)priceDescription;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)dictionaryRepresentation;
@end

