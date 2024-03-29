/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSKernel.h>

@protocol MPSNNPadding, MPSImageAllocator;
@class MPSExternalCNNBinary;

@interface MPSCNNBinaryKernel : MPSKernel {

	SCD_Struct_MP13 _primaryOffset;
	SCD_Struct_MP13 _secondaryOffset;
	SCD_Struct_MP4 _clipRect;
	unsigned long long _destinationFeatureChannelOffset;
	unsigned long long _primarySourceFeatureChannelOffset;
	unsigned long long _secondarySourceFeatureChannelOffset;
	unsigned long long _primarySourceFeatureChannelMaxCount;
	unsigned long long _secondarySourceFeatureChannelMaxCount;
	unsigned long long _primaryKernelWidth;
	unsigned long long _primaryKernelHeight;
	unsigned long long _secondaryKernelWidth;
	unsigned long long _secondaryKernelHeight;
	unsigned long long _primaryStrideInPixelsX;
	unsigned long long _primaryStrideInPixelsY;
	unsigned long long _secondaryStrideInPixelsX;
	unsigned long long _secondaryStrideInPixelsY;
	unsigned long long _primaryDilationRateX;
	unsigned long long _primaryDilationRateY;
	unsigned long long _secondaryDilationRateX;
	unsigned long long _secondaryDilationRateY;
	BOOL _isBackwards;
	BOOL _supportsBroadcasting;
	id<MPSNNPadding> _padding;
	unsigned long long _primaryEdgeMode;
	unsigned long long _secondaryEdgeMode;
	int _checkFlags;
	/*function pointer*/void* _encode;
	/*function pointer*/void* _batchEncode;
	void* _encodeData;
	MPSExternalCNNBinary* _plugin;
	id<MPSImageAllocator> _destinationImageAllocator;

}

