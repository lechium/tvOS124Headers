/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueLevel : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _levelId;
	GEOPDVenueLabel* _label;
	int _ordinal;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasLevelId; 
@property (assign,nonatomic) unsigned long long levelId;                     //@synthesize levelId=_levelId - In the implementation block
@property (assign,nonatomic) BOOL hasOrdinal; 
@property (assign,nonatomic) int ordinal;                                    //@synthesize ordinal=_ordinal - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setLevelId:(unsigned long long)arg1 ;
-(void)setHasLevelId:(BOOL)arg1 ;
-(BOOL)hasLevelId;
-(unsigned long long)levelId;
-(BOOL)hasLabel;
-(int)ordinal;
-(void)setOrdinal:(int)arg1 ;
-(void)setHasOrdinal:(BOOL)arg1 ;
-(BOOL)hasOrdinal;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDVenueLabel *)label;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

