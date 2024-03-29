/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLComputePipeline, MTLStageInputOutputDescriptor;

@interface SCNMTLSkin : NSObject {

	unsigned _vertexCount;
	BOOL _needNormal;
	BOOL _needTangent;
	id<MTLBuffer> _vertexWeightIndicesBuffer;
	id<MTLBuffer> _boneIndicesBuffer;
	id<MTLBuffer> _boneWeightsBuffer;
	SCNMTLComputePipeline* _computePS;
	MTLStageInputOutputDescriptor* _computeStageDesc;

}
-(id)initWithSkinner:(C3DSkinnerRef)arg1 baseMesh:(C3DMeshRef)arg2 baseGeometry:(_C3DGeometry*)arg3 resourceManager:(id)arg4 ;
-(void)skinMesh:(id)arg1 with:(id)arg2 skinner:(C3DSkinnerRef)arg3 renderContext:(id)arg4 ;
-(void)dealloc;
@end