@property (assign,nonatomic) SCD_Struct_MP13 primaryOffset;                                         //@synthesize primaryOffset=_primaryOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP13 secondaryOffset;                                       //@synthesize secondaryOffset=_secondaryOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP4 clipRect;                                               //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) unsigned long long destinationFeatureChannelOffset;                    //@synthesize destinationFeatureChannelOffset=_destinationFeatureChannelOffset - In the implementation block
@property (assign,nonatomic) unsigned long long primarySourceFeatureChannelOffset;                  //@synthesize primarySourceFeatureChannelOffset=_primarySourceFeatureChannelOffset - In the implementation block
@property (assign,nonatomic) unsigned long long secondarySourceFeatureChannelOffset;                //@synthesize secondarySourceFeatureChannelOffset=_secondarySourceFeatureChannelOffset - In the implementation block
@property (assign,nonatomic) unsigned long long primarySourceFeatureChannelMaxCount;                //@synthesize primarySourceFeatureChannelMaxCount=_primarySourceFeatureChannelMaxCount - In the implementation block
@property (assign,nonatomic) unsigned long long secondarySourceFeatureChannelMaxCount;              //@synthesize secondarySourceFeatureChannelMaxCount=_secondarySourceFeatureChannelMaxCount - In the implementation block
@property (assign,nonatomic) unsigned long long primaryEdgeMode;                                    //@synthesize primaryEdgeMode=_primaryEdgeMode - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryEdgeMode;                                  //@synthesize secondaryEdgeMode=_secondaryEdgeMode - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryKernelWidth;                               //@synthesize primaryKernelWidth=_primaryKernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryKernelHeight;                              //@synthesize primaryKernelHeight=_primaryKernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryKernelWidth;                             //@synthesize secondaryKernelWidth=_secondaryKernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryKernelHeight;                            //@synthesize secondaryKernelHeight=_secondaryKernelHeight - In the implementation block
@property (assign,nonatomic) unsigned long long primaryStrideInPixelsX;                             //@synthesize primaryStrideInPixelsX=_primaryStrideInPixelsX - In the implementation block
@property (assign,nonatomic) unsigned long long primaryStrideInPixelsY;                             //@synthesize primaryStrideInPixelsY=_primaryStrideInPixelsY - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInPixelsX;                           //@synthesize secondaryStrideInPixelsX=_secondaryStrideInPixelsX - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryStrideInPixelsY;                           //@synthesize secondaryStrideInPixelsY=_secondaryStrideInPixelsY - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryDilationRateX;                             //@synthesize primaryDilationRateX=_primaryDilationRateX - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryDilationRateY;                             //@synthesize primaryDilationRateY=_primaryDilationRateY - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryDilationRateX;                           //@synthesize secondaryDilationRateX=_secondaryDilationRateX - In the implementation block
@property (nonatomic,readonly) unsigned long long secondaryDilationRateY;                           //@synthesize secondaryDilationRateY=_secondaryDilationRateY - In the implementation block
@property (nonatomic,readonly) BOOL isBackwards;                                                    //@synthesize isBackwards=_isBackwards - In the implementation block
@property (nonatomic,readonly) BOOL isStateModified; 
@property (nonatomic,retain) id<MPSNNPadding> padding;                                              //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) id<MPSImageAllocator> destinationImageAllocator;                       //@synthesize destinationImageAllocator=_destinationImageAllocator - In the implementation block
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(SCD_Struct_MP13*)arg4 secondaryOffset:(SCD_Struct_MP13*)arg5 kernelOffset:(SCD_Struct_MP13*)arg6 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned long long)primarySourceFeatureChannelMaxCount;
-(void)copyToBinaryGradientState:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5 ;
-(unsigned long long)primarySourceFeatureChannelOffset;
-(unsigned long long)secondarySourceFeatureChannelOffset;
-(unsigned long long)secondarySourceFeatureChannelMaxCount;
-(void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 destinationImage:(id)arg5 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(NSArray*)arg2 secondaryImages:(NSArray*)arg3 inStates:(NSArray*)arg4 destinationImages:(NSArray*)arg5 ;
-(void)setPrimaryStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setPrimaryStrideInPixelsY:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setSecondaryStrideInPixelsY:(unsigned long long)arg1 ;
-(id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5 ;
-(unsigned long long)primaryStrideInPixelsX;
-(unsigned long long)primaryStrideInPixelsY;
-(unsigned long long)secondaryStrideInPixelsX;
-(unsigned long long)secondaryStrideInPixelsY;
-(SCD_Struct_MP4)clipRect;
-(unsigned long long)destinationFeatureChannelOffset;
-(void)setDestinationFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)setDestinationImageAllocator:(id<MPSImageAllocator>)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(NSArray*)arg2 secondaryImages:(NSArray*)arg3 destinationImages:(NSArray*)arg4 ;
-(void)setPrimarySourceFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)setPrimarySourceFeatureChannelMaxCount:(unsigned long long)arg1 ;
-(void)setSecondarySourceFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)setSecondarySourceFeatureChannelMaxCount:(unsigned long long)arg1 ;
-(id<MPSImageAllocator>)destinationImageAllocator;
-(NSArray*)temporaryResultStateBatchForCommandBuffer:(id)arg1 primaryImage:(NSArray*)arg2 secondaryImage:(NSArray*)arg3 sourceStates:(id)arg4 destinationImage:(NSArray*)arg5 ;
-(NSArray*)resultStateBatchForPrimaryImage:(NSArray*)arg1 secondaryImage:(NSArray*)arg2 sourceStates:(id)arg3 destinationImage:(NSArray*)arg4 ;
-(void)setPrimaryEdgeMode:(unsigned long long)arg1 ;
-(void)setSecondaryEdgeMode:(unsigned long long)arg1 ;
-(SCD_Struct_MP13)primaryOffset;
-(SCD_Struct_MP13)secondaryOffset;
-(void)setPrimaryOffset:(SCD_Struct_MP13)arg1 ;
-(void)setSecondaryOffset:(SCD_Struct_MP13)arg1 ;
-(BOOL)isStateModified;
-(unsigned long long)primaryKernelWidth;
-(unsigned long long)primaryKernelHeight;
-(id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(NSArray*)arg2 secondaryImages:(NSArray*)arg3 inStates:(NSArray*)arg4 ;
-(MPSRegion)primarySourceRegionForDestinationSize:(MPSImageCoordinate)arg1 ;
-(MPSRegion)secondarySourceRegionForDestinationSize:(MPSImageCoordinate)arg1 ;
-(id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationState:(id*)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(NSArray*)arg2 secondaryImages:(NSArray*)arg3 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(NSArray*)arg2 secondaryImages:(NSArray*)arg3 destinationStates:(NSArray*)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(BOOL)appendBatchBarrier;
-(unsigned long long)primaryEdgeMode;
-(unsigned long long)secondaryEdgeMode;
-(unsigned long long)secondaryKernelWidth;
-(unsigned long long)secondaryKernelHeight;
-(unsigned long long)primaryDilationRateX;
-(unsigned long long)primaryDilationRateY;
-(unsigned long long)secondaryDilationRateX;
-(unsigned long long)secondaryDilationRateY;
-(BOOL)isBackwards;
-(void)setClipRect:(SCD_Struct_MP4)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)maxBatchSize;
-(id)initWithDevice:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setPadding:(id<MPSNNPadding>)arg1 ;
-(id<MPSNNPadding>)padding;
@end

