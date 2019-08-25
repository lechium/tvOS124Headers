/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>
#import <libobjc.A.dylib/VCMediaStreamProtocol.h>
#import <libobjc.A.dylib/RTCPReportProvider.h>
#import <libobjc.A.dylib/VCSecurityEventHandler.h>
#import <libobjc.A.dylib/VCMediaStreamTransportDelegate.h>
#import <libobjc.A.dylib/VCConnectionChangedHandler.h>

@protocol OS_dispatch_queue, VCMediaStreamDelegate, VCMomentsCollectorDelegate, OS_dispatch_source;
@class NSObject, VCDatagramChannelIDS, NSString, VCWeakObjectHolder, AVCStatisticsCollector, AVCBasebandCongestionDetector, NSMutableArray, VCMasterKeyIndex, VCMediaStreamTransport, VCMediaStreamConfig;

@interface VCMediaStream : VCObject <VCMediaStreamProtocol, RTCPReportProvider, VCSecurityEventHandler, VCMediaStreamTransportDelegate, VCConnectionChangedHandler> {

	NSObject*<OS_dispatch_queue> _delegateNotificationQueue;
	opaque_pthread_mutex_t _streamLock;
	int _state;
	VCDatagramChannelIDS* _datagramChannel;
	NSString* _idsDestination;
	id<VCMediaStreamDelegate> _delegate;
	id<VCMomentsCollectorDelegate> _momentsCollectorDelegate;
	NSString* _callID;
	BOOL _isSRTPInitialized;
	BOOL _useRandomTS;
	double _rtpTimeoutEnabledTime;
	double _rtcpTimeoutEnabledTime;
	double _decryptionTimeoutEnabledTime;
	NSObject*<OS_dispatch_source> _rtcpSendHeartbeat;
	NSObject*<OS_dispatch_source> _timeoutHeartbeat;
	double _lastRTPTimeoutReportTime;
	double _lastRTCPTimeoutReportTime;
	double _lastDecryptionTimeoutReportTime;
	double _decryptionErrorStartTime;
	unsigned _localSSRC;
	unsigned _transportSessionID;
	VCWeakObjectHolder* _notificationDelegate;
	VCWeakObjectHolder* _rtcpReportProvider;
	AVCStatisticsCollector* _statisticsCollector;
	AVCBasebandCongestionDetector* _basebandCongestionDetector;
	int _operatingMode;
	VCMediaStreamTransportSetupInfo _transportSetupInfo;
	NSMutableArray* _transportArray;
	/*function pointer*/void* _vcMediaCallback;
	tagVCMediaQueueRef _mediaQueue;
	VCMasterKeyIndex* _lastReceivedMKI;

}

