/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	int _outputFormat;
	int _outputWidth;
	int _outputHeight;
	int _videoStabilizationMethod;
	BOOL _mirroringEnabled;
	int _orientation;
	int _retainedBufferCount;
	BOOL _cameraIntrinsicMatrixDeliveryEnabled;

}

@property (readonly) BOOL previewDepthFilterRenderingEnabled; 
@property (readonly) BOOL previewDepthDataDeliveryEnabled; 
@property (readonly) BOOL previewFilterRenderingEnabled; 
@property (readonly) BOOL irisVISEnabled; 
@property (readonly) BOOL irisFrameHarvestingEnabled; 
@property (readonly) BOOL irisSDOFEnabled; 
@property (readonly) FigCaptureVideoTransform transform; 
@property (assign,nonatomic) int outputFormat;                                       //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) int outputWidth;                                        //@synthesize outputWidth=_outputWidth - In the implementation block
@property (assign,nonatomic) int outputHeight;                                       //@synthesize outputHeight=_outputHeight - In the implementation block
@property (assign,nonatomic) int videoStabilizationMethod;                           //@synthesize videoStabilizationMethod=_videoStabilizationMethod - In the implementation block
@property (assign,nonatomic) BOOL mirroringEnabled;                                  //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign,nonatomic) int orientation;                                        //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) int retainedBufferCount;                                //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
@property (assign,nonatomic) BOOL cameraIntrinsicMatrixDeliveryEnabled;              //@synthesize cameraIntrinsicMatrixDeliveryEnabled=_cameraIntrinsicMatrixDeliveryEnabled - In the implementation block
+(BOOL)cameraIntrinsicMatrixDeliveryEnabled:(id)arg1 doingFaceTracking:(BOOL)arg2 ;
+(int)videoStabilizationMethod:(id)arg1 ;
-(void)setRetainedBufferCount:(int)arg1 ;
-(void)setOutputFormat:(int)arg1 ;
-(void)setOutputWidth:(int)arg1 ;
-(void)setOutputHeight:(int)arg1 ;
-(int)outputFormat;
-(int)outputWidth;
-(int)outputHeight;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)retainedBufferCount;
-(BOOL)requiresScalingForInputTransForm:(FigCaptureVideoTransform)arg1 nodeName:(id)arg2 ;
-(BOOL)cameraIntrinsicMatrixDeliveryEnabled;
-(BOOL)mirroringEnabled;
-(BOOL)previewDepthFilterRenderingEnabled;
-(BOOL)previewDepthDataDeliveryEnabled;
-(BOOL)previewFilterRenderingEnabled;
-(BOOL)irisFrameHarvestingEnabled;
-(int)videoStabilizationMethod;
-(BOOL)irisVISEnabled;
-(BOOL)irisSDOFEnabled;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(void)setVideoStabilizationMethod:(int)arg1 ;
-(void)setCameraIntrinsicMatrixDeliveryEnabled:(BOOL)arg1 ;
-(FigCaptureVideoTransform)depthDataTransform;
-(FigCaptureVideoTransform)depthDataTransformWithSourceDimensions;
-(FigCaptureVideoTransform)_transformWithSourceDimensions:(SCD_Struct_BW13)arg1 forceSourceDimensions:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FigCaptureVideoTransform)transform;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
@end

