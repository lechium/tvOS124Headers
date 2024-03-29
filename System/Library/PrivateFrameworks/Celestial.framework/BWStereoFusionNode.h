/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWNodeInput, BWNodeOutput, NSMutableArray;

@interface BWStereoFusionNode : BWNode {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _telephotoSensorIDDictionary;
	NSDictionary* _cameraInfoByPortType;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	BWNodeInput* _wideInput;
	BWNodeInput* _telephotoInput;
	BWNodeOutput* _defaultOutput;
	BWNodeOutput* _stereoHDROutput;
	BOOL _expectsWideFrame;
	BOOL _receivedWideFrame;
	BOOL _expectsTelephotoFrame;
	BOOL _receivedTelephotoFrame;
	BOOL _performSBPProcessing;
	NSDictionary* _sbpZoomRectangleDictionary;
	BWNodeInput* _masterInput;
	NSMutableArray* _nodeErrorsForWide;
	NSMutableArray* _nodeErrorsForTelephoto;

}

@property (nonatomic,readonly) BWNodeInput * wideInput;                     //@synthesize wideInput=_wideInput - In the implementation block
@property (nonatomic,readonly) BWNodeInput * telephotoInput;                //@synthesize telephotoInput=_telephotoInput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * defaultOutput;                //@synthesize defaultOutput=_defaultOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * stereoHDROutput;              //@synthesize stereoHDROutput=_stereoHDROutput - In the implementation block
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(int)_setupSampleBufferProcessor;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1 ;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(void)_sampleBufferProcessorOutputReady:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(BWNodeOutput *)defaultOutput;
-(BWNodeInput *)wideInput;
-(BWNodeInput *)telephotoInput;
-(id)initWithTelephotoSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 ;
-(BWNodeOutput *)stereoHDROutput;
-(int)_setPropertyOnSampleBufferProcessorWithKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(void)_processSequenceInSampleBufferProcessor;
-(id)sbpOptionsDictionary;
-(id)_initWithTelephotoSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 sbpCreationFunction:(/*function pointer*/void*)arg3 treatSoftErrorsAsHardErrors:(BOOL)arg4 ;
-(void)_setExpectedInputFramesWithResolvedCaptureSettings:(id)arg1 ;
-(void)_processSampleBufferInSampleBufferProcessor:(opaqueCMSampleBufferRef)arg1 metadataDictionary:(id)arg2 ;
-(void)_handleError:(int)arg1 forSampleBuffer:(opaqueCMSampleBufferRef)arg2 input:(id)arg3 ;
-(BOOL)_receivedExpectedNumberOfFramesOrErrors;
-(void)_endSequence;
-(void)_setZoomRectangleOnSampleBufferProcessorIfNecessaryBasedOnMetadata:(id)arg1 captureType:(int)arg2 ;
-(void)_setZoomRectangleOnSampleBufferProcessorWithRectangle:(CGRect)arg1 ;
-(BOOL)isCaptureRequestStateReset;
-(OpaqueFigSampleBufferProcessorRef)sampleBufferProcessor;
-(void)dealloc;
-(id)nodeType;
@end

