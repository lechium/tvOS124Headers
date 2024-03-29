/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, FigCapturePixelConverter, NSDictionary;

@interface BWPhotoEncoderNode : BWNode {

	NSObject*<OS_dispatch_queue> _previewGenerationQueue;
	NSObject*<OS_dispatch_queue> _prewarmQueue;
	NSObject*<OS_dispatch_group> _previewGenerationGroup;
	FigCapturePixelConverter* _previewPixelConverter;
	FigCapturePixelConverter* _thumbnailPixelConverter;
	FigCapturePixelConverter* _clientThumbnailPixelConverter;
	SCD_Struct_BW13 _sourceVideoDimensions;
	BOOL _cameraSupportsFlash;
	BOOL _zeroShutterLagEnabled;
	FigPhotoCompressionSessionRef _compressionSession;
	FigCapturePixelConverter* _jpegPixelConverter;
	BOOL _croppingEnabled;
	NSDictionary* _inputColorInfo;
	BOOL _stillDuringVideoRecording;
	unsigned long long _heifThumbnailMaxPixelSize;
	float _heifQualityOverride;
	BOOL _heifEmbedThumb;
	BOOL _heifForceCABAC;
	BOOL _heifForceHEVC;
	BOOL _heifUseTiling;
	int _heifTileWidth;
	int _heifTileHeight;
	long long _prewarmedSettingsID;
	BOOL _allowHEIFPrewarming;
	BOOL _prewarmingOngoing;
	float _segmentationDownscalingFactor;
	void* _prewarmQueueID;

}
+(CGRect)_cropRectForSampleBuffer:(opaqueCMSampleBufferRef)arg1 requestedStillImageCaptureSettings:(id)arg2 whenEnabled:(BOOL)arg3 ;
+(void)_updateMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 whenCroppingEnabled:(BOOL)arg3 ;
+(BOOL)_croppingRequiredForSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 whenEnabled:(BOOL)arg3 ;
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(BOOL)zeroShutterLagEnabled;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 resolvedPhotoManifest:(id)arg3 forInput:(id)arg4 ;
-(void)setCameraSupportsFlash:(BOOL)arg1 ;
-(BOOL)cameraSupportsFlash;
-(id)initWithPersonSegmentationEnabled:(BOOL)arg1 ;
-(void)setInputColorInfo:(id)arg1 ;
-(void)setCroppingEnabled:(BOOL)arg1 ;
-(void)setSourceVideoDimensions:(SCD_Struct_BW13)arg1 ;
-(void)setSegmentationDownscalingFactor:(float)arg1 ;
-(void)setStillDuringVideoRecording:(BOOL)arg1 ;
-(int)_generatePreviewForSampleBuffer:(opaqueCMSampleBufferRef)arg1 requestedStillImageCaptureSettings:(id)arg2 cropRect:(CGRect)arg3 previewPixelBuffer:(_CVBuffer*)arg4 ;
-(int)_getColorSpacePropertiesForSourcePixelFormat:(unsigned)arg1 destinationPixelFormat:(unsigned)arg2 ;
-(int)_scaleInputPixelBuffer:(CVBufferRef)arg1 toDimensions:(SCD_Struct_BW13)arg2 colorSpaceProperties:(int)arg3 cropRect:(CGRect)arg4 pixelConverter:(id)arg5 poolCapacity:(int)arg6 thumbnailPixelBuffer:(_CVBuffer*)arg7 ;
-(int)_encodePhotoForPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 thumbnailOptions:(id)arg3 requestedStillImageCaptureSettings:(id)arg4 resolvedStillImageCaptureSettings:(id)arg5 cropRect:(CGRect)arg6 outputSurfaceImageSize:(CGSize*)arg7 ;
-(int)_addThumbnailFromBuffer:(CVBufferRef)arg1 metadata:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 cropRect:(CGRect)arg5 codecType:(unsigned)arg6 maxPixelSize:(unsigned long long)arg7 ;
-(id)_thumbnailOptionsForImageWithMetadata:(id)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 cropRect:(CGRect)arg4 codecType:(unsigned)arg5 maxPixelSize:(unsigned long long)arg6 ;
-(void)_addDepthFromSampleBufferIfAvailable:(opaqueCMSampleBufferRef)arg1 ;
-(int)_addPortraitEffectsMatteFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_addMetadataFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 ;
-(IOSurfaceRef)_closeContainerAndCopySurfaceWithSurfaceSize:(unsigned long long*)arg1 ;
-(void)_addQualityOptionsToDictionary:(id)arg1 pixelBuffer:(CVBufferRef)arg2 metadata:(id)arg3 requestedStillImageCaptureSettings:(id)arg4 resolvedStillImageCaptureSettings:(id)arg5 forMainImage:(BOOL)arg6 ;
-(id)_depthEncodingOptionsFromDepthMetadata:(id)arg1 pixelFormat:(unsigned)arg2 ;
-(id)_encodingOptionsForAuxiliaryImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelBufferAttributes:(id)arg3 ;
-(int)_defaultJPEGIndexedQTableForPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 captureType:(int)arg3 quantizationTableIndexOut:(int*)arg4 isHighGainImageOut:(BOOL*)arg5 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromDepthMetadata:(id)arg1 ;
-(int)_addValue:(id)arg1 toAuxiliaryImageProperties:(CGImageMetadataRef)arg2 namespace:(CFStringRef)arg3 prefix:(CFStringRef)arg4 key:(CFStringRef)arg5 ;
-(id)_arrayInColumnMajorOrderFrom3x3MatrixData:(SCD_Struct_Fi18)arg1 ;
-(id)_arrayInColumnMajorOrderFrom3x4MatrixData:(SCD_Struct_BW48)arg1 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromPortraitEffectsMatteMetadata:(id)arg1 ;
-(id)_transcodeQualityHintFromQuantizationTableIndex:(int)arg1 ;
-(BOOL)croppingEnabled;
-(id)inputColorInfo;
-(SCD_Struct_BW13)sourceVideoDimensions;
-(BOOL)stillDuringVideoRecording;
-(float)segmentationDownscalingFactor;
-(void)dealloc;
-(id)nodeType;
@end

