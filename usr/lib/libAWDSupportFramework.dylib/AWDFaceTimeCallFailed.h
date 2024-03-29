/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDFaceTimeCallFailed : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _backCameraCaptureDuration;
	unsigned _callDuration;
	unsigned _conferenceMiscError;
	unsigned _connectDuration;
	unsigned _connectionType;
	unsigned _currentNatType;
	unsigned _dataRate;
	unsigned _diagnosticPingAvg;
	unsigned _diagnosticPingMax;
	unsigned _diagnosticPingMin;
	unsigned _diagnosticPingPacketLoss;
	unsigned _endedReason;
	unsigned _frontCameraCaptureDuration;
	unsigned _gameKitError;
	int _genericError;
	int _gksError;
	int _gksReturnCode;
	NSString* _guid;
	unsigned _invitationServiceError;
	unsigned _isAudioInterrupted;
	unsigned _isCallUpgrade;
	unsigned _isInitiator;
	unsigned _isNetworkActive;
	unsigned _isNetworkEnabled;
	unsigned _isNetworkReachable;
	unsigned _isVideo;
	unsigned _isVideoInterrupted;
	int _linkQuality;
	unsigned _localNetworkConnection;
	unsigned _messageDeliveryError;
	unsigned _networkCheckResult;
	unsigned _onLockScreen;
	unsigned _registrationError;
	unsigned _relayConnectDuration;
	unsigned _relayError;
	unsigned _remoteNatType;
	unsigned _remoteNetworkConnection;
	unsigned _usesRelay;
	unsigned _viceroyError;
	SCD_Struct_AW17 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndedReason; 
