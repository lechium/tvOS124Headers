/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapRegion, NSString;

@interface GEOPDPopularNearbySearchResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _displayMapRegion;
	NSString* _sectionHeader;
	BOOL _isChainResultSet;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion;                //@synthesize displayMapRegion=_displayMapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeader; 
@property (nonatomic,retain) NSString * sectionHeader;                       //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet;                          //@synthesize isChainResultSet=_isChainResultSet - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(BOOL)hasIsChainResultSet;
-(GEOMapRegion *)displayMapRegion;
-(BOOL)isChainResultSet;
-(BOOL)hasSectionHeader;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSectionHeader:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)sectionHeader;
@end

