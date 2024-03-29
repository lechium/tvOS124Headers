/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerNetworkTransitionRecord : PBCodable <NSCopying> {

	SCD_Struct_AW21* _channelScanCounts;
	unsigned long long _beganTimestamp;
	unsigned long long _endedTimestamp;
	unsigned long long _gotIPTimestamp;
	unsigned long long _timestamp;
	unsigned _errors;
	unsigned _state;
	unsigned _trigger;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBeganTimestamp; 
@property (assign,nonatomic) unsigned long long beganTimestamp;                        //@synthesize beganTimestamp=_beganTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndedTimestamp; 
@property (assign,nonatomic) unsigned long long endedTimestamp;                        //@synthesize endedTimestamp=_endedTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasGotIPTimestamp; 
@property (assign,nonatomic) unsigned long long gotIPTimestamp;                        //@synthesize gotIPTimestamp=_gotIPTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned state;                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasErrors; 
@property (assign,nonatomic) unsigned errors;                                          //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) BOOL hasTrigger; 
@property (assign,nonatomic) unsigned trigger;                                         //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) unsigned long long channelScanCountsCount; 
@property (nonatomic,readonly) unsigned* channelScanCounts; 
-(void)setBeganTimestamp:(unsigned long long)arg1 ;
-(void)setHasBeganTimestamp:(BOOL)arg1 ;
-(BOOL)hasBeganTimestamp;
-(void)setEndedTimestamp:(unsigned long long)arg1 ;
-(void)setHasEndedTimestamp:(BOOL)arg1 ;
-(BOOL)hasEndedTimestamp;
-(unsigned long long)beganTimestamp;
-(unsigned long long)endedTimestamp;
-(unsigned long long)channelScanCountsCount;
-(void)clearChannelScanCounts;
-(unsigned)channelScanCountAtIndex:(unsigned long long)arg1 ;
-(void)addChannelScanCount:(unsigned)arg1 ;
-(unsigned*)channelScanCounts;
-(void)setChannelScanCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setGotIPTimestamp:(unsigned long long)arg1 ;
-(void)setHasGotIPTimestamp:(BOOL)arg1 ;
-(BOOL)hasGotIPTimestamp;
-(void)setHasErrors:(BOOL)arg1 ;
-(BOOL)hasErrors;
-(unsigned long long)gotIPTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTrigger:(unsigned)arg1 ;
-(void)setErrors:(unsigned)arg1 ;
-(unsigned)errors;
-(void)setHasTrigger:(BOOL)arg1 ;
-(BOOL)hasTrigger;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)trigger;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

