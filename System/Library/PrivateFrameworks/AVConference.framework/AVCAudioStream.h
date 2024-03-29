/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCMediaStreamDelegate.h>

@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, VCAudioStream, AVCMediaStreamConfig, NSDictionary, NSObject, NSString;

@interface AVCAudioStream : NSObject <VCMediaStreamDelegate> {

	AVConferenceXPCClient* _connection;
	id _delegate;
	VCAudioStream* _opaqueStream;
	AVCMediaStreamConfig* _configuration;
	NSDictionary* _capabilities;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSDictionary * capabilities;                                                              //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) AVCMediaStreamConfig * configuration;                                                     //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) long long direction; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec; 
@property (assign,nonatomic) float volume; 
@property (assign,getter=isInputFrequencyMeteringEnabled,nonatomic) BOOL inputFrequencyMeteringEnabled; 
@property (assign,getter=isOutputFrequencyMeteringEnabled,nonatomic) BOOL outputFrequencyMeteringEnabled; 
@property (assign,nonatomic) id<AVCAudioStreamDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)capabilities;
-(void)setVolume:(float)arg1 ;
-(void)refreshLoggingParameters;
-(BOOL)isInputFrequencyMeteringEnabled;
-(void)setInputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isOutputFrequencyMeteringEnabled;
-(void)setOutputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(BOOL)arg3 ;
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2 ;
-(id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 isOriginator:(BOOL)arg4 callID:(id)arg5 error:(id*)arg6 ;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(void)vcMediaStream:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(void)didInterruptionBeginHandler;
-(void)didInterruptionEndHandler;
-(id)initWithLocalAddress:(id)arg1 error:(id*)arg2 ;
-(id)initWithLocalAddress:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(id)initWithLocalAddress:(id)arg1 isOriginator:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithLocalAddress:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id*)arg4 ;
-(id)initWithNetworkSockets:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id*)arg4 ;
-(id)initWithIDSDestination:(id)arg1 isOriginator:(BOOL)arg2 error:(id*)arg3 ;
-(void)sendDTMFDigitString:(id)arg1 withVolume:(unsigned char)arg2 duration:(unsigned short)arg3 interval:(unsigned short)arg4 ;
-(void)startContinuousDTMFWithDigit:(char)arg1 volume:(unsigned char)arg2 ;
-(void)stopContinuousDTMF;
-(NSDictionary *)capabilities;
-(BOOL)configure:(id)arg1 error:(id*)arg2 ;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(BOOL)isRTCPEnabled;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(BOOL)isRTPTimeOutEnabled;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(BOOL)isRTCPTimeOutEnabled;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(double)rtpTimeOutIntervalSec;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(double)rtcpTimeOutIntervalSec;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(double)rtcpSendIntervalSec;
-(void)startSynchronizeWithStream:(long long)arg1 ;
-(id)initWithIDSDestination:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id*)arg4 ;
-(id)initWithNetworkSockets:(id)arg1 isOriginator:(BOOL)arg2 error:(id*)arg3 ;
-(float)volume;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AVCAudioStreamDelegate>)arg1 ;
-(id<AVCAudioStreamDelegate>)delegate;
-(void)stop;
-(AVCMediaStreamConfig *)configuration;
-(void)setConfiguration:(AVCMediaStreamConfig *)arg1 ;
-(void)start;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(void)resume;
-(void)pause;
@end

