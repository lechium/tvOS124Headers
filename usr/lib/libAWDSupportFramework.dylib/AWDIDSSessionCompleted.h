/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSSessionCompleted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _clientType;
	unsigned _destinationType;
	unsigned _durationOfSession;
	unsigned _durationToConnect;
	unsigned _endedReason;
	NSString* _guid;
	unsigned _isCellularInterfaceDisallowed;
	unsigned _isInitiator;
	unsigned _isLegacySessionType;
	unsigned _isNetworkActive;
	unsigned _isNetworkEnabled;
	unsigned _isNetworkReachable;
	unsigned _isQREnabled;
	unsigned _isUsingQRDirectly;
	unsigned _isWifiInterfaceDisallowed;
	unsigned _isWithDefaultPairedDevice;
	unsigned _linkProtocol;
	unsigned _linkType;
	NSString* _serviceName;
	unsigned _sessionProtocolVersionNumber;
	unsigned _transportType;
	SCD_Struct_AW18 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                     //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasSessionProtocolVersionNumber; 
@property (assign,nonatomic) unsigned sessionProtocolVersionNumber;               //@synthesize sessionProtocolVersionNumber=_sessionProtocolVersionNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                              //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) BOOL hasClientType; 
@property (assign,nonatomic) int clientType;                                      //@synthesize clientType=_clientType - In the implementation block
@property (assign,nonatomic) BOOL hasIsQREnabled; 
@property (assign,nonatomic) unsigned isQREnabled;                                //@synthesize isQREnabled=_isQREnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsUsingQRDirectly; 
@property (assign,nonatomic) unsigned isUsingQRDirectly;                          //@synthesize isUsingQRDirectly=_isUsingQRDirectly - In the implementation block
@property (assign,nonatomic) BOOL hasIsInitiator; 
@property (assign,nonatomic) unsigned isInitiator;                                //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign,nonatomic) BOOL hasIsLegacySessionType; 
@property (assign,nonatomic) unsigned isLegacySessionType;                        //@synthesize isLegacySessionType=_isLegacySessionType - In the implementation block
@property (assign,nonatomic) BOOL hasIsWithDefaultPairedDevice; 
@property (assign,nonatomic) unsigned isWithDefaultPairedDevice;                  //@synthesize isWithDefaultPairedDevice=_isWithDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                              //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkProtocol; 
@property (assign,nonatomic) unsigned linkProtocol;                               //@synthesize linkProtocol=_linkProtocol - In the implementation block
@property (assign,nonatomic) BOOL hasEndedReason; 
@property (assign,nonatomic) unsigned endedReason;                                //@synthesize endedReason=_endedReason - In the implementation block
@property (assign,nonatomic) BOOL hasDurationOfSession; 
@property (assign,nonatomic) unsigned durationOfSession;                          //@synthesize durationOfSession=_durationOfSession - In the implementation block
@property (assign,nonatomic) BOOL hasDurationToConnect; 
@property (assign,nonatomic) unsigned durationToConnect;                          //@synthesize durationToConnect=_durationToConnect - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkEnabled; 
@property (assign,nonatomic) unsigned isNetworkEnabled;                           //@synthesize isNetworkEnabled=_isNetworkEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkActive; 
@property (assign,nonatomic) unsigned isNetworkActive;                            //@synthesize isNetworkActive=_isNetworkActive - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkReachable; 
@property (assign,nonatomic) unsigned isNetworkReachable;                         //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) BOOL hasIsWifiInterfaceDisallowed; 
@property (assign,nonatomic) unsigned isWifiInterfaceDisallowed;                  //@synthesize isWifiInterfaceDisallowed=_isWifiInterfaceDisallowed - In the implementation block
@property (assign,nonatomic) BOOL hasIsCellularInterfaceDisallowed; 
@property (assign,nonatomic) unsigned isCellularInterfaceDisallowed;              //@synthesize isCellularInterfaceDisallowed=_isCellularInterfaceDisallowed - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned linkType;                                   //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasDestinationType; 
@property (assign,nonatomic) unsigned destinationType;                            //@synthesize destinationType=_destinationType - In the implementation block
-(void)setEndedReason:(unsigned)arg1 ;
-(void)setHasEndedReason:(BOOL)arg1 ;
-(BOOL)hasEndedReason;
-(void)setIsNetworkEnabled:(unsigned)arg1 ;
-(void)setHasIsNetworkEnabled:(BOOL)arg1 ;
-(BOOL)hasIsNetworkEnabled;
-(void)setIsNetworkActive:(unsigned)arg1 ;
-(void)setHasIsNetworkActive:(BOOL)arg1 ;
-(BOOL)hasIsNetworkActive;
-(void)setIsNetworkReachable:(unsigned)arg1 ;
-(void)setHasIsNetworkReachable:(BOOL)arg1 ;
-(BOOL)hasIsNetworkReachable;
-(void)setIsInitiator:(unsigned)arg1 ;
-(void)setHasIsInitiator:(BOOL)arg1 ;
-(BOOL)hasIsInitiator;
-(unsigned)endedReason;
-(unsigned)isNetworkEnabled;
-(unsigned)isNetworkActive;
-(unsigned)isInitiator;
-(void)setHasLinkType:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(BOOL)hasServiceName;
-(void)setSessionProtocolVersionNumber:(unsigned)arg1 ;
-(void)setHasSessionProtocolVersionNumber:(BOOL)arg1 ;
-(BOOL)hasSessionProtocolVersionNumber;
-(void)setHasClientType:(BOOL)arg1 ;
-(BOOL)hasClientType;
-(void)setIsQREnabled:(unsigned)arg1 ;
-(void)setHasIsQREnabled:(BOOL)arg1 ;
-(BOOL)hasIsQREnabled;
-(void)setIsUsingQRDirectly:(unsigned)arg1 ;
-(void)setHasIsUsingQRDirectly:(BOOL)arg1 ;
-(BOOL)hasIsUsingQRDirectly;
-(void)setIsLegacySessionType:(unsigned)arg1 ;
-(void)setHasIsLegacySessionType:(BOOL)arg1 ;
-(BOOL)hasIsLegacySessionType;
-(void)setIsWithDefaultPairedDevice:(unsigned)arg1 ;
-(void)setHasIsWithDefaultPairedDevice:(BOOL)arg1 ;
-(BOOL)hasIsWithDefaultPairedDevice;
-(void)setLinkProtocol:(unsigned)arg1 ;
-(void)setHasLinkProtocol:(BOOL)arg1 ;
-(BOOL)hasLinkProtocol;
-(void)setDurationOfSession:(unsigned)arg1 ;
-(void)setHasDurationOfSession:(BOOL)arg1 ;
-(BOOL)hasDurationOfSession;
-(void)setDurationToConnect:(unsigned)arg1 ;
-(void)setHasDurationToConnect:(BOOL)arg1 ;
-(BOOL)hasDurationToConnect;
-(void)setIsWifiInterfaceDisallowed:(unsigned)arg1 ;
-(void)setHasIsWifiInterfaceDisallowed:(BOOL)arg1 ;
-(BOOL)hasIsWifiInterfaceDisallowed;
-(void)setIsCellularInterfaceDisallowed:(unsigned)arg1 ;
-(void)setHasIsCellularInterfaceDisallowed:(BOOL)arg1 ;
-(BOOL)hasIsCellularInterfaceDisallowed;
-(unsigned)sessionProtocolVersionNumber;
-(unsigned)isQREnabled;
-(unsigned)isUsingQRDirectly;
-(unsigned)isLegacySessionType;
-(unsigned)isWithDefaultPairedDevice;
-(unsigned)linkProtocol;
-(unsigned)durationOfSession;
-(unsigned)durationToConnect;
-(unsigned)isWifiInterfaceDisallowed;
-(unsigned)isCellularInterfaceDisallowed;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setDestinationType:(unsigned)arg1 ;
-(unsigned)transportType;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(unsigned)destinationType;
-(unsigned)isNetworkReachable;
-(void)setHasDestinationType:(BOOL)arg1 ;
-(BOOL)hasDestinationType;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)hasGuid;
-(NSString *)guid;
-(void)setClientType:(int)arg1 ;
-(int)clientType;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setLinkType:(unsigned)arg1 ;
-(unsigned)linkType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)serviceName;
-(id)dictionaryRepresentation;
@end

