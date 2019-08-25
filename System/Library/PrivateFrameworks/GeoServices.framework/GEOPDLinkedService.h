/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDEntity, NSMutableArray, GEOPDPlaceInfo;

@interface GEOPDLinkedService : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDEntity* _entity;
	NSMutableArray* _hours;
	GEOPDPlaceInfo* _placeInfo;

}

@property (nonatomic,readonly) BOOL hasEntity; 
@property (nonatomic,retain) GEOPDEntity * entity;                           //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceInfo; 
@property (nonatomic,retain) GEOPDPlaceInfo * placeInfo;                     //@synthesize placeInfo=_placeInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * hours;                         //@synthesize hours=_hours - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)hoursType;
+(id)linkedServicesForPlaceData:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)hours;
-(GEOPDEntity *)entity;
-(void)setPlaceInfo:(GEOPDPlaceInfo *)arg1 ;
-(BOOL)hasPlaceInfo;
-(GEOPDPlaceInfo *)placeInfo;
-(BOOL)hasEntity;
-(void)setEntity:(GEOPDEntity *)arg1 ;
-(void)setHours:(NSMutableArray *)arg1 ;
-(void)addHours:(id)arg1 ;
-(unsigned long long)hoursCount;
-(void)clearHours;
-(id)hoursAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
