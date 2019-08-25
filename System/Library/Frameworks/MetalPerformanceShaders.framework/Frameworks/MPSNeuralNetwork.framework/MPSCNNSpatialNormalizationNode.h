/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNSpatialNormalizationNode : MPSCNNNormalizationNode {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;

}

@property (assign,nonatomic) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (assign,nonatomic) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
+(id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(unsigned long long)kernelHeight;
-(unsigned long long)kernelWidth;
-(id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(id)initWithSource:(id)arg1 ;
@end

