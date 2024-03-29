/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLResourceManager, NSArray, SCNMTLComputePipeline;

@interface SCNMTLMorph : NSObject {

	SCNMTLResourceManager* _resourceManager;
	SCD_Struct_SC6 _baseBuffer;
	unsigned _baseVertexCount;
	short _baseBufferTypes[3];
	unsigned _baseBufferTypesCount;
	unsigned _baseBufferStride;
	short _targetBufferTypes[3];
	unsigned _targetBufferTypesCount;
	unsigned _targetBufferStride;
	unsigned _dstSemanticUsageMask;
	unsigned _srcSemanticUsageMask;
	SCNMTLBufferPool* _bufferPool;
	BOOL _unifyPostMorphNormals;
	BOOL _shouldMorphNormals;
	unsigned char _dataKindForMorphing;
	id<MTLBuffer> _splatProvokingVertices;
	SCD_Struct_SC7 _postUnifyInfo;
	Target* _targets;
	unsigned long long _targetCount;
	NSArray* _originalTargets;
	SCNMTLComputePipeline* _copyCPS;
	SCNMTLComputePipeline* _blendCPS;
	SCNMTLComputePipeline* _blendSparseCPS;
	SCNMTLComputePipeline* _splatCPS;

}
-(unsigned)sparseIndexSize;
-(void)_prepareTargetDataForIndex:(long long)arg1 morph:(C3DMorphRef)arg2 baseMesh:(C3DMeshRef)arg3 ;
-(SCD_Struct_SC10)newBufferWithLength:(unsigned long long)arg1 ;
-(void)_writeSources:(const _C3DMeshSource*)arg1 dstTypes:(short*)arg2 sourcesCount:(unsigned)arg3 inBuffer:(void*)arg4 stride:(unsigned)arg5 length:(unsigned long long)arg6 sparse:(BOOL)arg7 positionScale:(float)arg8 ;
-(id)initWithMorph:(C3DMorphRef)arg1 baseGeometry:(_C3DGeometry*)arg2 resourceManager:(id)arg3 ;
-(BOOL)isCompatibleWithMorph:(C3DMorphRef)arg1 ;
-(void)morphMesh:(id)arg1 morph:(C3DMorphRef)arg2 renderContext:(id)arg3 ;
-(void)morphIncrementalMesh:(id)arg1 morpher:(_C3DMorpher*)arg2 renderContext:(id)arg3 ;
-(void)unifyMesh:(id)arg1 renderContext:(id)arg2 ;
-(void)morphSparseMesh:(id)arg1 morpher:(_C3DMorpher*)arg2 renderContext:(id)arg3 ;
-(void)dealloc;
@end

