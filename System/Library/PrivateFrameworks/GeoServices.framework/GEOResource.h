/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData, NSString, NSMutableArray;

@interface GEOResource : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSData* _checksum;
	int _connectionType;
	NSString* _filename;
	NSMutableArray* _filters;
	unsigned _preferWiFiAllowedStaleThreshold;
	int _resourceType;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasResourceType; 
@property (assign,nonatomic) int resourceType;                                      //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasFilename; 
@property (nonatomic,retain) NSString * filename;                                   //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) BOOL hasChecksum; 
@property (nonatomic,retain) NSData * checksum;                                     //@synthesize checksum=_checksum - In the implementation block
@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (nonatomic,retain) NSMutableArray * filters;                              //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) int connectionType;                                    //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasPreferWiFiAllowedStaleThreshold; 
@property (assign,nonatomic) unsigned preferWiFiAllowedStaleThreshold;              //@synthesize preferWiFiAllowedStaleThreshold=_preferWiFiAllowedStaleThreshold - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)filterType;
-(void)clearRegions;
-(unsigned long long)regionsCount;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)filename;
-(void)addFilter:(id)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(void)setChecksum:(NSData *)arg1 ;
-(unsigned long long)filtersCount;
-(void)clearFilters;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(int)resourceType;
-(void)setResourceType:(int)arg1 ;
-(void)setHasResourceType:(BOOL)arg1 ;
-(BOOL)hasResourceType;
-(id)resourceTypeAsString:(int)arg1 ;
-(int)StringAsResourceType:(id)arg1 ;
-(BOOL)hasFilename;
-(BOOL)hasChecksum;
-(int)connectionType;
-(void)setConnectionType:(int)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(id)connectionTypeAsString:(int)arg1 ;
-(int)StringAsConnectionType:(id)arg1 ;
-(void)setPreferWiFiAllowedStaleThreshold:(unsigned)arg1 ;
-(void)setHasPreferWiFiAllowedStaleThreshold:(BOOL)arg1 ;
-(BOOL)hasPreferWiFiAllowedStaleThreshold;
-(NSData *)checksum;
-(unsigned)preferWiFiAllowedStaleThreshold;
-(BOOL)_geo_isRelevantForScales:(id)arg1 scenarios:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)filters;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(GEOTileSetRegion*)regions;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
