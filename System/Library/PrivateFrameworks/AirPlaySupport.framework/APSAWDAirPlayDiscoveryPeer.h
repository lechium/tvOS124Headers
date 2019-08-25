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

@interface APSAWDAirPlayDiscoveryPeer : PBCodable <NSCopying> {

	unsigned long long _awdlAirPlayTXTReceivedMs;
	unsigned long long _awdlRAOPTXTReceivedMs;
	unsigned long long _startTime;
	unsigned long long _targetPresenceBeaconReceivedMs;
	unsigned long long _timestamp;
	unsigned long long _wifiAirPlayTXTReceivedMs;
	unsigned long long _wifiRAOPTXTReceivedMs;
	int _awdlRSSI;
	int _btleRSSI;
	int _deviceFeature;
	NSString* _discoverySessionUUID;
	int _status;
	int _wifiRSSI;
	BOOL _aggregated;
	SCD_Struct_AP14 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasDiscoverySessionUUID; 
@property (nonatomic,retain) NSString * discoverySessionUUID;                                //@synthesize discoverySessionUUID=_discoverySessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceFeature; 
@property (assign,nonatomic) int deviceFeature;                                              //@synthesize deviceFeature=_deviceFeature - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) unsigned long long startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasTargetPresenceBeaconReceivedMs; 
@property (assign,nonatomic) unsigned long long targetPresenceBeaconReceivedMs;              //@synthesize targetPresenceBeaconReceivedMs=_targetPresenceBeaconReceivedMs - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlAirPlayTXTReceivedMs; 
@property (assign,nonatomic) unsigned long long awdlAirPlayTXTReceivedMs;                    //@synthesize awdlAirPlayTXTReceivedMs=_awdlAirPlayTXTReceivedMs - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlRAOPTXTReceivedMs; 
@property (assign,nonatomic) unsigned long long awdlRAOPTXTReceivedMs;                       //@synthesize awdlRAOPTXTReceivedMs=_awdlRAOPTXTReceivedMs - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlRSSI; 
@property (assign,nonatomic) int awdlRSSI;                                                   //@synthesize awdlRSSI=_awdlRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasWifiAirPlayTXTReceivedMs; 
@property (assign,nonatomic) unsigned long long wifiAirPlayTXTReceivedMs;                    //@synthesize wifiAirPlayTXTReceivedMs=_wifiAirPlayTXTReceivedMs - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRAOPTXTReceivedMs; 
@property (assign,nonatomic) unsigned long long wifiRAOPTXTReceivedMs;                       //@synthesize wifiRAOPTXTReceivedMs=_wifiRAOPTXTReceivedMs - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRSSI; 
@property (assign,nonatomic) int wifiRSSI;                                                   //@synthesize wifiRSSI=_wifiRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasAggregated; 
@property (assign,nonatomic) BOOL aggregated;                                                //@synthesize aggregated=_aggregated - In the implementation block
@property (assign,nonatomic) BOOL hasBtleRSSI; 
@property (assign,nonatomic) int btleRSSI;                                                   //@synthesize btleRSSI=_btleRSSI - In the implementation block
-(void)setWifiRSSI:(int)arg1 ;
-(void)setHasWifiRSSI:(BOOL)arg1 ;
-(BOOL)hasWifiRSSI;
-(int)wifiRSSI;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setAwdlRSSI:(int)arg1 ;
-(void)setHasAwdlRSSI:(BOOL)arg1 ;
-(BOOL)hasAwdlRSSI;
-(int)awdlRSSI;
-(BOOL)hasDiscoverySessionUUID;
-(NSString *)discoverySessionUUID;
-(void)setDiscoverySessionUUID:(NSString *)arg1 ;
-(void)setDeviceFeature:(int)arg1 ;
-(void)setHasDeviceFeature:(BOOL)arg1 ;
-(BOOL)hasDeviceFeature;
-(void)setTargetPresenceBeaconReceivedMs:(unsigned long long)arg1 ;
-(void)setHasTargetPresenceBeaconReceivedMs:(BOOL)arg1 ;
-(BOOL)hasTargetPresenceBeaconReceivedMs;
-(void)setAwdlAirPlayTXTReceivedMs:(unsigned long long)arg1 ;
-(void)setHasAwdlAirPlayTXTReceivedMs:(BOOL)arg1 ;
-(BOOL)hasAwdlAirPlayTXTReceivedMs;
-(void)setAwdlRAOPTXTReceivedMs:(unsigned long long)arg1 ;
-(void)setHasAwdlRAOPTXTReceivedMs:(BOOL)arg1 ;
-(BOOL)hasAwdlRAOPTXTReceivedMs;
-(void)setWifiAirPlayTXTReceivedMs:(unsigned long long)arg1 ;
-(void)setHasWifiAirPlayTXTReceivedMs:(BOOL)arg1 ;
-(BOOL)hasWifiAirPlayTXTReceivedMs;
-(void)setWifiRAOPTXTReceivedMs:(unsigned long long)arg1 ;
-(void)setHasWifiRAOPTXTReceivedMs:(BOOL)arg1 ;
-(BOOL)hasWifiRAOPTXTReceivedMs;
-(void)setAggregated:(BOOL)arg1 ;
-(void)setHasAggregated:(BOOL)arg1 ;
-(BOOL)hasAggregated;
-(void)setBtleRSSI:(int)arg1 ;
-(void)setHasBtleRSSI:(BOOL)arg1 ;
-(BOOL)hasBtleRSSI;
-(int)deviceFeature;
-(unsigned long long)targetPresenceBeaconReceivedMs;
-(unsigned long long)awdlAirPlayTXTReceivedMs;
-(unsigned long long)awdlRAOPTXTReceivedMs;
-(unsigned long long)wifiAirPlayTXTReceivedMs;
-(unsigned long long)wifiRAOPTXTReceivedMs;
-(BOOL)aggregated;
-(int)btleRSSI;
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

