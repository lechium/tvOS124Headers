/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, C2MPError;

@interface C2MPNetworkEvent : PBCodable <NSCopying> {

	unsigned long long _networkRequestBodyBytesSent;
	unsigned long long _networkResponseBodyBytesReceived;
	unsigned long long _networkStatusCode;
	unsigned long long _reportFrequency;
	unsigned long long _reportFrequencyBase;
	unsigned long long _timestampC2Init;
	unsigned long long _timestampC2Now;
	unsigned long long _timestampC2Start;
	unsigned long long _timestampDnsEnd;
	unsigned long long _timestampDnsStart;
	unsigned long long _timestampRequestEnd;
	unsigned long long _timestampRequestStart;
	unsigned long long _timestampResponseEnd;
	unsigned long long _timestampResponseStart;
	unsigned long long _timestampSslStart;
	unsigned long long _timestampTcpEnd;
	unsigned long long _timestampTcpStart;
	unsigned long long _triggers;
	NSString* _networkConnectionUuid;
	C2MPError* _networkFatalError;
	NSString* _networkHostname;
	NSString* _networkInterfaceIdentifier;
	unsigned _networkPreviousAttemptCount;
	NSString* _networkProtocolName;
	NSString* _networkRemoteAddresssAndPort;
	unsigned _networkRequestHeaderSize;
	NSString* _networkRequestUri;
	unsigned _networkResponseHeaderSize;
	NSString* _networkTaskDescription;
	NSString* _optionsQualityOfService;
	NSString* _optionsSourceApplicationBundleIdentifier;
	NSString* _optionsSourceApplicationSecondaryIdentifier;
	unsigned _optionsTimeoutIntervalForRequest;
	unsigned _optionsTimeoutIntervalForResource;
	BOOL _networkConnectionReused;
	BOOL _optionsAllowExpensiveAccess;
	BOOL _optionsAllowPowerNapScheduling;
	BOOL _optionsAppleIdContext;
	BOOL _optionsOutOfProcess;
	BOOL _optionsOutOfProcessForceDiscretionary;
	BOOL _optionsTlsPinningRequired;
	SCD_Struct_C22 _has;

}

