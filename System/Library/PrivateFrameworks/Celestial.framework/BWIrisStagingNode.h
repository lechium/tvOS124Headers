/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWIrisStagingNodeIrisRequestDelegate, OS_dispatch_group;
@class NSURL, NSMutableArray, FigIrisAutoTrimmer, BWMotionDataPreserver, BWIrisSequenceAdjuster, NSObject;

@interface BWIrisStagingNode : BWNode {

	SCD_Struct_BW2 _bufferingTime;
	SCD_Struct_BW2 _targetFrameDuration;
	SCD_Struct_BW2 _beginIrisMovieCaptureTime;
	SCD_Struct_BW2 _endIrisMovieCaptureTime;
	SCD_Struct_BW2 _frameGovernorNextFrameThreshold;
	SCD_Struct_BW2 _frameGovernorReferenceTime;
	SCD_Struct_BW2 _readyToEmitPTS;
	SCD_Struct_BW2 _lastProcessedVideoPTS;
	SCD_Struct_BW2 _masterMovieStartPTS;
	NSURL* _temporaryMovieDirectoryURL;
	NSURL* _masterMovieURL;
	NSMutableArray* _stagingQueues;
	NSMutableArray* _lastEmittedBuffers;
	BOOL _valveOpen;
	BOOL _valveDraining;
	long long _valveOpenerSettingsID;
	NSMutableArray* _irisRequestsInFlight;
	NSMutableArray* _irisRequestsSoonToBeEmitted;
	int _emittedIrisRequestCount;
	OpaqueFigSimpleMutexRef _stateMutex;
	SCD_Struct_BW2* _firstEmittedPTSArray;
	OpaqueCMClockRef _masterClock;
	int _trimMethod;
	FigIrisAutoTrimmer* _trimmer;
	SCD_Struct_BW2 _firstTrimStartPTS;
	unsigned long long _inferencesInputIndex;
	BWMotionDataPreserver* _motionDataPreserver;
	BWIrisSequenceAdjuster* _sequenceAdjuster;
	int _numEODMessagesReceived;
	id<BWIrisStagingNodeIrisRequestDelegate> _delegate;
	float _intermediateJPEGCompressionQuality;
	int _intermediateJPEGDownstreamRetainedBufferCount;
	int _intermediateJPEGSurfaceLocalRetainedBufferCount;
	BOOL _intermediateJPEGCompressionSetupIsComplete;
	FigPhotoSurfacePoolRef _intermediateJPEGSurfacePool;
	FigPhotoCompressionSessionRef _intermediateJPEGCompressionSession;
	CFDictionaryRef _intermediateJPEGContainerOptions;
	CFDictionaryRef _intermediateJPEGCompressionOptions;
	opaqueCMFormatDescriptionRef _intermediateJPEGFormatDescription;
	BOOL _haveSeenFirstAudioSampleBuffer;
	BOOL _haveSeenFirstVideoSampleBuffer;
	BOOL _readyToReceiveRequests;
	NSObject*<OS_dispatch_group> _readyToReceiveRequestsGroup;

}

