/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerBlacklistingInstanceInfo : PBCodable <NSCopying> {

	unsigned long long _blacklistingTimestamp;
	unsigned _blacklistingReason;
	unsigned _reservedInfo;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasBlacklistingReason; 
@property (assign,nonatomic) unsigned blacklistingReason;                           //@synthesize blacklistingReason=_blacklistingReason - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklistingTimestamp; 
@property (assign,nonatomic) unsigned long long blacklistingTimestamp;              //@synthesize blacklistingTimestamp=_blacklistingTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReservedInfo; 
@property (assign,nonatomic) unsigned reservedInfo;                                 //@synthesize reservedInfo=_reservedInfo - In the implementation block
-(void)setBlacklistingReason:(unsigned)arg1 ;
-(void)setHasBlacklistingReason:(BOOL)arg1 ;
-(BOOL)hasBlacklistingReason;
-(void)setBlacklistingTimestamp:(unsigned long long)arg1 ;
-(void)setHasBlacklistingTimestamp:(BOOL)arg1 ;
-(BOOL)hasBlacklistingTimestamp;
-(void)setReservedInfo:(unsigned)arg1 ;
-(void)setHasReservedInfo:(BOOL)arg1 ;
-(BOOL)hasReservedInfo;
-(unsigned)blacklistingReason;
-(unsigned long long)blacklistingTimestamp;
-(unsigned)reservedInfo;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

