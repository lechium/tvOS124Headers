/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOAttribution : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSString* _badge;
	NSString* _badgeChecksum;
	unsigned _dataSet;
	NSString* _logo;
	NSString* _logoChecksum;
	NSString* _name;
	NSMutableArray* _resources;
	NSString* _url;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasBadge; 
@property (nonatomic,retain) NSString * badge;                               //@synthesize badge=_badge - In the implementation block
@property (nonatomic,readonly) BOOL hasLogo; 
@property (nonatomic,retain) NSString * logo;                                //@synthesize logo=_logo - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL hasBadgeChecksum; 
@property (nonatomic,retain) NSString * badgeChecksum;                       //@synthesize badgeChecksum=_badgeChecksum - In the implementation block
@property (nonatomic,readonly) BOOL hasLogoChecksum; 
@property (nonatomic,retain) NSString * logoChecksum;                        //@synthesize logoChecksum=_logoChecksum - In the implementation block
@property (nonatomic,retain) NSMutableArray * resources;                     //@synthesize resources=_resources - In the implementation block
@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (assign,nonatomic) BOOL hasDataSet; 
@property (assign,nonatomic) unsigned dataSet;                               //@synthesize dataSet=_dataSet - In the implementation block
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
-(BOOL)hasName;
-(BOOL)hasUrl;
-(void)addResource:(id)arg1 ;
-(unsigned long long)resourcesCount;
-(void)clearResources;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)resources;
-(void)setResources:(NSMutableArray *)arg1 ;
-(void)setDataSet:(unsigned)arg1 ;
-(void)setHasDataSet:(BOOL)arg1 ;
-(BOOL)hasDataSet;
-(unsigned)dataSet;
-(BOOL)hasLogo;
-(void)setLogo:(NSString *)arg1 ;
-(void)setBadgeChecksum:(NSString *)arg1 ;
-(void)setLogoChecksum:(NSString *)arg1 ;
-(BOOL)hasBadgeChecksum;
-(BOOL)hasLogoChecksum;
-(NSString *)logo;
-(NSString *)badgeChecksum;
-(NSString *)logoChecksum;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(GEOTileSetRegion*)regions;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBadge:(NSString *)arg1 ;
-(NSString *)badge;
-(BOOL)hasBadge;
@end

