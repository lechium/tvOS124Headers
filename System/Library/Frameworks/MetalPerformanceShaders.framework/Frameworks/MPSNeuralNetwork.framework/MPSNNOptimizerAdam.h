/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNOptimizer.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface MPSNNOptimizerAdam : MPSNNOptimizer {

	double _beta1;
	double _beta2;
	float _epsilon;
	unsigned long long _timeStep;
	NSObject*<OS_dispatch_semaphore> _timeStepSemaphore;

}

@property (nonatomic,readonly) double beta1;                           //@synthesize beta1=_beta1 - In the implementation block
@property (nonatomic,readonly) double beta2;                           //@synthesize beta2=_beta2 - In the implementation block
@property (nonatomic,readonly) float epsilon;                          //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) unsigned long long timeStep;              //@synthesize timeStep=_timeStep - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 optimizerDescriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 learningRate:(float)arg2 ;
-(id)initWithDevice:(id)arg1 beta1:(double)arg2 beta2:(double)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5 optimizerDescriptor:(id)arg6 ;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 inputMomentumVector:(id)arg4 inputVelocityVector:(id)arg5 resultValuesVector:(id)arg6 ;
-(void)encodeToCommandBuffer:(id)arg1 convolutionGradientState:(id)arg2 convolutionSourceState:(id)arg3 inputMomentumVectors:(id)arg4 inputVelocityVectors:(id)arg5 resultState:(id)arg6 ;
-(void)encodeToCommandBuffer:(id)arg1 batchNormalizationGradientState:(id)arg2 batchNormalizationSourceState:(id)arg3 inputMomentumVectors:(id)arg4 inputVelocityVectors:(id)arg5 resultState:(id)arg6 ;
-(void)encodeToCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2 inputMomentumVectors:(id)arg3 inputVelocityVectors:(id)arg4 resultState:(id)arg5 ;
-(double)beta1;
-(double)beta2;
-(void)setTimeStep:(unsigned long long)arg1 ;
-(unsigned long long)timeStep;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(float)epsilon;
@end

