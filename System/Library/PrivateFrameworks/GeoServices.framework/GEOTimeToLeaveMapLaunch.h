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

@interface GEOTimeToLeaveMapLaunch : PBCodable <NSCopying> {

	double _minutesUntilEvent;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasMinutesUntilEvent; 
@property (assign,nonatomic) double minutesUntilEvent;               //@synthesize minutesUntilEvent=_minutesUntilEvent - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMinutesUntilEvent:(double)arg1 ;
-(void)setHasMinutesUntilEvent:(BOOL)arg1 ;
-(BOOL)hasMinutesUntilEvent;
-(double)minutesUntilEvent;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

