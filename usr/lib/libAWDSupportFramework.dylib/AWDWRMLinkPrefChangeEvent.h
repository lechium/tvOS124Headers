/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWRMLinkPrefChangeEvent : PBCodable <NSCopying> {

	SCD_Struct_AW21* _changeReasons;
	unsigned long long _ccStatusUpdateDelay;
	unsigned long long _timestamp;
	long long _wifiRssi;
	long long _wifiSNR;
	NSString* _appType;
	unsigned _bcnPer;
	unsigned _bssLoad;
	unsigned _callStatus;
	int _ccStatusUpdate;
	unsigned _cca;
	int _cellRSRP;
	int _cellSINR;
	unsigned _changeDirection;
	unsigned _dataAppStatus;
	int _dataLQM;
	unsigned _dataLinkPref;
	unsigned _decisionVIBE;
	unsigned _decisionVO;
	unsigned _expectedThroughputVIBE;
	unsigned _expectedThroughputVO;
	int _lqmScoreWifi;
	int _motionState;
	unsigned _packetLifetimeVIBE;
	unsigned _pkgLifeTimeVO;
	unsigned _pktLossRateVO;
	unsigned _qbssLoad;
	NSString* _ratType;
	unsigned _serviceType;
	unsigned _serviceTypeOfLastGrant;
	unsigned _signalBar;
	unsigned _stationCount;
	unsigned _timeToLastDecision;
	unsigned _timeToLastReverseDecision;
	unsigned _timeToLastReverseGrant;
	unsigned _voiceLQM;
	unsigned _voiceLinkPref;
	unsigned _wifiEstimatedBandwitdh;
	unsigned _wifiRxPhyRate;
	unsigned _wifiRxRetry;
	unsigned _wifiTxPER;
	unsigned _wifiTxPhyRate;
	BOOL _captiveNetworks;
	SCD_Struct_AW31 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasChangeDirection; 
@property (assign,nonatomic) unsigned changeDirection;                             //@synthesize changeDirection=_changeDirection - In the implementation block
@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) unsigned serviceType;                                 //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) BOOL hasVoiceLinkPref; 
@property (assign,nonatomic) unsigned voiceLinkPref;                               //@synthesize voiceLinkPref=_voiceLinkPref - In the implementation block
@property (assign,nonatomic) BOOL hasDataLinkPref; 
@property (assign,nonatomic) unsigned dataLinkPref;                                //@synthesize dataLinkPref=_dataLinkPref - In the implementation block
@property (assign,nonatomic) BOOL hasCallStatus; 
@property (assign,nonatomic) unsigned callStatus;                                  //@synthesize callStatus=_callStatus - In the implementation block
@property (assign,nonatomic) BOOL hasDataAppStatus; 
@property (assign,nonatomic) unsigned dataAppStatus;                               //@synthesize dataAppStatus=_dataAppStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasAppType; 
@property (nonatomic,retain) NSString * appType;                                   //@synthesize appType=_appType - In the implementation block
@property (assign,nonatomic) BOOL hasMotionState; 
@property (assign,nonatomic) int motionState;                                      //@synthesize motionState=_motionState - In the implementation block
@property (nonatomic,readonly) unsigned long long changeReasonsCount; 
@property (nonatomic,readonly) unsigned* changeReasons; 
@property (assign,nonatomic) BOOL hasWifiRssi; 
@property (assign,nonatomic) long long wifiRssi;                                   //@synthesize wifiRssi=_wifiRssi - In the implementation block
@property (assign,nonatomic) BOOL hasWifiTxPER; 
@property (assign,nonatomic) unsigned wifiTxPER;                                   //@synthesize wifiTxPER=_wifiTxPER - In the implementation block
@property (assign,nonatomic) BOOL hasWifiSNR; 
@property (assign,nonatomic) long long wifiSNR;                                    //@synthesize wifiSNR=_wifiSNR - In the implementation block
@property (assign,nonatomic) BOOL hasCaptiveNetworks; 
@property (assign,nonatomic) BOOL captiveNetworks;                                 //@synthesize captiveNetworks=_captiveNetworks - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRxRetry; 
@property (assign,nonatomic) unsigned wifiRxRetry;                                 //@synthesize wifiRxRetry=_wifiRxRetry - In the implementation block
@property (assign,nonatomic) BOOL hasWifiEstimatedBandwitdh; 
@property (assign,nonatomic) unsigned wifiEstimatedBandwitdh;                      //@synthesize wifiEstimatedBandwitdh=_wifiEstimatedBandwitdh - In the implementation block
@property (assign,nonatomic) BOOL hasWifiTxPhyRate; 
@property (assign,nonatomic) unsigned wifiTxPhyRate;                               //@synthesize wifiTxPhyRate=_wifiTxPhyRate - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRxPhyRate; 
@property (assign,nonatomic) unsigned wifiRxPhyRate;                               //@synthesize wifiRxPhyRate=_wifiRxPhyRate - In the implementation block
@property (assign,nonatomic) BOOL hasQbssLoad; 
@property (assign,nonatomic) unsigned qbssLoad;                                    //@synthesize qbssLoad=_qbssLoad - In the implementation block
@property (assign,nonatomic) BOOL hasCca; 
@property (assign,nonatomic) unsigned cca;                                         //@synthesize cca=_cca - In the implementation block
@property (assign,nonatomic) BOOL hasStationCount; 
@property (assign,nonatomic) unsigned stationCount;                                //@synthesize stationCount=_stationCount - In the implementation block
@property (assign,nonatomic) BOOL hasBcnPer; 
@property (assign,nonatomic) unsigned bcnPer;                                      //@synthesize bcnPer=_bcnPer - In the implementation block
@property (assign,nonatomic) BOOL hasLqmScoreWifi; 
@property (assign,nonatomic) int lqmScoreWifi;                                     //@synthesize lqmScoreWifi=_lqmScoreWifi - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedThroughputVO; 
@property (assign,nonatomic) unsigned expectedThroughputVO;                        //@synthesize expectedThroughputVO=_expectedThroughputVO - In the implementation block
@property (assign,nonatomic) BOOL hasPkgLifeTimeVO; 
@property (assign,nonatomic) unsigned pkgLifeTimeVO;                               //@synthesize pkgLifeTimeVO=_pkgLifeTimeVO - In the implementation block
@property (assign,nonatomic) BOOL hasPktLossRateVO; 
@property (assign,nonatomic) unsigned pktLossRateVO;                               //@synthesize pktLossRateVO=_pktLossRateVO - In the implementation block
@property (assign,nonatomic) BOOL hasDecisionVO; 
@property (assign,nonatomic) unsigned decisionVO;                                  //@synthesize decisionVO=_decisionVO - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedThroughputVIBE; 
@property (assign,nonatomic) unsigned expectedThroughputVIBE;                      //@synthesize expectedThroughputVIBE=_expectedThroughputVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasPacketLifetimeVIBE; 
@property (assign,nonatomic) unsigned packetLifetimeVIBE;                          //@synthesize packetLifetimeVIBE=_packetLifetimeVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasDecisionVIBE; 
@property (assign,nonatomic) unsigned decisionVIBE;                                //@synthesize decisionVIBE=_decisionVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasDataLQM; 
@property (assign,nonatomic) int dataLQM;                                          //@synthesize dataLQM=_dataLQM - In the implementation block
@property (assign,nonatomic) BOOL hasBssLoad; 
@property (assign,nonatomic) unsigned bssLoad;                                     //@synthesize bssLoad=_bssLoad - In the implementation block
@property (assign,nonatomic) BOOL hasVoiceLQM; 
@property (assign,nonatomic) unsigned voiceLQM;                                    //@synthesize voiceLQM=_voiceLQM - In the implementation block
@property (assign,nonatomic) BOOL hasSignalBar; 
@property (assign,nonatomic) unsigned signalBar;                                   //@synthesize signalBar=_signalBar - In the implementation block
@property (nonatomic,readonly) BOOL hasRatType; 
@property (nonatomic,retain) NSString * ratType;                                   //@synthesize ratType=_ratType - In the implementation block
@property (assign,nonatomic) BOOL hasCellRSRP; 
@property (assign,nonatomic) int cellRSRP;                                         //@synthesize cellRSRP=_cellRSRP - In the implementation block
@property (assign,nonatomic) BOOL hasCellSINR; 
@property (assign,nonatomic) int cellSINR;                                         //@synthesize cellSINR=_cellSINR - In the implementation block
@property (assign,nonatomic) BOOL hasCcStatusUpdate; 
@property (assign,nonatomic) int ccStatusUpdate;                                   //@synthesize ccStatusUpdate=_ccStatusUpdate - In the implementation block
@property (assign,nonatomic) BOOL hasCcStatusUpdateDelay; 
@property (assign,nonatomic) unsigned long long ccStatusUpdateDelay;               //@synthesize ccStatusUpdateDelay=_ccStatusUpdateDelay - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToLastDecision; 
@property (assign,nonatomic) unsigned timeToLastDecision;                          //@synthesize timeToLastDecision=_timeToLastDecision - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToLastReverseDecision; 
@property (assign,nonatomic) unsigned timeToLastReverseDecision;                   //@synthesize timeToLastReverseDecision=_timeToLastReverseDecision - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToLastReverseGrant; 
@property (assign,nonatomic) unsigned timeToLastReverseGrant;                      //@synthesize timeToLastReverseGrant=_timeToLastReverseGrant - In the implementation block
@property (assign,nonatomic) BOOL hasServiceTypeOfLastGrant; 
@property (assign,nonatomic) unsigned serviceTypeOfLastGrant;                      //@synthesize serviceTypeOfLastGrant=_serviceTypeOfLastGrant - In the implementation block
-(void)setWifiSNR:(long long)arg1 ;
-(void)setHasWifiSNR:(BOOL)arg1 ;
-(BOOL)hasWifiSNR;
-(void)setExpectedThroughputVIBE:(unsigned)arg1 ;
-(void)setHasExpectedThroughputVIBE:(BOOL)arg1 ;
-(BOOL)hasExpectedThroughputVIBE;
-(void)setPacketLifetimeVIBE:(unsigned)arg1 ;
-(void)setHasPacketLifetimeVIBE:(BOOL)arg1 ;
-(BOOL)hasPacketLifetimeVIBE;
-(long long)wifiSNR;
-(unsigned)expectedThroughputVIBE;
-(unsigned)packetLifetimeVIBE;
-(void)setMotionState:(int)arg1 ;
-(void)setHasMotionState:(BOOL)arg1 ;
-(BOOL)hasMotionState;
-(int)motionState;
-(void)setRatType:(NSString *)arg1 ;
-(void)setWifiRssi:(long long)arg1 ;
-(void)setHasWifiRssi:(BOOL)arg1 ;
-(BOOL)hasWifiRssi;
-(void)setQbssLoad:(unsigned)arg1 ;
-(void)setHasQbssLoad:(BOOL)arg1 ;
-(BOOL)hasQbssLoad;
-(void)setBcnPer:(unsigned)arg1 ;
-(void)setHasBcnPer:(BOOL)arg1 ;
-(BOOL)hasBcnPer;
-(void)setExpectedThroughputVO:(unsigned)arg1 ;
-(void)setHasExpectedThroughputVO:(BOOL)arg1 ;
-(BOOL)hasExpectedThroughputVO;
-(void)setPktLossRateVO:(unsigned)arg1 ;
-(void)setHasPktLossRateVO:(BOOL)arg1 ;
-(BOOL)hasPktLossRateVO;
-(void)setLqmScoreWifi:(int)arg1 ;
-(void)setHasLqmScoreWifi:(BOOL)arg1 ;
-(BOOL)hasLqmScoreWifi;
-(BOOL)hasRatType;
-(void)setPkgLifeTimeVO:(unsigned)arg1 ;
-(void)setHasPkgLifeTimeVO:(BOOL)arg1 ;
-(BOOL)hasPkgLifeTimeVO;
-(void)setDecisionVO:(unsigned)arg1 ;
-(void)setHasDecisionVO:(BOOL)arg1 ;
-(BOOL)hasDecisionVO;
-(void)setDecisionVIBE:(unsigned)arg1 ;
-(void)setHasDecisionVIBE:(BOOL)arg1 ;
-(BOOL)hasDecisionVIBE;
-(long long)wifiRssi;
-(unsigned)qbssLoad;
-(unsigned)bcnPer;
-(unsigned)expectedThroughputVO;
-(unsigned)pktLossRateVO;
-(int)lqmScoreWifi;
-(NSString *)ratType;
-(unsigned)pkgLifeTimeVO;
-(unsigned)decisionVO;
-(unsigned)decisionVIBE;
-(void)setWifiTxPER:(unsigned)arg1 ;
-(void)setHasWifiTxPER:(BOOL)arg1 ;
-(BOOL)hasWifiTxPER;
-(void)setCaptiveNetworks:(BOOL)arg1 ;
-(void)setHasCaptiveNetworks:(BOOL)arg1 ;
-(BOOL)hasCaptiveNetworks;
-(void)setWifiRxRetry:(unsigned)arg1 ;
-(void)setHasWifiRxRetry:(BOOL)arg1 ;
-(BOOL)hasWifiRxRetry;
-(void)setWifiEstimatedBandwitdh:(unsigned)arg1 ;
-(void)setHasWifiEstimatedBandwitdh:(BOOL)arg1 ;
-(BOOL)hasWifiEstimatedBandwitdh;
-(void)setWifiTxPhyRate:(unsigned)arg1 ;
-(void)setHasWifiTxPhyRate:(BOOL)arg1 ;
-(BOOL)hasWifiTxPhyRate;
-(void)setWifiRxPhyRate:(unsigned)arg1 ;
-(void)setHasWifiRxPhyRate:(BOOL)arg1 ;
-(BOOL)hasWifiRxPhyRate;
-(void)setStationCount:(unsigned)arg1 ;
-(void)setHasStationCount:(BOOL)arg1 ;
-(BOOL)hasStationCount;
-(void)setDataLQM:(int)arg1 ;
-(void)setHasDataLQM:(BOOL)arg1 ;
-(BOOL)hasDataLQM;
-(void)setBssLoad:(unsigned)arg1 ;
-(void)setHasBssLoad:(BOOL)arg1 ;
-(BOOL)hasBssLoad;
-(void)setVoiceLQM:(unsigned)arg1 ;
-(void)setHasVoiceLQM:(BOOL)arg1 ;
-(BOOL)hasVoiceLQM;
-(void)setSignalBar:(unsigned)arg1 ;
-(void)setHasSignalBar:(BOOL)arg1 ;
-(BOOL)hasSignalBar;
-(unsigned)wifiTxPER;
-(BOOL)captiveNetworks;
-(unsigned)wifiRxRetry;
-(unsigned)wifiEstimatedBandwitdh;
-(unsigned)wifiTxPhyRate;
-(unsigned)wifiRxPhyRate;
-(int)dataLQM;
-(unsigned)bssLoad;
-(unsigned)voiceLQM;
-(unsigned)signalBar;
-(void)setAppType:(NSString *)arg1 ;
-(unsigned long long)changeReasonsCount;
-(void)clearChangeReasons;
-(unsigned)changeReasonAtIndex:(unsigned long long)arg1 ;
-(void)addChangeReason:(unsigned)arg1 ;
-(void)setChangeDirection:(unsigned)arg1 ;
-(void)setHasChangeDirection:(BOOL)arg1 ;
-(BOOL)hasChangeDirection;
-(void)setVoiceLinkPref:(unsigned)arg1 ;
-(void)setHasVoiceLinkPref:(BOOL)arg1 ;
-(BOOL)hasVoiceLinkPref;
-(void)setDataLinkPref:(unsigned)arg1 ;
-(void)setHasDataLinkPref:(BOOL)arg1 ;
-(BOOL)hasDataLinkPref;
-(void)setCallStatus:(unsigned)arg1 ;
-(void)setHasCallStatus:(BOOL)arg1 ;
-(BOOL)hasCallStatus;
-(void)setDataAppStatus:(unsigned)arg1 ;
-(void)setHasDataAppStatus:(BOOL)arg1 ;
-(BOOL)hasDataAppStatus;
-(BOOL)hasAppType;
-(id)motionStateAsString:(int)arg1 ;
-(int)StringAsMotionState:(id)arg1 ;
-(unsigned*)changeReasons;
-(void)setChangeReasons:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setCellRSRP:(int)arg1 ;
-(void)setHasCellRSRP:(BOOL)arg1 ;
-(BOOL)hasCellRSRP;
-(void)setCellSINR:(int)arg1 ;
-(void)setHasCellSINR:(BOOL)arg1 ;
-(BOOL)hasCellSINR;
-(int)ccStatusUpdate;
-(void)setCcStatusUpdate:(int)arg1 ;
-(void)setHasCcStatusUpdate:(BOOL)arg1 ;
-(BOOL)hasCcStatusUpdate;
-(id)ccStatusUpdateAsString:(int)arg1 ;
-(int)StringAsCcStatusUpdate:(id)arg1 ;
-(void)setCcStatusUpdateDelay:(unsigned long long)arg1 ;
-(void)setHasCcStatusUpdateDelay:(BOOL)arg1 ;
-(BOOL)hasCcStatusUpdateDelay;
-(void)setTimeToLastDecision:(unsigned)arg1 ;
-(void)setHasTimeToLastDecision:(BOOL)arg1 ;
-(BOOL)hasTimeToLastDecision;
-(void)setTimeToLastReverseDecision:(unsigned)arg1 ;
-(void)setHasTimeToLastReverseDecision:(BOOL)arg1 ;
-(BOOL)hasTimeToLastReverseDecision;
-(void)setTimeToLastReverseGrant:(unsigned)arg1 ;
-(void)setHasTimeToLastReverseGrant:(BOOL)arg1 ;
-(BOOL)hasTimeToLastReverseGrant;
-(void)setServiceTypeOfLastGrant:(unsigned)arg1 ;
-(void)setHasServiceTypeOfLastGrant:(BOOL)arg1 ;
-(BOOL)hasServiceTypeOfLastGrant;
-(unsigned)changeDirection;
-(unsigned)voiceLinkPref;
-(unsigned)dataLinkPref;
-(unsigned)callStatus;
-(unsigned)dataAppStatus;
-(NSString *)appType;
-(int)cellRSRP;
-(int)cellSINR;
-(unsigned long long)ccStatusUpdateDelay;
-(unsigned)timeToLastDecision;
-(unsigned)timeToLastReverseDecision;
-(unsigned)timeToLastReverseGrant;
-(unsigned)serviceTypeOfLastGrant;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setCca:(unsigned)arg1 ;
-(void)setHasCca:(BOOL)arg1 ;
-(BOOL)hasCca;
-(unsigned)cca;
-(unsigned)serviceType;
-(void)setServiceType:(unsigned)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(BOOL)hasServiceType;
-(unsigned)stationCount;
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

