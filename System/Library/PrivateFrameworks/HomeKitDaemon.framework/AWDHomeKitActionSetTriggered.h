/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitActionSetTriggered : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _duration;
	int _errorCode;
	unsigned _numAccessories;
	NSString* _transaction;
	int _triggerSource;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasTransaction; 
@property (nonatomic,retain) NSString * transaction;                    //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerSource; 
@property (assign,nonatomic) int triggerSource;                         //@synthesize triggerSource=_triggerSource - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessories; 
@property (assign,nonatomic) unsigned numAccessories;                   //@synthesize numAccessories=_numAccessories - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(int)errorCode;
-(NSString *)transaction;
-(void)setTransaction:(NSString *)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setNumAccessories:(unsigned)arg1 ;
-(BOOL)hasTransaction;
-(int)triggerSource;
-(unsigned)numAccessories;
-(void)setTriggerSource:(int)arg1 ;
-(void)setHasTriggerSource:(BOOL)arg1 ;
-(BOOL)hasTriggerSource;
-(id)triggerSourceAsString:(int)arg1 ;
-(int)StringAsTriggerSource:(id)arg1 ;
-(void)setHasNumAccessories:(BOOL)arg1 ;
-(BOOL)hasNumAccessories;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

