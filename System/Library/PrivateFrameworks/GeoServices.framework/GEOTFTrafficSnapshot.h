/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOTFTrafficSnapshot : PBCodable <NSCopying> {

	unsigned long long _feedPublishTime;
	long long _feedUpdateTime;
	NSMutableArray* _compactSpeeds;
	NSString* _feedId;
	NSMutableArray* _incidents;
	NSMutableArray* _regions;
	NSString* _snapshotId;
	NSMutableArray* _speeds;
	unsigned _trafficVersion;
	SCD_Struct_GE23 _has;

}

@property (nonatomic,retain) NSMutableArray * regions;                        //@synthesize regions=_regions - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidents;                      //@synthesize incidents=_incidents - In the implementation block
@property (nonatomic,retain) NSMutableArray * speeds;                         //@synthesize speeds=_speeds - In the implementation block
@property (assign,nonatomic) BOOL hasFeedUpdateTime; 
@property (assign,nonatomic) long long feedUpdateTime;                        //@synthesize feedUpdateTime=_feedUpdateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                               //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficVersion; 
@property (assign,nonatomic) unsigned trafficVersion;                         //@synthesize trafficVersion=_trafficVersion - In the implementation block
@property (assign,nonatomic) BOOL hasFeedPublishTime; 
@property (assign,nonatomic) unsigned long long feedPublishTime;              //@synthesize feedPublishTime=_feedPublishTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * compactSpeeds;                  //@synthesize compactSpeeds=_compactSpeeds - In the implementation block
@property (nonatomic,readonly) BOOL hasSnapshotId; 
@property (nonatomic,retain) NSString * snapshotId;                           //@synthesize snapshotId=_snapshotId - In the implementation block
+(Class)regionType;
+(Class)incidentsType;
+(Class)speedsType;
+(Class)compactSpeedsType;
-(void)clearRegions;
-(unsigned long long)regionsCount;
-(id)regionAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)incidents;
-(void)addIncidents:(id)arg1 ;
-(void)addSpeeds:(id)arg1 ;
-(void)addCompactSpeeds:(id)arg1 ;
-(unsigned long long)incidentsCount;
-(void)clearIncidents;
-(id)incidentsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)speedsCount;
-(void)clearSpeeds;
-(id)speedsAtIndex:(unsigned long long)arg1 ;
-(void)setFeedId:(NSString *)arg1 ;
-(unsigned long long)compactSpeedsCount;
-(void)clearCompactSpeeds;
-(id)compactSpeedsAtIndex:(unsigned long long)arg1 ;
-(void)setSnapshotId:(NSString *)arg1 ;
-(void)setFeedUpdateTime:(long long)arg1 ;
-(void)setHasFeedUpdateTime:(BOOL)arg1 ;
-(BOOL)hasFeedUpdateTime;
-(BOOL)hasFeedId;
-(void)setTrafficVersion:(unsigned)arg1 ;
-(void)setHasTrafficVersion:(BOOL)arg1 ;
-(BOOL)hasTrafficVersion;
-(void)setFeedPublishTime:(unsigned long long)arg1 ;
-(void)setHasFeedPublishTime:(BOOL)arg1 ;
-(BOOL)hasFeedPublishTime;
-(BOOL)hasSnapshotId;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(void)setIncidents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)speeds;
-(void)setSpeeds:(NSMutableArray *)arg1 ;
-(long long)feedUpdateTime;
-(NSString *)feedId;
-(unsigned)trafficVersion;
-(unsigned long long)feedPublishTime;
-(NSMutableArray *)compactSpeeds;
-(void)setCompactSpeeds:(NSMutableArray *)arg1 ;
-(NSString *)snapshotId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addRegion:(id)arg1 ;
-(NSMutableArray *)regions;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

