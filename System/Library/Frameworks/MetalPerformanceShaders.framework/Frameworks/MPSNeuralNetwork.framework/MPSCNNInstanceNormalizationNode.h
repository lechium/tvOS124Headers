/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSCNNInstanceNormalizationDataSource;
@interface MPSCNNInstanceNormalizationNode : MPSNNFilterNode {

	id<MPSCNNInstanceNormalizationDataSource> _dataSource;

}
+(id)nodeWithSource:(id)arg1 dataSource:(id)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 dataSource:(id)arg2 ;
-(void)dealloc;
@end

