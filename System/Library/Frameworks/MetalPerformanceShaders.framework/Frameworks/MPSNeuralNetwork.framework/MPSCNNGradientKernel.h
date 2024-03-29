/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSCNNGradientKernel : MPSCNNBinaryKernel {

	long long _kernelOffsetX;
	long long _kernelOffsetY;

}

@property (assign,nonatomic) long long kernelOffsetX;              //@synthesize kernelOffsetX=_kernelOffsetX - In the implementation block
@property (assign,nonatomic) long long kernelOffsetY;              //@synthesize kernelOffsetY=_kernelOffsetY - In the implementation block
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 destinationGradient:(id)arg5 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(NSArray*)arg2 sourceImages:(NSArray*)arg3 gradientStates:(NSArray*)arg4 destinationGradients:(NSArray*)arg5 ;
-(id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(NSArray*)arg2 sourceImages:(NSArray*)arg3 gradientStates:(NSArray*)arg4 ;
-(void)readGradientState:(id)arg1 ;
-(void)readBinaryGradientState:(id)arg1 isSecondarySourceFilter:(BOOL)arg2 ;
-(BOOL)isStateModified;
-(long long)kernelOffsetX;
-(void)setKernelOffsetX:(long long)arg1 ;
-(long long)kernelOffsetY;
-(void)setKernelOffsetY:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

