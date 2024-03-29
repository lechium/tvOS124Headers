/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPBlurAnalyzer.h>

@class NSArray, VCPCNNModel, VCPCNNData;

@interface VCPImageBlurAnalyzer : VCPBlurAnalyzer {

	float _sharpnessBlocks[16];
	NSArray* _faces;
	VCPCNNModel* _faceModel;
	VCPCNNData* _faceInput;
	BOOL _useGPU;
	BOOL _useCNN;
	BOOL _sdof;
	float _contrast;
	float _sharpness;

}

@property (readonly) float sharpness;              //@synthesize sharpness=_sharpness - In the implementation block
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(int)initFaceBlurModel:(BOOL)arg1 ;
-(int)initInputFromCVPixelBuffer:(CVBufferRef)arg1 height:(int)arg2 width:(int)arg3 rect:(CGRect*)arg4 input:(id)arg5 ;
-(float)getFaceScoreFromOutput:(id)arg1 ratio:(float)arg2 ;
-(void)computeLocalSharpness:(CVBufferRef)arg1 ;
-(void)spatialPooling;
-(int)computeCNNFaceSharpness:(CVBufferRef)arg1 result:(float*)arg2 cancel:(/*^block*/id)arg3 ;
-(float)computeFaceSharpness:(CVBufferRef)arg1 ;
-(id)initWithFaceResults:(id)arg1 sdof:(BOOL)arg2 ;
-(void)setFaceResults:(id)arg1 ;
-(float)sharpness;
@end