@property (readonly) NSURL * temporaryMovieDirectoryURL; 
@property (assign) SCD_Struct_BW2 beginIrisMovieCaptureTime; 
@property (assign) SCD_Struct_BW2 endIrisMovieCaptureTime; 
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)closeValve;
-(SCD_Struct_BW2)bufferingTime;
-(BOOL)openValveWithIrisRequest:(id)arg1 ;
-(int)enqueueIrisRequest:(id)arg1 ;
-(NSURL *)temporaryMovieDirectoryURL;
-(SCD_Struct_BW2)endIrisMovieCaptureTime;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 autoTrimMethod:(int)arg4 intermediateJPEGCompressionQuality:(float)arg5 temporaryMovieDirectoryURL:(id)arg6 irisRequestDelegate:(id)arg7 ;
-(void)setBufferingTime:(SCD_Struct_BW2)arg1 ;
-(void)setTargetFrameDuration:(SCD_Struct_BW2)arg1 ;
-(void)setIntermediateJPEGDownstreamRetainedBufferCount:(int)arg1 ;
-(void)setBeginIrisMovieCaptureTime:(SCD_Struct_BW2)arg1 ;
-(void)setEndIrisMovieCaptureTime:(SCD_Struct_BW2)arg1 ;
-(BOOL)waitUntilReadyToReceiveRequestsWithTimeout:(float)arg1 ;
-(OpaqueCMClockRef)masterClock;
-(SCD_Struct_BW2)targetFrameDuration;
-(void)_releaseJPEGEncodeResources;
-(void)_serviceIrisRequestsForCurrentTime:(SCD_Struct_BW2)arg1 emitBuffers:(BOOL)arg2 ensureStillImageTimesAreStaged:(BOOL)arg3 ;
-(void)_emitIrisRequest:(id)arg1 withEndTime:(SCD_Struct_BW2)arg2 ;
-(void)_feedTrimmerWithVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_feedTrimmerWithInferencesSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)_createIntermediateJPEGSampleBufferFromUncompressedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_BW2)_earliestAllowedStillHostPTS;
-(void)_trimQueueForInputIndex:(unsigned long long)arg1 ;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInputIndex:(unsigned long long)arg2 ;
-(void)_enqueueIrisRequest:(id)arg1 ;
-(unsigned long long)_emittingInputsCount;
-(void)_updateRetainedBufferCount;
-(id)_temporaryURLForIrisWithSettingsID:(long long)arg1 isOriginalRecording:(BOOL)arg2 ;
-(SCD_Struct_BW2)_hostPTSForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitBuffersThroughPTS:(SCD_Struct_BW2)arg1 ;
-(void)_emitBuffersThroughPTS:(SCD_Struct_BW2)arg1 forInputIndex:(unsigned long long)arg2 ;
-(int)_emissionStatusForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitIrisRequestsOlderThanTime:(SCD_Struct_BW2)arg1 withEndTime:(SCD_Struct_BW2)arg2 ;
-(unsigned long long)_indexOfBufferBeforeOrEqualToPTS:(SCD_Struct_BW2)arg1 inputIndex:(unsigned long long)arg2 ;
-(SCD_Struct_BW2)_adjustedStartTimeForTrimmedStartTime:(SCD_Struct_BW2)arg1 ensuringAtLeast3FramesBeforeStillTime:(SCD_Struct_BW2)arg2 ensuringFrameIsAfterTrimmedStartTime:(BOOL)arg3 butNotEarlierThanOriginalStartTime:(SCD_Struct_BW2)arg4 ;
-(unsigned long long)_indexOfBufferBeforeOrEqualToHostPTS:(SCD_Struct_BW2)arg1 inputIndex:(unsigned long long)arg2 tolerance:(SCD_Struct_BW2)arg3 ;
-(BOOL)_haveEnoughVideoStagedToStartFirstIrisRecording:(id)arg1 currentTime:(SCD_Struct_BW2)arg2 ;
-(BOOL)_fillInStartAndTrimTimesForMasterMovieWithInfo:(id)arg1 ;
-(void)_prepareToEmitFramesFromStartTime:(SCD_Struct_BW2)arg1 throughEndTime:(SCD_Struct_BW2)arg2 ;
-(BOOL)_fillInRefMovieStartAndTrimTimesForStillImageTimesBeforeTime:(SCD_Struct_BW2)arg1 ;
-(void)_informDelegateOfSoonToBeEmittedIrisRequestsForTime:(SCD_Struct_BW2)arg1 ;
-(void)_tagStillImageVISKeyFrames;
-(void)_processQueuedVideoFrames;
-(int)_setupIntermediateJPEGSurfacePool;
-(int)_setupIntermediateJPEGCompressionSession;
-(int)_setupIntermediateJPEGContainerOptions;
-(int)_setupIntermediateJPEGCompressionOptions;
-(int)_setupJPEGEncodeResources;
-(int)_setupIntermediateJPEGFormatDescriptionFromSourceBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_BW2)beginIrisMovieCaptureTime;
-(int)intermediateJPEGDownstreamRetainedBufferCount;
-(void)dealloc;
@end

