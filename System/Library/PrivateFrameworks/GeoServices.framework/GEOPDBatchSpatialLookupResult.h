/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDBatchSpatialLookupResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _spatialEventLookupResults;
	NSMutableArray* _spatialPlaceLookupResults;
	int _statusCode;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                                          //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * spatialPlaceLookupResults;              //@synthesize spatialPlaceLookupResults=_spatialPlaceLookupResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * spatialEventLookupResults;              //@synthesize spatialEventLookupResults=_spatialEventLookupResults - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)spatialPlaceLookupResultType;
+(Class)spatialEventLookupResultType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(NSMutableArray *)spatialPlaceLookupResults;
-(NSMutableArray *)spatialEventLookupResults;
-(void)addSpatialPlaceLookupResult:(id)arg1 ;
-(void)addSpatialEventLookupResult:(id)arg1 ;
-(unsigned long long)spatialPlaceLookupResultsCount;
-(void)clearSpatialPlaceLookupResults;
-(id)spatialPlaceLookupResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spatialEventLookupResultsCount;
-(void)clearSpatialEventLookupResults;
-(id)spatialEventLookupResultAtIndex:(unsigned long long)arg1 ;
-(void)setSpatialPlaceLookupResults:(NSMutableArray *)arg1 ;
-(void)setSpatialEventLookupResults:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
@end

