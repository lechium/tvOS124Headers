/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientState.h>

@interface MPSNNConcatenationGradientState : MPSNNGradientState {

	unsigned _sliceCount;
	MPSSliceInfo* _info;

}
+(id)temporaryStateWithCommandBuffer:(id)arg1 ;
-(id)initWithResource:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
@end