@property (assign,nonatomic) BOOL hasTriggers; 
@property (assign,nonatomic) unsigned long long triggers;                                         //@synthesize triggers=_triggers - In the implementation block
@property (assign,nonatomic) BOOL hasReportFrequency; 
@property (assign,nonatomic) unsigned long long reportFrequency;                                  //@synthesize reportFrequency=_reportFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasReportFrequencyBase; 
@property (assign,nonatomic) unsigned long long reportFrequencyBase;                              //@synthesize reportFrequencyBase=_reportFrequencyBase - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkTaskDescription; 
@property (nonatomic,retain) NSString * networkTaskDescription;                                   //@synthesize networkTaskDescription=_networkTaskDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkHostname; 
@property (nonatomic,retain) NSString * networkHostname;                                          //@synthesize networkHostname=_networkHostname - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkRemoteAddresssAndPort; 
@property (nonatomic,retain) NSString * networkRemoteAddresssAndPort;                             //@synthesize networkRemoteAddresssAndPort=_networkRemoteAddresssAndPort - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkConnectionUuid; 
@property (nonatomic,retain) NSString * networkConnectionUuid;                                    //@synthesize networkConnectionUuid=_networkConnectionUuid - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkConnectionReused; 
@property (assign,nonatomic) BOOL networkConnectionReused;                                        //@synthesize networkConnectionReused=_networkConnectionReused - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkInterfaceIdentifier; 
@property (nonatomic,retain) NSString * networkInterfaceIdentifier;                               //@synthesize networkInterfaceIdentifier=_networkInterfaceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkProtocolName; 
@property (nonatomic,retain) NSString * networkProtocolName;                                      //@synthesize networkProtocolName=_networkProtocolName - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkRequestHeaderSize; 
@property (assign,nonatomic) unsigned networkRequestHeaderSize;                                   //@synthesize networkRequestHeaderSize=_networkRequestHeaderSize - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkRequestBodyBytesSent; 
@property (assign,nonatomic) unsigned long long networkRequestBodyBytesSent;                      //@synthesize networkRequestBodyBytesSent=_networkRequestBodyBytesSent - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkResponseHeaderSize; 
@property (assign,nonatomic) unsigned networkResponseHeaderSize;                                  //@synthesize networkResponseHeaderSize=_networkResponseHeaderSize - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkResponseBodyBytesReceived; 
@property (assign,nonatomic) unsigned long long networkResponseBodyBytesReceived;                 //@synthesize networkResponseBodyBytesReceived=_networkResponseBodyBytesReceived - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkPreviousAttemptCount; 
@property (assign,nonatomic) unsigned networkPreviousAttemptCount;                                //@synthesize networkPreviousAttemptCount=_networkPreviousAttemptCount - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkFatalError; 
@property (nonatomic,retain) C2MPError * networkFatalError;                                       //@synthesize networkFatalError=_networkFatalError - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkStatusCode; 
@property (assign,nonatomic) unsigned long long networkStatusCode;                                //@synthesize networkStatusCode=_networkStatusCode - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkRequestUri; 
@property (nonatomic,retain) NSString * networkRequestUri;                                        //@synthesize networkRequestUri=_networkRequestUri - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampC2Init; 
@property (assign,nonatomic) unsigned long long timestampC2Init;                                  //@synthesize timestampC2Init=_timestampC2Init - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampC2Start; 
@property (assign,nonatomic) unsigned long long timestampC2Start;                                 //@synthesize timestampC2Start=_timestampC2Start - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampC2Now; 
@property (assign,nonatomic) unsigned long long timestampC2Now;                                   //@synthesize timestampC2Now=_timestampC2Now - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampDnsStart; 
@property (assign,nonatomic) unsigned long long timestampDnsStart;                                //@synthesize timestampDnsStart=_timestampDnsStart - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampDnsEnd; 
@property (assign,nonatomic) unsigned long long timestampDnsEnd;                                  //@synthesize timestampDnsEnd=_timestampDnsEnd - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampTcpStart; 
@property (assign,nonatomic) unsigned long long timestampTcpStart;                                //@synthesize timestampTcpStart=_timestampTcpStart - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampTcpEnd; 
@property (assign,nonatomic) unsigned long long timestampTcpEnd;                                  //@synthesize timestampTcpEnd=_timestampTcpEnd - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampSslStart; 
@property (assign,nonatomic) unsigned long long timestampSslStart;                                //@synthesize timestampSslStart=_timestampSslStart - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampRequestStart; 
@property (assign,nonatomic) unsigned long long timestampRequestStart;                            //@synthesize timestampRequestStart=_timestampRequestStart - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampRequestEnd; 
@property (assign,nonatomic) unsigned long long timestampRequestEnd;                              //@synthesize timestampRequestEnd=_timestampRequestEnd - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampResponseStart; 
@property (assign,nonatomic) unsigned long long timestampResponseStart;                           //@synthesize timestampResponseStart=_timestampResponseStart - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampResponseEnd; 
@property (assign,nonatomic) unsigned long long timestampResponseEnd;                             //@synthesize timestampResponseEnd=_timestampResponseEnd - In the implementation block
@property (nonatomic,readonly) BOOL hasOptionsQualityOfService; 
@property (nonatomic,retain) NSString * optionsQualityOfService;                                  //@synthesize optionsQualityOfService=_optionsQualityOfService - In the implementation block
@property (assign,nonatomic) BOOL hasOptionsOutOfProcess; 
@property (assign,nonatomic) BOOL optionsOutOfProcess;                                            //@synthesize optionsOutOfProcess=_optionsOutOfProcess - In the implementation block
@property (assign,nonatomic) BOOL hasOptionsOutOfProcessForceDiscretionary; 
@property (assign,nonatomic) BOOL optionsOutOfProcessForceDiscretionary;                          //@synthesize optionsOutOfProcessForceDiscretionary=_optionsOutOfProcessForceDiscretionary - In the implementation block
@property (assign,nonatomic) BOOL hasOptionsAllowExpensiveAccess; 
@property (assign,nonatomic) BOOL optionsAllowExpensiveAccess;                                    //@synthesize optionsAllowExpensiveAccess=_optionsAllowExpensiveAccess - In the implementation block
@property (assign,nonatomic) BOOL hasOptionsAllowPowerNapScheduling; 
@property (assign,nonatomic) BOOL optionsAllowPowerNapScheduling;                                 //@synthesize optionsAllowPowerNapScheduling=_optionsAllowPowerNapScheduling - In the implementation block
@property (assign,nonatomic) BOOL hasOptionsTimeoutIntervalForRequest; 
@property (assign,nonatomic) unsigned optionsTimeoutIntervalForRequest;                           //@synthesize optionsTimeoutIntervalForRequest=_optionsTimeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) BOOL hasOptionsTimeoutIntervalForResource; 
@property (assign,nonatomic) unsigned optionsTimeoutIntervalForResource;                          //@synthesize optionsTimeoutIntervalForResource=_optionsTimeoutIntervalForResource - In the implementation block
@property (nonatomic,readonly) BOOL hasOptionsSourceApplicationBundleIdentifier; 
@property (nonatomic,retain) NSString * optionsSourceApplicationBundleIdentifier;                 //@synthesize optionsSourceApplicationBundleIdentifier=_optionsSourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasOptionsSourceApplicationSecondaryIdentifier; 
@property (nonatomic,retain) NSString * optionsSourceApplicationSecondaryIdentifier;              //@synthesize optionsSourceApplicationSecondaryIdentifier=_optionsSourceApplicationSecondaryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasOptionsAppleIdContext; 
@property (assign,nonatomic) BOOL optionsAppleIdContext;                                          //@synthesize optionsAppleIdContext=_optionsAppleIdContext - In the implementation block
@property (assign,nonatomic) BOOL hasOptionsTlsPinningRequired; 
@property (assign,nonatomic) BOOL optionsTlsPinningRequired;                                      //@synthesize optionsTlsPinningRequired=_optionsTlsPinningRequired - In the implementation block
-(void)setNetworkProtocolName:(NSString *)arg1 ;
-(BOOL)hasNetworkProtocolName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)networkProtocolName;
-(BOOL)hasTriggers;
-(void)setReportFrequency:(unsigned long long)arg1 ;
-(void)setReportFrequencyBase:(unsigned long long)arg1 ;
-(unsigned long long)triggers;
-(void)setTriggers:(unsigned long long)arg1 ;
-(unsigned long long)reportFrequency;
-(unsigned long long)reportFrequencyBase;
-(void)setNetworkTaskDescription:(NSString *)arg1 ;
-(void)setNetworkHostname:(NSString *)arg1 ;
-(void)setNetworkRemoteAddresssAndPort:(NSString *)arg1 ;
-(void)setNetworkConnectionUuid:(NSString *)arg1 ;
-(void)setNetworkInterfaceIdentifier:(NSString *)arg1 ;
-(void)setNetworkFatalError:(C2MPError *)arg1 ;
-(void)setNetworkRequestUri:(NSString *)arg1 ;
-(void)setOptionsQualityOfService:(NSString *)arg1 ;
-(void)setOptionsSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setOptionsSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setHasTriggers:(BOOL)arg1 ;
-(void)setHasReportFrequency:(BOOL)arg1 ;
-(BOOL)hasReportFrequency;
-(void)setHasReportFrequencyBase:(BOOL)arg1 ;
-(BOOL)hasReportFrequencyBase;
-(BOOL)hasNetworkTaskDescription;
-(BOOL)hasNetworkHostname;
-(BOOL)hasNetworkRemoteAddresssAndPort;
-(BOOL)hasNetworkConnectionUuid;
-(void)setNetworkConnectionReused:(BOOL)arg1 ;
-(void)setHasNetworkConnectionReused:(BOOL)arg1 ;
-(BOOL)hasNetworkConnectionReused;
-(BOOL)hasNetworkInterfaceIdentifier;
-(void)setNetworkRequestHeaderSize:(unsigned)arg1 ;
-(void)setHasNetworkRequestHeaderSize:(BOOL)arg1 ;
-(BOOL)hasNetworkRequestHeaderSize;
-(void)setNetworkRequestBodyBytesSent:(unsigned long long)arg1 ;
-(void)setHasNetworkRequestBodyBytesSent:(BOOL)arg1 ;
-(BOOL)hasNetworkRequestBodyBytesSent;
-(void)setNetworkResponseHeaderSize:(unsigned)arg1 ;
-(void)setHasNetworkResponseHeaderSize:(BOOL)arg1 ;
-(BOOL)hasNetworkResponseHeaderSize;
-(void)setNetworkResponseBodyBytesReceived:(unsigned long long)arg1 ;
-(void)setHasNetworkResponseBodyBytesReceived:(BOOL)arg1 ;
-(BOOL)hasNetworkResponseBodyBytesReceived;
-(void)setNetworkPreviousAttemptCount:(unsigned)arg1 ;
-(void)setHasNetworkPreviousAttemptCount:(BOOL)arg1 ;
-(BOOL)hasNetworkPreviousAttemptCount;
-(BOOL)hasNetworkFatalError;
-(void)setNetworkStatusCode:(unsigned long long)arg1 ;
-(void)setHasNetworkStatusCode:(BOOL)arg1 ;
-(BOOL)hasNetworkStatusCode;
-(BOOL)hasNetworkRequestUri;
-(void)setTimestampC2Init:(unsigned long long)arg1 ;
-(void)setHasTimestampC2Init:(BOOL)arg1 ;
-(BOOL)hasTimestampC2Init;
-(void)setTimestampC2Start:(unsigned long long)arg1 ;
-(void)setHasTimestampC2Start:(BOOL)arg1 ;
-(BOOL)hasTimestampC2Start;
-(void)setTimestampC2Now:(unsigned long long)arg1 ;
-(void)setHasTimestampC2Now:(BOOL)arg1 ;
-(BOOL)hasTimestampC2Now;
-(void)setTimestampDnsStart:(unsigned long long)arg1 ;
-(void)setHasTimestampDnsStart:(BOOL)arg1 ;
-(BOOL)hasTimestampDnsStart;
-(void)setTimestampDnsEnd:(unsigned long long)arg1 ;
-(void)setHasTimestampDnsEnd:(BOOL)arg1 ;
-(BOOL)hasTimestampDnsEnd;
-(void)setTimestampTcpStart:(unsigned long long)arg1 ;
-(void)setHasTimestampTcpStart:(BOOL)arg1 ;
-(BOOL)hasTimestampTcpStart;
-(void)setTimestampTcpEnd:(unsigned long long)arg1 ;
-(void)setHasTimestampTcpEnd:(BOOL)arg1 ;
-(BOOL)hasTimestampTcpEnd;
-(void)setTimestampSslStart:(unsigned long long)arg1 ;
-(void)setHasTimestampSslStart:(BOOL)arg1 ;
-(BOOL)hasTimestampSslStart;
-(void)setTimestampRequestStart:(unsigned long long)arg1 ;
-(void)setHasTimestampRequestStart:(BOOL)arg1 ;
-(BOOL)hasTimestampRequestStart;
-(void)setTimestampRequestEnd:(unsigned long long)arg1 ;
-(void)setHasTimestampRequestEnd:(BOOL)arg1 ;
-(BOOL)hasTimestampRequestEnd;
-(void)setTimestampResponseStart:(unsigned long long)arg1 ;
-(void)setHasTimestampResponseStart:(BOOL)arg1 ;
-(BOOL)hasTimestampResponseStart;
-(void)setTimestampResponseEnd:(unsigned long long)arg1 ;
-(void)setHasTimestampResponseEnd:(BOOL)arg1 ;
-(BOOL)hasTimestampResponseEnd;
-(BOOL)hasOptionsQualityOfService;
-(void)setOptionsOutOfProcess:(BOOL)arg1 ;
-(void)setHasOptionsOutOfProcess:(BOOL)arg1 ;
-(BOOL)hasOptionsOutOfProcess;
-(void)setOptionsOutOfProcessForceDiscretionary:(BOOL)arg1 ;
-(void)setHasOptionsOutOfProcessForceDiscretionary:(BOOL)arg1 ;
-(BOOL)hasOptionsOutOfProcessForceDiscretionary;
-(void)setOptionsAllowExpensiveAccess:(BOOL)arg1 ;
-(void)setHasOptionsAllowExpensiveAccess:(BOOL)arg1 ;
-(BOOL)hasOptionsAllowExpensiveAccess;
-(void)setOptionsAllowPowerNapScheduling:(BOOL)arg1 ;
-(void)setHasOptionsAllowPowerNapScheduling:(BOOL)arg1 ;
-(BOOL)hasOptionsAllowPowerNapScheduling;
-(void)setOptionsTimeoutIntervalForRequest:(unsigned)arg1 ;
-(void)setHasOptionsTimeoutIntervalForRequest:(BOOL)arg1 ;
-(BOOL)hasOptionsTimeoutIntervalForRequest;
-(void)setOptionsTimeoutIntervalForResource:(unsigned)arg1 ;
-(void)setHasOptionsTimeoutIntervalForResource:(BOOL)arg1 ;
-(BOOL)hasOptionsTimeoutIntervalForResource;
-(BOOL)hasOptionsSourceApplicationBundleIdentifier;
-(BOOL)hasOptionsSourceApplicationSecondaryIdentifier;
-(void)setOptionsAppleIdContext:(BOOL)arg1 ;
-(void)setHasOptionsAppleIdContext:(BOOL)arg1 ;
-(BOOL)hasOptionsAppleIdContext;
-(void)setOptionsTlsPinningRequired:(BOOL)arg1 ;
-(void)setHasOptionsTlsPinningRequired:(BOOL)arg1 ;
-(BOOL)hasOptionsTlsPinningRequired;
-(NSString *)networkTaskDescription;
-(NSString *)networkHostname;
-(NSString *)networkRemoteAddresssAndPort;
-(NSString *)networkConnectionUuid;
-(BOOL)networkConnectionReused;
-(NSString *)networkInterfaceIdentifier;
-(unsigned)networkRequestHeaderSize;
-(unsigned long long)networkRequestBodyBytesSent;
-(unsigned)networkResponseHeaderSize;
-(unsigned long long)networkResponseBodyBytesReceived;
-(unsigned)networkPreviousAttemptCount;
-(C2MPError *)networkFatalError;
-(unsigned long long)networkStatusCode;
-(NSString *)networkRequestUri;
-(unsigned long long)timestampC2Init;
-(unsigned long long)timestampC2Start;
-(unsigned long long)timestampC2Now;
-(unsigned long long)timestampDnsStart;
-(unsigned long long)timestampDnsEnd;
-(unsigned long long)timestampTcpStart;
-(unsigned long long)timestampTcpEnd;
-(unsigned long long)timestampSslStart;
-(unsigned long long)timestampRequestStart;
-(unsigned long long)timestampRequestEnd;
-(unsigned long long)timestampResponseStart;
-(unsigned long long)timestampResponseEnd;
-(NSString *)optionsQualityOfService;
-(BOOL)optionsOutOfProcess;
-(BOOL)optionsOutOfProcessForceDiscretionary;
-(BOOL)optionsAllowExpensiveAccess;
-(BOOL)optionsAllowPowerNapScheduling;
-(unsigned)optionsTimeoutIntervalForRequest;
-(unsigned)optionsTimeoutIntervalForResource;
-(NSString *)optionsSourceApplicationBundleIdentifier;
-(NSString *)optionsSourceApplicationSecondaryIdentifier;
-(BOOL)optionsAppleIdContext;
-(BOOL)optionsTlsPinningRequired;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

