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

@class AWDWiFiMetricsManagerStateMachine;

@interface AWDWiFiMetricsManagerInfraInterface : PBCodable <NSCopying> {

	unsigned long long _rxBytes;
	unsigned long long _rxPackets;
	unsigned long long _timestamp;
	unsigned long long _txBytes;
	unsigned long long _txBytesBe;
	unsigned long long _txBytesBk;
	unsigned long long _txBytesVi;
	unsigned long long _txBytesVo;
	unsigned long long _txPackets;
	unsigned long long _txPacketsBe;
	unsigned long long _txPacketsBk;
	unsigned long long _txPacketsVi;
	unsigned long long _txPacketsVo;
	AWDWiFiMetricsManagerStateMachine* _activityDown;
	AWDWiFiMetricsManagerStateMachine* _activityInvoluntarilyDown;
	AWDWiFiMetricsManagerStateMachine* _activityRoaming;
	AWDWiFiMetricsManagerStateMachine* _activityScanning;
	AWDWiFiMetricsManagerStateMachine* _activityUp;
	unsigned _avgCCA;
	AWDWiFiMetricsManagerStateMachine* _avgCCA0pct;
	AWDWiFiMetricsManagerStateMachine* _avgCCA100pct;
	AWDWiFiMetricsManagerStateMachine* _avgCCA125pct;
	AWDWiFiMetricsManagerStateMachine* _avgCCA25pct;
	AWDWiFiMetricsManagerStateMachine* _avgCCA375pct;
	AWDWiFiMetricsManagerStateMachine* _avgCCA50pct;
	AWDWiFiMetricsManagerStateMachine* _avgCCA625pct;
	AWDWiFiMetricsManagerStateMachine* _avgCCA75pct;
	AWDWiFiMetricsManagerStateMachine* _avgCCA875pct;
	unsigned _dataTransferRateMpbs;
	unsigned _effectiveDataTransferRateMpbs;
	unsigned _effectiveLinkRateMpbs;
	AWDWiFiMetricsManagerStateMachine* _linkLatency0ms;
	AWDWiFiMetricsManagerStateMachine* _linkLatency1024ms;
	AWDWiFiMetricsManagerStateMachine* _linkLatency128ms;
	AWDWiFiMetricsManagerStateMachine* _linkLatency256ms;
	AWDWiFiMetricsManagerStateMachine* _linkLatency512ms;
	AWDWiFiMetricsManagerStateMachine* _linkLatency64ms;
	unsigned _linkLatencyMs;
	AWDWiFiMetricsManagerStateMachine* _linkOpen0pct;
	AWDWiFiMetricsManagerStateMachine* _linkOpen100pct;
	AWDWiFiMetricsManagerStateMachine* _linkOpen125pct;
	AWDWiFiMetricsManagerStateMachine* _linkOpen25pct;
	AWDWiFiMetricsManagerStateMachine* _linkOpen375pct;
	AWDWiFiMetricsManagerStateMachine* _linkOpen50pct;
	AWDWiFiMetricsManagerStateMachine* _linkOpen625pct;
	AWDWiFiMetricsManagerStateMachine* _linkOpen75pct;
	AWDWiFiMetricsManagerStateMachine* _linkOpen875pct;
	unsigned _linkOpenPct;
	unsigned _linkRateMbps;
	unsigned _lqm;
	AWDWiFiMetricsManagerStateMachine* _lqmBad;
	AWDWiFiMetricsManagerStateMachine* _lqmGood;
	AWDWiFiMetricsManagerStateMachine* _lqmOff;
	AWDWiFiMetricsManagerStateMachine* _lqmPoor;
	AWDWiFiMetricsManagerStateMachine* _lqmUnknown;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRxPackets; 
@property (assign,nonatomic) unsigned long long rxPackets;                                               //@synthesize rxPackets=_rxPackets - In the implementation block
@property (assign,nonatomic) BOOL hasTxPackets; 
@property (assign,nonatomic) unsigned long long txPackets;                                               //@synthesize txPackets=_txPackets - In the implementation block
@property (assign,nonatomic) BOOL hasTxPacketsBe; 
@property (assign,nonatomic) unsigned long long txPacketsBe;                                             //@synthesize txPacketsBe=_txPacketsBe - In the implementation block
@property (assign,nonatomic) BOOL hasTxPacketsBk; 
@property (assign,nonatomic) unsigned long long txPacketsBk;                                             //@synthesize txPacketsBk=_txPacketsBk - In the implementation block
@property (assign,nonatomic) BOOL hasTxPacketsVi; 
@property (assign,nonatomic) unsigned long long txPacketsVi;                                             //@synthesize txPacketsVi=_txPacketsVi - In the implementation block
@property (assign,nonatomic) BOOL hasTxPacketsVo; 
@property (assign,nonatomic) unsigned long long txPacketsVo;                                             //@synthesize txPacketsVo=_txPacketsVo - In the implementation block
@property (assign,nonatomic) BOOL hasRxBytes; 
@property (assign,nonatomic) unsigned long long rxBytes;                                                 //@synthesize rxBytes=_rxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasTxBytes; 
@property (assign,nonatomic) unsigned long long txBytes;                                                 //@synthesize txBytes=_txBytes - In the implementation block
@property (assign,nonatomic) BOOL hasTxBytesBe; 
@property (assign,nonatomic) unsigned long long txBytesBe;                                               //@synthesize txBytesBe=_txBytesBe - In the implementation block
@property (assign,nonatomic) BOOL hasTxBytesBk; 
@property (assign,nonatomic) unsigned long long txBytesBk;                                               //@synthesize txBytesBk=_txBytesBk - In the implementation block
@property (assign,nonatomic) BOOL hasTxBytesVi; 
@property (assign,nonatomic) unsigned long long txBytesVi;                                               //@synthesize txBytesVi=_txBytesVi - In the implementation block
@property (assign,nonatomic) BOOL hasTxBytesVo; 
@property (assign,nonatomic) unsigned long long txBytesVo;                                               //@synthesize txBytesVo=_txBytesVo - In the implementation block
@property (assign,nonatomic) BOOL hasLinkRateMbps; 
@property (assign,nonatomic) unsigned linkRateMbps;                                                      //@synthesize linkRateMbps=_linkRateMbps - In the implementation block
@property (assign,nonatomic) BOOL hasEffectiveLinkRateMpbs; 
@property (assign,nonatomic) unsigned effectiveLinkRateMpbs;                                             //@synthesize effectiveLinkRateMpbs=_effectiveLinkRateMpbs - In the implementation block
@property (assign,nonatomic) BOOL hasDataTransferRateMpbs; 
@property (assign,nonatomic) unsigned dataTransferRateMpbs;                                              //@synthesize dataTransferRateMpbs=_dataTransferRateMpbs - In the implementation block
@property (assign,nonatomic) BOOL hasEffectiveDataTransferRateMpbs; 
@property (assign,nonatomic) unsigned effectiveDataTransferRateMpbs;                                     //@synthesize effectiveDataTransferRateMpbs=_effectiveDataTransferRateMpbs - In the implementation block
@property (assign,nonatomic) BOOL hasLinkLatencyMs; 
@property (assign,nonatomic) unsigned linkLatencyMs;                                                     //@synthesize linkLatencyMs=_linkLatencyMs - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkLatency0ms; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkLatency0ms;                         //@synthesize linkLatency0ms=_linkLatency0ms - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkLatency64ms; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkLatency64ms;                        //@synthesize linkLatency64ms=_linkLatency64ms - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkLatency128ms; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkLatency128ms;                       //@synthesize linkLatency128ms=_linkLatency128ms - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkLatency256ms; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkLatency256ms;                       //@synthesize linkLatency256ms=_linkLatency256ms - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkLatency512ms; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkLatency512ms;                       //@synthesize linkLatency512ms=_linkLatency512ms - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkLatency1024ms; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkLatency1024ms;                      //@synthesize linkLatency1024ms=_linkLatency1024ms - In the implementation block
@property (assign,nonatomic) BOOL hasLinkOpenPct; 
@property (assign,nonatomic) unsigned linkOpenPct;                                                       //@synthesize linkOpenPct=_linkOpenPct - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkOpen0pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkOpen0pct;                           //@synthesize linkOpen0pct=_linkOpen0pct - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkOpen125pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkOpen125pct;                         //@synthesize linkOpen125pct=_linkOpen125pct - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkOpen25pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkOpen25pct;                          //@synthesize linkOpen25pct=_linkOpen25pct - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkOpen375pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkOpen375pct;                         //@synthesize linkOpen375pct=_linkOpen375pct - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkOpen50pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkOpen50pct;                          //@synthesize linkOpen50pct=_linkOpen50pct - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkOpen625pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkOpen625pct;                         //@synthesize linkOpen625pct=_linkOpen625pct - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkOpen75pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkOpen75pct;                          //@synthesize linkOpen75pct=_linkOpen75pct - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkOpen875pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkOpen875pct;                         //@synthesize linkOpen875pct=_linkOpen875pct - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkOpen100pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * linkOpen100pct;                         //@synthesize linkOpen100pct=_linkOpen100pct - In the implementation block
@property (assign,nonatomic) BOOL hasAvgCCA; 
@property (assign,nonatomic) unsigned avgCCA;                                                            //@synthesize avgCCA=_avgCCA - In the implementation block
@property (nonatomic,readonly) BOOL hasAvgCCA0pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * avgCCA0pct;                             //@synthesize avgCCA0pct=_avgCCA0pct - In the implementation block
@property (nonatomic,readonly) BOOL hasAvgCCA125pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * avgCCA125pct;                           //@synthesize avgCCA125pct=_avgCCA125pct - In the implementation block
@property (nonatomic,readonly) BOOL hasAvgCCA25pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * avgCCA25pct;                            //@synthesize avgCCA25pct=_avgCCA25pct - In the implementation block
@property (nonatomic,readonly) BOOL hasAvgCCA375pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * avgCCA375pct;                           //@synthesize avgCCA375pct=_avgCCA375pct - In the implementation block
@property (nonatomic,readonly) BOOL hasAvgCCA50pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * avgCCA50pct;                            //@synthesize avgCCA50pct=_avgCCA50pct - In the implementation block
@property (nonatomic,readonly) BOOL hasAvgCCA625pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * avgCCA625pct;                           //@synthesize avgCCA625pct=_avgCCA625pct - In the implementation block
@property (nonatomic,readonly) BOOL hasAvgCCA75pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * avgCCA75pct;                            //@synthesize avgCCA75pct=_avgCCA75pct - In the implementation block
@property (nonatomic,readonly) BOOL hasAvgCCA875pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * avgCCA875pct;                           //@synthesize avgCCA875pct=_avgCCA875pct - In the implementation block
@property (nonatomic,readonly) BOOL hasAvgCCA100pct; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * avgCCA100pct;                           //@synthesize avgCCA100pct=_avgCCA100pct - In the implementation block
@property (assign,nonatomic) BOOL hasLqm; 
@property (assign,nonatomic) unsigned lqm;                                                               //@synthesize lqm=_lqm - In the implementation block
@property (nonatomic,readonly) BOOL hasLqmOff; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * lqmOff;                                 //@synthesize lqmOff=_lqmOff - In the implementation block
@property (nonatomic,readonly) BOOL hasLqmUnknown; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * lqmUnknown;                             //@synthesize lqmUnknown=_lqmUnknown - In the implementation block
@property (nonatomic,readonly) BOOL hasLqmBad; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * lqmBad;                                 //@synthesize lqmBad=_lqmBad - In the implementation block
@property (nonatomic,readonly) BOOL hasLqmPoor; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * lqmPoor;                                //@synthesize lqmPoor=_lqmPoor - In the implementation block
@property (nonatomic,readonly) BOOL hasLqmGood; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * lqmGood;                                //@synthesize lqmGood=_lqmGood - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityUp; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * activityUp;                             //@synthesize activityUp=_activityUp - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityDown; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * activityDown;                           //@synthesize activityDown=_activityDown - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityInvoluntarilyDown; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * activityInvoluntarilyDown;              //@synthesize activityInvoluntarilyDown=_activityInvoluntarilyDown - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityScanning; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * activityScanning;                       //@synthesize activityScanning=_activityScanning - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityRoaming; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * activityRoaming;                        //@synthesize activityRoaming=_activityRoaming - In the implementation block
-(void)setTxBytes:(unsigned long long)arg1 ;
-(void)setHasTxBytes:(BOOL)arg1 ;
-(BOOL)hasTxBytes;
-(void)setRxBytes:(unsigned long long)arg1 ;
-(void)setHasRxBytes:(BOOL)arg1 ;
-(BOOL)hasRxBytes;
-(unsigned long long)txBytes;
-(unsigned long long)rxBytes;
-(void)setLinkLatency0ms:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkLatency64ms:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkLatency128ms:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkLatency256ms:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkLatency512ms:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkLatency1024ms:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkOpen0pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkOpen125pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkOpen25pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkOpen375pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkOpen50pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkOpen625pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkOpen75pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkOpen875pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLinkOpen100pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAvgCCA0pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAvgCCA125pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAvgCCA25pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAvgCCA375pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAvgCCA50pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAvgCCA625pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAvgCCA75pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAvgCCA875pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAvgCCA100pct:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLqmOff:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLqmUnknown:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLqmBad:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLqmPoor:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setLqmGood:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setActivityUp:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setActivityDown:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setActivityInvoluntarilyDown:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setActivityScanning:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setActivityRoaming:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setRxPackets:(unsigned long long)arg1 ;
-(void)setHasRxPackets:(BOOL)arg1 ;
-(BOOL)hasRxPackets;
-(void)setTxPackets:(unsigned long long)arg1 ;
-(void)setHasTxPackets:(BOOL)arg1 ;
-(BOOL)hasTxPackets;
-(void)setTxPacketsBe:(unsigned long long)arg1 ;
-(void)setHasTxPacketsBe:(BOOL)arg1 ;
-(BOOL)hasTxPacketsBe;
-(void)setTxPacketsBk:(unsigned long long)arg1 ;
-(void)setHasTxPacketsBk:(BOOL)arg1 ;
-(BOOL)hasTxPacketsBk;
-(void)setTxPacketsVi:(unsigned long long)arg1 ;
-(void)setHasTxPacketsVi:(BOOL)arg1 ;
-(BOOL)hasTxPacketsVi;
-(void)setTxPacketsVo:(unsigned long long)arg1 ;
-(void)setHasTxPacketsVo:(BOOL)arg1 ;
-(BOOL)hasTxPacketsVo;
-(void)setTxBytesBe:(unsigned long long)arg1 ;
-(void)setHasTxBytesBe:(BOOL)arg1 ;
-(BOOL)hasTxBytesBe;
-(void)setTxBytesBk:(unsigned long long)arg1 ;
-(void)setHasTxBytesBk:(BOOL)arg1 ;
-(BOOL)hasTxBytesBk;
-(void)setTxBytesVi:(unsigned long long)arg1 ;
-(void)setHasTxBytesVi:(BOOL)arg1 ;
-(BOOL)hasTxBytesVi;
-(void)setTxBytesVo:(unsigned long long)arg1 ;
-(void)setHasTxBytesVo:(BOOL)arg1 ;
-(BOOL)hasTxBytesVo;
-(void)setLinkRateMbps:(unsigned)arg1 ;
-(void)setHasLinkRateMbps:(BOOL)arg1 ;
-(BOOL)hasLinkRateMbps;
-(void)setEffectiveLinkRateMpbs:(unsigned)arg1 ;
-(void)setHasEffectiveLinkRateMpbs:(BOOL)arg1 ;
-(BOOL)hasEffectiveLinkRateMpbs;
-(void)setDataTransferRateMpbs:(unsigned)arg1 ;
-(void)setHasDataTransferRateMpbs:(BOOL)arg1 ;
-(BOOL)hasDataTransferRateMpbs;
-(void)setEffectiveDataTransferRateMpbs:(unsigned)arg1 ;
-(void)setHasEffectiveDataTransferRateMpbs:(BOOL)arg1 ;
-(BOOL)hasEffectiveDataTransferRateMpbs;
-(void)setLinkLatencyMs:(unsigned)arg1 ;
-(void)setHasLinkLatencyMs:(BOOL)arg1 ;
-(BOOL)hasLinkLatencyMs;
-(BOOL)hasLinkLatency0ms;
-(BOOL)hasLinkLatency64ms;
-(BOOL)hasLinkLatency128ms;
-(BOOL)hasLinkLatency256ms;
-(BOOL)hasLinkLatency512ms;
-(BOOL)hasLinkLatency1024ms;
-(void)setLinkOpenPct:(unsigned)arg1 ;
-(void)setHasLinkOpenPct:(BOOL)arg1 ;
-(BOOL)hasLinkOpenPct;
-(BOOL)hasLinkOpen0pct;
-(BOOL)hasLinkOpen125pct;
-(BOOL)hasLinkOpen25pct;
-(BOOL)hasLinkOpen375pct;
-(BOOL)hasLinkOpen50pct;
-(BOOL)hasLinkOpen625pct;
-(BOOL)hasLinkOpen75pct;
-(BOOL)hasLinkOpen875pct;
-(BOOL)hasLinkOpen100pct;
-(void)setAvgCCA:(unsigned)arg1 ;
-(void)setHasAvgCCA:(BOOL)arg1 ;
-(BOOL)hasAvgCCA;
-(BOOL)hasAvgCCA0pct;
-(BOOL)hasAvgCCA125pct;
-(BOOL)hasAvgCCA25pct;
-(BOOL)hasAvgCCA375pct;
-(BOOL)hasAvgCCA50pct;
-(BOOL)hasAvgCCA625pct;
-(BOOL)hasAvgCCA75pct;
-(BOOL)hasAvgCCA875pct;
-(BOOL)hasAvgCCA100pct;
-(void)setLqm:(unsigned)arg1 ;
-(void)setHasLqm:(BOOL)arg1 ;
-(BOOL)hasLqm;
-(BOOL)hasLqmOff;
-(BOOL)hasLqmUnknown;
-(BOOL)hasLqmBad;
-(BOOL)hasLqmPoor;
-(BOOL)hasLqmGood;
-(BOOL)hasActivityUp;
-(BOOL)hasActivityDown;
-(BOOL)hasActivityInvoluntarilyDown;
-(BOOL)hasActivityScanning;
-(BOOL)hasActivityRoaming;
-(unsigned long long)rxPackets;
-(unsigned long long)txPackets;
-(unsigned long long)txPacketsBe;
-(unsigned long long)txPacketsBk;
-(unsigned long long)txPacketsVi;
-(unsigned long long)txPacketsVo;
-(unsigned long long)txBytesBe;
-(unsigned long long)txBytesBk;
-(unsigned long long)txBytesVi;
-(unsigned long long)txBytesVo;
-(unsigned)linkRateMbps;
-(unsigned)effectiveLinkRateMpbs;
-(unsigned)dataTransferRateMpbs;
-(unsigned)effectiveDataTransferRateMpbs;
-(unsigned)linkLatencyMs;
-(AWDWiFiMetricsManagerStateMachine *)linkLatency0ms;
-(AWDWiFiMetricsManagerStateMachine *)linkLatency64ms;
-(AWDWiFiMetricsManagerStateMachine *)linkLatency128ms;
-(AWDWiFiMetricsManagerStateMachine *)linkLatency256ms;
-(AWDWiFiMetricsManagerStateMachine *)linkLatency512ms;
-(AWDWiFiMetricsManagerStateMachine *)linkLatency1024ms;
-(unsigned)linkOpenPct;
-(AWDWiFiMetricsManagerStateMachine *)linkOpen0pct;
-(AWDWiFiMetricsManagerStateMachine *)linkOpen125pct;
-(AWDWiFiMetricsManagerStateMachine *)linkOpen25pct;
-(AWDWiFiMetricsManagerStateMachine *)linkOpen375pct;
-(AWDWiFiMetricsManagerStateMachine *)linkOpen50pct;
-(AWDWiFiMetricsManagerStateMachine *)linkOpen625pct;
-(AWDWiFiMetricsManagerStateMachine *)linkOpen75pct;
-(AWDWiFiMetricsManagerStateMachine *)linkOpen875pct;
-(AWDWiFiMetricsManagerStateMachine *)linkOpen100pct;
-(unsigned)avgCCA;
-(AWDWiFiMetricsManagerStateMachine *)avgCCA0pct;
-(AWDWiFiMetricsManagerStateMachine *)avgCCA125pct;
-(AWDWiFiMetricsManagerStateMachine *)avgCCA25pct;
-(AWDWiFiMetricsManagerStateMachine *)avgCCA375pct;
-(AWDWiFiMetricsManagerStateMachine *)avgCCA50pct;
-(AWDWiFiMetricsManagerStateMachine *)avgCCA625pct;
-(AWDWiFiMetricsManagerStateMachine *)avgCCA75pct;
-(AWDWiFiMetricsManagerStateMachine *)avgCCA875pct;
-(AWDWiFiMetricsManagerStateMachine *)avgCCA100pct;
-(unsigned)lqm;
-(AWDWiFiMetricsManagerStateMachine *)lqmOff;
-(AWDWiFiMetricsManagerStateMachine *)lqmUnknown;
-(AWDWiFiMetricsManagerStateMachine *)lqmBad;
-(AWDWiFiMetricsManagerStateMachine *)lqmPoor;
-(AWDWiFiMetricsManagerStateMachine *)lqmGood;
-(AWDWiFiMetricsManagerStateMachine *)activityUp;
-(AWDWiFiMetricsManagerStateMachine *)activityDown;
-(AWDWiFiMetricsManagerStateMachine *)activityInvoluntarilyDown;
-(AWDWiFiMetricsManagerStateMachine *)activityScanning;
-(AWDWiFiMetricsManagerStateMachine *)activityRoaming;
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

