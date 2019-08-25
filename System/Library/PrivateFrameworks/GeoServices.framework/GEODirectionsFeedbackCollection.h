/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOLocation;

@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying> {

	GEONavigationAudioFeedback _navigationAudioFeedback;
	double _durationOfTrip;
	NSMutableArray* _directionsFeedbacks;
	GEOLocation* _finalLocation;
	BOOL _arrivedAtDestination;
	SCD_Struct_GE23 _has;

}

@property (nonatomic,retain) NSMutableArray * directionsFeedbacks;                            //@synthesize directionsFeedbacks=_directionsFeedbacks - In the implementation block
@property (nonatomic,readonly) BOOL hasFinalLocation; 
@property (nonatomic,retain) GEOLocation * finalLocation;                                     //@synthesize finalLocation=_finalLocation - In the implementation block
@property (assign,nonatomic) BOOL hasArrivedAtDestination; 
@property (assign,nonatomic) BOOL arrivedAtDestination;                                       //@synthesize arrivedAtDestination=_arrivedAtDestination - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationAudioFeedback; 
@property (assign,nonatomic) GEONavigationAudioFeedback navigationAudioFeedback;              //@synthesize navigationAudioFeedback=_navigationAudioFeedback - In the implementation block
@property (assign,nonatomic) BOOL hasDurationOfTrip; 
@property (assign,nonatomic) double durationOfTrip;                                           //@synthesize durationOfTrip=_durationOfTrip - In the implementation block
+(Class)directionsFeedbackType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addDirectionsFeedback:(id)arg1 ;
-(void)setFinalLocation:(GEOLocation *)arg1 ;
-(void)setArrivedAtDestination:(BOOL)arg1 ;
-(void)setNavigationAudioFeedback:(GEONavigationAudioFeedback)arg1 ;
-(void)setDurationOfTrip:(double)arg1 ;
-(unsigned long long)directionsFeedbacksCount;
-(void)clearDirectionsFeedbacks;
-(id)directionsFeedbackAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFinalLocation;
-(void)setHasArrivedAtDestination:(BOOL)arg1 ;
-(BOOL)hasArrivedAtDestination;
-(void)setHasNavigationAudioFeedback:(BOOL)arg1 ;
-(BOOL)hasNavigationAudioFeedback;
-(void)setHasDurationOfTrip:(BOOL)arg1 ;
-(BOOL)hasDurationOfTrip;
-(NSMutableArray *)directionsFeedbacks;
-(void)setDirectionsFeedbacks:(NSMutableArray *)arg1 ;
-(GEOLocation *)finalLocation;
-(BOOL)arrivedAtDestination;
-(GEONavigationAudioFeedback)navigationAudioFeedback;
-(double)durationOfTrip;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

