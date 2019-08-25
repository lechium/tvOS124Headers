/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlaySupport/AirPlaySupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface APSAWDAirPlayAudioSessionEndedOnClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _duration;
	unsigned _futileRetransmits;
	int _reason;
	unsigned _retransmits;
	NSString* _sessionUUID;
	unsigned _slowKeepAlives;
	SCD_Struct_AP11 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasSlowKeepAlives; 
@property (assign,nonatomic) unsigned slowKeepAlives;                   //@synthesize slowKeepAlives=_slowKeepAlives - In the implementation block
@property (assign,nonatomic) BOOL hasRetransmits; 
@property (assign,nonatomic) unsigned retransmits;                      //@synthesize retransmits=_retransmits - In the implementation block
@property (assign,nonatomic) BOOL hasFutileRetransmits; 
@property (assign,nonatomic) unsigned futileRetransmits;                //@synthesize futileRetransmits=_futileRetransmits - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasReason;
-(void)setReason:(int)arg1 ;
-(BOOL)hasSessionUUID;
-(void)setSlowKeepAlives:(unsigned)arg1 ;
-(void)setHasSlowKeepAlives:(BOOL)arg1 ;
-(BOOL)hasSlowKeepAlives;
-(void)setRetransmits:(unsigned)arg1 ;
-(void)setHasRetransmits:(BOOL)arg1 ;
-(BOOL)hasRetransmits;
-(void)setFutileRetransmits:(unsigned)arg1 ;
-(void)setHasFutileRetransmits:(BOOL)arg1 ;
-(BOOL)hasFutileRetransmits;
-(unsigned)slowKeepAlives;
-(unsigned)retransmits;
-(unsigned)futileRetransmits;
-(NSString *)sessionUUID;
-(void)setSessionUUID:(NSString *)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)reason;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
