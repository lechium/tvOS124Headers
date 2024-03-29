/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary, FigDisparityGenerator, BWNodeInput, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWNodeError;

@interface BWStillImageBravoDisparityNode : BWNode {

	NSDictionary* _telephotoSensorIDDictionary;
	NSDictionary* _cameraInfoByPortType;
	FigDisparityGenerator* _disparityGenerator;
	BWNodeInput* _wideInput;
	BWNodeInput* _telephotoInput;
	unsigned long long _disparityMapWidth;
	unsigned long long _disparityMapHeight;
	opaqueCMFormatDescriptionRef _disparityFormatDescription;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	int _expectedDisparityCount;
	int _deliveredDisparityCount;
	int _processingMode;
	opaqueCMSampleBufferRef _teleSbuf;
	opaqueCMSampleBufferRef _wideSbuf;
	BOOL _emitWideFrame;
	BWNodeError* _errorForWide;
	BWNodeError* _errorForTele;
	BOOL _shouldComputeDisparityWhenCalibrationFails;
	BWNodeInput* _disparityFromReferenceFramesTelephotoFusedInput;

}

@property (nonatomic,readonly) BWNodeInput * wideInput;                                                    //@synthesize wideInput=_wideInput - In the implementation block
@property (nonatomic,readonly) BWNodeInput * telephotoInput;                                               //@synthesize telephotoInput=_telephotoInput - In the implementation block
@property (nonatomic,readonly) BWNodeInput * disparityFromReferenceFramesTelephotoFusedInput;              //@synthesize disparityFromReferenceFramesTelephotoFusedInput=_disparityFromReferenceFramesTelephotoFusedInput - In the implementation block
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)processorOptionsDictionary;
-(void)_clearCaptureRequestState;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1 ;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(id)initWithTelephotoSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 disparityMapWidth:(unsigned long long)arg3 disparityMapHeight:(unsigned long long)arg4 ;
-(void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)arg1 ;
-(BWNodeInput *)wideInput;
-(BWNodeInput *)telephotoInput;
-(void)_finishPendingProcessing;
-(int)_loadAndConfigureDisparityGenerator;
-(void)_resolveProcessingMode;
-(void)_handleError:(int)arg1 duringProcessingOfSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromInput:(id)arg3 ;
-(void)_processBuffersForDisparityIfNecessary;
-(void)_computeDisparityForTeleBuffer:(opaqueCMSampleBufferRef)arg1 wideBuffer:(opaqueCMSampleBufferRef)arg2 attachToOutputBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(int)_OSStatusFromDisparityResult:(int)arg1 ;
-(BOOL)shouldComputeDisparityWhenCalibrationFails;
-(BWNodeInput *)disparityFromReferenceFramesTelephotoFusedInput;
-(void)dealloc;
-(id)nodeType;
@end

