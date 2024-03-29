/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandBuffer, MTLDevice, MTLComputePipelineState, OS_dispatch_group, MTLBuffer, MTLTexture;
#import <CoreImage/CoreImage-Structs.h>
@class NSObject;

@interface CIBilateralSolverGPU : NSObject {

	id<MTLCommandBuffer> _commandBuffer;
	id<MTLDevice> _metalDevice;
	id<MTLComputePipelineState> _computePipelines[9];
	NSObject*<OS_dispatch_group> _computePipelinesGroup;
	SCD_Struct_CI74 _threadGroupInfo;
	SCD_Struct_CI75 _params;
	SCD_Struct_CI76 _offsets;
	int _width;
	int _height;
	unsigned long long _maxVertices;
	id<MTLBuffer> _gridHashBuffer;
	id<MTLBuffer> _gridBlurBuffer;
	id<MTLBuffer> _gridCoordIndicesBuffer;
	id<MTLBuffer> _gridCoordTableBuffer;
	id<MTLTexture> _gridHashMatrix;
	id<MTLBuffer> _gridInterpIndicesBuffer;
	id<MTLBuffer> _gridInterpTableBuffer;
	id<MTLBuffer> _gridInterpPadBuffer;
	id<MTLBuffer> _A_buf;
	id<MTLBuffer> _b_buf;
	id<MTLBuffer> _s_buf;
	id<MTLBuffer> _q_buf;
	id<MTLBuffer> _Dn_buf[2];
	id<MTLBuffer> _x_buf[2];
	id<MTLBuffer> _r_buf[2];
	id<MTLBuffer> _d_buf[2];
	int _idxDnBufIn;
	int _idxSwapBufIn;
	BOOL _useTrilinearInterpolation;

}

@property (assign,nonatomic) BOOL useTrilinearInterpolation;              //@synthesize useTrilinearInterpolation=_useTrilinearInterpolation - In the implementation block
-(BOOL)useTrilinearInterpolation;
-(void)setUseTrilinearInterpolation:(BOOL)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 maxVertices:(unsigned long long)arg3 commandBuffer:(id)arg4 ;
-(int)doSolveWithBilateralGridhash:(id)arg1 reference:(id)arg2 disparity:(id)arg3 confidence:(id)arg4 output:(id)arg5 lambda:(float)arg6 maxIterations:(int)arg7 offsets:(SCD_Struct_CI76*)arg8 ;
-(void)_setupPipelinesAsync:(/*^block*/id)arg1 ;
-(void)_setupMetal;
-(void)_setupPipelineCache;
-(void)_setupBuffer;
-(void)_prepareResources:(id)arg1 ;
-(int)_doBistochastizeWithCommandBuffer:(id)arg1 t_tex:(id)arg2 c_tex:(id)arg3 lambda:(float)arg4 nIterations:(int)arg5 ;
-(int)_doPCGWithCommandBuffer:(id)arg1 nIterations:(int)arg2 ;
-(int)_doSliceTrilinearWithCommandBuffer:(id)arg1 ref_tex:(id)arg2 o_tex:(id)arg3 ;
-(int)_doSliceWithCommandBuffer:(id)arg1 o_tex:(id)arg2 ;
@end

