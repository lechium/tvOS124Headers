/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCAdaptiveLearningDelegate;
@class VCHistogram, NSString, VCVideoFECStatsHolder;

@interface CallSegment : NSObject {

	VCHistogram* _RTT;
	VCHistogram* _JBQSize;
	VCHistogram* _JBTarget;
	VCHistogram* _JBUnclippedTarget;
	VCHistogram* _PLR;
	VCHistogram* _VPLR;
	VCHistogram* _latency;
	VCHistogram* _TBR;
	VCHistogram* _RBR;
	VCHistogram* _SBR;
	VCHistogram* _framerate;
	VCHistogram* _audioErasures;
	VCHistogram* _speechErasures;
	VCHistogram* _videoQualityScore;
	VCHistogram* _poorConnection;
	VCHistogram* _videoResolution;
	VCHistogram* _videoEncodingBitrate;
	VCHistogram* _videoJitter;
	VCHistogram* _REDErasureCompensationRate;
	VCHistogram* _REDReceivedCount;
	VCHistogram* _REDDiscardedCount;
	VCHistogram* _REDNumPayloadsUsed;
	VCHistogram* _REDMaxDelay;
	VCHistogram* _videoStall;
	VCHistogram* _mediaStall;
	int _duration;
	int _adjustedDuration;
	double _totalVideoStallTime;
	double _totalMediaStallTime;
	unsigned _mediaStallCount;
	double _maxVideoStallInterval;
	double _totalAudioStallTime;
	double _maxAudioStallInterval;
	double _maxNoRemotePacketsInterval;
	double _totalNoRemotePacketsTime;
	double _poorConnectionTotalLength;
	double _poorConnectionMaxLength;
	double _averageTargetBitrate;
	double _averageSendBitrate;
	double _averageReceiveBitrate;
	double _averageTotalVideoSendBitrate;
	double _averageVideoMediaSendBitrate;
	double _averageVideoHeaderSendBitrate;
	double _averageVideoFECSendBitrate;
	double _averageTotalVideoRecvBitrate;
	double _averageAudioErasuresRate;
	double _averageSpeechErasuresRate;
	double _speechErasureTotalTime;
	double _averageBWE;
	unsigned _minBWE;
	unsigned _maxBWE;
	double _averageRTT;
	unsigned _poorConnectionFrequency;
	unsigned _BBQueueTooLargeCount;
	unsigned _BBRateTooLowCount;
	unsigned long long _audioFlushPacketCount;
	unsigned long long _audioSentPacketCount;
	unsigned long long _videoFlushPacketCount;
	unsigned long long _videoSentPacketCount;
	unsigned _callMode;
	unsigned _callDeviceRole;
	unsigned _callTransportType;
	unsigned _audioFlushPercent;
	unsigned _videoFlushPercent;
	unsigned _errorCode;
	unsigned _significantOOOPacketCount;
	unsigned _totalVideoPacketsExpected;
	unsigned _totalFIRDemandCounter;
	unsigned _totalFIRCounter;
	unsigned _videoFrameDecodedButSkippedCounter;
	unsigned _videoFrameImcompleteNextTSCounter;
	unsigned _videoFrameTotalIncompleteCounter;
	unsigned _decodedVideoFrameEnqueueCounter;
	unsigned _encodedVideoFrameCounter;
	unsigned _captureVideoFrameCounter;
	NSString* _relayServer;
	int _relayType;
	NSString* _accessToken;
	VCVideoFECStatsHolder* _videoFECStatsLevel1;
	VCVideoFECStatsHolder* _videoFECStatsLevel2;
	VCVideoFECStatsHolder* _videoFECStatsLevel3;
	int _interval;
	int _frequency;
	NSString* _segmentName;
	NSString* _previousSegmentName;
	id<VCAdaptiveLearningDelegate> _delegate;

}

