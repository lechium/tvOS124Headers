/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSKernel.h>

@class MPSMatrixMultiplication;

@interface MPSRNNMatrixInferenceLayer : MPSKernel {

	int* layerTypes;
	void* layers;
	void* forwardLayers;
	int* forwardLayerTypes;
	unsigned long long nForwardLayers;
	void* backwardLayers;
	int* backwardLayerTypes;
	unsigned long long nBackwardLayers;
	MPSMatrixMultiplication* gemmKernel;
	MPSMatrixMultiplication* gemmKernelNonTranspose;
	BOOL _recurrentOutputIsTemporary;
	BOOL _storeAllIntermediateStates;
	unsigned long long _numberOfLayers;
	unsigned long long _bidirectionalCombineMode;
	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;

}

@property (nonatomic,readonly) unsigned long long inputFeatureChannels;                //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannels;               //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLayers;                      //@synthesize numberOfLayers=_numberOfLayers - In the implementation block
@property (assign,nonatomic) BOOL recurrentOutputIsTemporary;                          //@synthesize recurrentOutputIsTemporary=_recurrentOutputIsTemporary - In the implementation block
@property (assign,nonatomic) BOOL storeAllIntermediateStates;                          //@synthesize storeAllIntermediateStates=_storeAllIntermediateStates - In the implementation block
@property (assign,nonatomic) unsigned long long bidirectionalCombineMode;              //@synthesize bidirectionalCombineMode=_bidirectionalCombineMode - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)inputFeatureChannels;
-(unsigned long long)outputFeatureChannels;
-(BOOL)storeAllIntermediateStates;
-(id)initWithDevice:(id)arg1 rnnDescriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 rnnDescriptors:(id)arg2 ;
-(BOOL)recurrentOutputIsTemporary;
-(void)setRecurrentOutputIsTemporary:(BOOL)arg1 ;
-(void)setStoreAllIntermediateStates:(BOOL)arg1 ;
-(unsigned long long)bidirectionalCombineMode;
-(void)setBidirectionalCombineMode:(unsigned long long)arg1 ;
-(void)encodeSequenceToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 sourceOffsets:(unsigned long long*)arg3 destinationMatrices:(id)arg4 destinationOffsets:(unsigned long long*)arg5 recurrentInputState:(id)arg6 recurrentOutputStates:(id)arg7 ;
-(void)encodeSequenceToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 destinationMatrices:(id)arg3 recurrentInputState:(id)arg4 recurrentOutputStates:(id)arg5 ;
-(void)encodeBidirectionalSequenceToCommandBuffer:(id)arg1 sourceSequence:(id)arg2 destinationForwardMatrices:(id)arg3 destinationBackwardMatrices:(id)arg4 ;
-(unsigned long long)numberOfLayers;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
@end

