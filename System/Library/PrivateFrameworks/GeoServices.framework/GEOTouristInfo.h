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

@interface GEOTouristInfo : PBCodable <NSCopying> {

	double _fetchTimestamp;
	BOOL _isTourist;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasIsTourist; 
@property (assign,nonatomic) BOOL isTourist;                      //@synthesize isTourist=_isTourist - In the implementation block
@property (assign,nonatomic) BOOL hasFetchTimestamp; 
@property (assign,nonatomic) double fetchTimestamp;               //@synthesize fetchTimestamp=_fetchTimestamp - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsTourist:(BOOL)arg1 ;
-(void)setHasIsTourist:(BOOL)arg1 ;
-(BOOL)hasIsTourist;
-(void)setFetchTimestamp:(double)arg1 ;
-(void)setHasFetchTimestamp:(BOOL)arg1 ;
-(BOOL)hasFetchTimestamp;
-(BOOL)isTourist;
-(double)fetchTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

