/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDResolvedItem;

@interface GEOPDDirectionIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDResolvedItem* _destination;
	GEOPDResolvedItem* _origin;
	int _transportType;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOPDResolvedItem * origin;                     //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOPDResolvedItem * destination;                //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(BOOL)hasDestination;
-(BOOL)hasOrigin;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDestination:(GEOPDResolvedItem *)arg1 ;
-(GEOPDResolvedItem *)destination;
-(GEOPDResolvedItem *)origin;
-(void)setOrigin:(GEOPDResolvedItem *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

