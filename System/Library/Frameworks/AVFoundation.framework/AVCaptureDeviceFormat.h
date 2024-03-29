/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureDeviceFormatInternal, NSString, NSArray;

@interface AVCaptureDeviceFormat : NSObject {

	AVCaptureDeviceFormatInternal* _internal;

}

@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) const opaqueCMFormatDescriptionRef formatDescription; 
@property (nonatomic,readonly) NSArray * videoSupportedFrameRateRanges; 
@property (nonatomic,readonly) float videoFieldOfView; 
@property (getter=isVideoBinned,nonatomic,readonly) BOOL videoBinned; 
@property (getter=isVideoStabilizationSupported,nonatomic,readonly) BOOL videoStabilizationSupported; 
@property (nonatomic,readonly) double videoMaxZoomFactor; 
@property (nonatomic,readonly) double videoZoomFactorUpscaleThreshold; 
@property (nonatomic,readonly) SCD_Struct_AV5 minExposureDuration; 
@property (nonatomic,readonly) SCD_Struct_AV5 maxExposureDuration; 
@property (nonatomic,readonly) float minISO; 
@property (nonatomic,readonly) float maxISO; 
@property (getter=isVideoHDRSupported,nonatomic,readonly) BOOL videoHDRSupported; 
@property (nonatomic,readonly) SCD_Struct_AV39 highResolutionStillImageDimensions; 
@property (nonatomic,readonly) long long autoFocusSystem; 
@property (nonatomic,readonly) NSArray * supportedColorSpaces; 
@property (nonatomic,readonly) double videoMinZoomFactorForDepthDataDelivery; 
@property (nonatomic,readonly) double videoMaxZoomFactorForDepthDataDelivery; 
@property (nonatomic,readonly) NSArray * supportedDepthDataFormats; 
@property (nonatomic,readonly) NSArray * unsupportedCaptureOutputClasses; 
+(void)initialize;
-(SCD_Struct_AV39)sensorDimensions;
-(const opaqueCMFormatDescriptionRef)formatDescription;
-(id)AVCaptureSessionPresets;
-(SCD_Struct_AV39)previewDimensions;
-(BOOL)isPhotoFormat;
-(int)rawBitDepth;
-(SCD_Struct_AV5)maxExposureDuration;
-(BOOL)isStereoFusionSupported;
-(long long)autoFocusSystem;
-(BOOL)isDefaultActiveFormat;
-(BOOL)isExperimental;
-(float)minISO;
-(BOOL)isHighResPhotoFormat;
-(NSArray *)supportedColorSpaces;
-(float)maxISO;
-(SCD_Struct_AV5)minExposureDuration;
-(BOOL)isIrisSupported;
-(BOOL)isIrisVideoStabilizationSupported;
-(BOOL)isWideColorSupported;
-(unsigned)supportedRawPixelFormat;
-(BOOL)isStreamingDisparitySupported;
-(BOOL)isStreamingDepthSupported;
-(BOOL)isStillImageDisparitySupported;
-(BOOL)isStillImageDepthSupported;
-(NSArray *)supportedDepthDataFormats;
-(BOOL)isVideoStabilizationModeSupported:(long long)arg1 ;
-(SCD_Struct_AV5)lowestSupportedVideoFrameDuration;
-(SCD_Struct_AV5)highestSupportedVideoFrameDuration;
-(SCD_Struct_AV5)defaultActiveMinFrameDuration;
-(SCD_Struct_AV5)defaultActiveMaxFrameDuration;
-(BOOL)supportsQuadraHighResolutionStillImageOutput;
-(double)videoMaxZoomFactor;
-(double)videoMinZoomFactorForDepthDataDelivery;
-(double)videoMaxZoomFactorForDepthDataDelivery;
-(BOOL)isVideoHDRSupported;
-(id)initWithFigCaptureSourceFormat:(id)arg1 ;
-(BOOL)isSISSupported;
-(id)figCaptureSourceVideoFormat;
-(id)figCaptureSourceDepthDataFormat;
-(id)vtScalingMode;
-(BOOL)supportsHighProfileH264;
-(BOOL)prefersVideoHDREnabledForSessionPreset:(id)arg1 ;
-(NSArray *)unsupportedCaptureOutputClasses;
-(BOOL)supportsHighResolutionStillImageOutput;
-(SCD_Struct_AV39)highResolutionStillImageDimensions;
-(id)optimizedVideoPreviewFilterNames;
-(float)videoFieldOfView;
-(int)supportedStabilizationMethod;
-(double)videoZoomFactorUpscaleThreshold;
-(id)_stringForMediaType:(unsigned)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 frameRateRanges:(id)arg3 ;
-(BOOL)supportsDynamicCrop;
-(long long)videoHDRFlavor;
-(id)videoZoomSupportedDownscaleStages;
-(id)videoZoomSupportedUpscaleStages;
-(BOOL)needsPhotoPreviewDPCC;
-(int)supportedFormatsArrayIndex;
-(id)optimizedPhotoFilterNames;
-(NSString *)mediaType;
-(BOOL)isVideoBinned;
-(NSArray *)videoSupportedFrameRateRanges;
-(BOOL)isVideoStabilizationSupported;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
@end

