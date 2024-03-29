/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary, NSArray, FigCaptureStillImageSettings;

@interface BWSISNode : BWNode {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _cameraTuningDictionary;
	NSDictionary* _sensorIDDictionary;
	NSDictionary* _noiseModelParamsDictionary;
	NSDictionary* _fusionParamsDictionary;
	int _fusionScheme;
	BOOL _alwaysRequestsPreBracketedEV0;
	BOOL _allowExperimentalOverrides;
	int _lensShadingCorrectionMode;
	int _maxIntegrationTimeLimitMsec;
	float _bracketGainCap;
	NSArray* _exposureValues;
	NSArray* _afWindowParamsArray;
	int _sisBracketCount;
	NSArray* _oisExposureDurationTypes;
	int _oisBracketCount;
	FigCaptureStillImageSettings* _currentCaptureSettings;
	BOOL _preBracketedFrameReceived;
	int _numberFramesReceived;
	int _lastFusionTypeUsed;
	BOOL _livePhotoSupported;
	BOOL _OISSupported;
	BOOL _allowAllocationsAtPrepareTime;

}
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(int)_setupSampleBufferProcessor;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1 ;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg1 ;
-(BOOL)alwaysRequestsPreBracketedEV0;
-(id)_initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(/*function pointer*/void*)arg3 fusionScheme:(int)arg4 allowExperimentalOverrides:(BOOL)arg5 ;
-(int)_unpackSISOptions;
-(BOOL)livePhotoSupported;
-(BOOL)OISSupported;
-(id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 fusionScheme:(int)arg3 ;
-(void)setLivePhotoSupported:(BOOL)arg1 ;
-(void)setOISSupported:(BOOL)arg1 ;
-(void)setAllowAllocationsAtPrepareTime:(BOOL)arg1 ;
-(BOOL)allowAllocationsAtPrepareTime;
-(void)_sampleBufferProcessorOutputReady:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)dealloc;
-(id)nodeType;
@end

