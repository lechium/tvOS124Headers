/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDVenueIdentifier : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE61* _containedBys;
	SCD_Struct_GE61* _sectionIds;
	unsigned long long _buildingId;
	unsigned long long _featureId;
	unsigned long long _fixtureId;
	unsigned long long _geminiId;
	unsigned long long _levelId;
	unsigned long long _unitId;
	unsigned long long _venueId;
	int _levelOrdinal;
	SCD_Struct_GE62 _has;

}

@property (assign,nonatomic) BOOL hasVenueId; 
@property (assign,nonatomic) unsigned long long venueId;                          //@synthesize venueId=_venueId - In the implementation block
@property (assign,nonatomic) BOOL hasBuildingId; 
@property (assign,nonatomic) unsigned long long buildingId;                       //@synthesize buildingId=_buildingId - In the implementation block
@property (assign,nonatomic) BOOL hasLevelId; 
@property (assign,nonatomic) unsigned long long levelId;                          //@synthesize levelId=_levelId - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionIdsCount; 
@property (nonatomic,readonly) unsigned long long* sectionIds; 
@property (assign,nonatomic) BOOL hasUnitId; 
@property (assign,nonatomic) unsigned long long unitId;                           //@synthesize unitId=_unitId - In the implementation block
@property (assign,nonatomic) BOOL hasFixtureId; 
@property (assign,nonatomic) unsigned long long fixtureId;                        //@synthesize fixtureId=_fixtureId - In the implementation block
@property (assign,nonatomic) BOOL hasLevelOrdinal; 
@property (assign,nonatomic) int levelOrdinal;                                    //@synthesize levelOrdinal=_levelOrdinal - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureId; 
@property (assign,nonatomic) unsigned long long featureId;                        //@synthesize featureId=_featureId - In the implementation block
@property (nonatomic,readonly) unsigned long long containedBysCount; 
@property (nonatomic,readonly) unsigned long long* containedBys; 
@property (assign,nonatomic) BOOL hasGeminiId; 
@property (assign,nonatomic) unsigned long long geminiId;                         //@synthesize geminiId=_geminiId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(void)setHasFeatureId:(BOOL)arg1 ;
-(BOOL)hasFeatureId;
-(unsigned long long)featureId;
-(unsigned long long)sectionIdsCount;
-(void)clearSectionIds;
-(unsigned long long)sectionIdAtIndex:(unsigned long long)arg1 ;
-(void)addSectionId:(unsigned long long)arg1 ;
-(unsigned long long)containedBysCount;
-(void)clearContainedBys;
-(unsigned long long)containedByAtIndex:(unsigned long long)arg1 ;
-(void)addContainedBy:(unsigned long long)arg1 ;
-(void)setVenueId:(unsigned long long)arg1 ;
-(void)setHasVenueId:(BOOL)arg1 ;
-(BOOL)hasVenueId;
-(void)setBuildingId:(unsigned long long)arg1 ;
-(void)setHasBuildingId:(BOOL)arg1 ;
-(BOOL)hasBuildingId;
-(void)setLevelId:(unsigned long long)arg1 ;
-(void)setHasLevelId:(BOOL)arg1 ;
-(BOOL)hasLevelId;
-(unsigned long long*)sectionIds;
-(void)setSectionIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setUnitId:(unsigned long long)arg1 ;
-(void)setHasUnitId:(BOOL)arg1 ;
-(BOOL)hasUnitId;
-(void)setFixtureId:(unsigned long long)arg1 ;
-(void)setHasFixtureId:(BOOL)arg1 ;
-(BOOL)hasFixtureId;
-(void)setLevelOrdinal:(int)arg1 ;
-(void)setHasLevelOrdinal:(BOOL)arg1 ;
-(BOOL)hasLevelOrdinal;
-(unsigned long long*)containedBys;
-(void)setContainedBys:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setGeminiId:(unsigned long long)arg1 ;
-(void)setHasGeminiId:(BOOL)arg1 ;
-(BOOL)hasGeminiId;
-(unsigned long long)venueId;
-(unsigned long long)buildingId;
-(unsigned long long)levelId;
-(unsigned long long)unitId;
-(unsigned long long)fixtureId;
-(int)levelOrdinal;
-(unsigned long long)geminiId;
-(id)initWithVenueID:(unsigned long long)arg1 businessID:(unsigned long long)arg2 ;
-(id)initWithVenueID:(unsigned long long)arg1 businessID:(unsigned long long)arg2 componentIdentifier:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

