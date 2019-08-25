/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDTextItemDisplayConfig : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _maxItemsPerRow;
	unsigned _maxRowCount;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasMaxItemsPerRow; 
@property (assign,nonatomic) unsigned maxItemsPerRow;                        //@synthesize maxItemsPerRow=_maxItemsPerRow - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRowCount; 
@property (assign,nonatomic) unsigned maxRowCount;                           //@synthesize maxRowCount=_maxRowCount - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned)maxItemsPerRow;
-(void)setMaxItemsPerRow:(unsigned)arg1 ;
-(void)setHasMaxItemsPerRow:(BOOL)arg1 ;
-(BOOL)hasMaxItemsPerRow;
-(unsigned)maxRowCount;
-(void)setMaxRowCount:(unsigned)arg1 ;
-(void)setHasMaxRowCount:(BOOL)arg1 ;
-(BOOL)hasMaxRowCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

