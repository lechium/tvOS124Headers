/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLBConnectionReport : PBCodable <NSCopying> {

	SCD_Struct_AW23* _connectionReadyTimes;
	SCD_Struct_AW15* _resumptionFailureErrors;
	SCD_Struct_AW23* _resumptionFailureTimes;
	SCD_Struct_AW23* _resumptionSuccessTimes;
	long long _bytesReceived;
	long long _bytesSent;
	long long _clientConnectionCount;
	long long _connectionDuration;
	unsigned long long _timestamp;
	int _connectionAttemptCount;
	int _connectionCellularFallbackCount;
	int _connectionFailureCount;
	int _connectionSuccessMptcpCount;
	int _connectionSuccessTcpCount;
	int _resumptionFailureCount;
	int _resumptionSuccessCount;
	int _suspensionCount;
	int _upgradeSuccessAndNotNeededCount;
	int _upgradeSuccessAndPrimaryCount;
	SCD_Struct_AW20 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionAttemptCount; 
@property (assign,nonatomic) int connectionAttemptCount;                                     //@synthesize connectionAttemptCount=_connectionAttemptCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionSuccessMptcpCount; 
@property (assign,nonatomic) int connectionSuccessMptcpCount;                                //@synthesize connectionSuccessMptcpCount=_connectionSuccessMptcpCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionSuccessTcpCount; 
@property (assign,nonatomic) int connectionSuccessTcpCount;                                  //@synthesize connectionSuccessTcpCount=_connectionSuccessTcpCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionFailureCount; 
@property (assign,nonatomic) int connectionFailureCount;                                     //@synthesize connectionFailureCount=_connectionFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionCellularFallbackCount; 
@property (assign,nonatomic) int connectionCellularFallbackCount;                            //@synthesize connectionCellularFallbackCount=_connectionCellularFallbackCount - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionReadyTimesCount; 
@property (nonatomic,readonly) long long* connectionReadyTimes; 
@property (assign,nonatomic) BOOL hasSuspensionCount; 
@property (assign,nonatomic) int suspensionCount;                                            //@synthesize suspensionCount=_suspensionCount - In the implementation block
@property (assign,nonatomic) BOOL hasResumptionSuccessCount; 
@property (assign,nonatomic) int resumptionSuccessCount;                                     //@synthesize resumptionSuccessCount=_resumptionSuccessCount - In the implementation block
@property (assign,nonatomic) BOOL hasResumptionFailureCount; 
@property (assign,nonatomic) int resumptionFailureCount;                                     //@synthesize resumptionFailureCount=_resumptionFailureCount - In the implementation block
@property (nonatomic,readonly) unsigned long long resumptionFailureErrorsCount; 
@property (nonatomic,readonly) int* resumptionFailureErrors; 
@property (nonatomic,readonly) unsigned long long resumptionSuccessTimesCount; 
@property (nonatomic,readonly) long long* resumptionSuccessTimes; 
@property (nonatomic,readonly) unsigned long long resumptionFailureTimesCount; 
@property (nonatomic,readonly) long long* resumptionFailureTimes; 
@property (assign,nonatomic) BOOL hasUpgradeSuccessAndPrimaryCount; 
@property (assign,nonatomic) int upgradeSuccessAndPrimaryCount;                              //@synthesize upgradeSuccessAndPrimaryCount=_upgradeSuccessAndPrimaryCount - In the implementation block
@property (assign,nonatomic) BOOL hasUpgradeSuccessAndNotNeededCount; 
@property (assign,nonatomic) int upgradeSuccessAndNotNeededCount;                            //@synthesize upgradeSuccessAndNotNeededCount=_upgradeSuccessAndNotNeededCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionDuration; 
@property (assign,nonatomic) long long connectionDuration;                                   //@synthesize connectionDuration=_connectionDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBytesSent; 
@property (assign,nonatomic) long long bytesSent;                                            //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL hasBytesReceived; 
@property (assign,nonatomic) long long bytesReceived;                                        //@synthesize bytesReceived=_bytesReceived - In the implementation block
@property (assign,nonatomic) BOOL hasClientConnectionCount; 
@property (assign,nonatomic) long long clientConnectionCount;                                //@synthesize clientConnectionCount=_clientConnectionCount - In the implementation block
-(void)setBytesSent:(long long)arg1 ;
-(void)setHasBytesSent:(BOOL)arg1 ;
-(BOOL)hasBytesSent;
-(void)setBytesReceived:(long long)arg1 ;
-(void)setHasBytesReceived:(BOOL)arg1 ;
-(BOOL)hasBytesReceived;
-(long long)bytesSent;
-(long long)bytesReceived;
-(void)setConnectionDuration:(long long)arg1 ;
-(void)setHasConnectionDuration:(BOOL)arg1 ;
-(BOOL)hasConnectionDuration;
-(long long)connectionDuration;
-(unsigned long long)connectionReadyTimesCount;
-(void)clearConnectionReadyTimes;
-(long long)connectionReadyTimesAtIndex:(unsigned long long)arg1 ;
-(void)addConnectionReadyTimes:(long long)arg1 ;
-(unsigned long long)resumptionFailureErrorsCount;
-(void)clearResumptionFailureErrors;
-(int)resumptionFailureErrorsAtIndex:(unsigned long long)arg1 ;
-(void)addResumptionFailureErrors:(int)arg1 ;
-(unsigned long long)resumptionSuccessTimesCount;
-(void)clearResumptionSuccessTimes;
-(long long)resumptionSuccessTimesAtIndex:(unsigned long long)arg1 ;
-(void)addResumptionSuccessTimes:(long long)arg1 ;
-(unsigned long long)resumptionFailureTimesCount;
-(void)clearResumptionFailureTimes;
-(long long)resumptionFailureTimesAtIndex:(unsigned long long)arg1 ;
-(void)addResumptionFailureTimes:(long long)arg1 ;
-(void)setConnectionAttemptCount:(int)arg1 ;
-(void)setHasConnectionAttemptCount:(BOOL)arg1 ;
-(BOOL)hasConnectionAttemptCount;
-(void)setConnectionSuccessMptcpCount:(int)arg1 ;
-(void)setHasConnectionSuccessMptcpCount:(BOOL)arg1 ;
-(BOOL)hasConnectionSuccessMptcpCount;
-(void)setConnectionSuccessTcpCount:(int)arg1 ;
-(void)setHasConnectionSuccessTcpCount:(BOOL)arg1 ;
-(BOOL)hasConnectionSuccessTcpCount;
-(void)setConnectionFailureCount:(int)arg1 ;
-(void)setHasConnectionFailureCount:(BOOL)arg1 ;
-(BOOL)hasConnectionFailureCount;
-(void)setConnectionCellularFallbackCount:(int)arg1 ;
-(void)setHasConnectionCellularFallbackCount:(BOOL)arg1 ;
-(BOOL)hasConnectionCellularFallbackCount;
-(long long*)connectionReadyTimes;
-(void)setConnectionReadyTimes:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setSuspensionCount:(int)arg1 ;
-(void)setHasSuspensionCount:(BOOL)arg1 ;
-(BOOL)hasSuspensionCount;
-(void)setResumptionSuccessCount:(int)arg1 ;
-(void)setHasResumptionSuccessCount:(BOOL)arg1 ;
-(BOOL)hasResumptionSuccessCount;
-(void)setResumptionFailureCount:(int)arg1 ;
-(void)setHasResumptionFailureCount:(BOOL)arg1 ;
-(BOOL)hasResumptionFailureCount;
-(int*)resumptionFailureErrors;
-(void)setResumptionFailureErrors:(int*)arg1 count:(unsigned long long)arg2 ;
-(long long*)resumptionSuccessTimes;
-(void)setResumptionSuccessTimes:(long long*)arg1 count:(unsigned long long)arg2 ;
-(long long*)resumptionFailureTimes;
-(void)setResumptionFailureTimes:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setUpgradeSuccessAndPrimaryCount:(int)arg1 ;
-(void)setHasUpgradeSuccessAndPrimaryCount:(BOOL)arg1 ;
-(BOOL)hasUpgradeSuccessAndPrimaryCount;
-(void)setUpgradeSuccessAndNotNeededCount:(int)arg1 ;
-(void)setHasUpgradeSuccessAndNotNeededCount:(BOOL)arg1 ;
-(BOOL)hasUpgradeSuccessAndNotNeededCount;
-(void)setClientConnectionCount:(long long)arg1 ;
-(void)setHasClientConnectionCount:(BOOL)arg1 ;
-(BOOL)hasClientConnectionCount;
-(int)connectionAttemptCount;
-(int)connectionSuccessMptcpCount;
-(int)connectionSuccessTcpCount;
-(int)connectionFailureCount;
-(int)connectionCellularFallbackCount;
-(int)suspensionCount;
-(int)resumptionSuccessCount;
-(int)resumptionFailureCount;
-(int)upgradeSuccessAndPrimaryCount;
-(int)upgradeSuccessAndNotNeededCount;
-(long long)clientConnectionCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
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

