/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIncidentEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, PBUnknownFields, GEOPBTransitIncidentEntityFilter, NSString;

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _affectedMuid;
	GEOPBTransitIncidentEntityFilter* _filter;
	SCD_Struct_GE1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasNextStopIDs; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@property (assign,nonatomic) BOOL hasAffectedMuid; 
@property (assign,nonatomic) unsigned long long affectedMuid;                        //@synthesize affectedMuid=_affectedMuid - In the implementation block
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) GEOPBTransitIncidentEntityFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)muid;
-(void)setAffectedMuid:(unsigned long long)arg1 ;
-(void)setHasAffectedMuid:(BOOL)arg1 ;
-(BOOL)hasAffectedMuid;
-(BOOL)hasFilter;
-(unsigned long long)affectedMuid;
-(NSSet *)nextStopIDs;
-(BOOL)hasNextStopIDs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPBTransitIncidentEntityFilter *)filter;
-(void)setFilter:(GEOPBTransitIncidentEntityFilter *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

