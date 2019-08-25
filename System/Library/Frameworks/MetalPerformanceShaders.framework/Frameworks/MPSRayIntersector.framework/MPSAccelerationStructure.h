/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
#import <MPSCore/MPSKernel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MTLBuffer, MTLComputePipelineState;
@class MPSAccelerationStructureGroup, NSDictionary;

@interface MPSAccelerationStructure : MPSKernel <NSSecureCoding, NSCopying> {

	MPSAccelerationStructureGroup* _group;
	NSDictionary* _privateOptions;
	NSDictionary* _statistics;
	id<MTLBuffer> _boundingBoxBuffer;
	id<MTLComputePipelineState> _boundingBoxCopyPipeline;
	unsigned long long _status;
	unsigned long long _usage;

}

@property (nonatomic,readonly) MPSAccelerationStructureGroup * group; 
@property (nonatomic,readonly) MPSAxisAlignedBoundingBoxRef boundingBox; 
@property (nonatomic,readonly) unsigned long long status; 
@property (assign,nonatomic) unsigned long long usage; 
+(const MPSLibraryInfo*)libraryInfo;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setUsage:(unsigned long long)arg1 ;
-(id)statistics;
-(unsigned long long)usage;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setStatistics:(id)arg1 ;
-(void)rebuild;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(void)copyBytes:(const void*)arg1 length:(unsigned long long)arg2 toPrivateBuffer:(id)arg3 offset:(unsigned long long)arg4 commandBuffer:(id)arg5 ;
-(id)initWithCoder:(id)arg1 group:(id)arg2 ;
-(void)copyPrivateBuffer:(id)arg1 offset:(unsigned long long)arg2 toBytes:(void*)arg3 length:(unsigned long long)arg4 commandBuffer:(id)arg5 ;
-(MPSBVHOptions)getBVHOptions;
-(void)copyAlignedBytes:(const void*)arg1 length:(unsigned long long)arg2 toPrivateBuffer:(id)arg3 offset:(unsigned long long)arg4 commandBuffer:(id)arg5 ;
-(void)bindResourcesWithEncoder:(id)arg1 commandBuffer:(id)arg2 retainedResources:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 group:(id)arg2 ;
-(void)copyBuffers:(MPSBufferRange*)arg1 srcAllocators:(MPSBufferAllocator*)arg2 dstAllocators:(MPSBufferAllocator*)arg3 copiedBuffers:(MPSBufferRange*)arg4 device:(id)arg5 count:(unsigned long long)arg6 ;
-(id)copyBuffers:(id)arg1 withDevice:(id)arg2 ;
-(id)boundingBoxBuffer;
-(id)boundingBoxCopyPipeline;
-(void)rebuildWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)encodeRefitToCommandBuffer:(id)arg1 ;
-(void)sharedInitAccelerationStructureWithGroup:(id)arg1 ;
-(void)decodeAccelerationStructureWithCoder:(id)arg1 ;
-(id)copyAccelerationStructureWithZone:(NSZone*)arg1 device:(id)arg2 group:(id)arg3 ;
-(id)privateOptions;
-(void)setPrivateOptions:(id)arg1 ;
-(id)newPrivateBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 commandBuffer:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(MPSAccelerationStructureGroup *)group;
-(unsigned long long)status;
-(void)setGroup:(MPSAccelerationStructureGroup *)arg1 ;
-(void)validate;
-(void)setStatus:(unsigned long long)arg1 ;
-(MPSAxisAlignedBoundingBoxRef)boundingBox;
-(void)setBoundingBox:(MPSAxisAlignedBoundingBoxRef)arg1 ;
@end

