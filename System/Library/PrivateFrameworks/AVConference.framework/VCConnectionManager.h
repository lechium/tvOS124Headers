/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCConnectionHealthMonitorDelegate.h>

@protocol VCConnectionProtocol, OS_dispatch_queue;
@class NSObject, VCConnectionHealthMonitor, VCStatsRecorder, NSString;

@interface VCConnectionManager : NSObject <VCConnectionHealthMonitorDelegate> {

	unsigned _callID;
	int _relayServerProvider;
	opaque_pthread_rwlock_t _stateRWlock;
	id<VCConnectionProtocol> _primaryConnection;
	id<VCConnectionProtocol> _secondaryConnection;
	id<VCConnectionProtocol> _connectionForDuplication;
	id<VCConnectionProtocol> _lastPrimaryConnectionInUse;
	opaqueRTCReportingRef _reportingAgent;
	BOOL _isInitialConnectionEstablished;
	int _mediaExcessiveCellularTxBytes;
	int _mediaExcessiveCellularRxBytes;
	int _signalingExcessiveCellularTxBytes;
	int _signalingExcessiveCellularRxBytes;
	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	int _duplicationType;
	/*function pointer*/void* _duplicationCallback;
	double _lastConnectionUnstableTime;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	void* _duplicationContext;
	BOOL _duplicationPending;
	BOOL _enableDuplication;
	BOOL _supportDuplication;
	int _preferredLocalInterfaceForDuplication;
	int _preferredRemoteInterfaceForDuplication;
	BOOL _isPrimaryLocalUsingCell;
	VCConnectionHealthMonitor* _connectionHealthMonitor;
	SCD_Struct_VC65 _localConnectionStats;
	SCD_Struct_VC65 _remoteConnectionStats;
	double _remoteNoRemotePacketInterval;
	BOOL _isAudioOnly;
	int _localiRATLinkTypeSuggestion;
	int _remoteiRATLinkTypeSuggestion;
	BOOL _isRemoteDuplicating;
	double _lastiRATCheckTime;
	double _localLinkTypeSuggestionChangeTime;
	double _iRATNotificationRequestTime;
	int _localWRMLinkTypeFromDefaults;
	BOOL _allowRequestForWRMNotification;
	BOOL _forceHandoverToCell;
	BOOL _disableRemoteInterfaceInference;
	/*function pointer*/void* _wrmStatusUpdateCallback;
	/*function pointer*/void* _wrmRequestNotificationCallback;
	void* _wrmCallbacksContext;
	VCStatsRecorder* _statsRecorder;

}

