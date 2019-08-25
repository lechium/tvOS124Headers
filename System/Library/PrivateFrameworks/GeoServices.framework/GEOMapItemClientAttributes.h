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

@class PBUnknownFields, GEOMapItemAddressBookAttributes, GEOMapItemCorrectedLocationAttributes, GEOMapItemRoutineAttributes;

@interface GEOMapItemClientAttributes : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapItemAddressBookAttributes* _addressBookAttributes;
	GEOMapItemCorrectedLocationAttributes* _correctedLocationAttributes;
	GEOMapItemRoutineAttributes* _routineAttributes;

}

@property (nonatomic,readonly) BOOL hasAddressBookAttributes; 
@property (nonatomic,retain) GEOMapItemAddressBookAttributes * addressBookAttributes;                          //@synthesize addressBookAttributes=_addressBookAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutineAttributes; 
@property (nonatomic,retain) GEOMapItemRoutineAttributes * routineAttributes;                                  //@synthesize routineAttributes=_routineAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedLocationAttributes; 
@property (nonatomic,retain) GEOMapItemCorrectedLocationAttributes * correctedLocationAttributes;              //@synthesize correctedLocationAttributes=_correctedLocationAttributes - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setAddressBookAttributes:(GEOMapItemAddressBookAttributes *)arg1 ;
-(void)setRoutineAttributes:(GEOMapItemRoutineAttributes *)arg1 ;
-(void)setCorrectedLocationAttributes:(GEOMapItemCorrectedLocationAttributes *)arg1 ;
-(BOOL)hasAddressBookAttributes;
-(BOOL)hasRoutineAttributes;
-(BOOL)hasCorrectedLocationAttributes;
-(GEOMapItemAddressBookAttributes *)addressBookAttributes;
-(GEOMapItemRoutineAttributes *)routineAttributes;
-(GEOMapItemCorrectedLocationAttributes *)correctedLocationAttributes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

