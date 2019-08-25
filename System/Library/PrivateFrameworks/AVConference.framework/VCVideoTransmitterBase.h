/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCConnectionChangedHandler.h>

@class VCVideoRule, NSString;

@interface VCVideoTransmitterBase : NSObject <VCConnectionChangedHandler> {

	void* _controlInfoGenerator;
	unsigned _captureWidth;
	unsigned _captureHeight;
	unsigned _encodingWidth;
	unsigned _encodingHeight;
	unsigned _targetFramerate;
	unsigned _txMaxBitrate;
	unsigned _txMinBitrate;
	unsigned _temporaryMaximumBitrate;
	VCVideoRule* _videoRule;
	SCD_Struct_AV54 _latestSampleBufferTimestamp;
	double _lastKeyFrameSentTime;
	unsigned _timestamp;
	unsigned _lastSentAudioSampleTime;
	double _lastSentAudioHostTime;
	BOOL _isServerBasedBandwidthProbingEnabled;

}

@property (assign) SCD_Struct_AV54 lastFrameTime;                                    //@synthesize latestSampleBufferTimestamp=_latestSampleBufferTimestamp - In the implementation block
@property (assign) double lastKeyFrameSentTime;                                      //@synthesize lastKeyFrameSentTime=_lastKeyFrameSentTime - In the implementation block
@property (assign) unsigned lastRTPTimestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned lastSentAudioSampleTime;                                 //@synthesize lastSentAudioSampleTime=_lastSentAudioSampleTime - In the implementation block
@property (assign) double lastSentAudioHostTime;                                     //@synthesize lastSentAudioHostTime=_lastSentAudioHostTime - In the implementation block
@property (assign,nonatomic) BOOL isServerBasedBandwidthProbingEnabled;              //@synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)generateKeyFrame;
-(void)setLastKeyFrameSentTime:(double)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(void)startVideo;
-(void)stopVideo;
-(BOOL)enqueueVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV54)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(unsigned)setTemporaryMaximumBitrate:(unsigned)arg1 ;
-(void)setKeyFrameOnlyStreamID:(unsigned short)arg1 ;
-(void)setStreamIDs:(unsigned short*)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short*)arg3 numOfRepairedStreamIDs:(unsigned char)arg4 ;
-(void)setFECRatio:(double)arg1 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(unsigned)lastSentAudioSampleTime;
-(void)collectChannelMetrics:(SCD_Struct_VC101*)arg1 interval:(float)arg2 ;
-(void)setIsServerBasedBandwidthProbingEnabled:(BOOL)arg1 ;
-(void)setLastSentAudioSampleTime:(unsigned)arg1 ;
-(void)setLastSentAudioHostTime:(double)arg1 ;
-(SCD_Struct_AV54)lastFrameTime;
-(void)setLastFrameTime:(SCD_Struct_AV54)arg1 ;
-(unsigned)lastRTPTimestamp;
-(void)setLastRTPTimestamp:(unsigned)arg1 ;
-(double)lastKeyFrameSentTime;
-(double)lastSentAudioHostTime;
-(BOOL)isServerBasedBandwidthProbingEnabled;
-(void)dealloc;
@end

