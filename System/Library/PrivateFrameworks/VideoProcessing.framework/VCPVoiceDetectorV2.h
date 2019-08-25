/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAudioAnalyzer.h>

@interface VCPVoiceDetectorV2 : VCPAudioAnalyzer {

	BOOL _voiceActivityNew;

}
-(int)loadModel;
-(int)sampleBatchSize:(double)arg1 ;
-(int)initializeAudioUnit:(const AudioStreamBasicDescription*)arg1 ;
-(int)processAudioSamples;
-(id)audioFormatRequirements;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
@end

