/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCapturePhotoInternal, AVPortraitEffectsMatte, NSDictionary, AVDepthData, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings, NSString;

@interface AVCapturePhoto : NSObject {

	AVCapturePhotoInternal* _internal;
	AVPortraitEffectsMatte* _portraitEffectsMatte;

}

@property (readonly) SCD_Struct_AV5 timestamp; 
@property (getter=isRawPhoto,readonly) BOOL rawPhoto; 
@property (readonly) CVBufferRef pixelBuffer; 
@property (readonly) CVBufferRef previewPixelBuffer; 
@property (readonly) NSDictionary * embeddedThumbnailPhotoFormat; 
@property (readonly) AVDepthData * depthData; 
@property (readonly) AVPortraitEffectsMatte * portraitEffectsMatte;                  //@synthesize portraitEffectsMatte=_portraitEffectsMatte - In the implementation block
@property (readonly) NSDictionary * metadata; 
@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
@property (readonly) AVCaptureResolvedPhotoSettings * resolvedSettings; 
@property (readonly) long long photoCount; 
@property (readonly) NSString * sourceDeviceType; 
-(CVBufferRef)pixelBuffer;
-(id)bracketSettings;
-(AVCaptureResolvedPhotoSettings *)resolvedSettings;
-(id)livePhotoMovieFileURL;
-(NSDictionary *)embeddedThumbnailPhotoFormat;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(AVDepthData *)depthData;
-(CVBufferRef)previewPixelBuffer;
-(BOOL)isRawPhoto;
-(long long)sequenceCount;
-(long long)photoCount;
-(NSString *)sourceDeviceType;
-(unsigned)expectedPhotoProcessingFlags;
-(unsigned)actualPhotoProcessingFlags;
-(id)portraitMetadata;
-(long long)lensStabilizationStatus;
-(id)_fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(CVBufferRef)arg3 replacementDepthData:(id)arg4 exceptionReason:(id*)arg5 ;
-(id)fileDataRepresentation;
-(CVBufferRef)_embeddedThumbnailSourcePixelBuffer;
-(id)initWithTimestamp:(SCD_Struct_AV5)arg1 photoSurface:(IOSurfaceRef)arg2 photoSurfaceSize:(unsigned long long)arg3 previewPhotoSurface:(IOSurfaceRef)arg4 embeddedThumbnailSourceSurface:(IOSurfaceRef)arg5 metadata:(id)arg6 depthDataSurface:(IOSurfaceRef)arg7 depthMetadataDictionary:(id)arg8 captureRequest:(id)arg9 bracketSettings:(id)arg10 sequenceCount:(unsigned long long)arg11 photoCount:(unsigned long long)arg12 expectedPhotoProcessingFlags:(unsigned)arg13 sourceDeviceType:(id)arg14 ;
-(id)fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(CVBufferRef)arg3 replacementDepthData:(id)arg4 ;
-(id)fileDataRepresentationWithCustomizer:(id)arg1 ;
-(CGImageRef)CGImageRepresentation;
-(CGImageRef)previewCGImageRepresentation;
-(unsigned)photoProcessingFlags;
-(AVPortraitEffectsMatte *)portraitEffectsMatte;
-(NSDictionary *)metadata;
-(unsigned)_orientation;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(SCD_Struct_AV5)timestamp;
@end