@property (nonatomic,retain) id<VCConnectionProtocol> lastPrimaryConnectionInUse;                  //@synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> connectionForDuplication;                    //@synthesize connectionForDuplication=_connectionForDuplication - In the implementation block
@property (assign) unsigned callID;                                                                //@synthesize callID=_callID - In the implementation block
@property (assign) int relayServerProvider;                                                        //@synthesize relayServerProvider=_relayServerProvider - In the implementation block
@property (assign,setter=setDuplicationEnabled:,nonatomic) BOOL isDuplicationEnabled;              //@synthesize enableDuplication=_enableDuplication - In the implementation block
@property (assign) int preferredLocalInterfaceForDuplication;                                      //@synthesize preferredLocalInterfaceForDuplication=_preferredLocalInterfaceForDuplication - In the implementation block
@property (assign) int preferredRemoteInterfaceForDuplication;                                     //@synthesize preferredRemoteInterfaceForDuplication=_preferredRemoteInterfaceForDuplication - In the implementation block
@property (readonly) BOOL isLocalCellularInterfaceUsed; 
@property (assign) id<VCConnectionManagerDelegate> delegate; 
@property (assign) BOOL isAudioOnly;                                                               //@synthesize isAudioOnly=_isAudioOnly - In the implementation block
@property (assign) BOOL supportDuplication;                                                        //@synthesize supportDuplication=_supportDuplication - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> primaryConnection;                           //@synthesize primaryConnection=_primaryConnection - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> secondaryConnection;                         //@synthesize secondaryConnection=_secondaryConnection - In the implementation block
@property (readonly) int connectionCount; 
@property (readonly) int mediaExcessiveCellularTxBytes;                                            //@synthesize mediaExcessiveCellularTxBytes=_mediaExcessiveCellularTxBytes - In the implementation block
@property (readonly) int mediaExcessiveCellularRxBytes;                                            //@synthesize mediaExcessiveCellularRxBytes=_mediaExcessiveCellularRxBytes - In the implementation block
@property (readonly) int signalingExcessiveCellularTxBytes;                                        //@synthesize signalingExcessiveCellularTxBytes=_signalingExcessiveCellularTxBytes - In the implementation block
@property (readonly) int signalingExcessiveCellularRxBytes;                                        //@synthesize signalingExcessiveCellularRxBytes=_signalingExcessiveCellularRxBytes - In the implementation block
@property (readonly) double remoteNoRemotePacketInterval;                                          //@synthesize remoteNoRemotePacketInterval=_remoteNoRemotePacketInterval - In the implementation block
@property (nonatomic,readonly) VCStatsRecorder * statsRecorder;                                    //@synthesize statsRecorder=_statsRecorder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallID:(unsigned)arg1 ;
-(unsigned)callID;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)setIsAudioOnly:(BOOL)arg1 ;
-(BOOL)isAudioOnly;
-(BOOL)isBetterConnection:(id)arg1 asPrimary:(BOOL)arg2 ;
-(id<VCConnectionProtocol>)primaryConnection;
-(id<VCConnectionProtocol>)secondaryConnection;
-(id<VCConnectionProtocol>)lastPrimaryConnectionInUse;
-(void)useConnectionAsPrimary:(id)arg1 ;
-(void)setSecondaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(int)getNumberOfConnectionsInternal;
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)setDuplicationEnabledInternal:(BOOL)arg1 ;
-(void)reportConnection:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(void)setPrimaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(void)promoteSecondaryConnectionToPrimary:(id)arg1 ;
-(BOOL)isOptimalConnection:(id)arg1 asPrimary:(BOOL)arg2 interfaceMask:(int)arg3 ;
-(int)addConnection:(id)arg1 ;
-(int)removeConnection:(id)arg1 ;
-(void)updateCellularMTU:(int)arg1 ;
-(void)updateCellularTech:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(void)sourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isSourceOnCellular:(BOOL*)arg2 isSourceIPv6:(BOOL*)arg3 ;
-(BOOL)shouldAcceptDataFromSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(id)copyConnectionWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isPrimary:(BOOL*)arg2 ;
-(void)updateSessionStats:(unsigned short)arg1 ;
-(void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(BOOL)arg4 isOutgoing:(BOOL)arg5 ;
-(void)synchronizeParticipantGenerationCounter:(unsigned char)arg1 ;
-(unsigned)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2 ;
-(unsigned)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2 ;
-(BOOL)shouldHandoverWhenUpdateWRMDuplication:(int)arg1 ;
-(void)setupConnectionHealthMonitor;
-(void)setSupportDuplication:(BOOL)arg1 ;
-(void)setRelayServerProvider:(int)arg1 ;
-(id)connectionForQualityInternal:(int)arg1 ;
-(const char*)reasonStringWithDuplicationType:(int)arg1 ;
-(BOOL)isInterfaceOnCellularForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(BOOL)updateWRMDuplicationForLocaliRATSuggestion;
-(void)updateWRMDuplicationForRemoteiRATSuggestion;
-(id)connectionForQuality:(int)arg1 ;
-(void)updateCellularExcessiveBytesWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytes:(int)arg2 isMediaData:(BOOL)arg3 isOutgoing:(BOOL)arg4 ;
-(void)updateWRMDuplicationForHandover;
-(id<VCConnectionProtocol>)connectionForDuplication;
-(void)checkiRATSuggestionDefaultValue;
-(void)requestWRMNotificationAtTime:(double)arg1 ;
-(int)processWRMNotification:(SCD_Struct_VC66*)arg1 ;
-(void)setDuplicationEnabled:(BOOL)arg1 ;
-(void)checkiRATSuggestion;
-(void)updateTransmittedExcessiveBytes:(int)arg1 isMediaData:(BOOL)arg2 isIPv6:(BOOL)arg3 ;
-(void)updateReceivedExcessiveBytes:(int)arg1 isMediaData:(BOOL)arg2 isIPv6:(BOOL)arg3 ;
-(void)setLastPrimaryConnectionInUse:(id<VCConnectionProtocol>)arg1 ;
-(void)setPreferredLocalInterfaceForDuplication:(int)arg1 ;
-(void)updateConnectionStatsWithIndicatorNoPackets:(SCD_Struct_VC65*)arg1 ;
-(void)updateConnectionStatsWithIndicatorNone:(SCD_Struct_VC65*)arg1 ;
-(void)updateConnectionStatsWithIndicatorPrimaryImproved:(SCD_Struct_VC65*)arg1 ;
-(void)updateConnectionHealthWithIndicator:(BOOL)arg1 ;
-(void)connectionHealthDidUpdate:(int)arg1 isLocalConnection:(BOOL)arg2 ;
-(void)setDuplicationCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(void)setConnectionPause:(BOOL)arg1 isLocalConnection:(BOOL)arg2 ;
-(int)setWRMUpdateCallback:(/*function pointer*/void*)arg1 requestNotificationCallback:(/*function pointer*/void*)arg2 withContext:(void*)arg3 ;
-(int)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(BOOL)arg2 ;
-(int)getConnectionTypeForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(int)getCellularTechForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(int)getCellularMTUForActiveConnectionWithQuality:(int)arg1 ;
-(BOOL)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg1 ;
-(BOOL)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg1 ;
-(void)updateTransmittedPacketsAndBytesWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytesSent:(int)arg2 isMediaData:(BOOL)arg3 shouldCountPacket:(BOOL)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(BOOL)arg6 ;
-(void)updateReceivedPacketsAndBytesWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytesReceived:(int)arg2 isMediaData:(BOOL)arg3 shouldCountPacket:(BOOL)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(BOOL)arg6 ;
-(tagVCSourceDestinationInfo*)createSourceDestinationInfoList;
-(BOOL)isLocalCellularInterfaceUsed;
-(int)setConnectionHealthOnControlInfo:(void*)arg1 ;
-(int)processConnectionHealthFromControlInfo:(void*)arg1 ;
-(void)setDuplicationFlag:(BOOL)arg1 withPreferredLocalLinkTypeForDuplication:(int)arg2 ;
-(int)relayServerProvider;
-(BOOL)isDuplicationEnabled;
-(int)preferredLocalInterfaceForDuplication;
-(int)preferredRemoteInterfaceForDuplication;
-(void)setPreferredRemoteInterfaceForDuplication:(int)arg1 ;
-(void)setConnectionForDuplication:(id<VCConnectionProtocol>)arg1 ;
-(BOOL)supportDuplication;
-(int)mediaExcessiveCellularTxBytes;
-(int)mediaExcessiveCellularRxBytes;
-(int)signalingExcessiveCellularTxBytes;
-(int)signalingExcessiveCellularRxBytes;
-(double)remoteNoRemotePacketInterval;
-(VCStatsRecorder *)statsRecorder;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<VCConnectionManagerDelegate>)arg1 ;
-(id<VCConnectionManagerDelegate>)delegate;
-(int)connectionCount;
@end

