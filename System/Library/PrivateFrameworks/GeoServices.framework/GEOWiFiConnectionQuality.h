/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOLocation, NSString;

@interface GEOWiFiConnectionQuality : PBCodable <NSCopying> {

	SCD_Struct_GE2* _authTraits;
	SCD_Struct_GE2* _traits;
	unsigned long long _bytesInActive;
	unsigned long long _bytesInTotal;
	unsigned long long _bytesOutActive;
	unsigned long long _bytesOutTotal;
	unsigned long long _dataStalls;
	unsigned long long _failedConnections;
	unsigned long long _faultyStay;
	double _lat;
	double _lon;
	unsigned long long _lowLQMStay;
	unsigned long long _lowqStay;
	unsigned long long _lqmTranCount;
	unsigned long long _overAllStay;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _reTxBytes;
	unsigned long long _receivedDupes;
	unsigned long long _rxOutOfOrderBytes;
	unsigned long long _successfulConnections;
	unsigned long long _timeOfDay;
	unsigned long long _timestamp;
	NSMutableArray* _additionalUniqueIDs;
	unsigned _assocReason;
	unsigned _associatedTime;
	int _associationLength;
	int _associationReason;
	unsigned _band;
	int _captiveDetermination;
	unsigned _captiveFlag;
	int _cca;
	unsigned _channel;
	unsigned _channelWidth;
	unsigned _colocatedState;
	unsigned _disassocReason;
	int _disassociationReason;
	NSMutableArray* _essMembers;
	NSMutableArray* _feedbacks;
	GEOLocation* _location;
	NSMutableArray* _nearbyBSSs;
	int _networkOrigin;
	int _networkType;
	NSMutableArray* _otherUniqueIDs;
	unsigned _phyMode;
	float _roundTripTimeAvg;
	float _roundTripTimeAvgActive;
	float _roundTripTimeMin;
	float _roundTripTimeMinActive;
	float _roundTripTimeVar;
	float _roundTripTimeVarActive;
	int _rssi;
	unsigned _securityType;
	int _snr;
	float _topDLRate;
	NSString* _uniqueID;
	unsigned _wasCaptiveFlag;
	BOOL _hotspot20;
	BOOL _isEdgeBSS;
	BOOL _isKnownGood;
	BOOL _lowInternetDL;
	BOOL _lowInternetUL;
	SCD_Struct_GE21 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID;                                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalUniqueIDs;                  //@synthesize additionalUniqueIDs=_additionalUniqueIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * otherUniqueIDs;                       //@synthesize otherUniqueIDs=_otherUniqueIDs - In the implementation block
@property (assign,nonatomic) BOOL hasLat; 
@property (assign,nonatomic) double lat;                                            //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) BOOL hasLon; 
@property (assign,nonatomic) double lon;                                            //@synthesize lon=_lon - In the implementation block
@property (assign,nonatomic) BOOL hasOverAllStay; 
@property (assign,nonatomic) unsigned long long overAllStay;                        //@synthesize overAllStay=_overAllStay - In the implementation block
@property (assign,nonatomic) BOOL hasFaultyStay; 
@property (assign,nonatomic) unsigned long long faultyStay;                         //@synthesize faultyStay=_faultyStay - In the implementation block
@property (assign,nonatomic) BOOL hasLowLQMStay; 
@property (assign,nonatomic) unsigned long long lowLQMStay;                         //@synthesize lowLQMStay=_lowLQMStay - In the implementation block
@property (assign,nonatomic) BOOL hasLowqStay; 
@property (assign,nonatomic) unsigned long long lowqStay;                           //@synthesize lowqStay=_lowqStay - In the implementation block
@property (assign,nonatomic) BOOL hasLqmTranCount; 
@property (assign,nonatomic) unsigned long long lqmTranCount;                       //@synthesize lqmTranCount=_lqmTranCount - In the implementation block
@property (assign,nonatomic) BOOL hasSuccessfulConnections; 
@property (assign,nonatomic) unsigned long long successfulConnections;              //@synthesize successfulConnections=_successfulConnections - In the implementation block
@property (assign,nonatomic) BOOL hasFailedConnections; 
@property (assign,nonatomic) unsigned long long failedConnections;                  //@synthesize failedConnections=_failedConnections - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                          //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                         //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) BOOL hasBytesInTotal; 
@property (assign,nonatomic) unsigned long long bytesInTotal;                       //@synthesize bytesInTotal=_bytesInTotal - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOutTotal; 
@property (assign,nonatomic) unsigned long long bytesOutTotal;                      //@synthesize bytesOutTotal=_bytesOutTotal - In the implementation block
@property (assign,nonatomic) BOOL hasBytesInActive; 
@property (assign,nonatomic) unsigned long long bytesInActive;                      //@synthesize bytesInActive=_bytesInActive - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOutActive; 
@property (assign,nonatomic) unsigned long long bytesOutActive;                     //@synthesize bytesOutActive=_bytesOutActive - In the implementation block
@property (assign,nonatomic) BOOL hasReTxBytes; 
@property (assign,nonatomic) unsigned long long reTxBytes;                          //@synthesize reTxBytes=_reTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasDataStalls; 
@property (assign,nonatomic) unsigned long long dataStalls;                         //@synthesize dataStalls=_dataStalls - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedDupes; 
@property (assign,nonatomic) unsigned long long receivedDupes;                      //@synthesize receivedDupes=_receivedDupes - In the implementation block
@property (assign,nonatomic) BOOL hasRxOutOfOrderBytes; 
@property (assign,nonatomic) unsigned long long rxOutOfOrderBytes;                  //@synthesize rxOutOfOrderBytes=_rxOutOfOrderBytes - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeMin; 
@property (assign,nonatomic) float roundTripTimeMin;                                //@synthesize roundTripTimeMin=_roundTripTimeMin - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeAvg; 
@property (assign,nonatomic) float roundTripTimeAvg;                                //@synthesize roundTripTimeAvg=_roundTripTimeAvg - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeVar; 
@property (assign,nonatomic) float roundTripTimeVar;                                //@synthesize roundTripTimeVar=_roundTripTimeVar - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeMinActive; 
@property (assign,nonatomic) float roundTripTimeMinActive;                          //@synthesize roundTripTimeMinActive=_roundTripTimeMinActive - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeAvgActive; 
@property (assign,nonatomic) float roundTripTimeAvgActive;                          //@synthesize roundTripTimeAvgActive=_roundTripTimeAvgActive - In the implementation block
@property (assign,nonatomic) BOOL hasRoundTripTimeVarActive; 
@property (assign,nonatomic) float roundTripTimeVarActive;                          //@synthesize roundTripTimeVarActive=_roundTripTimeVarActive - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                                 //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasCaptiveFlag; 
@property (assign,nonatomic) unsigned captiveFlag;                                  //@synthesize captiveFlag=_captiveFlag - In the implementation block
@property (assign,nonatomic) BOOL hasColocatedState; 
@property (assign,nonatomic) unsigned colocatedState;                               //@synthesize colocatedState=_colocatedState - In the implementation block
@property (assign,nonatomic) BOOL hasHotspot20; 
@property (assign,nonatomic) BOOL hotspot20;                                        //@synthesize hotspot20=_hotspot20 - In the implementation block
@property (assign,nonatomic) BOOL hasDisassocReason; 
@property (assign,nonatomic) unsigned disassocReason;                               //@synthesize disassocReason=_disassocReason - In the implementation block
@property (assign,nonatomic) BOOL hasAssocReason; 
@property (assign,nonatomic) unsigned assocReason;                                  //@synthesize assocReason=_assocReason - In the implementation block
@property (assign,nonatomic) BOOL hasBand; 
@property (assign,nonatomic) unsigned band;                                         //@synthesize band=_band - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel;                                      //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasChannelWidth; 
@property (assign,nonatomic) unsigned channelWidth;                                 //@synthesize channelWidth=_channelWidth - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                              //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasSnr; 
@property (assign,nonatomic) int snr;                                               //@synthesize snr=_snr - In the implementation block
@property (assign,nonatomic) BOOL hasCca; 
@property (assign,nonatomic) int cca;                                               //@synthesize cca=_cca - In the implementation block
@property (assign,nonatomic) BOOL hasPhyMode; 
@property (assign,nonatomic) unsigned phyMode;                                      //@synthesize phyMode=_phyMode - In the implementation block
@property (assign,nonatomic) BOOL hasTimeOfDay; 
@property (assign,nonatomic) unsigned long long timeOfDay;                          //@synthesize timeOfDay=_timeOfDay - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedTime; 
@property (assign,nonatomic) unsigned associatedTime;                               //@synthesize associatedTime=_associatedTime - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasWasCaptiveFlag; 
@property (assign,nonatomic) unsigned wasCaptiveFlag;                               //@synthesize wasCaptiveFlag=_wasCaptiveFlag - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                       //@synthesize networkType=_networkType - In the implementation block
@property (nonatomic,readonly) unsigned long long traitsCount; 
@property (nonatomic,readonly) int* traits; 
@property (assign,nonatomic) BOOL hasCaptiveDetermination; 
@property (assign,nonatomic) int captiveDetermination;                              //@synthesize captiveDetermination=_captiveDetermination - In the implementation block
@property (assign,nonatomic) BOOL hasAssociationLength; 
@property (assign,nonatomic) int associationLength;                                 //@synthesize associationLength=_associationLength - In the implementation block
@property (nonatomic,readonly) unsigned long long authTraitsCount; 
@property (nonatomic,readonly) int* authTraits; 
@property (assign,nonatomic) BOOL hasNetworkOrigin; 
@property (assign,nonatomic) int networkOrigin;                                     //@synthesize networkOrigin=_networkOrigin - In the implementation block
@property (assign,nonatomic) BOOL hasTopDLRate; 
@property (assign,nonatomic) float topDLRate;                                       //@synthesize topDLRate=_topDLRate - In the implementation block
@property (assign,nonatomic) BOOL hasLowInternetUL; 
@property (assign,nonatomic) BOOL lowInternetUL;                                    //@synthesize lowInternetUL=_lowInternetUL - In the implementation block
@property (assign,nonatomic) BOOL hasLowInternetDL; 
@property (assign,nonatomic) BOOL lowInternetDL;                                    //@synthesize lowInternetDL=_lowInternetDL - In the implementation block
@property (assign,nonatomic) BOOL hasIsKnownGood; 
@property (assign,nonatomic) BOOL isKnownGood;                                      //@synthesize isKnownGood=_isKnownGood - In the implementation block
@property (assign,nonatomic) BOOL hasIsEdgeBSS; 
@property (assign,nonatomic) BOOL isEdgeBSS;                                        //@synthesize isEdgeBSS=_isEdgeBSS - In the implementation block
@property (assign,nonatomic) BOOL hasAssociationReason; 
@property (assign,nonatomic) int associationReason;                                 //@synthesize associationReason=_associationReason - In the implementation block
@property (assign,nonatomic) BOOL hasDisassociationReason; 
@property (assign,nonatomic) int disassociationReason;                              //@synthesize disassociationReason=_disassociationReason - In the implementation block
@property (nonatomic,retain) NSMutableArray * essMembers;                           //@synthesize essMembers=_essMembers - In the implementation block
@property (nonatomic,retain) NSMutableArray * nearbyBSSs;                           //@synthesize nearbyBSSs=_nearbyBSSs - In the implementation block
@property (nonatomic,retain) NSMutableArray * feedbacks;                            //@synthesize feedbacks=_feedbacks - In the implementation block
+(Class)additionalUniqueIDsType;
+(Class)otherUniqueIDsType;
+(Class)essMembersType;
+(Class)nearbyBSSType;
+(Class)feedbackType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocation;
-(void)addAdditionalUniqueIDs:(id)arg1 ;
-(void)addOtherUniqueIDs:(id)arg1 ;
-(void)addEssMembers:(id)arg1 ;
-(void)addNearbyBSS:(id)arg1 ;
-(void)addFeedback:(id)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(unsigned long long)additionalUniqueIDsCount;
-(void)clearAdditionalUniqueIDs;
-(id)additionalUniqueIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)otherUniqueIDsCount;
-(void)clearOtherUniqueIDs;
-(id)otherUniqueIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)traitsCount;
-(void)clearTraits;
-(int)traitsAtIndex:(unsigned long long)arg1 ;
-(void)addTraits:(int)arg1 ;
-(unsigned long long)authTraitsCount;
-(void)clearAuthTraits;
-(int)authTraitsAtIndex:(unsigned long long)arg1 ;
-(void)addAuthTraits:(int)arg1 ;
-(unsigned long long)essMembersCount;
-(void)clearEssMembers;
-(id)essMembersAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)nearbyBSSsCount;
-(void)clearNearbyBSSs;
-(id)nearbyBSSAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)feedbacksCount;
-(void)clearFeedbacks;
-(id)feedbackAtIndex:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasUniqueID;
-(void)setLat:(double)arg1 ;
-(void)setHasLat:(BOOL)arg1 ;
-(BOOL)hasLat;
-(void)setLon:(double)arg1 ;
-(void)setHasLon:(BOOL)arg1 ;
-(BOOL)hasLon;
-(void)setOverAllStay:(unsigned long long)arg1 ;
-(void)setHasOverAllStay:(BOOL)arg1 ;
-(BOOL)hasOverAllStay;
-(void)setFaultyStay:(unsigned long long)arg1 ;
-(void)setHasFaultyStay:(BOOL)arg1 ;
-(BOOL)hasFaultyStay;
-(void)setLowLQMStay:(unsigned long long)arg1 ;
-(void)setHasLowLQMStay:(BOOL)arg1 ;
-(BOOL)hasLowLQMStay;
-(void)setLowqStay:(unsigned long long)arg1 ;
-(void)setHasLowqStay:(BOOL)arg1 ;
-(BOOL)hasLowqStay;
-(void)setLqmTranCount:(unsigned long long)arg1 ;
-(void)setHasLqmTranCount:(BOOL)arg1 ;
-(BOOL)hasLqmTranCount;
-(void)setSuccessfulConnections:(unsigned long long)arg1 ;
-(void)setHasSuccessfulConnections:(BOOL)arg1 ;
-(BOOL)hasSuccessfulConnections;
-(void)setFailedConnections:(unsigned long long)arg1 ;
-(void)setHasFailedConnections:(BOOL)arg1 ;
-(BOOL)hasFailedConnections;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsIn:(BOOL)arg1 ;
-(BOOL)hasPacketsIn;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(BOOL)arg1 ;
-(BOOL)hasPacketsOut;
-(void)setBytesInTotal:(unsigned long long)arg1 ;
-(void)setHasBytesInTotal:(BOOL)arg1 ;
-(BOOL)hasBytesInTotal;
-(void)setBytesOutTotal:(unsigned long long)arg1 ;
-(void)setHasBytesOutTotal:(BOOL)arg1 ;
-(BOOL)hasBytesOutTotal;
-(void)setBytesInActive:(unsigned long long)arg1 ;
-(void)setHasBytesInActive:(BOOL)arg1 ;
-(BOOL)hasBytesInActive;
-(void)setBytesOutActive:(unsigned long long)arg1 ;
-(void)setHasBytesOutActive:(BOOL)arg1 ;
-(BOOL)hasBytesOutActive;
-(void)setReTxBytes:(unsigned long long)arg1 ;
-(void)setHasReTxBytes:(BOOL)arg1 ;
-(BOOL)hasReTxBytes;
-(void)setDataStalls:(unsigned long long)arg1 ;
-(void)setHasDataStalls:(BOOL)arg1 ;
-(BOOL)hasDataStalls;
-(void)setReceivedDupes:(unsigned long long)arg1 ;
-(void)setHasReceivedDupes:(BOOL)arg1 ;
-(BOOL)hasReceivedDupes;
-(void)setRxOutOfOrderBytes:(unsigned long long)arg1 ;
-(void)setHasRxOutOfOrderBytes:(BOOL)arg1 ;
-(BOOL)hasRxOutOfOrderBytes;
-(void)setRoundTripTimeMin:(float)arg1 ;
-(void)setHasRoundTripTimeMin:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeMin;
-(void)setRoundTripTimeAvg:(float)arg1 ;
-(void)setHasRoundTripTimeAvg:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeAvg;
-(void)setRoundTripTimeVar:(float)arg1 ;
-(void)setHasRoundTripTimeVar:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeVar;
-(void)setRoundTripTimeMinActive:(float)arg1 ;
-(void)setHasRoundTripTimeMinActive:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeMinActive;
-(void)setRoundTripTimeAvgActive:(float)arg1 ;
-(void)setHasRoundTripTimeAvgActive:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeAvgActive;
-(void)setRoundTripTimeVarActive:(float)arg1 ;
-(void)setHasRoundTripTimeVarActive:(BOOL)arg1 ;
-(BOOL)hasRoundTripTimeVarActive;
-(void)setSecurityType:(unsigned)arg1 ;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(void)setCaptiveFlag:(unsigned)arg1 ;
-(void)setHasCaptiveFlag:(BOOL)arg1 ;
-(BOOL)hasCaptiveFlag;
-(void)setColocatedState:(unsigned)arg1 ;
-(void)setHasColocatedState:(BOOL)arg1 ;
-(BOOL)hasColocatedState;
-(void)setHotspot20:(BOOL)arg1 ;
-(void)setHasHotspot20:(BOOL)arg1 ;
-(BOOL)hasHotspot20;
-(void)setDisassocReason:(unsigned)arg1 ;
-(void)setHasDisassocReason:(BOOL)arg1 ;
-(BOOL)hasDisassocReason;
-(void)setAssocReason:(unsigned)arg1 ;
-(void)setHasAssocReason:(BOOL)arg1 ;
-(BOOL)hasAssocReason;
-(void)setBand:(unsigned)arg1 ;
-(void)setHasBand:(BOOL)arg1 ;
-(BOOL)hasBand;
-(void)setChannel:(unsigned)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(void)setChannelWidth:(unsigned)arg1 ;
-(void)setHasChannelWidth:(BOOL)arg1 ;
-(BOOL)hasChannelWidth;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setSnr:(int)arg1 ;
-(void)setHasSnr:(BOOL)arg1 ;
-(BOOL)hasSnr;
-(void)setCca:(int)arg1 ;
-(void)setHasCca:(BOOL)arg1 ;
-(BOOL)hasCca;
-(void)setPhyMode:(unsigned)arg1 ;
-(void)setHasPhyMode:(BOOL)arg1 ;
-(BOOL)hasPhyMode;
-(void)setTimeOfDay:(unsigned long long)arg1 ;
-(void)setHasTimeOfDay:(BOOL)arg1 ;
-(BOOL)hasTimeOfDay;
-(void)setAssociatedTime:(unsigned)arg1 ;
-(void)setHasAssociatedTime:(BOOL)arg1 ;
-(BOOL)hasAssociatedTime;
-(void)setWasCaptiveFlag:(unsigned)arg1 ;
-(void)setHasWasCaptiveFlag:(BOOL)arg1 ;
-(BOOL)hasWasCaptiveFlag;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)setTraits:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)traitsAsString:(int)arg1 ;
-(int)StringAsTraits:(id)arg1 ;
-(int)captiveDetermination;
-(void)setCaptiveDetermination:(int)arg1 ;
-(void)setHasCaptiveDetermination:(BOOL)arg1 ;
-(BOOL)hasCaptiveDetermination;
-(id)captiveDeterminationAsString:(int)arg1 ;
-(int)StringAsCaptiveDetermination:(id)arg1 ;
-(int)associationLength;
-(void)setAssociationLength:(int)arg1 ;
-(void)setHasAssociationLength:(BOOL)arg1 ;
-(BOOL)hasAssociationLength;
-(id)associationLengthAsString:(int)arg1 ;
-(int)StringAsAssociationLength:(id)arg1 ;
-(int*)authTraits;
-(void)setAuthTraits:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)authTraitsAsString:(int)arg1 ;
-(int)StringAsAuthTraits:(id)arg1 ;
-(int)networkOrigin;
-(void)setNetworkOrigin:(int)arg1 ;
-(void)setHasNetworkOrigin:(BOOL)arg1 ;
-(BOOL)hasNetworkOrigin;
-(id)networkOriginAsString:(int)arg1 ;
-(int)StringAsNetworkOrigin:(id)arg1 ;
-(void)setTopDLRate:(float)arg1 ;
-(void)setHasTopDLRate:(BOOL)arg1 ;
-(BOOL)hasTopDLRate;
-(void)setLowInternetUL:(BOOL)arg1 ;
-(void)setHasLowInternetUL:(BOOL)arg1 ;
-(BOOL)hasLowInternetUL;
-(void)setLowInternetDL:(BOOL)arg1 ;
-(void)setHasLowInternetDL:(BOOL)arg1 ;
-(BOOL)hasLowInternetDL;
-(void)setIsKnownGood:(BOOL)arg1 ;
-(void)setHasIsKnownGood:(BOOL)arg1 ;
-(BOOL)hasIsKnownGood;
-(void)setIsEdgeBSS:(BOOL)arg1 ;
-(void)setHasIsEdgeBSS:(BOOL)arg1 ;
-(BOOL)hasIsEdgeBSS;
-(int)associationReason;
-(void)setAssociationReason:(int)arg1 ;
-(void)setHasAssociationReason:(BOOL)arg1 ;
-(BOOL)hasAssociationReason;
-(id)associationReasonAsString:(int)arg1 ;
-(int)StringAsAssociationReason:(id)arg1 ;
-(int)disassociationReason;
-(void)setDisassociationReason:(int)arg1 ;
-(void)setHasDisassociationReason:(BOOL)arg1 ;
-(BOOL)hasDisassociationReason;
-(id)disassociationReasonAsString:(int)arg1 ;
-(int)StringAsDisassociationReason:(id)arg1 ;
-(NSString *)uniqueID;
-(NSMutableArray *)additionalUniqueIDs;
-(void)setAdditionalUniqueIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)otherUniqueIDs;
-(void)setOtherUniqueIDs:(NSMutableArray *)arg1 ;
-(double)lat;
-(double)lon;
-(unsigned long long)overAllStay;
-(unsigned long long)faultyStay;
-(unsigned long long)lowLQMStay;
-(unsigned long long)lowqStay;
-(unsigned long long)lqmTranCount;
-(unsigned long long)successfulConnections;
-(unsigned long long)failedConnections;
-(unsigned long long)packetsIn;
-(unsigned long long)packetsOut;
-(unsigned long long)bytesInTotal;
-(unsigned long long)bytesOutTotal;
-(unsigned long long)bytesInActive;
-(unsigned long long)bytesOutActive;
-(unsigned long long)reTxBytes;
-(unsigned long long)dataStalls;
-(unsigned long long)receivedDupes;
-(unsigned long long)rxOutOfOrderBytes;
-(float)roundTripTimeMin;
-(float)roundTripTimeAvg;
-(float)roundTripTimeVar;
-(float)roundTripTimeMinActive;
-(float)roundTripTimeAvgActive;
-(float)roundTripTimeVarActive;
-(unsigned)securityType;
-(unsigned)captiveFlag;
-(unsigned)colocatedState;
-(BOOL)hotspot20;
-(unsigned)disassocReason;
-(unsigned)assocReason;
-(unsigned)band;
-(unsigned)channel;
-(unsigned)channelWidth;
-(int)rssi;
-(int)snr;
-(int)cca;
-(unsigned)phyMode;
-(unsigned long long)timeOfDay;
-(unsigned)associatedTime;
-(unsigned)wasCaptiveFlag;
-(float)topDLRate;
-(BOOL)lowInternetUL;
-(BOOL)lowInternetDL;
-(BOOL)isKnownGood;
-(BOOL)isEdgeBSS;
-(NSMutableArray *)essMembers;
-(void)setEssMembers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)nearbyBSSs;
-(void)setNearbyBSSs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)feedbacks;
-(void)setFeedbacks:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(GEOLocation *)location;
-(void)copyTo:(id)arg1 ;
-(int*)traits;
-(void)setLocation:(GEOLocation *)arg1 ;
-(id)dictionaryRepresentation;
@end

