/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTLComputePipelineState.h>

@protocol MTLDevice;
@class NSString, MTLIndirectArgumentBufferEmulationData;

@interface _MTLComputePipelineState : NSObject <MTLComputePipelineState> {

	NSString* _label;
	id<MTLDevice> _device;
	MTLIndirectArgumentBufferEmulationData* _iabEmulationData;
	BOOL _supportIndirectCommandBuffers;
	unsigned long long _uniqueIdentifier;

}

@property (readonly) NSString * label;                                                               //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * IABEmulationData;              //@synthesize iabEmulationData=_iabEmulationData - In the implementation block
@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
-(MTLIndirectArgumentBufferEmulationData *)IABEmulationData;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
-(void)setIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
-(id<MTLDevice>)device;
-(void)dealloc;
-(NSString *)description;
-(NSString *)label;
-(unsigned long long)uniqueIdentifier;
@end

