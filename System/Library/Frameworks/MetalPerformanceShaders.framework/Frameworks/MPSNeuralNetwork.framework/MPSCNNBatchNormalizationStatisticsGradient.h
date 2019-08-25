/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@protocol MTLBuffer;
@class MPSNNNeuronDescriptor;

@interface MPSCNNBatchNormalizationStatisticsGradient : MPSCNNGradientKernel {

	MPSNNNeuronDescriptor* _fusedNeuronDescriptor;
	id<MTLBuffer> _preluBuffer;

}
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(void)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 destinationGradient:(id)arg5 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(NSArray*)arg2 sourceImages:(NSArray*)arg3 gradientStates:(NSArray*)arg4 destinationGradients:(NSArray*)arg5 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(NSArray*)arg2 sourceImages:(NSArray*)arg3 gradientStates:(NSArray*)arg4 ;
-(id)initWithDevice:(id)arg1 fusedNeuronDescriptor:(id)arg2 ;
-(BOOL)accumulatesOverBatch;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(NSArray*)arg2 sourceImages:(NSArray*)arg3 batchNormalizationState:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
@end

