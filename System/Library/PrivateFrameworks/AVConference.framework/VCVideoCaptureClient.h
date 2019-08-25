/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCVideoCaptureClient
@optional
-(void)avConferenceScreenCaptureError:(id)arg1;
-(void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(BOOL)arg2 powerLevelDidChange:(BOOL)arg3;

@required
-(void)thermalLevelDidChange:(int)arg1;
-(id)clientCaptureRule;
-(BOOL)onCaptureFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV54)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
-(void)avConferencePreviewError:(id)arg1;
-(void)sourceFrameRateDidChange:(unsigned)arg1;

@end

