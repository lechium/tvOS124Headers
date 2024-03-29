/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerTouchMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _tocuhTotalUserInteractionDuration;
	unsigned _touchStateActiveDuration;
	unsigned _touchStateAnticipateDuration;
	unsigned _touchStateOffDuration;
	unsigned _touchStateOnDuration;
	unsigned _touchStateOthersDuration;
	unsigned _touchStateReadyDuration;
	unsigned _touchTotalPowerMicroWatt;
	unsigned _touchTotalUserTouchCount;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTouchStateActiveDuration; 
@property (assign,nonatomic) unsigned touchStateActiveDuration;                       //@synthesize touchStateActiveDuration=_touchStateActiveDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTouchStateReadyDuration; 
@property (assign,nonatomic) unsigned touchStateReadyDuration;                        //@synthesize touchStateReadyDuration=_touchStateReadyDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTouchStateAnticipateDuration; 
@property (assign,nonatomic) unsigned touchStateAnticipateDuration;                   //@synthesize touchStateAnticipateDuration=_touchStateAnticipateDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTouchStateOffDuration; 
@property (assign,nonatomic) unsigned touchStateOffDuration;                          //@synthesize touchStateOffDuration=_touchStateOffDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTouchStateOnDuration; 
@property (assign,nonatomic) unsigned touchStateOnDuration;                           //@synthesize touchStateOnDuration=_touchStateOnDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTouchStateOthersDuration; 
@property (assign,nonatomic) unsigned touchStateOthersDuration;                       //@synthesize touchStateOthersDuration=_touchStateOthersDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTouchTotalPowerMicroWatt; 
@property (assign,nonatomic) unsigned touchTotalPowerMicroWatt;                       //@synthesize touchTotalPowerMicroWatt=_touchTotalPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasTouchTotalUserTouchCount; 
@property (assign,nonatomic) unsigned touchTotalUserTouchCount;                       //@synthesize touchTotalUserTouchCount=_touchTotalUserTouchCount - In the implementation block
@property (assign,nonatomic) BOOL hasTocuhTotalUserInteractionDuration; 
@property (assign,nonatomic) unsigned tocuhTotalUserInteractionDuration;              //@synthesize tocuhTotalUserInteractionDuration=_tocuhTotalUserInteractionDuration - In the implementation block
-(void)setTouchStateActiveDuration:(unsigned)arg1 ;
-(void)setHasTouchStateActiveDuration:(BOOL)arg1 ;
-(BOOL)hasTouchStateActiveDuration;
-(void)setTouchStateReadyDuration:(unsigned)arg1 ;
-(void)setHasTouchStateReadyDuration:(BOOL)arg1 ;
-(BOOL)hasTouchStateReadyDuration;
-(void)setTouchStateAnticipateDuration:(unsigned)arg1 ;
-(void)setHasTouchStateAnticipateDuration:(BOOL)arg1 ;
-(BOOL)hasTouchStateAnticipateDuration;
-(void)setTouchStateOffDuration:(unsigned)arg1 ;
-(void)setHasTouchStateOffDuration:(BOOL)arg1 ;
-(BOOL)hasTouchStateOffDuration;
-(void)setTouchStateOnDuration:(unsigned)arg1 ;
-(void)setHasTouchStateOnDuration:(BOOL)arg1 ;
-(BOOL)hasTouchStateOnDuration;
-(void)setTouchStateOthersDuration:(unsigned)arg1 ;
-(void)setHasTouchStateOthersDuration:(BOOL)arg1 ;
-(BOOL)hasTouchStateOthersDuration;
-(void)setTouchTotalPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasTouchTotalPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasTouchTotalPowerMicroWatt;
-(void)setTouchTotalUserTouchCount:(unsigned)arg1 ;
-(void)setHasTouchTotalUserTouchCount:(BOOL)arg1 ;
-(BOOL)hasTouchTotalUserTouchCount;
-(void)setTocuhTotalUserInteractionDuration:(unsigned)arg1 ;
-(void)setHasTocuhTotalUserInteractionDuration:(BOOL)arg1 ;
-(BOOL)hasTocuhTotalUserInteractionDuration;
-(unsigned)touchStateActiveDuration;
-(unsigned)touchStateReadyDuration;
-(unsigned)touchStateAnticipateDuration;
-(unsigned)touchStateOffDuration;
-(unsigned)touchStateOnDuration;
-(unsigned)touchStateOthersDuration;
-(unsigned)touchTotalPowerMicroWatt;
-(unsigned)touchTotalUserTouchCount;
-(unsigned)tocuhTotalUserInteractionDuration;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

