/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNLocalContrastNormalization : MPSCNNKernel {

	float _alpha;
	float _beta;
	float _delta;
	float _p0;
	float _pm;
	float _ps;

}

@property (assign,nonatomic) float alpha;              //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float beta;               //@synthesize beta=_beta - In the implementation block
@property (assign,nonatomic) float delta;              //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) float p0;                 //@synthesize p0=_p0 - In the implementation block
@property (assign,nonatomic) float pm;                 //@synthesize pm=_pm - In the implementation block
@property (assign,nonatomic) float ps;                 //@synthesize ps=_ps - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(NSArray*)arg2 destinationImages:(NSArray*)arg3 ;
-(float)beta;
-(float)p0;
-(void)setP0:(float)arg1 ;
-(float)pm;
-(void)setPm:(float)arg1 ;
-(float)ps;
-(void)setPs:(float)arg1 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(NSArray*)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 ;
-(void)setBeta:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setAlpha:(float)arg1 ;
-(float)alpha;
-(float)delta;
-(void)setDelta:(float)arg1 ;
@end