@property (readonly) VCHistogram * RTT;                                      //@synthesize RTT=_RTT - In the implementation block
@property (readonly) VCHistogram * JBQSize;                                  //@synthesize JBQSize=_JBQSize - In the implementation block
@property (readonly) VCHistogram * JBTarget;                                 //@synthesize JBTarget=_JBTarget - In the implementation block
@property (readonly) VCHistogram * JBUnclippedTarget;                        //@synthesize JBUnclippedTarget=_JBUnclippedTarget - In the implementation block
@property (readonly) VCHistogram * PLR;                                      //@synthesize PLR=_PLR - In the implementation block
@property (readonly) VCHistogram * VPLR;                                     //@synthesize VPLR=_VPLR - In the implementation block
@property (readonly) VCHistogram * latency;                                  //@synthesize latency=_latency - In the implementation block
@property (readonly) VCHistogram * TBR;                                      //@synthesize TBR=_TBR - In the implementation block
@property (readonly) VCHistogram * RBR;                                      //@synthesize RBR=_RBR - In the implementation block
@property (setter=BR,readonly) VCHistogram * SBR;                            //@synthesize SBR=_SBR - In the implementation block
@property (readonly) VCHistogram * framerate;                                //@synthesize framerate=_framerate - In the implementation block
@property (readonly) VCHistogram * audioErasures;                            //@synthesize audioErasures=_audioErasures - In the implementation block
@property (readonly) VCHistogram * speechErasures;                           //@synthesize speechErasures=_speechErasures - In the implementation block
@property (readonly) VCHistogram * mediaStall;                               //@synthesize mediaStall=_mediaStall - In the implementation block
@property (readonly) VCHistogram * videoQualityScore;                        //@synthesize videoQualityScore=_videoQualityScore - In the implementation block
@property (readonly) VCHistogram * poorConnection;                           //@synthesize poorConnection=_poorConnection - In the implementation block
@property (readonly) VCHistogram * videoResolution;                          //@synthesize videoResolution=_videoResolution - In the implementation block
@property (readonly) VCHistogram * videoEncodingBitrate;                     //@synthesize videoEncodingBitrate=_videoEncodingBitrate - In the implementation block
@property (readonly) VCHistogram * videoJitter;                              //@synthesize videoJitter=_videoJitter - In the implementation block
@property (readonly) VCHistogram * REDErasureCompensationRate;               //@synthesize REDErasureCompensationRate=_REDErasureCompensationRate - In the implementation block
@property (readonly) VCHistogram * REDReceivedCount;                         //@synthesize REDReceivedCount=_REDReceivedCount - In the implementation block
@property (readonly) VCHistogram * REDDiscardedCount;                        //@synthesize REDDiscardedCount=_REDDiscardedCount - In the implementation block
@property (readonly) VCHistogram * REDNumPayloadsUsed;                       //@synthesize REDNumPayloadsUsed=_REDNumPayloadsUsed - In the implementation block
@property (readonly) VCHistogram * REDMaxDelay;                              //@synthesize REDMaxDelay=_REDMaxDelay - In the implementation block
@property (readonly) VCHistogram * videoStall;                               //@synthesize videoStall=_videoStall - In the implementation block
@property (assign) int duration;                                             //@synthesize duration=_duration - In the implementation block
@property (assign) int adjustedDuration;                                     //@synthesize adjustedDuration=_adjustedDuration - In the implementation block
@property (assign) double totalVideoStallTime;                               //@synthesize totalVideoStallTime=_totalVideoStallTime - In the implementation block
@property (assign) double totalMediaStallTime;                               //@synthesize totalMediaStallTime=_totalMediaStallTime - In the implementation block
@property (assign) unsigned mediaStallCount;                                 //@synthesize mediaStallCount=_mediaStallCount - In the implementation block
@property (assign) double maxVideoStallInterval;                             //@synthesize maxVideoStallInterval=_maxVideoStallInterval - In the implementation block
@property (assign) double totalAudioStallTime;                               //@synthesize totalAudioStallTime=_totalAudioStallTime - In the implementation block
@property (assign) double maxAudioStallInterval;                             //@synthesize maxAudioStallInterval=_maxAudioStallInterval - In the implementation block
@property (assign) double maxNoRemotePacketsInterval;                        //@synthesize maxNoRemotePacketsInterval=_maxNoRemotePacketsInterval - In the implementation block
@property (assign) double totalNoRemotePacketsTime;                          //@synthesize totalNoRemotePacketsTime=_totalNoRemotePacketsTime - In the implementation block
@property (assign) double poorConnectionTotalLength;                         //@synthesize poorConnectionTotalLength=_poorConnectionTotalLength - In the implementation block
@property (assign) double poorConnectionMaxLength;                           //@synthesize poorConnectionMaxLength=_poorConnectionMaxLength - In the implementation block
@property (assign) double averageTargetBitrate;                              //@synthesize averageTargetBitrate=_averageTargetBitrate - In the implementation block
@property (assign) double averageSendBitrate;                                //@synthesize averageSendBitrate=_averageSendBitrate - In the implementation block
@property (assign) double averageReceiveBitrate;                             //@synthesize averageReceiveBitrate=_averageReceiveBitrate - In the implementation block
@property (assign) double averageTotalVideoSendBitrate;                      //@synthesize averageTotalVideoSendBitrate=_averageTotalVideoSendBitrate - In the implementation block
@property (assign) double averageVideoMediaSendBitrate;                      //@synthesize averageVideoMediaSendBitrate=_averageVideoMediaSendBitrate - In the implementation block
@property (assign) double averageVideoHeaderSendBitrate;                     //@synthesize averageVideoHeaderSendBitrate=_averageVideoHeaderSendBitrate - In the implementation block
@property (assign) double averageVideoFECSendBitrate;                        //@synthesize averageVideoFECSendBitrate=_averageVideoFECSendBitrate - In the implementation block
@property (assign) double averageTotalVideoRecvBitrate;                      //@synthesize averageTotalVideoRecvBitrate=_averageTotalVideoRecvBitrate - In the implementation block
@property (assign) double averageAudioErasuresRate;                          //@synthesize averageAudioErasuresRate=_averageAudioErasuresRate - In the implementation block
@property (assign) double averageSpeechErasuresRate;                         //@synthesize averageSpeechErasuresRate=_averageSpeechErasuresRate - In the implementation block
@property (assign) double speechErasureTotalTime;                            //@synthesize speechErasureTotalTime=_speechErasureTotalTime - In the implementation block
@property (assign) double averageBWE;                                        //@synthesize averageBWE=_averageBWE - In the implementation block
@property (assign) unsigned minBWE;                                          //@synthesize minBWE=_minBWE - In the implementation block
@property (assign) unsigned maxBWE;                                          //@synthesize maxBWE=_maxBWE - In the implementation block
@property (assign) double averageRTT;                                        //@synthesize averageRTT=_averageRTT - In the implementation block
@property (assign) unsigned poorConnectionFrequency;                         //@synthesize poorConnectionFrequency=_poorConnectionFrequency - In the implementation block
@property (assign) unsigned BBQueueTooLargeCount;                            //@synthesize BBQueueTooLargeCount=_BBQueueTooLargeCount - In the implementation block
@property (assign) unsigned BBRateTooLowCount;                               //@synthesize BBRateTooLowCount=_BBRateTooLowCount - In the implementation block
@property (assign) unsigned long long audioFlushPacketCount;                 //@synthesize audioFlushPacketCount=_audioFlushPacketCount - In the implementation block
@property (assign) unsigned long long audioSentPacketCount;                  //@synthesize audioSentPacketCount=_audioSentPacketCount - In the implementation block
@property (assign) unsigned long long videoFlushPacketCount;                 //@synthesize videoFlushPacketCount=_videoFlushPacketCount - In the implementation block
@property (assign) unsigned long long videoSentPacketCount;                  //@synthesize videoSentPacketCount=_videoSentPacketCount - In the implementation block
@property (assign) unsigned errorCode;                                       //@synthesize errorCode=_errorCode - In the implementation block
@property (assign) unsigned significantOOOPacketCount;                       //@synthesize significantOOOPacketCount=_significantOOOPacketCount - In the implementation block
@property (assign) unsigned totalVideoPacketsExpected;                       //@synthesize totalVideoPacketsExpected=_totalVideoPacketsExpected - In the implementation block
@property (assign) unsigned totalFIRDemandCounter;                           //@synthesize totalFIRDemandCounter=_totalFIRDemandCounter - In the implementation block
@property (assign) unsigned totalFIRCounter;                                 //@synthesize totalFIRCounter=_totalFIRCounter - In the implementation block
@property (assign) unsigned videoFrameDecodedButSkippedCounter;              //@synthesize videoFrameDecodedButSkippedCounter=_videoFrameDecodedButSkippedCounter - In the implementation block
@property (assign) unsigned videoFrameImcompleteNextTSCounter;               //@synthesize videoFrameImcompleteNextTSCounter=_videoFrameImcompleteNextTSCounter - In the implementation block
@property (assign) unsigned videoFrameTotalIncompleteCounter;                //@synthesize videoFrameTotalIncompleteCounter=_videoFrameTotalIncompleteCounter - In the implementation block
@property (assign) unsigned decodedVideoFrameEnqueueCounter;                 //@synthesize decodedVideoFrameEnqueueCounter=_decodedVideoFrameEnqueueCounter - In the implementation block
@property (assign) unsigned encodedVideoFrameCounter;                        //@synthesize encodedVideoFrameCounter=_encodedVideoFrameCounter - In the implementation block
@property (assign) unsigned captureVideoFrameCounter;                        //@synthesize captureVideoFrameCounter=_captureVideoFrameCounter - In the implementation block
@property (readonly) unsigned callMode;                                      //@synthesize callMode=_callMode - In the implementation block
@property (readonly) unsigned callDeviceRole;                                //@synthesize callDeviceRole=_callDeviceRole - In the implementation block
@property (readonly) unsigned callTransportType;                             //@synthesize callTransportType=_callTransportType - In the implementation block
@property (readonly) NSString * segmentName;                                 //@synthesize segmentName=_segmentName - In the implementation block
@property (readonly) NSString * previousSegmentName;                         //@synthesize previousSegmentName=_previousSegmentName - In the implementation block
@property (retain) VCVideoFECStatsHolder * videoFECStatsLevel1;              //@synthesize videoFECStatsLevel1=_videoFECStatsLevel1 - In the implementation block
@property (retain) VCVideoFECStatsHolder * videoFECStatsLevel2;              //@synthesize videoFECStatsLevel2=_videoFECStatsLevel2 - In the implementation block
@property (retain) VCVideoFECStatsHolder * videoFECStatsLevel3;              //@synthesize videoFECStatsLevel3=_videoFECStatsLevel3 - In the implementation block
-(VCHistogram *)latency;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)errorCode;
-(NSString *)segmentName;
-(unsigned)RTPeriod;
-(VCHistogram *)RTT;
-(VCHistogram *)JBQSize;
-(VCHistogram *)JBTarget;
-(VCHistogram *)JBUnclippedTarget;
-(VCHistogram *)PLR;
-(VCHistogram *)VPLR;
-(VCHistogram *)TBR;
-(VCHistogram *)RBR;
-(VCHistogram *)SBR;
-(VCHistogram *)audioErasures;
-(VCHistogram *)speechErasures;
-(VCHistogram *)videoQualityScore;
-(VCHistogram *)poorConnection;
-(VCHistogram *)videoEncodingBitrate;
-(VCHistogram *)videoJitter;
-(VCHistogram *)REDErasureCompensationRate;
-(VCHistogram *)REDReceivedCount;
-(VCHistogram *)REDDiscardedCount;
-(VCHistogram *)REDNumPayloadsUsed;
-(VCHistogram *)REDMaxDelay;
-(VCHistogram *)videoStall;
-(VCHistogram *)mediaStall;
-(double)speechErasureTotalTime;
-(double)totalMediaStallTime;
-(unsigned)mediaStallCount;
-(double)totalVideoStallTime;
-(double)maxVideoStallInterval;
-(double)totalAudioStallTime;
-(double)maxAudioStallInterval;
-(double)totalNoRemotePacketsTime;
-(double)maxNoRemotePacketsInterval;
-(unsigned)BBQueueTooLargeCount;
-(unsigned)BBRateTooLowCount;
-(unsigned long long)audioFlushPacketCount;
-(unsigned long long)audioSentPacketCount;
-(unsigned long long)videoFlushPacketCount;
-(unsigned long long)videoSentPacketCount;
-(int)adjustedDuration;
-(double)poorConnectionTotalLength;
-(double)poorConnectionMaxLength;
-(unsigned)poorConnectionFrequency;
-(double)averageTargetBitrate;
-(double)averageAudioErasuresRate;
-(double)averageBWE;
-(unsigned)maxBWE;
-(unsigned)minBWE;
-(double)averageRTT;
-(VCVideoFECStatsHolder *)videoFECStatsLevel1;
-(VCVideoFECStatsHolder *)videoFECStatsLevel2;
-(VCVideoFECStatsHolder *)videoFECStatsLevel3;
-(id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 mode:(unsigned short)arg3 deviceRole:(unsigned short)arg4 transportType:(unsigned short)arg5 relayServer:(id)arg6 relayType:(unsigned short)arg7 accessToken:(id)arg8 delegate:(id)arg9 ;
-(id)segmentReport;
-(id)segmentQRReport;
-(void)setSpeechErasureTotalTime:(double)arg1 ;
-(void)setAdjustedDuration:(int)arg1 ;
-(void)setTotalVideoStallTime:(double)arg1 ;
-(void)setTotalMediaStallTime:(double)arg1 ;
-(void)setMediaStallCount:(unsigned)arg1 ;
-(void)setMaxVideoStallInterval:(double)arg1 ;
-(void)setTotalAudioStallTime:(double)arg1 ;
-(void)setMaxAudioStallInterval:(double)arg1 ;
-(void)setMaxNoRemotePacketsInterval:(double)arg1 ;
-(void)setTotalNoRemotePacketsTime:(double)arg1 ;
-(void)setPoorConnectionTotalLength:(double)arg1 ;
-(void)setPoorConnectionMaxLength:(double)arg1 ;
-(void)setAverageTargetBitrate:(double)arg1 ;
-(double)averageSendBitrate;
-(void)setAverageSendBitrate:(double)arg1 ;
-(double)averageReceiveBitrate;
-(void)setAverageReceiveBitrate:(double)arg1 ;
-(double)averageTotalVideoSendBitrate;
-(void)setAverageTotalVideoSendBitrate:(double)arg1 ;
-(double)averageVideoMediaSendBitrate;
-(void)setAverageVideoMediaSendBitrate:(double)arg1 ;
-(double)averageVideoHeaderSendBitrate;
-(void)setAverageVideoHeaderSendBitrate:(double)arg1 ;
-(double)averageVideoFECSendBitrate;
-(void)setAverageVideoFECSendBitrate:(double)arg1 ;
-(double)averageTotalVideoRecvBitrate;
-(void)setAverageTotalVideoRecvBitrate:(double)arg1 ;
-(void)setAverageAudioErasuresRate:(double)arg1 ;
-(void)setAverageBWE:(double)arg1 ;
-(void)setMinBWE:(unsigned)arg1 ;
-(void)setMaxBWE:(unsigned)arg1 ;
-(void)setAverageRTT:(double)arg1 ;
-(void)setPoorConnectionFrequency:(unsigned)arg1 ;
-(void)setBBQueueTooLargeCount:(unsigned)arg1 ;
-(void)setBBRateTooLowCount:(unsigned)arg1 ;
-(void)setAudioFlushPacketCount:(unsigned long long)arg1 ;
-(void)setAudioSentPacketCount:(unsigned long long)arg1 ;
-(void)setVideoFlushPacketCount:(unsigned long long)arg1 ;
-(void)setVideoSentPacketCount:(unsigned long long)arg1 ;
-(unsigned)significantOOOPacketCount;
-(void)setSignificantOOOPacketCount:(unsigned)arg1 ;
-(unsigned)totalVideoPacketsExpected;
-(void)setTotalVideoPacketsExpected:(unsigned)arg1 ;
-(unsigned)totalFIRDemandCounter;
-(void)setTotalFIRDemandCounter:(unsigned)arg1 ;
-(unsigned)totalFIRCounter;
-(void)setTotalFIRCounter:(unsigned)arg1 ;
-(unsigned)videoFrameDecodedButSkippedCounter;
-(void)setVideoFrameDecodedButSkippedCounter:(unsigned)arg1 ;
-(unsigned)videoFrameImcompleteNextTSCounter;
-(void)setVideoFrameImcompleteNextTSCounter:(unsigned)arg1 ;
-(unsigned)videoFrameTotalIncompleteCounter;
-(void)setVideoFrameTotalIncompleteCounter:(unsigned)arg1 ;
-(unsigned)decodedVideoFrameEnqueueCounter;
-(void)setDecodedVideoFrameEnqueueCounter:(unsigned)arg1 ;
-(unsigned)encodedVideoFrameCounter;
-(void)setEncodedVideoFrameCounter:(unsigned)arg1 ;
-(unsigned)captureVideoFrameCounter;
-(void)setCaptureVideoFrameCounter:(unsigned)arg1 ;
-(NSString *)previousSegmentName;
-(unsigned)callMode;
-(unsigned)callDeviceRole;
-(unsigned)callTransportType;
-(void)setVideoFECStatsLevel1:(VCVideoFECStatsHolder *)arg1 ;
-(void)setVideoFECStatsLevel2:(VCVideoFECStatsHolder *)arg1 ;
-(void)setVideoFECStatsLevel3:(VCVideoFECStatsHolder *)arg1 ;
-(double)averageSpeechErasuresRate;
-(void)setAverageSpeechErasuresRate:(double)arg1 ;
-(VCHistogram *)framerate;
-(VCHistogram *)videoResolution;
-(void)merge:(id)arg1 ;
-(void)dealloc;
-(void)setDuration:(int)arg1 ;
-(int)duration;
-(id)initWithDictionary:(id)arg1 ;
@end

