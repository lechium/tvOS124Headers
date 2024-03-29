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

@interface AWDPowerWifiMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _wifi2P4GHzRxDuration;
	unsigned _wifi2P4GHzTxDuration;
	unsigned _wifi5GHz20MHzRxDuration;
	unsigned _wifi5GHz20MHzTxDuration;
	unsigned _wifi5GHz40MHzRxDuration;
	unsigned _wifi5GHz40MHzTxDuration;
	unsigned _wifi5GHz80MHzRxDuration;
	unsigned _wifi5GHz80MHzTxDuration;
	unsigned _wifiFRTSDuration;
	unsigned _wifiHsicActiveDuration;
	unsigned _wifiPcieL0Duration;
	unsigned _wifiPcieL10Duration;
	unsigned _wifiPcieL11Duration;
	unsigned _wifiPcieL12Duration;
	unsigned _wifiScanDuration;
	unsigned _wifiSleepDuration;
	unsigned _wifiTotalDuration;
	unsigned _wifiTotalPowerMicroWatt;
	SCD_Struct_AW33 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWifi2P4GHzTxDuration; 
@property (assign,nonatomic) unsigned wifi2P4GHzTxDuration;                 //@synthesize wifi2P4GHzTxDuration=_wifi2P4GHzTxDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifi2P4GHzRxDuration; 
@property (assign,nonatomic) unsigned wifi2P4GHzRxDuration;                 //@synthesize wifi2P4GHzRxDuration=_wifi2P4GHzRxDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifi5GHz20MHzTxDuration; 
@property (assign,nonatomic) unsigned wifi5GHz20MHzTxDuration;              //@synthesize wifi5GHz20MHzTxDuration=_wifi5GHz20MHzTxDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifi5GHz40MHzTxDuration; 
@property (assign,nonatomic) unsigned wifi5GHz40MHzTxDuration;              //@synthesize wifi5GHz40MHzTxDuration=_wifi5GHz40MHzTxDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifi5GHz80MHzTxDuration; 
@property (assign,nonatomic) unsigned wifi5GHz80MHzTxDuration;              //@synthesize wifi5GHz80MHzTxDuration=_wifi5GHz80MHzTxDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifi5GHz20MHzRxDuration; 
@property (assign,nonatomic) unsigned wifi5GHz20MHzRxDuration;              //@synthesize wifi5GHz20MHzRxDuration=_wifi5GHz20MHzRxDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifi5GHz40MHzRxDuration; 
@property (assign,nonatomic) unsigned wifi5GHz40MHzRxDuration;              //@synthesize wifi5GHz40MHzRxDuration=_wifi5GHz40MHzRxDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifi5GHz80MHzRxDuration; 
@property (assign,nonatomic) unsigned wifi5GHz80MHzRxDuration;              //@synthesize wifi5GHz80MHzRxDuration=_wifi5GHz80MHzRxDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifiSleepDuration; 
@property (assign,nonatomic) unsigned wifiSleepDuration;                    //@synthesize wifiSleepDuration=_wifiSleepDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifiTotalDuration; 
@property (assign,nonatomic) unsigned wifiTotalDuration;                    //@synthesize wifiTotalDuration=_wifiTotalDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifiFRTSDuration; 
@property (assign,nonatomic) unsigned wifiFRTSDuration;                     //@synthesize wifiFRTSDuration=_wifiFRTSDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifiScanDuration; 
@property (assign,nonatomic) unsigned wifiScanDuration;                     //@synthesize wifiScanDuration=_wifiScanDuration - In the implementation block
@property (assign,nonatomic) BOOL hasWifiPcieL0Duration; 
@property (assign,nonatomic) unsigned wifiPcieL0Duration;                   //@synthesize wifiPcieL0Duration=_wifiPcieL0Duration - In the implementation block
@property (assign,nonatomic) BOOL hasWifiPcieL10Duration; 
@property (assign,nonatomic) unsigned wifiPcieL10Duration;                  //@synthesize wifiPcieL10Duration=_wifiPcieL10Duration - In the implementation block
@property (assign,nonatomic) BOOL hasWifiPcieL11Duration; 
@property (assign,nonatomic) unsigned wifiPcieL11Duration;                  //@synthesize wifiPcieL11Duration=_wifiPcieL11Duration - In the implementation block
@property (assign,nonatomic) BOOL hasWifiPcieL12Duration; 
@property (assign,nonatomic) unsigned wifiPcieL12Duration;                  //@synthesize wifiPcieL12Duration=_wifiPcieL12Duration - In the implementation block
@property (assign,nonatomic) BOOL hasWifiTotalPowerMicroWatt; 
@property (assign,nonatomic) unsigned wifiTotalPowerMicroWatt;              //@synthesize wifiTotalPowerMicroWatt=_wifiTotalPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasWifiHsicActiveDuration; 
@property (assign,nonatomic) unsigned wifiHsicActiveDuration;               //@synthesize wifiHsicActiveDuration=_wifiHsicActiveDuration - In the implementation block
-(void)setWifi2P4GHzTxDuration:(unsigned)arg1 ;
-(void)setHasWifi2P4GHzTxDuration:(BOOL)arg1 ;
-(BOOL)hasWifi2P4GHzTxDuration;
-(void)setWifi2P4GHzRxDuration:(unsigned)arg1 ;
-(void)setHasWifi2P4GHzRxDuration:(BOOL)arg1 ;
-(BOOL)hasWifi2P4GHzRxDuration;
-(void)setWifi5GHz20MHzTxDuration:(unsigned)arg1 ;
-(void)setHasWifi5GHz20MHzTxDuration:(BOOL)arg1 ;
-(BOOL)hasWifi5GHz20MHzTxDuration;
-(void)setWifi5GHz40MHzTxDuration:(unsigned)arg1 ;
-(void)setHasWifi5GHz40MHzTxDuration:(BOOL)arg1 ;
-(BOOL)hasWifi5GHz40MHzTxDuration;
-(void)setWifi5GHz80MHzTxDuration:(unsigned)arg1 ;
-(void)setHasWifi5GHz80MHzTxDuration:(BOOL)arg1 ;
-(BOOL)hasWifi5GHz80MHzTxDuration;
-(void)setWifi5GHz20MHzRxDuration:(unsigned)arg1 ;
-(void)setHasWifi5GHz20MHzRxDuration:(BOOL)arg1 ;
-(BOOL)hasWifi5GHz20MHzRxDuration;
-(void)setWifi5GHz40MHzRxDuration:(unsigned)arg1 ;
-(void)setHasWifi5GHz40MHzRxDuration:(BOOL)arg1 ;
-(BOOL)hasWifi5GHz40MHzRxDuration;
-(void)setWifi5GHz80MHzRxDuration:(unsigned)arg1 ;
-(void)setHasWifi5GHz80MHzRxDuration:(BOOL)arg1 ;
-(BOOL)hasWifi5GHz80MHzRxDuration;
-(void)setWifiSleepDuration:(unsigned)arg1 ;
-(void)setHasWifiSleepDuration:(BOOL)arg1 ;
-(BOOL)hasWifiSleepDuration;
-(void)setWifiTotalDuration:(unsigned)arg1 ;
-(void)setHasWifiTotalDuration:(BOOL)arg1 ;
-(BOOL)hasWifiTotalDuration;
-(void)setWifiFRTSDuration:(unsigned)arg1 ;
-(void)setHasWifiFRTSDuration:(BOOL)arg1 ;
-(BOOL)hasWifiFRTSDuration;
-(void)setWifiScanDuration:(unsigned)arg1 ;
-(void)setHasWifiScanDuration:(BOOL)arg1 ;
-(BOOL)hasWifiScanDuration;
-(void)setWifiPcieL0Duration:(unsigned)arg1 ;
-(void)setHasWifiPcieL0Duration:(BOOL)arg1 ;
-(BOOL)hasWifiPcieL0Duration;
-(void)setWifiPcieL10Duration:(unsigned)arg1 ;
-(void)setHasWifiPcieL10Duration:(BOOL)arg1 ;
-(BOOL)hasWifiPcieL10Duration;
-(void)setWifiPcieL11Duration:(unsigned)arg1 ;
-(void)setHasWifiPcieL11Duration:(BOOL)arg1 ;
-(BOOL)hasWifiPcieL11Duration;
-(void)setWifiPcieL12Duration:(unsigned)arg1 ;
-(void)setHasWifiPcieL12Duration:(BOOL)arg1 ;
-(BOOL)hasWifiPcieL12Duration;
-(void)setWifiTotalPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasWifiTotalPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasWifiTotalPowerMicroWatt;
-(void)setWifiHsicActiveDuration:(unsigned)arg1 ;
-(void)setHasWifiHsicActiveDuration:(BOOL)arg1 ;
-(BOOL)hasWifiHsicActiveDuration;
-(unsigned)wifi2P4GHzTxDuration;
-(unsigned)wifi2P4GHzRxDuration;
-(unsigned)wifi5GHz20MHzTxDuration;
-(unsigned)wifi5GHz40MHzTxDuration;
-(unsigned)wifi5GHz80MHzTxDuration;
-(unsigned)wifi5GHz20MHzRxDuration;
-(unsigned)wifi5GHz40MHzRxDuration;
-(unsigned)wifi5GHz80MHzRxDuration;
-(unsigned)wifiSleepDuration;
-(unsigned)wifiTotalDuration;
-(unsigned)wifiFRTSDuration;
-(unsigned)wifiScanDuration;
-(unsigned)wifiPcieL0Duration;
-(unsigned)wifiPcieL10Duration;
-(unsigned)wifiPcieL11Duration;
-(unsigned)wifiPcieL12Duration;
-(unsigned)wifiTotalPowerMicroWatt;
-(unsigned)wifiHsicActiveDuration;
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

