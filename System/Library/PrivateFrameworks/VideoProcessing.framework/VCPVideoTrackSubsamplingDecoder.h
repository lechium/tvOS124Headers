/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderTrackOutput;

@interface VCPVideoTrackSubsamplingDecoder : VCPVideoTrackDecoder {

	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _trackOutput;
	SCD_Struct_VC6 _decodeEnd;
	SCD_Struct_VC6 _sampleDuration;
	SCD_Struct_VC6 _nextSampleTime;
	opaqueCMSampleBufferRef _currentSample;
	opaqueCMSampleBufferRef _nextSample;

}
-(opaqueCMSampleBufferRef)getNextCaptureSampleBuffer;
-(id)initWithTrack:(id)arg1 timerange:(const SCD_Struct_VC9*)arg2 atInterval:(const SCD_Struct_VC6*)arg3 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(void)dealloc;
-(long long)status;
@end

