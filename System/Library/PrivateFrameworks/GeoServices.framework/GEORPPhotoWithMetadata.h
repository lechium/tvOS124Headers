/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, GEOLatLng;

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying> {

	double _creationDate;
	double _geotagHorizontalAccuracy;
	double _geotagTimestamp;
	NSData* _data;
	GEOLatLng* _geotagCoordinate;
	SCD_Struct_GE23 _has;

}

@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasGeotagCoordinate; 
@property (nonatomic,retain) GEOLatLng * geotagCoordinate;                  //@synthesize geotagCoordinate=_geotagCoordinate - In the implementation block
@property (assign,nonatomic) BOOL hasGeotagHorizontalAccuracy; 
@property (assign,nonatomic) double geotagHorizontalAccuracy;               //@synthesize geotagHorizontalAccuracy=_geotagHorizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasGeotagTimestamp; 
@property (assign,nonatomic) double geotagTimestamp;                        //@synthesize geotagTimestamp=_geotagTimestamp - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setGeotagCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasData;
-(void)setCreationDate:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(BOOL)hasGeotagCoordinate;
-(void)setGeotagHorizontalAccuracy:(double)arg1 ;
-(void)setHasGeotagHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasGeotagHorizontalAccuracy;
-(void)setGeotagTimestamp:(double)arg1 ;
-(void)setHasGeotagTimestamp:(BOOL)arg1 ;
-(BOOL)hasGeotagTimestamp;
-(double)creationDate;
-(GEOLatLng *)geotagCoordinate;
-(double)geotagHorizontalAccuracy;
-(double)geotagTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