@property (assign,nonatomic) unsigned endedReason;                             //@synthesize endedReason=_endedReason - In the implementation block
@property (assign,nonatomic) BOOL hasGenericError; 
@property (assign,nonatomic) int genericError;                                 //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) BOOL hasViceroyError; 
@property (assign,nonatomic) unsigned viceroyError;                            //@synthesize viceroyError=_viceroyError - In the implementation block
@property (assign,nonatomic) BOOL hasGameKitError; 
@property (assign,nonatomic) unsigned gameKitError;                            //@synthesize gameKitError=_gameKitError - In the implementation block
@property (assign,nonatomic) BOOL hasMessageDeliveryError; 
@property (assign,nonatomic) unsigned messageDeliveryError;                    //@synthesize messageDeliveryError=_messageDeliveryError - In the implementation block
@property (assign,nonatomic) BOOL hasConferenceMiscError; 
@property (assign,nonatomic) unsigned conferenceMiscError;                     //@synthesize conferenceMiscError=_conferenceMiscError - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationError; 
@property (assign,nonatomic) unsigned registrationError;                       //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) BOOL hasRelayError; 
@property (assign,nonatomic) unsigned relayError;                              //@synthesize relayError=_relayError - In the implementation block
@property (assign,nonatomic) BOOL hasInvitationServiceError; 
@property (assign,nonatomic) unsigned invitationServiceError;                  //@synthesize invitationServiceError=_invitationServiceError - In the implementation block
@property (assign,nonatomic) BOOL hasCallDuration; 
@property (assign,nonatomic) unsigned callDuration;                            //@synthesize callDuration=_callDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDiagnosticPingMin; 
@property (assign,nonatomic) unsigned diagnosticPingMin;                       //@synthesize diagnosticPingMin=_diagnosticPingMin - In the implementation block
@property (assign,nonatomic) BOOL hasDiagnosticPingAvg; 
@property (assign,nonatomic) unsigned diagnosticPingAvg;                       //@synthesize diagnosticPingAvg=_diagnosticPingAvg - In the implementation block
@property (assign,nonatomic) BOOL hasDiagnosticPingMax; 
@property (assign,nonatomic) unsigned diagnosticPingMax;                       //@synthesize diagnosticPingMax=_diagnosticPingMax - In the implementation block
@property (assign,nonatomic) BOOL hasDiagnosticPingPacketLoss; 
@property (assign,nonatomic) unsigned diagnosticPingPacketLoss;                //@synthesize diagnosticPingPacketLoss=_diagnosticPingPacketLoss - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkEnabled; 
@property (assign,nonatomic) unsigned isNetworkEnabled;                        //@synthesize isNetworkEnabled=_isNetworkEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkActive; 
@property (assign,nonatomic) unsigned isNetworkActive;                         //@synthesize isNetworkActive=_isNetworkActive - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkReachable; 
@property (assign,nonatomic) unsigned isNetworkReachable;                      //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkCheckResult; 
@property (assign,nonatomic) unsigned networkCheckResult;                      //@synthesize networkCheckResult=_networkCheckResult - In the implementation block
@property (assign,nonatomic) BOOL hasFrontCameraCaptureDuration; 
@property (assign,nonatomic) unsigned frontCameraCaptureDuration;              //@synthesize frontCameraCaptureDuration=_frontCameraCaptureDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBackCameraCaptureDuration; 
@property (assign,nonatomic) unsigned backCameraCaptureDuration;               //@synthesize backCameraCaptureDuration=_backCameraCaptureDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDataRate; 
@property (assign,nonatomic) unsigned dataRate;                                //@synthesize dataRate=_dataRate - In the implementation block
@property (assign,nonatomic) BOOL hasGksError; 
@property (assign,nonatomic) int gksError;                                     //@synthesize gksError=_gksError - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) unsigned connectDuration;                         //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNetworkConnection; 
@property (assign,nonatomic) unsigned remoteNetworkConnection;                 //@synthesize remoteNetworkConnection=_remoteNetworkConnection - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNetworkConnection; 
@property (assign,nonatomic) unsigned localNetworkConnection;                  //@synthesize localNetworkConnection=_localNetworkConnection - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                          //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasUsesRelay; 
@property (assign,nonatomic) unsigned usesRelay;                               //@synthesize usesRelay=_usesRelay - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentNatType; 
@property (assign,nonatomic) unsigned currentNatType;                          //@synthesize currentNatType=_currentNatType - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNatType; 
@property (assign,nonatomic) unsigned remoteNatType;                           //@synthesize remoteNatType=_remoteNatType - In the implementation block
@property (assign,nonatomic) BOOL hasRelayConnectDuration; 
@property (assign,nonatomic) unsigned relayConnectDuration;                    //@synthesize relayConnectDuration=_relayConnectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsInitiator; 
@property (assign,nonatomic) unsigned isInitiator;                             //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideoInterrupted; 
@property (assign,nonatomic) unsigned isVideoInterrupted;                      //@synthesize isVideoInterrupted=_isVideoInterrupted - In the implementation block
@property (assign,nonatomic) BOOL hasIsAudioInterrupted; 
@property (assign,nonatomic) unsigned isAudioInterrupted;                      //@synthesize isAudioInterrupted=_isAudioInterrupted - In the implementation block
@property (assign,nonatomic) BOOL hasIsCallUpgrade; 
@property (assign,nonatomic) unsigned isCallUpgrade;                           //@synthesize isCallUpgrade=_isCallUpgrade - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                  //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasGksReturnCode; 
@property (assign,nonatomic) int gksReturnCode;                                //@synthesize gksReturnCode=_gksReturnCode - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                                 //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL hasOnLockScreen; 
@property (assign,nonatomic) unsigned onLockScreen;                            //@synthesize onLockScreen=_onLockScreen - In the implementation block
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasIsVideo;
-(void)setOnLockScreen:(unsigned)arg1 ;
-(void)setHasOnLockScreen:(BOOL)arg1 ;
-(BOOL)hasOnLockScreen;
-(unsigned)onLockScreen;
-(void)setConnectDuration:(unsigned)arg1 ;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(BOOL)hasConnectDuration;
-(void)setRemoteNetworkConnection:(unsigned)arg1 ;
-(void)setHasRemoteNetworkConnection:(BOOL)arg1 ;
-(BOOL)hasRemoteNetworkConnection;
-(void)setLocalNetworkConnection:(unsigned)arg1 ;
-(void)setHasLocalNetworkConnection:(BOOL)arg1 ;
-(BOOL)hasLocalNetworkConnection;
-(void)setUsesRelay:(unsigned)arg1 ;
-(void)setHasUsesRelay:(BOOL)arg1 ;
-(BOOL)hasUsesRelay;
-(void)setCurrentNatType:(unsigned)arg1 ;
-(void)setHasCurrentNatType:(BOOL)arg1 ;
-(BOOL)hasCurrentNatType;
-(void)setRemoteNatType:(unsigned)arg1 ;
-(void)setHasRemoteNatType:(BOOL)arg1 ;
-(BOOL)hasRemoteNatType;
-(void)setRelayConnectDuration:(unsigned)arg1 ;
-(void)setHasRelayConnectDuration:(BOOL)arg1 ;
-(BOOL)hasRelayConnectDuration;
-(unsigned)connectDuration;
-(unsigned)remoteNetworkConnection;
-(unsigned)localNetworkConnection;
-(unsigned)usesRelay;
-(unsigned)currentNatType;
-(unsigned)remoteNatType;
-(unsigned)relayConnectDuration;
-(void)setEndedReason:(unsigned)arg1 ;
-(void)setHasEndedReason:(BOOL)arg1 ;
-(BOOL)hasEndedReason;
-(void)setGenericError:(int)arg1 ;
-(void)setHasGenericError:(BOOL)arg1 ;
-(BOOL)hasGenericError;
-(void)setViceroyError:(unsigned)arg1 ;
-(void)setHasViceroyError:(BOOL)arg1 ;
-(BOOL)hasViceroyError;
-(void)setGameKitError:(unsigned)arg1 ;
-(void)setHasGameKitError:(BOOL)arg1 ;
-(BOOL)hasGameKitError;
-(void)setMessageDeliveryError:(unsigned)arg1 ;
-(void)setHasMessageDeliveryError:(BOOL)arg1 ;
-(BOOL)hasMessageDeliveryError;
-(void)setConferenceMiscError:(unsigned)arg1 ;
-(void)setHasConferenceMiscError:(BOOL)arg1 ;
-(BOOL)hasConferenceMiscError;
-(void)setRegistrationError:(unsigned)arg1 ;
-(void)setHasRegistrationError:(BOOL)arg1 ;
-(BOOL)hasRegistrationError;
-(void)setRelayError:(unsigned)arg1 ;
-(void)setHasRelayError:(BOOL)arg1 ;
-(BOOL)hasRelayError;
-(void)setInvitationServiceError:(unsigned)arg1 ;
-(void)setHasInvitationServiceError:(BOOL)arg1 ;
-(BOOL)hasInvitationServiceError;
-(void)setCallDuration:(unsigned)arg1 ;
-(void)setHasCallDuration:(BOOL)arg1 ;
-(BOOL)hasCallDuration;
-(void)setDiagnosticPingMin:(unsigned)arg1 ;
-(void)setHasDiagnosticPingMin:(BOOL)arg1 ;
-(BOOL)hasDiagnosticPingMin;
-(void)setDiagnosticPingAvg:(unsigned)arg1 ;
-(void)setHasDiagnosticPingAvg:(BOOL)arg1 ;
-(BOOL)hasDiagnosticPingAvg;
-(void)setDiagnosticPingMax:(unsigned)arg1 ;
-(void)setHasDiagnosticPingMax:(BOOL)arg1 ;
-(BOOL)hasDiagnosticPingMax;
-(void)setDiagnosticPingPacketLoss:(unsigned)arg1 ;
-(void)setHasDiagnosticPingPacketLoss:(BOOL)arg1 ;
-(BOOL)hasDiagnosticPingPacketLoss;
-(void)setIsNetworkEnabled:(unsigned)arg1 ;
-(void)setHasIsNetworkEnabled:(BOOL)arg1 ;
-(BOOL)hasIsNetworkEnabled;
-(void)setIsNetworkActive:(unsigned)arg1 ;
-(void)setHasIsNetworkActive:(BOOL)arg1 ;
-(BOOL)hasIsNetworkActive;
-(void)setIsNetworkReachable:(unsigned)arg1 ;
-(void)setHasIsNetworkReachable:(BOOL)arg1 ;
-(BOOL)hasIsNetworkReachable;
-(void)setNetworkCheckResult:(unsigned)arg1 ;
-(void)setHasNetworkCheckResult:(BOOL)arg1 ;
-(BOOL)hasNetworkCheckResult;
-(void)setFrontCameraCaptureDuration:(unsigned)arg1 ;
-(void)setHasFrontCameraCaptureDuration:(BOOL)arg1 ;
-(BOOL)hasFrontCameraCaptureDuration;
-(void)setBackCameraCaptureDuration:(unsigned)arg1 ;
-(void)setHasBackCameraCaptureDuration:(BOOL)arg1 ;
-(BOOL)hasBackCameraCaptureDuration;
-(void)setDataRate:(unsigned)arg1 ;
-(void)setHasDataRate:(BOOL)arg1 ;
-(BOOL)hasDataRate;
-(void)setGksError:(int)arg1 ;
-(void)setHasGksError:(BOOL)arg1 ;
-(BOOL)hasGksError;
-(void)setIsInitiator:(unsigned)arg1 ;
-(void)setHasIsInitiator:(BOOL)arg1 ;
-(BOOL)hasIsInitiator;
-(void)setIsVideoInterrupted:(unsigned)arg1 ;
-(void)setHasIsVideoInterrupted:(BOOL)arg1 ;
-(BOOL)hasIsVideoInterrupted;
-(void)setIsAudioInterrupted:(unsigned)arg1 ;
-(void)setHasIsAudioInterrupted:(BOOL)arg1 ;
-(BOOL)hasIsAudioInterrupted;
-(void)setIsCallUpgrade:(unsigned)arg1 ;
-(void)setHasIsCallUpgrade:(BOOL)arg1 ;
-(BOOL)hasIsCallUpgrade;
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(void)setGksReturnCode:(int)arg1 ;
-(void)setHasGksReturnCode:(BOOL)arg1 ;
-(BOOL)hasGksReturnCode;
-(unsigned)endedReason;
-(int)genericError;
-(unsigned)viceroyError;
-(unsigned)gameKitError;
-(unsigned)messageDeliveryError;
-(unsigned)conferenceMiscError;
-(unsigned)registrationError;
-(unsigned)relayError;
-(unsigned)invitationServiceError;
-(unsigned)diagnosticPingMin;
-(unsigned)diagnosticPingAvg;
-(unsigned)diagnosticPingMax;
-(unsigned)diagnosticPingPacketLoss;
-(unsigned)isNetworkEnabled;
-(unsigned)isNetworkActive;
-(unsigned)networkCheckResult;
-(unsigned)frontCameraCaptureDuration;
-(unsigned)backCameraCaptureDuration;
-(unsigned)dataRate;
-(int)gksError;
-(unsigned)isInitiator;
-(unsigned)isVideoInterrupted;
-(unsigned)isAudioInterrupted;
-(unsigned)isCallUpgrade;
-(int)linkQuality;
-(int)gksReturnCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(unsigned)isNetworkReachable;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)hasGuid;
-(NSString *)guid;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)isVideo;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)callDuration;
@end

