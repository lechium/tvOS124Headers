/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureConnectionInternal, NSArray, AVCaptureOutput, AVCaptureVideoPreviewLayer;

@interface AVCaptureConnection : NSObject {

	AVCaptureConnectionInternal* _internal;
	BOOL _supportsVideoFieldMode;
	long long _videoFieldMode;

}

@property (nonatomic,readonly) NSArray * inputPorts; 
@property (nonatomic,readonly) AVCaptureOutput * output; 
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) NSArray * audioChannels; 
@property (getter=isVideoMirroringSupported,nonatomic,readonly) BOOL supportsVideoMirroring; 
@property (assign,getter=isVideoMirrored,nonatomic) BOOL videoMirrored; 
@property (assign,nonatomic) BOOL automaticallyAdjustsVideoMirroring; 
@property (getter=isVideoOrientationSupported,nonatomic,readonly) BOOL supportsVideoOrientation; 
@property (assign,nonatomic) long long videoOrientation; 
@property (getter=isVideoFieldModeSupported,nonatomic,readonly) BOOL supportsVideoFieldMode;                                             //@synthesize supportsVideoFieldMode=_supportsVideoFieldMode - In the implementation block
@property (assign,nonatomic) long long videoFieldMode;                                                                                   //@synthesize videoFieldMode=_videoFieldMode - In the implementation block
@property (getter=isVideoMinFrameDurationSupported,nonatomic,readonly) BOOL supportsVideoMinFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV5 videoMinFrameDuration; 
@property (getter=isVideoMaxFrameDurationSupported,nonatomic,readonly) BOOL supportsVideoMaxFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV5 videoMaxFrameDuration; 
@property (nonatomic,readonly) double videoMaxScaleAndCropFactor; 
@property (assign,nonatomic) double videoScaleAndCropFactor; 
@property (assign,nonatomic) long long preferredVideoStabilizationMode; 
@property (nonatomic,readonly) long long activeVideoStabilizationMode; 
@property (getter=isVideoStabilizationSupported,nonatomic,readonly) BOOL supportsVideoStabilization; 
@property (getter=isVideoStabilizationEnabled,nonatomic,readonly) BOOL videoStabilizationEnabled; 
@property (assign,nonatomic) BOOL enablesVideoStabilizationWhenAvailable; 
@property (getter=isCameraIntrinsicMatrixDeliverySupported,nonatomic,readonly) BOOL cameraIntrinsicMatrixDeliverySupported; 
@property (assign,getter=isCameraIntrinsicMatrixDeliveryEnabled,nonatomic) BOOL cameraIntrinsicMatrixDeliveryEnabled; 
+(id)connectionWithInputPorts:(id)arg1 output:(id)arg2 ;
+(id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2 ;
+(void)initialize;
-(void)setCameraIntrinsicMatrixDeliveryEnabled:(BOOL)arg1 ;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(void)setVideoOrientation:(long long)arg1 ;
-(void)setDebugMetadataSidecarFileEnabled:(BOOL)arg1 ;
-(long long)videoOrientation;
-(int)changeSeed;
-(long long)videoFieldMode;
-(void)bumpChangeSeed;
-(float)getAvgAudioLevelForChannel:(id)arg1 ;
-(float)getPeakAudioLevelForChannel:(id)arg1 ;
-(id)sourceDevice;
-(NSArray *)audioChannels;
-(BOOL)automaticallyAdjustsVideoMirroring;
-(SCD_Struct_AV5)videoMinFrameDuration;
-(SCD_Struct_AV5)videoMaxFrameDuration;
-(double)videoMaxScaleAndCropFactor;
-(double)videoScaleAndCropFactor;
-(int)videoRetainedBufferCountHint;
-(long long)preferredVideoStabilizationMode;
-(long long)activeVideoStabilizationMode;
-(id)initWithInputPorts:(id)arg1 output:(id)arg2 ;
-(id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(BOOL)sourcesFromFrontFacingCamera;
-(void)updateAudioChannelsArray;
-(void)setupInternalStorage;
-(void)teardownObservers;
-(void)inputPortFormatDescriptionChanged:(id)arg1 ;
-(void)_updatePropertiesForFormat:(id)arg1 ;
-(void)updateAudioLevelsArray;
-(BOOL)isVideoMirroringSupported;
-(BOOL)isVideoOrientationSupported;
-(SCD_Struct_AV5)_videoMinFrameDuration;
-(void)_setVideoMinFrameDuration:(SCD_Struct_AV5)arg1 ;
-(SCD_Struct_AV5)_videoMaxFrameDuration;
-(void)_updateCameraIntrinsicMatrixDeliverySupported;
-(long long)_resolveActiveVideoStabilizationMode:(long long)arg1 format:(id)arg2 ;
-(void)_updateActiveVideoStabilizationMode:(long long)arg1 bumpChangeSeed:(BOOL)arg2 ;
-(BOOL)isVideoRetainedBufferCountHintSupported;
-(void)_updateMaxScaleAndCropFactorForFormat:(id)arg1 ;
-(void)setupObservers;
-(BOOL)isVideoMirrored;
-(void)_setVideoMirrored:(BOOL)arg1 ;
-(void)setAutomaticallyAdjustsVideoMirroring:(BOOL)arg1 ;
-(BOOL)isVideoMinFrameDurationSupported;
-(BOOL)isVideoMinFrameDurationSet;
-(void)setVideoMinFrameDuration:(SCD_Struct_AV5)arg1 ;
-(BOOL)isVideoMaxFrameDurationSupported;
-(BOOL)isVideoMaxFrameDurationSet;
-(void)setVideoMaxFrameDuration:(SCD_Struct_AV5)arg1 ;
-(void)setVideoScaleAndCropFactor:(double)arg1 ;
-(BOOL)isVideoStabilizationEnabled;
-(BOOL)enablesVideoStabilizationWhenAvailable;
-(void)setPreferredVideoStabilizationMode:(long long)arg1 ;
-(BOOL)isCameraIntrinsicMatrixDeliveryEnabled;
-(void)setVideoRetainedBufferCountHint:(int)arg1 ;
-(BOOL)isDebugMetadataSidecarFileEnabled;
-(id)figCaptureConnectionConfigurationForSessionPreset:(id)arg1 ;
-(BOOL)isVideoFieldModeSupported;
-(void)setVideoFieldMode:(long long)arg1 ;
-(id)session;
-(AVCaptureOutput *)output;
-(id)mediaType;
-(void)_setActive:(BOOL)arg1 ;
-(NSArray *)inputPorts;
-(BOOL)isCameraIntrinsicMatrixDeliverySupported;
-(BOOL)isVideoStabilizationSupported;
-(void)setEnablesVideoStabilizationWhenAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isActive;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isLive;
@end
