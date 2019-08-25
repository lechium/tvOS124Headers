/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HMPBMetadata : PBCodable <NSCopying> {

	NSMutableArray* _hapCategories;
	NSMutableArray* _hapCharacteristics;
	NSMutableArray* _hapServices;
	int _version;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapCharacteristics;              //@synthesize hapCharacteristics=_hapCharacteristics - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapServices;                     //@synthesize hapServices=_hapServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapCategories;                   //@synthesize hapCategories=_hapCategories - In the implementation block
+(Class)hapCharacteristicsType;
+(Class)hapServicesType;
+(Class)hapCategoriesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(NSMutableArray *)hapCharacteristics;
-(void)addHapCharacteristics:(id)arg1 ;
-(NSMutableArray *)hapServices;
-(void)addHapServices:(id)arg1 ;
-(void)addHapCategories:(id)arg1 ;
-(unsigned long long)hapCharacteristicsCount;
-(void)clearHapCharacteristics;
-(id)hapCharacteristicsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hapServicesCount;
-(void)clearHapServices;
-(id)hapServicesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hapCategoriesCount;
-(void)clearHapCategories;
-(id)hapCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)setHapCharacteristics:(NSMutableArray *)arg1 ;
-(void)setHapServices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)hapCategories;
-(void)setHapCategories:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

