/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureStillImageOutputInternal, NSDictionary, NSArray;

@interface AVCaptureStillImageOutput : AVCaptureOutput {

	AVCaptureStillImageOutputInternal* _internal;

}

@property (nonatomic,copy) NSDictionary * outputSettings; 
@property (nonatomic,readonly) NSArray * availableImageDataCVPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availableImageDataCodecTypes; 
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) BOOL stillImageStabilizationSupported; 
@property (assign,nonatomic) BOOL automaticallyEnablesStillImageStabilizationWhenAvailable; 
@property (getter=isStillImageStabilizationActive,nonatomic,readonly) BOOL stillImageStabilizationActive; 
@property (assign,getter=isHighResolutionStillImageOutputEnabled,nonatomic) BOOL highResolutionStillImageOutputEnabled; 
@property (getter=isCapturingStillImage,readonly) BOOL capturingStillImage; 
+(CFDictionaryRef)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(unsigned long long)maxStillImageJPEGDataSize;
+(id)jpegStillImageNSDataRepresentation:(opaqueCMSampleBufferRef)arg1 ;
+(id)jpegStillImageNSDataRepresentationForSurface:(IOSurfaceRef)arg1 size:(unsigned long long)arg2 metadata:(id)arg3 ;
+(void)initialize;
+(id)new;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(void)setNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(BOOL)squareCropEnabled;
-(unsigned)shutterSound;
-(long long)HDRMode;
-(BOOL)isStillImageStabilizationSupported;
-(BOOL)isHDRSupported;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnectionForMediaType:(id)arg1 ;
-(BOOL)isHighResolutionStillImageOutputEnabled;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(CGSize)previewImageSize;
-(unsigned)imageDataFormatType;
-(void)updateSISSupportedForSourceDevice:(id)arg1 ;
-(BOOL)automaticallyEnablesStillImageStabilizationWhenAvailable;
-(void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg1 ;
-(void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg1 ;
-(NSArray *)availableImageDataCVPixelFormatTypes;
-(NSArray *)availableImageDataCodecTypes;
-(void)clearPreparedBracketIfNeeded;
-(BOOL)isRawCaptureEnabled;
-(BOOL)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
-(BOOL)isRawCaptureSupported;
-(id)_figCaptureStillImageSettingsForConnection:(id)arg1 ;
-(BOOL)isLensStabilizationDuringBracketedCaptureSupported;
-(unsigned long long)maxBracketedCaptureStillImageCount;
-(BOOL)_bracketedSettingsAreValid:(id)arg1 fromConnection:(id)arg2 exceptionReason:(id*)arg3 ;
-(id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg1 fromConnection:(id)arg2 ;
-(BOOL)_preparedForBracketedCaptureWithSettings:(id)arg1 ;
-(BOOL)isLensStabilizationDuringBracketedCaptureEnabled;
-(void)handleNotificationForRequest:(id)arg1 withPayload:(id)arg2 imageIsEV0:(BOOL*)arg3 ;
-(void)handleNotificationForPrepareRequest:(id)arg1 withPayload:(id)arg2 ;
-(void)setPreviewImageSize:(CGSize)arg1 ;
-(BOOL)isEV0CaptureEnabled;
-(void)setEV0CaptureEnabled:(BOOL)arg1 ;
-(BOOL)isStillImageStabilizationActive;
-(void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(BOOL)arg1 ;
-(void)setHighResolutionStillImageOutputEnabled:(BOOL)arg1 ;
-(BOOL)isNoiseReductionEnabled;
-(void)setRawCaptureEnabled:(BOOL)arg1 ;
-(BOOL)suspendsVideoProcessingDuringStillImageCapture;
-(void)setSuspendsVideoProcessingDuringStillImageCapture:(BOOL)arg1 ;
-(BOOL)resumeVideoProcessing;
-(BOOL)isCapturingStillImage;
-(id)firstActiveConnection;
-(void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLensStabilizationDuringBracketedCaptureEnabled:(BOOL)arg1 ;
-(void)prepareToCaptureStillImageBracketFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setOutputSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)outputSettings;
@end

