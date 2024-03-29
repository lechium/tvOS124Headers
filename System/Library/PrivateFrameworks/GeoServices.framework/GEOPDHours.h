/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDHoursThreshold;

@interface GEOPDHours : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE2* _days;
	GEOPDLocalTimeRange* _timeRanges;
	unsigned long long _timeRangesCount;
	unsigned long long _timeRangesSpace;
	GEOPDHoursThreshold* _hoursThreshold;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,readonly) unsigned long long timeRangesCount; 
@property (nonatomic,readonly) GEOPDLocalTimeRange* timeRanges; 
@property (nonatomic,readonly) BOOL hasHoursThreshold; 
@property (nonatomic,retain) GEOPDHoursThreshold * hoursThreshold;              //@synthesize hoursThreshold=_hoursThreshold - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)_allHoursForPlaceData:(id)arg1 ;
+(BOOL)operatingHoursAvailableForPlaceData:(id)arg1 ;
+(BOOL)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2 ;
+(id)completeOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int*)days;
-(unsigned long long)daysCount;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(GEOPDLocalTimeRange*)timeRanges;
-(unsigned long long)timeRangesCount;
-(void)addTimeRange:(GEOPDLocalTimeRange)arg1 ;
-(GEOPDHoursThreshold *)hoursThreshold;
-(void)clearTimeRanges;
-(void)clearDays;
-(int)dayAtIndex:(unsigned long long)arg1 ;
-(void)addDay:(int)arg1 ;
-(GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1 ;
-(void)setHoursThreshold:(GEOPDHoursThreshold *)arg1 ;
-(id)daysAsString:(int)arg1 ;
-(int)StringAsDays:(id)arg1 ;
-(void)setTimeRanges:(GEOPDLocalTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasHoursThreshold;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

