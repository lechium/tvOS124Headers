/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineLearnedLocationReconciliationVisit : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _alternativeVisits;
	int _datapointCount;
	int _deviceClass;
	int _percentageTransitions;
	int _percentageVisits;
	int _placeLabelType;
	int _placeType;
	BOOL _didUnlock;
	BOOL _newPlace;
	BOOL _placeAOIPOI;
	BOOL _watchPresent;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDatapointCount; 
@property (assign,nonatomic) int datapointCount;                              //@synthesize datapointCount=_datapointCount - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceClass; 
@property (assign,nonatomic) int deviceClass;                                 //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) BOOL hasWatchPresent; 
@property (assign,nonatomic) BOOL watchPresent;                               //@synthesize watchPresent=_watchPresent - In the implementation block
@property (assign,nonatomic) BOOL hasDidUnlock; 
@property (assign,nonatomic) BOOL didUnlock;                                  //@synthesize didUnlock=_didUnlock - In the implementation block
@property (assign,nonatomic) BOOL hasNewPlace; 
@property (assign,nonatomic) BOOL newPlace;                                   //@synthesize newPlace=_newPlace - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceType; 
@property (assign,nonatomic) int placeType;                                   //@synthesize placeType=_placeType - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceLabelType; 
@property (assign,nonatomic) int placeLabelType;                              //@synthesize placeLabelType=_placeLabelType - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceAOIPOI; 
@property (assign,nonatomic) BOOL placeAOIPOI;                                //@synthesize placeAOIPOI=_placeAOIPOI - In the implementation block
@property (assign,nonatomic) BOOL hasPercentageVisits; 
@property (assign,nonatomic) int percentageVisits;                            //@synthesize percentageVisits=_percentageVisits - In the implementation block
@property (assign,nonatomic) BOOL hasPercentageTransitions; 
@property (assign,nonatomic) int percentageTransitions;                       //@synthesize percentageTransitions=_percentageTransitions - In the implementation block
@property (nonatomic,retain) NSMutableArray * alternativeVisits;              //@synthesize alternativeVisits=_alternativeVisits - In the implementation block
+(Class)alternativeVisitsType;
-(void)setAlternativeVisits:(NSMutableArray *)arg1 ;
-(void)addAlternativeVisits:(id)arg1 ;
-(unsigned long long)alternativeVisitsCount;
-(void)clearAlternativeVisits;
-(id)alternativeVisitsAtIndex:(unsigned long long)arg1 ;
-(void)setDatapointCount:(int)arg1 ;
-(void)setHasDatapointCount:(BOOL)arg1 ;
-(BOOL)hasDatapointCount;
-(void)setDeviceClass:(int)arg1 ;
-(void)setHasDeviceClass:(BOOL)arg1 ;
-(BOOL)hasDeviceClass;
-(void)setWatchPresent:(BOOL)arg1 ;
-(void)setHasWatchPresent:(BOOL)arg1 ;
-(BOOL)hasWatchPresent;
-(void)setDidUnlock:(BOOL)arg1 ;
-(void)setHasDidUnlock:(BOOL)arg1 ;
-(BOOL)hasDidUnlock;
-(void)setNewPlace:(BOOL)arg1 ;
-(void)setHasNewPlace:(BOOL)arg1 ;
-(BOOL)hasNewPlace;
-(void)setPlaceLabelType:(int)arg1 ;
-(void)setHasPlaceLabelType:(BOOL)arg1 ;
-(BOOL)hasPlaceLabelType;
-(void)setPlaceAOIPOI:(BOOL)arg1 ;
-(void)setHasPlaceAOIPOI:(BOOL)arg1 ;
-(BOOL)hasPlaceAOIPOI;
-(void)setPercentageVisits:(int)arg1 ;
-(void)setHasPercentageVisits:(BOOL)arg1 ;
-(BOOL)hasPercentageVisits;
-(void)setPercentageTransitions:(int)arg1 ;
-(void)setHasPercentageTransitions:(BOOL)arg1 ;
-(BOOL)hasPercentageTransitions;
-(int)datapointCount;
-(BOOL)watchPresent;
-(BOOL)didUnlock;
-(BOOL)newPlace;
-(int)placeLabelType;
-(BOOL)placeAOIPOI;
-(int)percentageVisits;
-(int)percentageTransitions;
-(NSMutableArray *)alternativeVisits;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(int)placeType;
-(void)setPlaceType:(int)arg1 ;
-(void)setHasPlaceType:(BOOL)arg1 ;
-(BOOL)hasPlaceType;
-(int)deviceClass;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