@property (nonatomic,readonly) int state;                                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) id<VCMediaStreamDelegate> delegate; 
@property (assign,nonatomic) id<VCMomentsCollectorDelegate> momentsCollectorDelegate;                 //@synthesize momentsCollectorDelegate=_momentsCollectorDelegate - In the implementation block
@property (nonatomic,readonly) unsigned localSSRC;                                                    //@synthesize localSSRC=_localSSRC - In the implementation block
@property (assign,nonatomic) id<VCMediaStreamNotification> notificationDelegate; 
@property (assign,nonatomic) id<RTCPReportProvider> rtcpReportProvider; 
@property (nonatomic,readonly) double rtcpHeartbeatLeeway; 
@property (nonatomic,readonly) double lastReceivedRTPPacketTime; 
@property (nonatomic,readonly) double lastReceivedRTCPPacketTime; 
@property (nonatomic,retain) AVCStatisticsCollector * statisticsCollector;                            //@synthesize statisticsCollector=_statisticsCollector - In the implementation block
@property (nonatomic,retain) AVCBasebandCongestionDetector * basebandCongestionDetector;              //@synthesize basebandCongestionDetector=_basebandCongestionDetector - In the implementation block
@property (assign,nonatomic) int operatingMode;                                                       //@synthesize operatingMode=_operatingMode - In the implementation block
@property (assign,nonatomic) tagVCMediaQueueRef mediaQueue;                                           //@synthesize mediaQueue=_mediaQueue - In the implementation block
@property (nonatomic,readonly) VCMediaStreamTransport * defaultTransport; 
@property (nonatomic,readonly) VCMediaStreamConfig * defaultStreamConfig; 
@property (nonatomic,readonly) BOOL isSendingMedia; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSameSRTPKey:(id)arg1 newKey:(id)arg2 ;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(AVCBasebandCongestionDetector *)basebandCongestionDetector;
-(void)setBasebandCongestionDetector:(AVCBasebandCongestionDetector *)arg1 ;
-(AVCStatisticsCollector *)statisticsCollector;
-(void)setStatisticsCollector:(AVCStatisticsCollector *)arg1 ;
-(id)supportedPayloads;
-(VCMediaStreamConfig *)defaultStreamConfig;
-(id)createTransport;
-(double)lastReceivedRTPPacketTime;
-(double)lastReceivedRTCPPacketTime;
-(void)onCallIDChanged;
-(BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)onStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onStopWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onPauseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onResumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onSendRTCPPacket;
-(void)onRTPTimeout;
-(void)onRTCPTimeout;
-(double)rtcpHeartbeatLeeway;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(void)setPause:(BOOL)arg1 ;
-(id<VCMomentsCollectorDelegate>)momentsCollectorDelegate;
-(char*)streamStateToString:(int)arg1 ;
-(id)initWithTransportSessionID:(unsigned)arg1 ;
-(id)initWithTransportSessionID:(unsigned)arg1 localSSRC:(unsigned)arg2 ;
-(BOOL)generateReceptionReportList:(RTCP_RECEPTION_REPORT*)arg1 reportCount:(char*)arg2 ;
-(void)setStreamDirection:(long long)arg1 ;
-(BOOL)isRTPTimeoutEnabled;
-(BOOL)isRTCPTimeoutEnabled;
-(BOOL)isSendingMedia;
-(void)collectRxChannelMetrics:(SCD_Struct_VC101*)arg1 ;
-(void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2 ;
-(void)collectRxChannelMetrics:(SCD_Struct_VC101*)arg1 interval:(float)arg2 ;
-(void)collectTxChannelMetrics:(SCD_Struct_VC101*)arg1 ;
-(id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id*)arg3 ;
-(BOOL)setStreamConfig:(id)arg1 withError:(id*)arg2 ;
-(void)setMomentsCollectorDelegate:(id<VCMomentsCollectorDelegate>)arg1 ;
-(id)setupRTPForIDS;
-(void)checkForDecryptionTimeout;
-(void)setMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(void)setRtcpReportProvider:(id<RTCPReportProvider>)arg1 ;
-(tagVCMediaQueueRef)mediaQueue;
-(unsigned)localSSRC;
-(void)setNotificationDelegate:(id<VCMediaStreamNotification>)arg1 ;
-(unsigned)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1 ;
-(unsigned)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1 ;
-(BOOL)handleEncryptionInfoChange:(id)arg1 ;
-(void)resetDecryptionTimeout;
-(id)setupRTPWithIDSDestination:(id)arg1 error:(id*)arg2 ;
-(id)setupRTPWithIPInfo:(id)arg1 error:(id*)arg2 ;
-(void)setupMediaStream;
-(void)decryptionStatusChanged:(BOOL)arg1 ;
-(void)startRTCPSendHeartbeat;
-(void)startTimeoutHeartbeat;
-(void)stopRTCPSendHeartbeat;
-(void)stopTimeoutHeartbeat;
-(id)setupRTPWithSockets:(id)arg1 error:(id*)arg2 ;
-(id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id*)arg2 ;
-(long long)streamDirection;
-(BOOL)isDecryptionTimeoutEnabled;
-(BOOL)isRTCPSendEnabled;
-(void)processRTPTimeoutSettingChange;
-(void)processRTCPTimeoutSettingChange;
-(void)processDecryptionTimeoutSettingChange;
-(void)resetRTCPSendHeartbeatTimer:(unsigned long long)arg1 ;
-(void)rtcpSendHeartbeat;
-(void)resetTimeoutHeartbeatTimer:(unsigned long long)arg1 ;
-(void)checkDecryptionTimeoutAgainstTime:(double)arg1 decryptionErrorStartTime:(double)arg2 ;
-(void)checkRTPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2 ;
-(double)computeNextTimoutWithEnabledTime:(double)arg1 timeoutInterval:(double)arg2 lastReceivedPacketTime:(double)arg3 currentTime:(double)arg4 lastTimeoutReportTime:(double)arg5 ;
-(void)checkRTCPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2 ;
-(void)resetTimeoutHeartbeatWithRTPTimeout:(double)arg1 rtcpTimeout:(double)arg2 decryptionTimeout:(double)arg3 currentTime:(double)arg4 ;
-(void)timeoutHeartbeat;
-(void)setDecryptionTimeOutEnabled:(BOOL)arg1 ;
-(void)setDecryptionTimeOutInterval:(double)arg1 ;
-(void)vcMediaStreamTransport:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(id<RTCPReportProvider>)rtcpReportProvider;
-(id<VCMediaStreamNotification>)notificationDelegate;
-(VCMediaStreamTransport *)defaultTransport;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(void)setRtcpTimeOutInterval:(double)arg1 ;
-(void)setRtpTimeOutInterval:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<VCMediaStreamDelegate>)arg1 ;
-(int)state;
-(id<VCMediaStreamDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)lock;
-(void)unlock;
@end

