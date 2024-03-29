/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVisualLaneGuidance : PBCodable <NSCopying> {

	NSMutableArray* _instructions;
	NSMutableArray* _laneInfos;
	NSMutableArray* _titles;

}

@property (nonatomic,retain) NSMutableArray * laneInfos;                 //@synthesize laneInfos=_laneInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * instructions;              //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,retain) NSMutableArray * titles;                    //@synthesize titles=_titles - In the implementation block
+(Class)laneInfoType;
+(Class)instructionType;
+(Class)titleType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setInstructions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)instructions;
-(NSMutableArray *)laneInfos;
-(void)addTitle:(id)arg1 ;
-(unsigned long long)titlesCount;
-(void)clearTitles;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(void)addLaneInfo:(id)arg1 ;
-(void)addInstruction:(id)arg1 ;
-(unsigned long long)laneInfosCount;
-(void)clearLaneInfos;
-(id)laneInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)instructionsCount;
-(void)clearInstructions;
-(id)instructionAtIndex:(unsigned long long)arg1 ;
-(void)setLaneInfos:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)titles;
-(void)setTitles:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

