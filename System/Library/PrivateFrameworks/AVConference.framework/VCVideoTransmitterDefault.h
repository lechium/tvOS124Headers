/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoTransmitterBase.h>

@interface VCVideoTransmitterDefault : VCVideoTransmitterBase {

	tagHANDLE* _videoTransmitter;

}
-(void)generateKeyFrame;
-(id)initWithConfig:(id)arg1 ;
-(void)startVideo;
-(void)stopVideo;
-(BOOL)enqueueVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV54)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(unsigned)setTemporaryMaximumBitrate:(unsigned)arg1 ;
-(void)setKeyFrameOnlyStreamID:(unsigned short)arg1 ;
-(void)setStreamIDs:(unsigned short*)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short*)arg3 numOfRepairedStreamIDs:(unsigned char)arg4 ;
-(void)setFECRatio:(double)arg1 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(void)collectChannelMetrics:(SCD_Struct_AV15*)arg1 interval:(float)arg2 ;
-(void)computeTimestamp:(unsigned*)arg1 hostTime:(double*)arg2 forFrame:(opaqueCMSampleBufferRef)arg3 ;
-(void)setIsServerBasedBandwidthProbingEnabled:(BOOL)arg1 ;
-(void)dealloc;
@end

