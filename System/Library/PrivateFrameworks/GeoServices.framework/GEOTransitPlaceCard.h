/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOTransitDepartureSequenceUsage;

@interface GEOTransitPlaceCard : PBCodable <NSCopying> {

	NSString* _incidentType;
	int _transitCategory;
	GEOTransitDepartureSequenceUsage* _transitDepartureSequenceUsage;
	NSString* _transitSystemName;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasTransitCategory; 
@property (assign,nonatomic) int transitCategory;                                                           //@synthesize transitCategory=_transitCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitSystemName; 
@property (nonatomic,retain) NSString * transitSystemName;                                                  //@synthesize transitSystemName=_transitSystemName - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitDepartureSequenceUsage; 
@property (nonatomic,retain) GEOTransitDepartureSequenceUsage * transitDepartureSequenceUsage;              //@synthesize transitDepartureSequenceUsage=_transitDepartureSequenceUsage - In the implementation block
@property (nonatomic,readonly) BOOL hasIncidentType; 
@property (nonatomic,retain) NSString * incidentType;                                                       //@synthesize incidentType=_incidentType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTransitSystemName:(NSString *)arg1 ;
-(void)setTransitDepartureSequenceUsage:(GEOTransitDepartureSequenceUsage *)arg1 ;
-(void)setIncidentType:(NSString *)arg1 ;
-(int)transitCategory;
-(void)setTransitCategory:(int)arg1 ;
-(void)setHasTransitCategory:(BOOL)arg1 ;
-(BOOL)hasTransitCategory;
-(id)transitCategoryAsString:(int)arg1 ;
-(int)StringAsTransitCategory:(id)arg1 ;
-(BOOL)hasTransitSystemName;
-(BOOL)hasTransitDepartureSequenceUsage;
-(BOOL)hasIncidentType;
-(NSString *)transitSystemName;
-(GEOTransitDepartureSequenceUsage *)transitDepartureSequenceUsage;
-(NSString *)incidentType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

