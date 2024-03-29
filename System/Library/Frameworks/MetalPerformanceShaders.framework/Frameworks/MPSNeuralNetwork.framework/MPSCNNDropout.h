/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNMultiply;

@interface MPSCNNDropout : MPSCNNKernel {

	float _keepProbability;
	unsigned long long _seed;
	mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> _engine;
	mutex _engineMutex;
	MPSImageCoordinate _maskStrideInPixels;
	MPSCNNMultiply* _arithmetic;

}

@property (nonatomic,readonly) float keepProbability;                              //@synthesize keepProbability=_keepProbability - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;                            //@synthesize seed=_seed - In the implementation block
@property (nonatomic,readonly) MPSImageCoordinate maskStrideInPixels;              //@synthesize maskStrideInPixels=_maskStrideInPixels - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)privateResultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 commandBuffer:(id)arg4 isTemporary:(BOOL)arg5 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(NSArray*)arg2 destinationStates:(NSArray*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(void)resetSeed:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(MPSImageCoordinate)arg4 ;
-(float)keepProbability;
-(MPSImageCoordinate)maskStrideInPixels;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)maxBatchSize;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)seed;
@end

