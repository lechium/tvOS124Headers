/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary;

@interface BWNoiseReducerNode : BWNode {

	NSDictionary* _cameraTuningOptions;
	NSDictionary* _noiseReductionOptions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NoiseReductionCtx_sRef _context;
	int _contextSynchronization;
	int _gpuPriority;
	BOOL _threaded;
	BOOL _processLuma;
	BOOL _useInPlaceAlgorithm;
	BOOL _quadraHighResStillImageCaptureEnabled;
	CVBufferRef _quadraResampledIntermediateBuffer;
	opaqueCMFormatDescriptionRef _quadraResampledIntermediaBufferFormatDescription;
	OpaqueVTPixelTransferSessionRef _quadraResampledTransferSession;

}
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg1 ;
-(BOOL)quadraHighResStillImageCaptureEnabled;
-(id)_outputRequirementsForInputFormat:(id)arg1 ;
-(opaqueCMSampleBufferRef)_newQuadraResampledSampleBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 ;
-(id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(void)dealloc;
-(id)nodeType;
@end

