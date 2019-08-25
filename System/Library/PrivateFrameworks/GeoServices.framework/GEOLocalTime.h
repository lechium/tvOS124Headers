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

@class PBUnknownFields;

@interface GEOLocalTime : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _timeRoundedToHour;
	float _timezoneOffsetFromGmtInHours;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasTimeRoundedToHour; 
@property (assign,nonatomic) unsigned long long timeRoundedToHour;              //@synthesize timeRoundedToHour=_timeRoundedToHour - In the implementation block
@property (assign,nonatomic) BOOL hasTimezoneOffsetFromGmtInHours; 
@property (assign,nonatomic) float timezoneOffsetFromGmtInHours;                //@synthesize timezoneOffsetFromGmtInHours=_timezoneOffsetFromGmtInHours - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithDate:(id)arg1 ;
-(void)setTimeRoundedToHour:(unsigned long long)arg1 ;
-(void)setHasTimeRoundedToHour:(BOOL)arg1 ;
-(BOOL)hasTimeRoundedToHour;
-(void)setTimezoneOffsetFromGmtInHours:(float)arg1 ;
-(void)setHasTimezoneOffsetFromGmtInHours:(BOOL)arg1 ;
-(BOOL)hasTimezoneOffsetFromGmtInHours;
-(unsigned long long)timeRoundedToHour;
-(float)timezoneOffsetFromGmtInHours;
-(id)initWithCFAbsoluteTime:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

