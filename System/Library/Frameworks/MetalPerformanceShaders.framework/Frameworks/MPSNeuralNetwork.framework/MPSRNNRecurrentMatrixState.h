/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSState.h>

@interface MPSRNNRecurrentMatrixState : MPSState {

	id* recurrentMatrices;
	id* cellMatrices;
	int nLayers;
	BOOL _isTemporary;

}
-(id)getRecurrentOutputMatrixForLayerIndex:(unsigned long long)arg1 ;
-(id)getMemoryCellMatrixForLayerIndex:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 recurrentMatrixDescriptors:(id*)arg2 cellMatrixDescriptors:(id*)arg3 isTemporary:(BOOL)arg4 layerCount:(int)arg5 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(BOOL)isTemporary;
-(void)dealloc;
@end

