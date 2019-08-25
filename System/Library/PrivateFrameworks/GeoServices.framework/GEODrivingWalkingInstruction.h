/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOFormattedString;

@interface GEODrivingWalkingInstruction : PBCodable <NSCopying> {

	NSMutableArray* _continueCommands;
	GEOFormattedString* _distance;
	NSMutableArray* _mergeCommands;
	NSMutableArray* _normalCommands;

}

@property (nonatomic,readonly) BOOL hasDistance; 
@property (nonatomic,retain) GEOFormattedString * distance;                  //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSMutableArray * normalCommands;                //@synthesize normalCommands=_normalCommands - In the implementation block
@property (nonatomic,retain) NSMutableArray * continueCommands;              //@synthesize continueCommands=_continueCommands - In the implementation block
@property (nonatomic,retain) NSMutableArray * mergeCommands;                 //@synthesize mergeCommands=_mergeCommands - In the implementation block
+(Class)normalCommandType;
+(Class)continueCommandType;
+(Class)mergeCommandType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDistance:(GEOFormattedString *)arg1 ;
-(BOOL)hasDistance;
-(GEOFormattedString *)distance;
-(NSMutableArray *)normalCommands;
-(NSMutableArray *)mergeCommands;
-(NSMutableArray *)continueCommands;
-(void)addNormalCommand:(id)arg1 ;
-(void)addContinueCommand:(id)arg1 ;
-(void)addMergeCommand:(id)arg1 ;
-(unsigned long long)normalCommandsCount;
-(void)clearNormalCommands;
-(id)normalCommandAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)continueCommandsCount;
-(void)clearContinueCommands;
-(id)continueCommandAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)mergeCommandsCount;
-(void)clearMergeCommands;
-(id)mergeCommandAtIndex:(unsigned long long)arg1 ;
-(void)setNormalCommands:(NSMutableArray *)arg1 ;
-(void)setContinueCommands:(NSMutableArray *)arg1 ;
-(void)setMergeCommands:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

