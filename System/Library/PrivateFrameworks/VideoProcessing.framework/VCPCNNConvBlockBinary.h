/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNBlock.h>

@class MPSCNNBinaryConvolution;

@interface VCPCNNConvBlockBinary : VCPCNNBlock {

	int _filterSize;
	int _filterNum;
	unsigned* _filterWeightsBinary;
	int _filterWeightSize;
	float* _filterScaling;
	float* _bias;
	int _padding;
	unsigned long long _convType;
	BOOL _reLU;
	MPSCNNBinaryConvolution* _mpsBinaryConv;

}
-(BOOL)useGPU;
-(BOOL)supportGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)forward;
-(int)fillConvWeightsGPU;
-(int)gpuForward;
-(id)initWithParameters:(int)arg1 filterNum:(int)arg2 convType:(unsigned long long)arg3 reLU:(BOOL)arg4 padding:(BOOL)arg5 ;
-(void)dealloc;
@end

