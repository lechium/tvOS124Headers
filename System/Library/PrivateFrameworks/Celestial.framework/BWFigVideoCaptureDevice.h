/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWCaptureDevice.h>
#import <libobjc.A.dylib/BWZoomCompletionDelegate.h>

@protocol OS_dispatch_semaphore, BWPortraitSceneMonitor, OS_dispatch_queue, BWPreviewTimeMachineProcessor;
@class NSString, NSDictionary, NSMutableDictionary, NSArray, BWFigVideoCaptureStream, NSDate, NSObject, BWBravoStreamSelector, BWRamp, BWPearlCalibrationCoordinator, BWUBCaptureParameters, BWStillImageCaptureSettings, FigStateMachine, NSMutableArray, BWZoomCommandHandler, BWDeviceMotionActivityDetector, FigPAMFrameScore, BWInferenceResult, NSMutableSet, BWMemoryPool;

@interface BWFigVideoCaptureDevice : BWCaptureDevice <BWZoomCompletionDelegate> {

	OpaqueFigCaptureDeviceRef _device;
	OpaqueCMClockRef _clock;
	int _deviceReleaseBehavior;
	int _clientPID;
	NSString* _applicationID;
	NSDictionary* _moduleInfoByPortType;
	NSDictionary* _sensorIDDictionaryByPortType;
	NSMutableDictionary* _cameraInfoByPortType;
	NSArray* _activePortTypes;
	NSDictionary* _supportedProperties;
	OpaqueFigCaptureStreamRef _stream;
	BWFigVideoCaptureStream* _captureStream;
	NSDate* _synchronizationMasterCaptureStreamStartTime;
	BWFigVideoCaptureStream* _synchronizationSlaveCaptureStream;
	NSDate* _synchronizationSlaveCaptureStreamStopTime;
	CFStringRef _portType;
	int _type;
	int _position;
	NSDictionary* _attributes;
	NSString* _nonLocalizedName;
	BWFigVideoCaptureStream* _bravoTelephotoCaptureStream;
	NSObject*<OS_dispatch_semaphore> _synchronizedStreamsStartStopSemaphore;
	BOOL _synchronizationSourceHasBeenStarted;
	BOOL _synchronizationSlaveHasBeenStarted;
	NSString* _bravoTelephotoNonLocalizedName;
	BOOL _wideCaptureStreamAsStatsMasterPreferred;
	BWFigVideoCaptureStream* _currentMasterCaptureStream;
	os_unfair_lock_s _currentMasterCaptureStreamLock;
	os_unfair_lock_s _synchronizedStreamsSwitchOverLock;
	BWBravoStreamSelector* _bravoStreamSelector;
	BOOL _synchronizedStreamsSwitchOverLockCameraWhenFocusScanCompletes;
	int _synchronizedStreamsSwitchOverNewCameraSelectionBehavior;
	BOOL _synchronizedStreamsSwitchOverInProgress;
	float _synchronizedStreamsStereoFusionLowerBoundZoomFactor;
	float _synchronizedStreamsStereoFusionUpperBoundZoomFactor;
	int _synchronizedStreamsNominalSlaveFrameRate;
	int _synchronizedStreamsNominalMasterToSlaveFrameRateRatio;
	int _synchronizedStreamsElevatedSlaveFrameRate;
	float _synchronizedStreamsElevatedSlaveFrameRateLowerBoundZoomFactor;
	float _synchronizedStreamsElevatedSlaveFrameRateUpperBoundZoomFactor;
	int _synchronizedStreamsElevatedMasterToSlaveFrameRateRatio;
	BOOL _stereoFusionEnabled;
	int _parallaxMitigationStrengthLock;
	float _parallaxMitigationStrength;
	int _parallaxMitigationRampDuration;
	int _parallaxMitigationRampShape;
	BWRamp* _parallaxMitigationRamp;
	BOOL _bravoDualPhotoDeliveryEnabled;
	BWFigVideoCaptureStream* _pearlInfraredCaptureStream;
	BWPearlCalibrationCoordinator* _pearlCalibrationCoordinator;
	BOOL _facesDetectedSinceStreamStart;
	NSArray* _captureStreams;
	BOOL _depthDataDeliveryEnabled;
	float _depthMaxFrameRate;
	BOOL _shallowDepthOfFieldEffectEnabled;
	int _sdofLock;
	int _sdofEffectStatus;
	int _sdofStagePreviewStatus;
	BOOL _sdofSceneMonitoringEnabled;
	id<BWPortraitSceneMonitor> _portraitSceneMonitor;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_dispatch_queue> _focusAndExposureUpdateQueue;
	OpaqueFigFlatDictionaryKeySpecRef _metadataKeySpec;
	BOOL _attachMetadataFlatDictionary;
	/*function pointer*/void* _createAutofocusSampleBufferProcessorFunction;
	NSObject*<OS_dispatch_queue> _autofocusProcessorQueue;
	NSMutableDictionary* _autofocusCachedPropertiesDictionary;
	OpaqueFigSimpleMutexRef _autofocusStatusMutex;
	OpaqueFigSampleBufferProcessorRef _autofocusProcessor;
	BOOL _allowAEStableNotifications;
	BOOL _aeStable;
	SCD_Struct_BW2 _aeRequestTime;
	int _aeRequestCount;
	int _aeFrameWaitCount;
	BOOL _allowAWBStableNotifications;
	BOOL _awbStable;
	CGRect _cachedFocusRect;
	CGRect _cachedExposureRect;
	BOOL _useAutoImageControlMode;
	int _autoImageControlMode;
	int _currentImageControlMode;
	int _apsMode;
	BOOL _collectAPSStatistics;
	BOOL _hasAPSStatistics;
	BWAPSStatistics _apsStatistics;
	int _numAPSStatisticsSamples;
	int _frameStatisticsLock;
	SCD_Struct_BW112 _currentFrameStatistics;
	BOOL _stillImageCaptureNowAfterAutofocusTimeoutSupported;
	int _stillImageContrastBasedAutofocusTimeout;
	int _stillImagePhaseDetectionAutofocusTimeout;
	BOOL _hasFlash;
	BOOL _hasNightMode;
	float _nightModeMinGainThreshold;
	BOOL _redEyeReductionEnabled;
	BOOL _unifiedBracketingEnabled;
	BOOL _ubSIFREnabled;
	BWUBCaptureParameters* _ubCaptureParameters;
	BWUBCaptureParameters* _ubSynchronizedStreamsTeleCaptureParameters;
	float _autoFlashNormalizedSNRThreshold;
	float _synchronizedStreamsTeleAutoFlashNormalizedSNRThreshold;
	double _stillImageStabilizationIntegrationTimeThreshold;
	double _synchronizedStreamsStillImageStabilizationTeleIntegrationTimeThreshold;
	double _synchronizedStreamsOISSISStereoFusionTeleMinIntegrationTime;
	float _synchronizedStreamsOISSISStereoFusionTeleMinGain;
	OpaqueFigSimpleMutexRef _torchLock;
	BOOL _autoTorchEnabled;
	BOOL _autoTorchStatsCheckedForVideoRecording;
	SCD_Struct_BW2 _autoTorchRampedUpTime;
	BOOL _torchActive;
	float _torchLevel;
	float _maxTorchLevel;
	int _flashModeForSceneMonitoring;
	int _hdrModeForSceneMonitoring;
	int _sisModeForSceneMonitoring;
	BOOL _flashScene;
	BOOL _hdrScene;
	BOOL _sisScene;
	BOOL _forcePostingForSceneDetectionNotifications;
	BOOL _stillImageCaptureEnabled;
	int _stillImageFusionScheme;
	BOOL _quadraHighResStillImageCaptureEnabled;
	float _quadraLowLightResampledNormalizedSNRThreshold;
	BOOL _stillImageGNRHDREnabled;
	NSObject*<OS_dispatch_queue> _stillImageDispatchQueue;
	int _numberOfCompletedStillCaptures;
	BOOL _stillImageISPChromaNoiseReductionEnabled;
	int _skippedFramesCountForStillImageCaptureRetry;
	int _maxSkippedFramesForStillImageCaptureRetry;
	os_unfair_lock_s _stillImageCaptureStateLock;
	BWStillImageCaptureSettings* _stillImageCaptureSettings;
	NSDictionary* _stillImageCaptureNowOptions;
	NSDictionary* _stillImageCaptureStreamProperties;
	BOOL _retryCaptureStillImageNow;
	FigStateMachine* _stillImageCaptureStateMachine;
	/*^block*/id _prepareToCaptureStillImageNowCompletionHandler;
	/*^block*/id _pendingPrepareToCaptureStillImageNowCompletionHandler;
	int _currentManualFocusCompletedID;
	int _currentManualExposureCompletedID;
	int _currentBiasedExposureCompletedID;
	int _currentManualWhiteBalanceCompletedID;
	NSMutableDictionary* _observedProperties;
	OpaqueFigSimpleMutexRef _manualPropertyMutex;
	float _lensPosition;
	SCD_Struct_BW2 _exposureDuration;
	float _ISO;
	float _exposureTargetBias;
	float _exposureTargetOffset;
	SCD_Struct_Fi80 _deviceWhiteBalanceGains;
	SCD_Struct_Fi80 _grayWorldWhiteBalanceGains;
	NSObject*<OS_dispatch_queue> _whiteBalanceGainsQueue;
	NSMutableDictionary* _whiteBalanceGains;
	NSMutableArray* _whiteBalanceGainsOrderedKeys;
	int _whiteBalanceModeForExif;
	BWZoomCommandHandler* _zoomCommandHandler;
	NSObject*<OS_dispatch_queue> _zoomFactorUpdateQueue;
	float _maxISPZoomFactor;
	float _newISPZoomFactor;
	float _lastRequestedZoomFactor;
	float _newTotalZoomFactor;
	NSDictionary* _newAlternateOutputSizeAndCrop;
	int _zoomFactorLock;
	float _rampDefaultBravoSnapDistanceFraction;
	BOOL _feature1Enabled;
	NSObject*<OS_dispatch_queue> _feature1ProcessorQueue;
	OpaqueFigSampleBufferProcessorRef _feature1Processor;
	BWDeviceMotionActivityDetector* _deviceMotionActivityDetector;
	id<BWPreviewTimeMachineProcessor> _previewTimeMachineProcessor;
	BOOL _smartCameraEnabled;
	BOOL _smartCameraFreezeMotionEnabled;
	BOOL _smartCameraReferenceFrameSelectionEnabled;
	BOOL _smartCameraPreCaptureReferenceFrameSelectionEnabled;
	FigPAMFrameScore* _smartCameraPAMFrameScorer;
	FigPAMFrameScoreWeightsStruct _smartCameraPAMWeights;
	int _smartCameraFirstFrameIndexOIS;
	int _smartCameraReferenceFrameIndex;
	BOOL _smartCameraFaceSceneEnabled;
	float _smartCameraFaceSceneRecentlyDetectedThreshold;
	BWSmartCameraScene _smartCameraPetScene;
	BWSmartCameraScene _smartCameraBabyScene;
	BOOL _smartCameraLowLightAutoHDREnabled;
	BWSmartCameraScene _smartCameraBrightStageScene;
	BWSmartCameraScene _smartCameraSunsetSunriseScene;
	BOOL _attachesUprightExifOrientationMetadataToStreamingFrames;
	int _currentExifOrientation;
	BWInferenceResult* _mostRecentSmartCameraResult;
	int _cameraModeForGyroCalibration;
	BOOL _stillImageISPMultiBandNoiseReductionEnabled;
	BOOL _focusPixelsEnabled;
	BOOL _stillImageFocusPixelDisparityEnabled;
	BOOL _zeroShutterLagEnabled;
	int _zeroShutterLagTimeMachineBufferCapacity;
	float _zeroShutterLagStillImageStabilizationGainThreshold;
	float _zeroShutterLagSynchronizedStreamsStillImageStabilizationTeleGainThreshold;
	float _zeroShutterLagTheHumanFactor;
	NSArray* _previewMetadataForTimeMachinePTSRange;
	SCD_Struct_BW2 _ptsOfLastFrameForStationaryCheck;
	float _minimumTimeBetweenStationaryChecks;
	NSMutableSet* _shouldCheckAPSOffsetEstimatorByPortType;
	NSMutableSet* _shouldCheckCriticalFocusErrorByPortType;
	NSMutableSet* _criticalFocusErrorOccurredByPortType;
	NSMutableDictionary* _sphereJitterDetectionAttemptsByPortType;
	NSMutableDictionary* _sphereJitterSuccessfulDetectionsByPortType;
	long long _streamingStartTime;
	unsigned _numberOfPhotoCaptures;
	unsigned _numberOfBurstPhotoCaptures;
	unsigned _numberOfBalancedPhotoCaptures;
	unsigned _timeToFirstPhotoCapture;
	long long _previousPhotoCaptureTime;
	unsigned _minTimeSinceLastPhotoCapture;
	unsigned _maxTimeSinceLastPhotoCapture;
	unsigned _numberOfButtonMashingCapturesAtRate0;
	unsigned _numberOfButtonMashingCapturesAtRate1;
	unsigned _numberOfButtonMashingEventsAtRate0;
	unsigned _numberOfButtonMashingEventsAtRate1;
	BOOL _buttonMashingEventStartedAtRate0;
	BOOL _buttonMashingEventStartedAtRate1;
	NSString* _sphereMode;
	BOOL _regionOfInterestForCameraControlsSupported;
	CGRect _regionOfInterestForCameraControls;
	SCD_Struct_BW13 _activeSensorRegionForCameraControls;
	Class _deviceVendorClass;
	BWMemoryPool* _memoryPool;

}

