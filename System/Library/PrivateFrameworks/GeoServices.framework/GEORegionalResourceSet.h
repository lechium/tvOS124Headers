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

@class PBUnknownFields, NSMutableArray;

@interface GEORegionalResourceSet : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSMutableArray* _resources;

}

@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (nonatomic,retain) NSMutableArray * resources;                     //@synthesize resources=_resources - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)resourceType;
-(void)clearRegions;
-(unsigned long long)regionsCount;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addResource:(id)arg1 ;
-(unsigned long long)resourcesCount;
-(void)clearResources;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)resources;
-(void)setResources:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(GEOTileSetRegion*)regions;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

