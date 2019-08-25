/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDSiriRequestRecord : PBCodable <NSCopying> {

	long long _btRetransmissionRateRx;
	long long _btRetransmissionRateTx;
	unsigned long long _btRssi;
	long long _btTech;
	unsigned long long _endTimestamp;
	long long _expectedThroughputVIBE;
	unsigned long long _iRATRecommendationDelay;
	long long _lsmRecommendationBe;
	long long _packetLifetimeVIBE;
	long long _packetLossRateVIBE;
	unsigned long long _startTimestamp;
	unsigned long long _timeToFirstWord;
	long long _wifiCCA;
	long long _wifiRSSI;
	long long _wifiSNR;
	unsigned _beaconPer;
	int _errorCode;
	int _errorDomain;
	int _iRATRecommendation;
	unsigned _idsErrorCode;
	unsigned _idsMessageDelay;
	unsigned _idsSocketDelay;
	unsigned _nwtype;
	int _requestStatus;
	NSMutableArray* _transportHistorys;
	int _underlyingErrorCode;
	int _underlyingErrorDomain;
	SCD_Struct_AW34 _has;

}

@property (assign,nonatomic) BOOL hasStartTimestamp; 
@property (assign,nonatomic) unsigned long long startTimestamp;                       //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndTimestamp; 
@property (assign,nonatomic) unsigned long long endTimestamp;                         //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRequestStatus; 
@property (assign,nonatomic) int requestStatus;                                       //@synthesize requestStatus=_requestStatus - In the implementation block
@property (assign,nonatomic) BOOL hasErrorDomain; 
@property (assign,nonatomic) int errorDomain;                                         //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                           //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingErrorDomain; 
@property (assign,nonatomic) int underlyingErrorDomain;                               //@synthesize underlyingErrorDomain=_underlyingErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingErrorCode; 
@property (assign,nonatomic) int underlyingErrorCode;                                 //@synthesize underlyingErrorCode=_underlyingErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToFirstWord; 
@property (assign,nonatomic) unsigned long long timeToFirstWord;                      //@synthesize timeToFirstWord=_timeToFirstWord - In the implementation block
@property (assign,nonatomic) BOOL hasIRATRecommendation; 
@property (assign,nonatomic) int iRATRecommendation;                                  //@synthesize iRATRecommendation=_iRATRecommendation - In the implementation block
@property (assign,nonatomic) BOOL hasIRATRecommendationDelay; 
@property (assign,nonatomic) unsigned long long iRATRecommendationDelay;              //@synthesize iRATRecommendationDelay=_iRATRecommendationDelay - In the implementation block
@property (nonatomic,retain) NSMutableArray * transportHistorys;                      //@synthesize transportHistorys=_transportHistorys - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRSSI; 
@property (assign,nonatomic) long long wifiRSSI;                                      //@synthesize wifiRSSI=_wifiRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasWifiSNR; 
@property (assign,nonatomic) long long wifiSNR;                                       //@synthesize wifiSNR=_wifiSNR - In the implementation block
@property (assign,nonatomic) BOOL hasWifiCCA; 
@property (assign,nonatomic) long long wifiCCA;                                       //@synthesize wifiCCA=_wifiCCA - In the implementation block
@property (assign,nonatomic) BOOL hasBeaconPer; 
@property (assign,nonatomic) unsigned beaconPer;                                      //@synthesize beaconPer=_beaconPer - In the implementation block
@property (assign,nonatomic) BOOL hasNwtype; 
@property (assign,nonatomic) unsigned nwtype;                                         //@synthesize nwtype=_nwtype - In the implementation block
@property (assign,nonatomic) BOOL hasLsmRecommendationBe; 
@property (assign,nonatomic) long long lsmRecommendationBe;                           //@synthesize lsmRecommendationBe=_lsmRecommendationBe - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedThroughputVIBE; 
@property (assign,nonatomic) long long expectedThroughputVIBE;                        //@synthesize expectedThroughputVIBE=_expectedThroughputVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasPacketLifetimeVIBE; 
@property (assign,nonatomic) long long packetLifetimeVIBE;                            //@synthesize packetLifetimeVIBE=_packetLifetimeVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasPacketLossRateVIBE; 
@property (assign,nonatomic) long long packetLossRateVIBE;                            //@synthesize packetLossRateVIBE=_packetLossRateVIBE - In the implementation block
@property (assign,nonatomic) BOOL hasBtRssi; 
@property (assign,nonatomic) unsigned long long btRssi;                               //@synthesize btRssi=_btRssi - In the implementation block
@property (assign,nonatomic) BOOL hasBtRetransmissionRateTx; 
@property (assign,nonatomic) long long btRetransmissionRateTx;                        //@synthesize btRetransmissionRateTx=_btRetransmissionRateTx - In the implementation block
@property (assign,nonatomic) BOOL hasBtRetransmissionRateRx; 
@property (assign,nonatomic) long long btRetransmissionRateRx;                        //@synthesize btRetransmissionRateRx=_btRetransmissionRateRx - In the implementation block
@property (assign,nonatomic) BOOL hasBtTech; 
@property (assign,nonatomic) long long btTech;                                        //@synthesize btTech=_btTech - In the implementation block
@property (assign,nonatomic) BOOL hasIdsMessageDelay; 
@property (assign,nonatomic) unsigned idsMessageDelay;                                //@synthesize idsMessageDelay=_idsMessageDelay - In the implementation block
@property (assign,nonatomic) BOOL hasIdsSocketDelay; 
@property (assign,nonatomic) unsigned idsSocketDelay;                                 //@synthesize idsSocketDelay=_idsSocketDelay - In the implementation block
@property (assign,nonatomic) BOOL hasIdsErrorCode; 
@property (assign,nonatomic) unsigned idsErrorCode;                                   //@synthesize idsErrorCode=_idsErrorCode - In the implementation block
+(Class)transportHistoryType;
-(void)setHasUnderlyingErrorDomain:(BOOL)arg1 ;
-(void)setTransportHistorys:(NSMutableArray *)arg1 ;
-(void)addTransportHistory:(id)arg1 ;
-(unsigned long long)transportHistorysCount;
-(void)clearTransportHistorys;
-(id)transportHistoryAtIndex:(unsigned long long)arg1 ;
-(void)setHasStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasStartTimestamp;
-(void)setEndTimestamp:(unsigned long long)arg1 ;
-(void)setHasEndTimestamp:(BOOL)arg1 ;
-(BOOL)hasEndTimestamp;
-(int)requestStatus;
-(void)setRequestStatus:(int)arg1 ;
-(void)setHasRequestStatus:(BOOL)arg1 ;
-(BOOL)hasRequestStatus;
-(id)requestStatusAsString:(int)arg1 ;
-(int)StringAsRequestStatus:(id)arg1 ;
-(void)setHasErrorDomain:(BOOL)arg1 ;
-(id)errorDomainAsString:(int)arg1 ;
-(int)StringAsErrorDomain:(id)arg1 ;
-(id)underlyingErrorDomainAsString:(int)arg1 ;
-(int)StringAsUnderlyingErrorDomain:(id)arg1 ;
-(void)setTimeToFirstWord:(unsigned long long)arg1 ;
-(void)setHasTimeToFirstWord:(BOOL)arg1 ;
-(BOOL)hasTimeToFirstWord;
-(int)iRATRecommendation;
-(void)setIRATRecommendation:(int)arg1 ;
-(void)setHasIRATRecommendation:(BOOL)arg1 ;
-(BOOL)hasIRATRecommendation;
-(id)iRATRecommendationAsString:(int)arg1 ;
-(int)StringAsIRATRecommendation:(id)arg1 ;
-(void)setIRATRecommendationDelay:(unsigned long long)arg1 ;
-(void)setHasIRATRecommendationDelay:(BOOL)arg1 ;
-(BOOL)hasIRATRecommendationDelay;
-(void)setWifiRSSI:(long long)arg1 ;
-(void)setHasWifiRSSI:(BOOL)arg1 ;
-(BOOL)hasWifiRSSI;
-(void)setWifiSNR:(long long)arg1 ;
-(void)setHasWifiSNR:(BOOL)arg1 ;
-(BOOL)hasWifiSNR;
-(void)setWifiCCA:(long long)arg1 ;
-(void)setHasWifiCCA:(BOOL)arg1 ;
-(BOOL)hasWifiCCA;
-(void)setBeaconPer:(unsigned)arg1 ;
-(void)setHasBeaconPer:(BOOL)arg1 ;
-(BOOL)hasBeaconPer;
-(void)setNwtype:(unsigned)arg1 ;
-(void)setHasNwtype:(BOOL)arg1 ;
-(BOOL)hasNwtype;
-(void)setLsmRecommendationBe:(long long)arg1 ;
-(void)setHasLsmRecommendationBe:(BOOL)arg1 ;
-(BOOL)hasLsmRecommendationBe;
-(void)setExpectedThroughputVIBE:(long long)arg1 ;
-(void)setHasExpectedThroughputVIBE:(BOOL)arg1 ;
-(BOOL)hasExpectedThroughputVIBE;
-(void)setPacketLifetimeVIBE:(long long)arg1 ;
-(void)setHasPacketLifetimeVIBE:(BOOL)arg1 ;
-(BOOL)hasPacketLifetimeVIBE;
-(void)setPacketLossRateVIBE:(long long)arg1 ;
-(void)setHasPacketLossRateVIBE:(BOOL)arg1 ;
-(BOOL)hasPacketLossRateVIBE;
-(void)setBtRssi:(unsigned long long)arg1 ;
-(void)setHasBtRssi:(BOOL)arg1 ;
-(BOOL)hasBtRssi;
-(void)setBtRetransmissionRateTx:(long long)arg1 ;
-(void)setHasBtRetransmissionRateTx:(BOOL)arg1 ;
-(BOOL)hasBtRetransmissionRateTx;
-(void)setBtRetransmissionRateRx:(long long)arg1 ;
-(void)setHasBtRetransmissionRateRx:(BOOL)arg1 ;
-(BOOL)hasBtRetransmissionRateRx;
-(void)setBtTech:(long long)arg1 ;
-(void)setHasBtTech:(BOOL)arg1 ;
-(BOOL)hasBtTech;
-(void)setIdsMessageDelay:(unsigned)arg1 ;
-(void)setHasIdsMessageDelay:(BOOL)arg1 ;
-(BOOL)hasIdsMessageDelay;
-(void)setIdsSocketDelay:(unsigned)arg1 ;
-(void)setHasIdsSocketDelay:(BOOL)arg1 ;
-(BOOL)hasIdsSocketDelay;
-(void)setIdsErrorCode:(unsigned)arg1 ;
-(void)setHasIdsErrorCode:(BOOL)arg1 ;
-(BOOL)hasIdsErrorCode;
-(unsigned long long)endTimestamp;
-(unsigned long long)timeToFirstWord;
-(unsigned long long)iRATRecommendationDelay;
-(NSMutableArray *)transportHistorys;
-(long long)wifiRSSI;
-(long long)wifiSNR;
-(long long)wifiCCA;
-(unsigned)beaconPer;
-(unsigned)nwtype;
-(long long)lsmRecommendationBe;
-(long long)expectedThroughputVIBE;
-(long long)packetLifetimeVIBE;
-(long long)packetLossRateVIBE;
-(unsigned long long)btRssi;
-(long long)btRetransmissionRateTx;
-(long long)btRetransmissionRateRx;
-(long long)btTech;
-(unsigned)idsMessageDelay;
-(unsigned)idsSocketDelay;
-(unsigned)idsErrorCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setErrorDomain:(int)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(int)errorDomain;
-(int)errorCode;
-(void)setUnderlyingErrorDomain:(int)arg1 ;
-(BOOL)hasUnderlyingErrorDomain;
-(void)setUnderlyingErrorCode:(int)arg1 ;
-(void)setHasUnderlyingErrorCode:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorCode;
-(int)underlyingErrorDomain;
-(int)underlyingErrorCode;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStartTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)startTimestamp;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

