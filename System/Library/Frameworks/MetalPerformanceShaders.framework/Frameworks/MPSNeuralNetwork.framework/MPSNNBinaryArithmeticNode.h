/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNBinaryArithmeticNode : MPSNNFilterNode {

	float _primaryScale;
	float _secondaryScale;
	float _bias;
	unsigned long long _primaryStrideInPixelsX;
	unsigned long long _primaryStrideInPixelsY;
	unsigned long long _primaryStrideInFeatureChannels;
	unsigned long long _secondaryStrideInPixelsX;
	unsigned long long _secondaryStrideInPixelsY;
	unsigned long long _secondaryStrideInFeatureChannels;
	float _minimumValue;
	float _maximumValue;

}

@property (assign,nonatomic) float primaryScale;                                               //@synthesize primaryScale=_primaryScale - In the implementation block
@property (assign,nonatomic) float secondaryScale;                                             //@synthesize secondaryScale=_secondaryScale - In the implementation block
@property (assign,nonatomic) float bias;                                                       //@synthesize bias=_bias - In the implementation block
@property (assign,nonatomic) unsigned long long primaryStrideInPixelsX;                        //@synthesize primaryStrideInPixelsX=_primaryStrideInPixelsX - In the implementation block
@property (assign,nonatomic) unsigned long long primaryStrideInPixelsY;                        //@synthesize primaryStrideInPixelsY=_primaryStrideInPixelsY - In the implementation block
@property (assign,nonatomic) unsigned long long primaryStrideInFeatureChannels;                //@synthesize primaryStrideInFeatureChannels=_primaryStrideInFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInPixelsX;                      //@synthesize secondaryStrideInPixelsX=_secondaryStrideInPixelsX - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInPixelsY;                      //@synthesize secondaryStrideInPixelsY=_secondaryStrideInPixelsY - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInFeatureChannels;              //@synthesize secondaryStrideInFeatureChannels=_secondaryStrideInFeatureChannels - In the implementation block
@property (assign,nonatomic) float minimumValue;                                               //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) float maximumValue;                                               //@synthesize maximumValue=_maximumValue - In the implementation block
+(id)nodeWithSources:(id)arg1 ;
+(id)nodeWithLeftSource:(id)arg1 rightSource:(id)arg2 ;
-(void)setPrimaryStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setPrimaryStrideInPixelsY:(unsigned long long)arg1 ;
-(void)setPrimaryStrideInFeatureChannels:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInPixelsY:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInFeatureChannels:(unsigned long long)arg1 ;
-(float)primaryScale;
-(void)setPrimaryScale:(float)arg1 ;
-(float)secondaryScale;
-(void)setSecondaryScale:(float)arg1 ;
-(unsigned long long)primaryStrideInFeatureChannels;
-(unsigned long long)secondaryStrideInFeatureChannels;
-(unsigned long long)primaryStrideInPixelsX;
-(unsigned long long)primaryStrideInPixelsY;
-(unsigned long long)secondaryStrideInPixelsX;
-(unsigned long long)secondaryStrideInPixelsY;
-(Class)gradientClass;
-(id)initWithSources:(id)arg1 ;
-(id)initWithLeftSource:(id)arg1 rightSource:(id)arg2 ;
-(id)gradientFilterWithSources:(id)arg1 ;
-(id)gradientFiltersWithSources:(id)arg1 ;
-(void)setBias:(float)arg1 ;
-(float)bias;
-(void)setMinimumValue:(float)arg1 ;
-(void)setMaximumValue:(float)arg1 ;
-(float)minimumValue;
-(float)maximumValue;
@end

