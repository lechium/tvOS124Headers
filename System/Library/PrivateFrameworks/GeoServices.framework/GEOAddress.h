/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, GEOStructuredAddress, NSString;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _formattedAddressLines;
	int _formattedAddressType;
	GEOStructuredAddress* _structuredAddress;
	SCD_Struct_GE1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * formattedAddressLines;                //@synthesize formattedAddressLines=_formattedAddressLines - In the implementation block
@property (nonatomic,readonly) BOOL hasStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * structuredAddress;              //@synthesize structuredAddress=_structuredAddress - In the implementation block
@property (assign,nonatomic) BOOL hasFormattedAddressType; 
@property (assign,nonatomic) int formattedAddressType;                              //@synthesize formattedAddressType=_formattedAddressType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)formattedAddressLineType;
+(id)geoAddressForPlaceData:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addFormattedAddressLine:(id)arg1 ;
-(unsigned long long)formattedAddressLinesCount;
-(void)clearFormattedAddressLines;
-(id)formattedAddressLineAtIndex:(unsigned long long)arg1 ;
-(void)setStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(BOOL)hasStructuredAddress;
-(int)formattedAddressType;
-(void)setFormattedAddressType:(int)arg1 ;
-(void)setHasFormattedAddressType:(BOOL)arg1 ;
-(BOOL)hasFormattedAddressType;
-(id)formattedAddressTypeAsString:(int)arg1 ;
-(int)StringAsFormattedAddressType:(id)arg1 ;
-(NSMutableArray *)formattedAddressLines;
-(void)setFormattedAddressLines:(NSMutableArray *)arg1 ;
-(GEOStructuredAddress *)structuredAddress;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)urlRepresentation;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(id)addressDictionary;
-(id)bestName;
-(id)initWithAddressDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