@property (readonly) NSDictionary * moduleInfoByPortType; 
@property (readonly) NSDictionary * sensorIDDictionaryByPortType; 
@property (readonly) NSDictionary * cameraInfoByPortTypeForSBPs; 
@property (readonly) NSArray * activePortTypes; 
@property (readonly) BOOL hasFlash; 
@property (readonly) BOOL supportsWideColor; 
@property (nonatomic,retain) BWMemoryPool * memoryPool; 
@property (assign,nonatomic) int deviceReleaseBehavior;                        //@synthesize deviceReleaseBehavior=_deviceReleaseBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)unregisterCallbacksForClient:(int)arg1 ;
+(CFStringRef)_autofocusProcessorImageControlModeFromImageControlMode:(int)arg1 ;
+(void)initialize;
-(void)setPreviewTimeMachineProcessor:(id)arg1 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(BOOL)zeroShutterLagEnabled;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(int)captureStillImageNowWithSettings:(id)arg1 ;
-(void)prepareToCaptureStillImageNow:(/*^block*/id)arg1 ;
-(BOOL)supportsWideColor;
-(BOOL)hasFlash;
-(id)captureStream;
-(BWMemoryPool *)memoryPool;
-(void)setMemoryPool:(BWMemoryPool *)arg1 ;
-(void)_postNotificationWithPayload:(id)arg1 notificationPayload:(id)arg2 ;
-(BOOL)isPropertyObserved:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 synchronizedStreamsAttributes:(id)arg2 forPID:(int)arg3 applicationID:(id)arg4 stealingBehavior:(int)arg5 clientIDOut:(int*)arg6 errOut:(int*)arg7 deviceAvailabilityChangedHandler:(/*^block*/id)arg8 ;
-(OpaqueCMClockRef)clock;
-(id)supportedFormats;
-(float)minimumFrameRate;
-(void)setMinimumFrameRate:(float)arg1 ;
-(NSDictionary *)moduleInfoByPortType;
-(NSDictionary *)sensorIDDictionaryByPortType;
-(NSDictionary *)cameraInfoByPortTypeForSBPs;
-(NSArray *)activePortTypes;
-(void)registerForAEMatrixMetadata;
-(void)unregisterForAEMatrixMetadata;
-(void)setFaceDetectionConfiguration:(id)arg1 ;
-(void)startupFaceDetectionIfNeeded;
-(void)drainNotifications;
-(BOOL)stillImageCaptureEnabled;
-(void)setStillImageCaptureEnabled:(BOOL)arg1 ;
-(id)stillImageCaptureSettingsWithID:(long long)arg1 captureType:(int)arg2 deliverProcessedImage:(BOOL)arg3 deliverOriginalImage:(BOOL)arg4 deliverSushiRaw:(BOOL)arg5 deliverBravoDualPhoto:(BOOL)arg6 includePreBracketedEV0ForProcessing:(BOOL)arg7 clientBracketSettings:(id)arg8 captureFlags:(unsigned long long)arg9 userInitiatedRequestPTS:(SCD_Struct_BW2)arg10 ;
-(int)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1 ;
-(int)setFocusModeAutoWithRect:(CGRect)arg1 continuous:(BOOL)arg2 smooth:(BOOL)arg3 rangeRestrictionNear:(float)arg4 rangeRestrictionFar:(float)arg5 ;
-(int)setFocusModeManualWithLensPosition:(float)arg1 requestID:(int)arg2 ;
-(float)lensPosition;
-(int)setExposureModeAutoWithRect:(CGRect)arg1 ;
-(int)_updateExposureRectIfNeededForZoomFactor:(float)arg1 ;
-(int)setExposureModeLocked;
-(int)setExposureTargetBias:(float)arg1 requestID:(int)arg2 ;
-(int)setExposureModeCustomWithExposureDuration:(SCD_Struct_BW2)arg1 minFrameRate:(double)arg2 maxFrameRate:(double)arg3 ISO:(float)arg4 requestID:(int)arg5 ;
-(SCD_Struct_BW2)exposureDuration;
-(float)ISO;
-(float)exposureTargetBias;
-(float)exposureTargetOffset;
-(int)setProvidesStortorgetMetadata:(BOOL)arg1 ;
-(int)_attachMetadataFlatDictionaryToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1 ;
-(int)autoImageControlMode;
-(int)setAutoImageControlMode:(int)arg1 ;
-(int)setImageControlMode:(int)arg1 ;
-(int)setWhiteBalanceModeAuto;
-(int)setWhiteBalanceModeLockedWithGains:(SCD_Struct_Fi80)arg1 requestID:(int)arg2 ;
-(SCD_Struct_Fi80)deviceWhiteBalanceGains;
-(SCD_Struct_Fi80)grayWorldDeviceWhiteBalanceGains;
-(int)setFaceDetectionDrivenImageProcessingMode:(int)arg1 ;
-(int)setTorchLevel:(float)arg1 ;
-(int)setAutomaticallyAdjustsTorch:(BOOL)arg1 ;
-(void)setMaxTorchLevel:(float)arg1 ;
-(BOOL)setAutoFlashEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(id)zoomCommandHandler;
-(void)setZoomFactor:(float)arg1 ;
-(float)zoomFactor;
-(void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 commandID:(int)arg5 ;
-(void)setISPZoomFactor:(float)arg1 totalZoomFactor:(float)arg2 ;
-(void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 rampComplete:(BOOL)arg3 rampCommandID:(int)arg4 ;
-(void)setProperty:(id)arg1 isObserved:(BOOL)arg2 ;
-(BOOL)setHDRSceneDetectionEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(id)bravoTelephotoCaptureStream;
-(void)setBravoStreamSelectionBehavior:(int)arg1 ;
-(BOOL)smartCameraEnabled;
-(BOOL)bravoDualPhotoDeliveryEnabled;
-(id)pearlInfraredCaptureStream;
-(void)setCameraModeForGyroCalibration:(int)arg1 ;
-(OpaqueFigCaptureISPProcessingSessionRef)newISPProcessingSessionWithType:(int)arg1 ;
-(id)captureStreams;
-(BOOL)unifiedBracketingEnabled;
-(int)shallowDepthOfFieldEffectStatus;
-(void)captureStreamDidChangeActiveFormatIndex:(id)arg1 ;
-(void)captureStreamWillStartStreaming:(id)arg1 ;
-(void)captureStreamDidStartStreaming:(id)arg1 ;
-(void)captureStreamWillStopStreaming:(id)arg1 ;
-(void)captureStreamDidStopStreaming:(id)arg1 ;
-(void)captureStream:(id)arg1 willEmitVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)captureStream:(id)arg1 willEmitVideoPreviewSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)captureStream:(id)arg1 willDiscardVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)captureStream:(id)arg1 willEmitDepthSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)captureStream:(id)arg1 willEmitStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromTimeMachine:(BOOL)arg3 ;
-(void)captureStreamDidCompleteStillImageCapture:(id)arg1 ;
-(BOOL)supportsProperty:(CFStringRef)arg1 ;
-(void)setMaximumSupportedFrameRate:(float)arg1 ;
-(float)maximumSupportedFrameRate;
-(void)setMinimumSupportedFrameRate:(float)arg1 ;
-(float)minimumSupportedFrameRate;
-(void)setUnifiedBracketingEnabled:(BOOL)arg1 ;
-(void)setMaxExposureDurationClientOverride:(SCD_Struct_BW2)arg1 ;
-(int)cameraModeForGyroCalibration;
-(void)setStereoFusionEnabled:(BOOL)arg1 ;
-(void)setBravoDualPhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setQuadraHighResStillImageCaptureEnabled:(BOOL)arg1 ;
-(void)setShallowDepthOfFieldEffectEnabled:(BOOL)arg1 ;
-(void)setStillImageISPMultiBandNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setFocusPixelsEnabled:(BOOL)arg1 ;
-(void)setRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)setStillImageFocusPixelDisparityEnabled:(BOOL)arg1 ;
-(void)setSensorRegionOfInterestForCameraControls:(CGRect)arg1 ;
-(void)setWideCaptureStreamAsStatsMasterPreferred:(BOOL)arg1 ;
-(void)setZeroShutterLagTimeMachineBufferCapacity:(int)arg1 ;
-(BOOL)isStillImageISPChromaNoiseReductionEnabled;
-(void)setSmartCameraEnabled:(BOOL)arg1 ;
-(BOOL)quadraHighResStillImageCaptureEnabled;
-(void)initiateCaptureStillImageNowWithPTS:(SCD_Struct_BW2)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getCurrentVideoFrameStatistics:(SCD_Struct_BW112*)arg1 ;
-(int)stillImageFusionScheme;
-(id)unifiedBracketingStillImageCaptureSettingsWithID:(long long)arg1 frameStatistics:(SCD_Struct_BW112*)arg2 flashMode:(int)arg3 autoRedEyeReductionEnabled:(BOOL)arg4 hdrMode:(int)arg5 sisMode:(int)arg6 burstQualityCaptureEnabled:(BOOL)arg7 deliverProcessedImage:(BOOL)arg8 deliverOriginalImage:(BOOL)arg9 deliverSushiRaw:(BOOL)arg10 deliverBravoDualPhoto:(BOOL)arg11 deliverDepthData:(BOOL)arg12 includePreBracketedEV0ForProcessing:(BOOL)arg13 clientBracketSettings:(id)arg14 userInitiatedRequestPTS:(SCD_Struct_BW2)arg15 ;
-(int)resolveStillImageCaptureTypeFromStatistics:(SCD_Struct_BW112*)arg1 flashMode:(int)arg2 hdrMode:(int)arg3 sisMode:(int)arg4 stereoFusionMode:(int)arg5 depthDataDeliveryEnabled:(BOOL)arg6 bravoDualPhotoDeliveryEnabled:(BOOL)arg7 burstQualityCaptureEnabled:(BOOL)arg8 clientBracketMode:(int)arg9 forSceneMonitoring:(BOOL)arg10 captureFlags:(unsigned long long*)arg11 ;
-(id)_stillImageDispatchQueue;
-(void)setAlternateOutputSizeAndCrop:(id)arg1 ;
-(void)setSmartCameraVersion:(SCD_Struct_BW84)arg1 ;
-(void)updateSmartCameraStreamPropertiesWithInferenceResult:(id)arg1 ;
-(BOOL)dualStreamStillImageCaptureEnabled;
-(id)masterCaptureStream;
-(BOOL)redEyeReductionEnabled;
-(BOOL)stillImageOutputRequiredForPearlCalibration;
-(int)bravoStreamSelectionBehavior;
-(float)parallaxMitigationStrength;
-(BOOL)stillImageFocusPixelDisparityEnabled;
-(void)setStillImageFusionScheme:(int)arg1 ;
-(BOOL)shallowDepthOfFieldEffectEnabled;
-(BOOL)attachesUprightExifOrientationMetadataToStreamingFrames;
-(void)setAttachesUprightExifOrientationMetadataToStreamingFrames:(BOOL)arg1 ;
-(BOOL)supportsGNRHDR;
-(void)setStillImageISPChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setStillImageGNRHDREnabled:(BOOL)arg1 ;
-(void)setDeviceReleaseBehavior:(int)arg1 ;
-(void)setAutoFocusSensorCalibrationData:(id)arg1 ;
-(void)setDepthMaxFrameRate:(float)arg1 ;
-(int)setStillImageSceneMonitoringFlashMode:(int)arg1 hdrMode:(int)arg2 sisMode:(int)arg3 ;
-(void)setStillImageStabilizationSceneDetectionEnabled:(BOOL)arg1 ;
-(void)performBlockOnNotificationQueue:(/*^block*/id)arg1 ;
-(void)shutDownSystemPressuredDevice;
-(BOOL)isFlashScene;
-(BOOL)isHDRScene;
-(BOOL)isSISScene;
-(id)_initWithFigCaptureDeviceRef:(OpaqueFigCaptureDeviceRef)arg1 attributes:(id)arg2 synchronizedStreamsAttributes:(id)arg3 forPID:(int)arg4 applicationID:(id)arg5 createAutofocusSampleBufferProcessorFunction:(/*function pointer*/void*)arg6 cameraParameters:(id)arg7 deviceVendorClass:(id)arg8 errOut:(int*)arg9 ;
-(void)_updateSlaveFrameRateForZoomFactor:(float)arg1 ;
-(void)_updateImageControlModeStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateExposureStateForAutofocusProperty:(CFStringRef)arg1 ;
-(void)_updateWhiteBalanceStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateFaceDetectionStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(int)_copyAutofocusProcessorPropertyInternal:(CFStringRef)arg1 propertyValueOut:(void*)arg2 ;
-(int)_setAutofocusProcessorPropertyInternal:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateBravoSwitchOverStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateSDOFFocusStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_setNewAlternateOutputSizeAndCropOnStream;
-(void)_deviceWillStartStreaming;
-(void)_updateSDOFEffectStatus:(int)arg1 newStagePreviewStatus:(int)arg2 ;
-(void)_updateStreamingForegroundSegmentationNetworkUsingStage:(BOOL)arg1 ;
-(void)_deviceDidStopStreaming;
-(void)_addExifMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addLensMakersFocusDistanceMetadata:(opaqueCMSampleBufferRef)arg1 captureStream:(id)arg2 ;
-(void)_serviceBravoStreamSelectionWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 fromCaptureStream:(id)arg2 frameStatistics:(SCD_Struct_BW112*)arg3 ;
-(void)_serviceSDOFSceneMonitoringWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameStatistics:(SCD_Struct_BW112*)arg2 flashModeForSceneMonitoring:(int)arg3 hdrModeForSceneMonitoring:(int)arg4 sisModeForSceneMonitoring:(int)arg5 ;
-(void)_checkAPSOffsetEstimatorInfo:(opaqueCMSampleBufferRef)arg1 ;
-(void)_collectAPSStatistics:(opaqueCMSampleBufferRef)arg1 ;
-(void)_checkCriticalFocusError:(opaqueCMSampleBufferRef)arg1 ;
-(void)_checkSphereJitterDetection:(opaqueCMSampleBufferRef)arg1 ;
-(void)_serviceRetryStillImageCaptureUsingFrameStatistics:(SCD_Struct_BW112*)arg1 ;
-(void)_addCoreMediaMetadataAttachmentsToStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 fromTimeMachine:(BOOL)arg2 ;
-(void)_resetStillImageCaptureRequestState;
-(void)_ubUpdateSIFREnabled;
-(int)_setupAutofocusSampleBufferProcessor;
-(void)_setupStillImageCaptureStateMachine;
-(int)_setupFeature1SampleBufferProcessor;
-(void)_setISPZoomFactorSynchronously:(float)arg1 ;
-(int)_setMinimumMasterToSlaveFrameRateRatio:(int)arg1 ;
-(void)_updateBravoStreamSelectionBehaviorForMasterStream:(id)arg1 forceNotification:(BOOL)arg2 ;
-(void)_updateSensorRegionOfInterestForCameraControlsBasedOnZoomFactor:(float)arg1 ;
-(void)_teardownAutoFocusSampleBufferProcessor;
-(void)_teardownFeature1SampleBufferProcessor;
-(void)_reportStreamingSessionCoreAnalyticsData;
-(void)_postManualControlRequestCompletedWithName:(id)arg1 requestID:(int)arg2 timeDictionary:(id)arg3 additionalPayloadItems:(id)arg4 ;
-(id)_zeroShutterLagStillImageCaptureSettingsWithID:(long long)arg1 captureType:(int)arg2 deliverProcessedImage:(BOOL)arg3 deliverOriginalImage:(BOOL)arg4 deliverSushiRaw:(BOOL)arg5 deliverBravoDualPhoto:(BOOL)arg6 includePreBracketedEV0ForProcessing:(BOOL)arg7 clientBracketSettings:(id)arg8 captureFlags:(unsigned long long)arg9 userInitiatedRequestPTS:(SCD_Struct_BW2)arg10 captureStreams:(int)arg11 ;
-(BOOL)_smartCameraPreCaptureReferenceFrameSelectionIsSupportedForCaptureType:(int)arg1 ;
-(SCD_Struct_BW2)_zeroShutterLagPTSFromUserInitiatedRequestPTS:(SCD_Struct_BW2)arg1 ;
-(int)_timeMachineFrameCountForCaptureType:(int)arg1 captureFlags:(unsigned long long)arg2 captureStreams:(int)arg3 telephotoHasSphere:(BOOL)arg4 ;
-(BOOL)_tryZeroShutterLagReferenceFrameSelectionWithZeroShutterLagPTS:(SCD_Struct_BW2)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 framesMetadata:(id)arg4 frameCount:(int)arg5 referenceFrameBracketedCaptureSequenceNumberOut:(int*)arg6 preferredPTSOut:(SCD_Struct_BW2*)arg7 selectedFramesRangeOut:(NSRange*)arg8 haveSmartCameraReferenceFrameOut:(BOOL*)arg9 ;
-(void)_resumeTimeMachines;
-(BOOL)_validateTimeMachineFramesUsingPreviewFramesMetadata:(id)arg1 ;
-(void)_runSmartCameraReferenceFrameSelectionOnSampleBuffersIfNeeded:(id)arg1 userInitiatedRequestPTS:(SCD_Struct_BW2)arg2 sensorToPreviewNormalizedTransform:(CGAffineTransform)arg3 ;
-(void)_suspendTimeMachineWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_initiateCaptureStillImageNowWithPTS:(SCD_Struct_BW2)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_servicePendingStillImageCaptureRequest;
-(void)_captureStillImageNowWithSettings:(id)arg1 ;
-(void)_stillImageCaptureStateMachineDidTransitionToInProgress;
-(int)_stillImageSceneTypeForFrameStatistics:(SCD_Struct_BW112*)arg1 flashMode:(int)arg2 hdrMode:(int)arg3 sisMode:(int)arg4 sceneFlags:(unsigned long long*)arg5 ;
-(unsigned long long)_ubStillImageSceneFlagsFromStatistics:(SCD_Struct_BW112*)arg1 fusionEnabled:(BOOL)arg2 metadata:(id)arg3 ;
-(BOOL)_ubIsFlashAvailable;
-(BOOL)_ubIsHDRCaptureUsingSceneFlags:(unsigned long long)arg1 ;
-(BOOL)_shouldUseSphereForStillImageCaptureTakingLowLightIntoAccount:(BOOL)arg1 deviceMotionActivity:(BOOL)arg2 ;
-(void)_convertNoiseReductionAndSharpeningConfiguration:(id)arg1 toStillImageCaptureOptions:(id)arg2 captureStreamSettings:(id)arg3 forMasterStream:(BOOL)arg4 isBurstCapture:(BOOL)arg5 ;
-(int)_convertStillImageCaptureSettings:(id)arg1 masterCaptureStreamPortType:(id)arg2 synchronizedStreamsEnabled:(BOOL)arg3 toStillImageCaptureNowOptions:(id*)arg4 captureStreamPropertyValues:(id*)arg5 ;
-(unsigned)_stillImageCaptureInProgressSubstateForFrameStatistics:(SCD_Struct_BW112*)arg1 captureType:(int)arg2 masterCaptureStreamPortType:(id)arg3 stereoFusionCapture:(BOOL)arg4 ;
-(int)_captureStillImageNowOnStreamWithOptions:(id)arg1 captureStreamProperties:(id)arg2 ;
-(void)_logStillImageCaptureTimingStatistics;
-(void)_terminateCaptureAndEmitStillImageCaptureError:(int)arg1 stillImageCaptureNowOptions:(id)arg2 stillImageCaptureStreamProperties:(id)arg3 ;
-(void)_addStillImageSettingsToStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addAutofocusAndDiagnosticMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addFeature1ToMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addPortraitSceneMonitoringMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setAutofocusProcessorProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(int)_setExposureModeAutoWithRect:(CGRect)arg1 ;
-(int)_setAutofocusProcessorImageControlModeProperty:(int)arg1 ;
-(int)_currentStillImageSceneTypeForcingFlashSceneDetectionEnabled:(BOOL)arg1 forcingHDRSceneDetectionEnabled:(BOOL)arg2 forcingSISSceneDetectionEnabled:(BOOL)arg3 ;
-(void)_setNewISPZoomFactorOnStream;
-(int)_updateAutoFocusRectIfNeededForZoomFactor:(float)arg1 ;
-(int)_captureTypeOverride;
-(int)_ubResolveStillImageCaptureTypeFromSceneFlags:(unsigned long long)arg1 flashMode:(int)arg2 hdrMode:(int)arg3 sisMode:(int)arg4 clientBracket:(BOOL)arg5 ;
-(unsigned long long)_ubResolveStillImageCaptureFlagsForCaptureType:(int)arg1 sceneFlags:(unsigned long long)arg2 frameStatistics:(SCD_Struct_BW112*)arg3 hdrMode:(int)arg4 autoRedEyeReductionEnabled:(BOOL)arg5 burstQualityCaptureEnabled:(BOOL)arg6 depthDataDeliveryEnabled:(BOOL)arg7 bravoDualPhotoDeliveryEnabled:(BOOL)arg8 ;
-(id)_ubStillImageCaptureSettingsWithID:(long long)arg1 userInitiatedRequestPTS:(SCD_Struct_BW2)arg2 captureType:(int)arg3 captureFlags:(unsigned long long)arg4 sceneFlags:(unsigned long long)arg5 deliverProcessedImage:(BOOL)arg6 deliverOriginalImage:(BOOL)arg7 deliverSushiRaw:(BOOL)arg8 deliverBravoDualPhoto:(BOOL)arg9 ;
-(int)_copyAutofocusProcessorProperty:(CFStringRef)arg1 propertyValueOut:(void*)arg2 ;
-(id)_ubSuspendTimeMachinesAndGetTimeMachineFramesMetadata;
-(BOOL)_ubCBAFScanInProgressUsingFrameStatistics:(SCD_Struct_BW112*)arg1 timeMachineFramesMetadata:(id)arg2 ;
-(BOOL)_ubIsTimeMachineFramesUsableForHDRUsingTimeMachineFramesMetadata:(id)arg1 ;
-(BOOL)_ubUseSquareRootToneCurveForNonHDRCapturesUsingFrameStatistics:(SCD_Struct_BW112*)arg1 sceneFlags:(unsigned long long)arg2 ;
-(BOOL)_ubGenerateDisparityFromReferenceFramesUsingSceneFlags:(unsigned long long)arg1 captureFlags:(unsigned long long)arg2 ;
-(id)_noiseReductionAndSharpeningConfigurationFromTuningParameters:(id)arg1 ;
-(BOOL)_ubIsCBAFFocusingMethod:(int)arg1 ;
-(BOOL)_isLowLightSceneUsingFrameStatistics:(SCD_Struct_BW112*)arg1 ;
-(int)_bravoCameraForOISOrSISCaptureType:(int)arg1 stereoFusionMode:(int)arg2 frameStatistics:(SCD_Struct_BW112*)arg3 zoomFactor:(float)arg4 stereoFusionLowerBoundZoomFactor:(float)arg5 stereoFusionUpperBoundZoomFactor:(float)arg6 ;
-(BOOL)_currentSceneAllowsMotionFreezing:(id)arg1 ;
-(void)_postSDOFEffectStatus:(int)arg1 SDOFStagePreviewStatus:(int)arg2 ;
-(BWFreezeMotionEvaluation)_evaluateSceneForMotionFreezingWithMasterStreamSwitchoverSuspended:(BOOL)arg1 resultOut:(id*)arg2 ;
-(void)_fillOutSmartCameraDiagnostics:(id)arg1 usingSmartCameraResult:(id)arg2 ;
-(id)_captureStreamForFaceDetectionWithMasterStreamSwitchoverSuspended:(BOOL)arg1 ;
-(void)_checkAPSOffsetEstimatorInfoForPortType:(id)arg1 metadataDict:(id)arg2 ;
-(void)_postNotificationWithName:(id)arg1 payloadNewPropertyValue:(id)arg2 ;
-(void)_servicePropertyChangeNotifications:(opaqueCMSampleBufferRef)arg1 ;
-(void)_serviceCompletedRequestNotifications:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)stillImageGNRHDREnabled;
-(BOOL)isStillImageISPMultiBandNoiseReductionEnabled;
-(CGRect)sensorRegionOfInterestForCameraControls;
-(BOOL)focusPixelsEnabled;
-(void)_serviceAutoTorchNotification:(SCD_Struct_BW112*)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(BOOL)wideCaptureStreamAsStatsMasterPreferred;
-(float)depthMaxFrameRate;
-(int)shallowDepthOfFieldStagePreviewStatus;
-(void)updateSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(BOOL)arg7 faces:(id)arg8 ;
-(void)updatePortraitSceneMonitoringRequiresStageThresholds:(BOOL)arg1 ;
-(BOOL)stereoFusionEnabled;
-(id)previewTimeMachineProcessor;
-(id)smartCameraStatus;
-(id)lastStillCaptureStatus;
-(id)lastStillScene;
-(id)filteredBrightStageSceneConfidence;
-(id)filteredSunsetSunriseSceneConfidence;
-(id)filteredPetSceneConfidence;
-(id)filteredBabySceneConfidence;
-(int)zeroShutterLagTimeMachineBufferCapacity;
-(OpaqueFigSampleBufferProcessorRef)_autofocusProcessor;
-(int)deviceReleaseBehavior;
-(void)dealloc;
-(int)position;
-(id)orientation;
@end

