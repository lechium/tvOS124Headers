/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDTransportHint;

@interface GEOPDSearchLocationParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _searchLocationParametersType;
	GEOPDTransportHint* _searchTransportHint;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasSearchLocationParametersType; 
@property (assign,nonatomic) int searchLocationParametersType;                      //@synthesize searchLocationParametersType=_searchLocationParametersType - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchTransportHint; 
@property (nonatomic,retain) GEOPDTransportHint * searchTransportHint;              //@synthesize searchTransportHint=_searchTransportHint - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setSearchTransportHint:(GEOPDTransportHint *)arg1 ;
-(int)searchLocationParametersType;
-(void)setSearchLocationParametersType:(int)arg1 ;
-(void)setHasSearchLocationParametersType:(BOOL)arg1 ;
-(BOOL)hasSearchLocationParametersType;
-(id)searchLocationParametersTypeAsString:(int)arg1 ;
-(int)StringAsSearchLocationParametersType:(id)arg1 ;
-(BOOL)hasSearchTransportHint;
-(GEOPDTransportHint *)searchTransportHint;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

