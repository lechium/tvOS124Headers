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

@interface APSAWDAirPlayDiscoveryDetailedModeStats : PBCodable <NSCopying> {

	unsigned long long _durationMs;
	unsigned long long _firstAWDLDeviceFoundMs;
	unsigned long long _firstSrcPresenceBeaconSentMs;
	unsigned long long _startTime;
	unsigned long long _timestamp;
	int _apRSSI;
	unsigned _devicePickedMs;
	NSString* _discoverySessionUUID;
	int _status;
	unsigned _totalAWDLPeersDiscovered;
	unsigned _totalAWDLmDNSPeers;
	unsigned _totalPeersDiscovered;
	SCD_Struct_AP7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasDiscoverySessionUUID; 
@property (nonatomic,retain) NSString * discoverySessionUUID;                              //@synthesize discoverySessionUUID=_discoverySessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                                   //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) unsigned long long startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasFirstSrcPresenceBeaconSentMs; 
@property (assign,nonatomic) unsigned long long firstSrcPresenceBeaconSentMs;              //@synthesize firstSrcPresenceBeaconSentMs=_firstSrcPresenceBeaconSentMs - In the implementation block
@property (assign,nonatomic) BOOL hasFirstAWDLDeviceFoundMs; 
@property (assign,nonatomic) unsigned long long firstAWDLDeviceFoundMs;                    //@synthesize firstAWDLDeviceFoundMs=_firstAWDLDeviceFoundMs - In the implementation block
@property (assign,nonatomic) BOOL hasDurationMs; 
@property (assign,nonatomic) unsigned long long durationMs;                                //@synthesize durationMs=_durationMs - In the implementation block
@property (assign,nonatomic) BOOL hasTotalPeersDiscovered; 
@property (assign,nonatomic) unsigned totalPeersDiscovered;                                //@synthesize totalPeersDiscovered=_totalPeersDiscovered - In the implementation block
@property (assign,nonatomic) BOOL hasDevicePickedMs; 
@property (assign,nonatomic) unsigned devicePickedMs;                                      //@synthesize devicePickedMs=_devicePickedMs - In the implementation block
@property (assign,nonatomic) BOOL hasApRSSI; 
@property (assign,nonatomic) int apRSSI;                                                   //@synthesize apRSSI=_apRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAWDLPeersDiscovered; 
@property (assign,nonatomic) unsigned totalAWDLPeersDiscovered;                            //@synthesize totalAWDLPeersDiscovered=_totalAWDLPeersDiscovered - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAWDLmDNSPeers; 
@property (assign,nonatomic) unsigned totalAWDLmDNSPeers;                                  //@synthesize totalAWDLmDNSPeers=_totalAWDLmDNSPeers - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setDurationMs:(unsigned long long)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(BOOL)hasDurationMs;
-(unsigned long long)durationMs;
-(BOOL)hasDiscoverySessionUUID;
-(NSString *)discoverySessionUUID;
-(void)setDiscoverySessionUUID:(NSString *)arg1 ;
-(void)setFirstSrcPresenceBeaconSentMs:(unsigned long long)arg1 ;
-(void)setHasFirstSrcPresenceBeaconSentMs:(BOOL)arg1 ;
-(BOOL)hasFirstSrcPresenceBeaconSentMs;
-(void)setFirstAWDLDeviceFoundMs:(unsigned long long)arg1 ;
-(void)setHasFirstAWDLDeviceFoundMs:(BOOL)arg1 ;
-(BOOL)hasFirstAWDLDeviceFoundMs;
-(void)setTotalPeersDiscovered:(unsigned)arg1 ;
-(void)setHasTotalPeersDiscovered:(BOOL)arg1 ;
-(BOOL)hasTotalPeersDiscovered;
-(void)setDevicePickedMs:(unsigned)arg1 ;
-(void)setHasDevicePickedMs:(BOOL)arg1 ;
-(BOOL)hasDevicePickedMs;
-(void)setApRSSI:(int)arg1 ;
-(void)setHasApRSSI:(BOOL)arg1 ;
-(BOOL)hasApRSSI;
-(void)setTotalAWDLPeersDiscovered:(unsigned)arg1 ;
-(void)setHasTotalAWDLPeersDiscovered:(BOOL)arg1 ;
-(BOOL)hasTotalAWDLPeersDiscovered;
-(void)setTotalAWDLmDNSPeers:(unsigned)arg1 ;
-(void)setHasTotalAWDLmDNSPeers:(BOOL)arg1 ;
-(BOOL)hasTotalAWDLmDNSPeers;
-(unsigned long long)firstSrcPresenceBeaconSentMs;
-(unsigned long long)firstAWDLDeviceFoundMs;
-(unsigned)totalPeersDiscovered;
-(unsigned)devicePickedMs;
-(int)apRSSI;
-(unsigned)totalAWDLPeersDiscovered;
-(unsigned)totalAWDLmDNSPeers;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)startTime;
-(void)setStartTime:(unsigned long long)arg1 ;
-(int)status;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
@end

