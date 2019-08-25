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

@class NSData, NSString, AWDWiFiMetricsManagerBTCoexModeChange, AWDWiFiMetricsManagerBTCoexStats, AWDWiFiMetricsManagerChipCounters, NSMutableArray;

@interface AWDWiFiMetricsManagerSoftError : PBCodable <NSCopying> {

	unsigned long long _sample1TimeStamp;
	unsigned long long _sample2TimeStamp;
	unsigned long long _timestamp;
	NSData* _apOUI;
	NSString* _appId;
	unsigned _batteryChargeLevel;
	AWDWiFiMetricsManagerBTCoexModeChange* _btCoexModeChange;
	AWDWiFiMetricsManagerBTCoexStats* _btCoexStats;
	unsigned _channel;
	AWDWiFiMetricsManagerChipCounters* _chipCounters;
	NSMutableArray* _chipCountersPerSlices;
	unsigned _lastSoftErrorUserFeedbk;
	unsigned _motionState;
	int _sample1Cca;
	int _sample1Rssi;
	int _sample1Snr;
	int _sample2Cca;
	int _sample2Rssi;
	int _sample2Snr;
	unsigned _softErrorType;
	BOOL _inCar;
	BOOL _lowPowerMode;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSoftErrorType; 
@property (assign,nonatomic) unsigned softErrorType;                                                //@synthesize softErrorType=_softErrorType - In the implementation block
@property (assign,nonatomic) BOOL hasSample1TimeStamp; 
@property (assign,nonatomic) unsigned long long sample1TimeStamp;                                   //@synthesize sample1TimeStamp=_sample1TimeStamp - In the implementation block
@property (assign,nonatomic) BOOL hasSample2TimeStamp; 
@property (assign,nonatomic) unsigned long long sample2TimeStamp;                                   //@synthesize sample2TimeStamp=_sample2TimeStamp - In the implementation block
@property (assign,nonatomic) BOOL hasSample1Rssi; 
@property (assign,nonatomic) int sample1Rssi;                                                       //@synthesize sample1Rssi=_sample1Rssi - In the implementation block
@property (assign,nonatomic) BOOL hasSample2Rssi; 
@property (assign,nonatomic) int sample2Rssi;                                                       //@synthesize sample2Rssi=_sample2Rssi - In the implementation block
@property (assign,nonatomic) BOOL hasSample1Cca; 
@property (assign,nonatomic) int sample1Cca;                                                        //@synthesize sample1Cca=_sample1Cca - In the implementation block
@property (assign,nonatomic) BOOL hasSample2Cca; 
@property (assign,nonatomic) int sample2Cca;                                                        //@synthesize sample2Cca=_sample2Cca - In the implementation block
@property (assign,nonatomic) BOOL hasSample1Snr; 
@property (assign,nonatomic) int sample1Snr;                                                        //@synthesize sample1Snr=_sample1Snr - In the implementation block
@property (assign,nonatomic) BOOL hasSample2Snr; 
@property (assign,nonatomic) int sample2Snr;                                                        //@synthesize sample2Snr=_sample2Snr - In the implementation block
@property (nonatomic,readonly) BOOL hasAppId; 
@property (nonatomic,retain) NSString * appId;                                                      //@synthesize appId=_appId - In the implementation block
@property (assign,nonatomic) BOOL hasInCar; 
@property (assign,nonatomic) BOOL inCar;                                                            //@synthesize inCar=_inCar - In the implementation block
@property (assign,nonatomic) BOOL hasMotionState; 
@property (assign,nonatomic) unsigned motionState;                                                  //@synthesize motionState=_motionState - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel;                                                      //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) BOOL hasApOUI; 
@property (nonatomic,retain) NSData * apOUI;                                                        //@synthesize apOUI=_apOUI - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryChargeLevel; 
@property (assign,nonatomic) unsigned batteryChargeLevel;                                           //@synthesize batteryChargeLevel=_batteryChargeLevel - In the implementation block
@property (assign,nonatomic) BOOL hasLowPowerMode; 
@property (assign,nonatomic) BOOL lowPowerMode;                                                     //@synthesize lowPowerMode=_lowPowerMode - In the implementation block
@property (nonatomic,readonly) BOOL hasChipCounters; 
@property (nonatomic,retain) AWDWiFiMetricsManagerChipCounters * chipCounters;                      //@synthesize chipCounters=_chipCounters - In the implementation block
@property (nonatomic,readonly) BOOL hasBtCoexStats; 
@property (nonatomic,retain) AWDWiFiMetricsManagerBTCoexStats * btCoexStats;                        //@synthesize btCoexStats=_btCoexStats - In the implementation block
@property (nonatomic,readonly) BOOL hasBtCoexModeChange; 
@property (nonatomic,retain) AWDWiFiMetricsManagerBTCoexModeChange * btCoexModeChange;              //@synthesize btCoexModeChange=_btCoexModeChange - In the implementation block
@property (assign,nonatomic) BOOL hasLastSoftErrorUserFeedbk; 
@property (assign,nonatomic) unsigned lastSoftErrorUserFeedbk;                                      //@synthesize lastSoftErrorUserFeedbk=_lastSoftErrorUserFeedbk - In the implementation block
@property (nonatomic,retain) NSMutableArray * chipCountersPerSlices;                                //@synthesize chipCountersPerSlices=_chipCountersPerSlices - In the implementation block
+(Class)chipCountersPerSliceType;
-(void)setChipCounters:(AWDWiFiMetricsManagerChipCounters *)arg1 ;
-(void)setBtCoexStats:(AWDWiFiMetricsManagerBTCoexStats *)arg1 ;
-(void)setBtCoexModeChange:(AWDWiFiMetricsManagerBTCoexModeChange *)arg1 ;
-(void)setChipCountersPerSlices:(NSMutableArray *)arg1 ;
-(void)addChipCountersPerSlice:(id)arg1 ;
-(unsigned long long)chipCountersPerSlicesCount;
-(void)clearChipCountersPerSlices;
-(id)chipCountersPerSliceAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasChipCounters;
-(BOOL)hasBtCoexStats;
-(BOOL)hasBtCoexModeChange;
-(AWDWiFiMetricsManagerChipCounters *)chipCounters;
-(AWDWiFiMetricsManagerBTCoexStats *)btCoexStats;
-(AWDWiFiMetricsManagerBTCoexModeChange *)btCoexModeChange;
-(NSMutableArray *)chipCountersPerSlices;
-(void)setApOUI:(NSData *)arg1 ;
-(void)setSoftErrorType:(unsigned)arg1 ;
-(void)setHasSoftErrorType:(BOOL)arg1 ;
-(BOOL)hasSoftErrorType;
-(void)setSample1TimeStamp:(unsigned long long)arg1 ;
-(void)setHasSample1TimeStamp:(BOOL)arg1 ;
-(BOOL)hasSample1TimeStamp;
-(void)setSample2TimeStamp:(unsigned long long)arg1 ;
-(void)setHasSample2TimeStamp:(BOOL)arg1 ;
-(BOOL)hasSample2TimeStamp;
-(void)setSample1Rssi:(int)arg1 ;
-(void)setHasSample1Rssi:(BOOL)arg1 ;
-(BOOL)hasSample1Rssi;
-(void)setSample2Rssi:(int)arg1 ;
-(void)setHasSample2Rssi:(BOOL)arg1 ;
-(BOOL)hasSample2Rssi;
-(void)setSample1Cca:(int)arg1 ;
-(void)setHasSample1Cca:(BOOL)arg1 ;
-(BOOL)hasSample1Cca;
-(void)setSample2Cca:(int)arg1 ;
-(void)setHasSample2Cca:(BOOL)arg1 ;
-(BOOL)hasSample2Cca;
-(void)setSample1Snr:(int)arg1 ;
-(void)setHasSample1Snr:(BOOL)arg1 ;
-(BOOL)hasSample1Snr;
-(void)setSample2Snr:(int)arg1 ;
-(void)setHasSample2Snr:(BOOL)arg1 ;
-(BOOL)hasSample2Snr;
-(void)setInCar:(BOOL)arg1 ;
-(void)setHasInCar:(BOOL)arg1 ;
-(BOOL)hasInCar;
-(void)setMotionState:(unsigned)arg1 ;
-(void)setHasMotionState:(BOOL)arg1 ;
-(BOOL)hasMotionState;
-(BOOL)hasApOUI;
-(void)setBatteryChargeLevel:(unsigned)arg1 ;
-(void)setHasBatteryChargeLevel:(BOOL)arg1 ;
-(BOOL)hasBatteryChargeLevel;
-(void)setLowPowerMode:(BOOL)arg1 ;
-(void)setHasLowPowerMode:(BOOL)arg1 ;
-(BOOL)hasLowPowerMode;
-(void)setLastSoftErrorUserFeedbk:(unsigned)arg1 ;
-(void)setHasLastSoftErrorUserFeedbk:(BOOL)arg1 ;
-(BOOL)hasLastSoftErrorUserFeedbk;
-(unsigned)softErrorType;
-(unsigned long long)sample1TimeStamp;
-(unsigned long long)sample2TimeStamp;
-(int)sample1Rssi;
-(int)sample2Rssi;
-(int)sample1Cca;
-(int)sample2Cca;
-(int)sample1Snr;
-(int)sample2Snr;
-(BOOL)inCar;
-(unsigned)motionState;
-(NSData *)apOUI;
-(unsigned)batteryChargeLevel;
-(BOOL)lowPowerMode;
-(unsigned)lastSoftErrorUserFeedbk;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setChannel:(unsigned)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(unsigned)channel;
-(void)setAppId:(NSString *)arg1 ;
-(BOOL)hasAppId;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)appId;
-(id)dictionaryRepresentation;
@end

