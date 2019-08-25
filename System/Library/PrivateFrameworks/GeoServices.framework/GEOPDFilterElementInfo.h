/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, GEOPDVenueLabel;

@interface GEOPDFilterElementInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _filterIds;
	GEOPDVenueLabel* _label;

}

@property (nonatomic,retain) NSMutableArray * filterIds;                     //@synthesize filterIds=_filterIds - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)filterIdType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLabel;
-(void)addFilterId:(id)arg1 ;
-(unsigned long long)filterIdsCount;
-(void)clearFilterIds;
-(id)filterIdAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)filterIds;
-(void)setFilterIds:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDVenueLabel *)label;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
