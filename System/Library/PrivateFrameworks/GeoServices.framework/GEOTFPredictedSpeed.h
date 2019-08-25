/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTFPredictedSpeed : PBCodable <NSCopying> {

	unsigned _deltaMinutesInFuture;
	unsigned _speed;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasDeltaMinutesInFuture; 
@property (assign,nonatomic) unsigned deltaMinutesInFuture;              //@synthesize deltaMinutesInFuture=_deltaMinutesInFuture - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) unsigned speed;                             //@synthesize speed=_speed - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(void)setDeltaMinutesInFuture:(unsigned)arg1 ;
-(void)setHasDeltaMinutesInFuture:(BOOL)arg1 ;
-(BOOL)hasDeltaMinutesInFuture;
-(unsigned)deltaMinutesInFuture;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSpeed:(unsigned)arg1 ;
-(unsigned)speed;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

