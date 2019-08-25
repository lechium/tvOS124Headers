/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSPConnectionInfoSource.h>

@protocol OS_dispatch_data;
@class NPTunnel, NSPAppRule, NSDate, NPFlowProperties, NetworkServiceProxyRequestStats, NSObject, NSData;

@interface NPTunnelFlow : NSObject <NSPConnectionInfoSource> {

	long long _fallbackReason;
	BOOL _useCustomHostnameValidation;
	BOOL _isDirectConnectionViable;
	BOOL _fallbackDisabled;
	BOOL _hasTunnel;
	BOOL _shouldComposeIntialData;
	BOOL _enableDirectRace;
	int _tunnelError;
	unsigned long long _identifier;
	NPTunnel* _tunnel;
	NSPAppRule* _appRule;
	long long _state;
	void* _window;
	unsigned long long _hashKey;
	NSDate* _startDate;
	NSDate* _firstTxByteTimestamp;
	NPFlowProperties* _extraFlowProperties;
	NetworkServiceProxyRequestStats* _stats;
	unsigned long long _initialBytesLeftOver;
	NSObject*<OS_dispatch_data> _savedData;
	long long _latestByteDate;
	void* _fallbackTimer;
	void* _telemetryTimer;
	double _fallbackDelay;

}

@property (retain) NSObject*<OS_dispatch_data> savedData;                  //@synthesize savedData=_savedData - In the implementation block
@property (assign) long long latestByteDate;                               //@synthesize latestByteDate=_latestByteDate - In the implementation block
@property (assign) void* fallbackTimer;                                    //@synthesize fallbackTimer=_fallbackTimer - In the implementation block
@property (assign) void* telemetryTimer;                                   //@synthesize telemetryTimer=_telemetryTimer - In the implementation block
@property (assign) double fallbackDelay;                                   //@synthesize fallbackDelay=_fallbackDelay - In the implementation block
@property (assign) unsigned long long identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NPTunnel * tunnel;                                    //@synthesize tunnel=_tunnel - In the implementation block
@property (readonly) NSPAppRule * appRule;                                 //@synthesize appRule=_appRule - In the implementation block
@property (retain) NSData * appData; 
@property (assign) long long state;                                        //@synthesize state=_state - In the implementation block
@property (assign) void* window;                                           //@synthesize window=_window - In the implementation block
@property (assign) BOOL useCustomHostnameValidation;                       //@synthesize useCustomHostnameValidation=_useCustomHostnameValidation - In the implementation block
@property (assign) BOOL isDirectConnectionViable;                          //@synthesize isDirectConnectionViable=_isDirectConnectionViable - In the implementation block
@property (readonly) unsigned long long hashKey;                           //@synthesize hashKey=_hashKey - In the implementation block
@property (assign) BOOL fallbackDisabled;                                  //@synthesize fallbackDisabled=_fallbackDisabled - In the implementation block
@property (assign) BOOL hasTunnel;                                         //@synthesize hasTunnel=_hasTunnel - In the implementation block
@property (assign) long long fallbackReason; 
@property (assign) int tunnelError;                                        //@synthesize tunnelError=_tunnelError - In the implementation block
@property (readonly) NSDate * startDate;                                   //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * firstTxByteTimestamp;                          //@synthesize firstTxByteTimestamp=_firstTxByteTimestamp - In the implementation block
@property (readonly) NPFlowProperties * extraFlowProperties;               //@synthesize extraFlowProperties=_extraFlowProperties - In the implementation block
@property (readonly) BOOL isClientFlowClosed; 
@property (readonly) NetworkServiceProxyRequestStats * stats;              //@synthesize stats=_stats - In the implementation block
@property (readonly) BOOL isBestEffort; 
@property (assign) BOOL shouldComposeIntialData;                           //@synthesize shouldComposeIntialData=_shouldComposeIntialData - In the implementation block
@property (assign) BOOL enableDirectRace;                                  //@synthesize enableDirectRace=_enableDirectRace - In the implementation block
@property (assign) unsigned long long initialBytesLeftOver;                //@synthesize initialBytesLeftOver=_initialBytesLeftOver - In the implementation block
-(void)setTunnelError:(int)arg1 ;
-(int)tunnelError;
-(NetworkServiceProxyRequestStats *)stats;
-(NSDate *)startDate;
-(void)reportMetrics;
-(NSDate *)firstTxByteTimestamp;
-(void)handleAppData:(id)arg1 ;
-(BOOL)isDirectConnectionViable;
-(unsigned long long)hashKey;
-(void)setIsDirectConnectionViable:(BOOL)arg1 ;
-(void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2 ;
-(void)closeFromDirectConnectionWithError:(int)arg1 ;
-(void)readDataFromClient;
-(BOOL)enableDirectRace;
-(BOOL)fallbackDisabled;
-(NSPAppRule *)appRule;
-(void)setFallbackDisabled:(BOOL)arg1 ;
-(void)startDirectConnection;
-(void)stopDirectConnection;
-(BOOL)shouldSendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2 ;
-(void)closeFromTunnel;
-(NPTunnel *)tunnel;
-(void)handleTunnelCanHandleMoreData;
-(void)reportTelemetry:(id)arg1 withService:(id)arg2 url:(id)arg3 ;
-(void)createTelemetryDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleTunnelConnected;
-(void)cleanupLosingConnection:(BOOL)arg1 ;
-(void)copyConnectionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFirstTxByteTimestamp:(NSDate *)arg1 ;
-(long long)fallbackReason;
-(double)fallbackDelay;
-(void)setFallbackReason:(long long)arg1 ;
-(id)initWithTunnel:(id)arg1 appRule:(id)arg2 hashKey:(unsigned long long)arg3 extraFlowProperties:(id)arg4 ;
-(void)closeClientFlowWithError:(int)arg1 ;
-(BOOL)isClientFlowClosed;
-(NPFlowProperties *)extraFlowProperties;
-(void)setInitialBytesLeftOver:(unsigned long long)arg1 ;
-(BOOL)isBestEffort;
-(BOOL)hasTunnel;
-(id)copyConnectionInfo;
-(NSObject*<OS_dispatch_data>)savedData;
-(void)setSavedData:(NSObject*<OS_dispatch_data>)arg1 ;
-(void*)fallbackTimer;
-(void)setFallbackTimer:(void*)arg1 ;
-(void)setLatestByteDate:(long long)arg1 ;
-(long long)latestByteDate;
-(void)setFallbackDelay:(double)arg1 ;
-(void)setHasTunnel:(BOOL)arg1 ;
-(void*)telemetryTimer;
-(void)setTelemetryTimer:(void*)arg1 ;
-(void)processConnectionInfo:(id)arg1 ;
-(id)createFallbackConnectionInfoWithFallbackReason:(long long)arg1 ;
-(id)combineStateInfo:(id)arg1 andConnectionInfo:(id)arg2 ;
-(void)increaseWindowSize:(unsigned long long)arg1 ;
-(void)handleTunnelDisconnected;
-(void)handleTunnelReadyForData;
-(BOOL)useCustomHostnameValidation;
-(void)setUseCustomHostnameValidation:(BOOL)arg1 ;
-(BOOL)shouldComposeIntialData;
-(void)setShouldComposeIntialData:(BOOL)arg1 ;
-(void)setEnableDirectRace:(BOOL)arg1 ;
-(unsigned long long)initialBytesLeftOver;
-(void)closeWithError:(int)arg1 ;
-(NSData *)appData;
-(void)setAppData:(NSData *)arg1 ;
-(void)dealloc;
-(unsigned long long)identifier;
-(void*)window;
-(long long)state;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setWindow:(void*)arg1 ;
@end

