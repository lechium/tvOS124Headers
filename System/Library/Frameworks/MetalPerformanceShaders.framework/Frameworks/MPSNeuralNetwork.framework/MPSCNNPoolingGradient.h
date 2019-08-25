/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNPoolingGradient : MPSCNNGradientKernel {

	MPSImageCoordinate _sourceSize;

}

@property (assign,nonatomic) MPSImageCoordinate sourceSize;              //@synthesize sourceSize=_sourceSize - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 strideInPixelsX:(unsigned long long)arg3 strideInPixelsY:(unsigned long long)arg4 ;
-(MPSImageCoordinate)sourceSize;
-(void)setSourceSize:(MPSImageCoordinate)arg1 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 ;
-(unsigned long long)maxBatchSize;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
