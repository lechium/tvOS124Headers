/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLTexture, MTLDepthStencilState;
#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLLibraryManager, SCNMTLShaderBindingsGenerator, SCNMTLBufferAllocator, SCNMTLShadableKey, NSMutableArray, MTKTextureLoader;

@interface SCNMTLResourceManager : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	_C3DEngineStats* __engineStats;
	SCNMTLLibraryManager* _libraryManager;
	SCNMTLShaderBindingsGenerator* _bindingsGenerator;
	CFDictionaryRef _availablePipelineStates;
	os_unfair_lock_s _availablePipelineStatesLock;
	SCNMTLBufferAllocator* _commonProfileBuffersAllocator;
	SCD_Struct_SC33 _availableLightingSystemReflectionProbeTextures;
	SCD_Struct_SC33 _availableIrradianceTextures;
	SCD_Struct_SC33 _availableRadianceTextures;
	SCD_Struct_SC33 _availableImages;
	SCD_Struct_SC33 _availableImageProxy;
	SCD_Struct_SC33 _availableSamplers;
	SCD_Struct_SC33 _availableIESTextures;
	SCD_Struct_SC33 _availableBuffers;
	SCD_Struct_SC33 _availableMeshes;
	SCD_Struct_SC33 _availableMeshSources;
	SCD_Struct_SC33 _availableMeshElements;
	SCD_Struct_SC33 _availableRasterizerStates;
	SCD_Struct_SC33 _availableMorphs;
	SCD_Struct_SC33 _availableSkins;
	SCD_Struct_SC33 _availableComputePipelines;
	SCD_Struct_SC33 _availableComputePipelinesWithStageDescriptor;
	SCD_Struct_SC33 _availableTessellators;
	SCD_Struct_SC33 _availableWireframeMaterials;
	SCD_Struct_SC33 _availableShadables;
	SCNMTLShadableKey* _availableShadablesSearchKey;
	NSMutableArray* _availableStageDescriptors;
	os_unfair_lock_s _stageDescriptorsLock;
	id _nullStageDescriptor;
	id<MTLTexture> _specularDFGTexture;
	_C3DFXMetalProgram* _defaultProgram;
	_C3DFXMetalProgram* _defaultProgramForTessellation;
	_C3DFXMetalProgram* _isolateProgram;
	id<MTLDepthStencilState> _depthAndStencilStateWithReadWriteDepthDisabled;
	id<MTLTexture> _defaultTexture;
	id<MTLTexture> _defaultTexture3D;
	id<MTLTexture> _defaultCubeTexture;
	id<MTLTexture> _defaultLightingEnvironmentIrradianceTexture;
	id<MTLTexture> _defaultLightingEnvironmentRadianceTexture;
	MTKTextureLoader* _mtkTextureLoader;

}

@property (nonatomic,retain) SCNMTLLibraryManager * libraryManager;              //@synthesize libraryManager=_libraryManager - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> device;                             //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;                 //@synthesize commandQueue=_commandQueue - In the implementation block
+(void)unregisterManagerForDevice:(id)arg1 ;
+(id)resourceManagerForDevice:(id)arg1 ;
-(_C3DEngineStats*)stats;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id<MTLCommandQueue>)commandQueue;
-(id)newComputePipelineStateWithFunctionName:(id)arg1 ;
-(SCNMTLLibraryManager *)libraryManager;
-(id)newRenderPipelineStateWithDesc:(SCD_Struct_SC37*)arg1 ;
-(id)renderResourceForMesh:(C3DMeshRef)arg1 dataKind:(unsigned char)arg2 ;
-(id)computePipelineStateForKernel:(id)arg1 ;
-(id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 ;
-(id)newComputePipelineStateForKernel:(id)arg1 withStageDescriptor:(id)arg2 constants:(id)arg3 constantsHash:(id)arg4 ;
-(id)renderResourceForMorph:(C3DMorphRef)arg1 baseGeometry:(_C3DGeometry*)arg2 ;
-(id)renderResourceForSkinner:(C3DSkinnerRef)arg1 baseMesh:(C3DMeshRef)arg2 baseGeometry:(_C3DGeometry*)arg3 ;
-(id)renderResourcesForEffectSlot:(_C3DEffectSlot*)arg1 withEngineContext:(C3DEngineContextRef)arg2 ;
-(id)defaultLightingEnvironmentRadianceTexture;
-(void)_meshSourceWillDie:(id)arg1 ;
-(void)_meshElementWillDie:(id)arg1 ;
-(void)_meshWillDie:(id)arg1 ;
-(void)_imageWillDie:(id)arg1 ;
-(void)_imageProxyWillDie:(id)arg1 ;
-(void)_programWillDie:(id)arg1 ;
-(void)_passWillDie:(id)arg1 ;
-(void)_materialWillDie:(id)arg1 ;
-(void)_geometryWillDie:(id)arg1 ;
-(void)_morphWillDie:(id)arg1 ;
-(void)_skinWillDie:(id)arg1 ;
-(void)_programHashCodeWillDie:(id)arg1 ;
-(void)_removeMatchingProgram:(_C3DFXProgram*)arg1 pass:(_C3DFXPass*)arg2 ;
-(id)renderResourceForMeshElement:(_C3DMeshElement*)arg1 ;
-(id)_bufferForData:(CFDataRef)arg1 bytesPerIndex:(unsigned long long)arg2 ;
-(void)__updateMutableMesh:(C3DMeshRef)arg1 withMetalMesh:(id)arg2 ;
-(id)renderResourceForMeshSource:(_C3DMeshSource*)arg1 ;
-(id)newConstantBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)renderResourceForSampler:(_C3DTextureSampler*)arg1 ;
-(void)removeAllShaders;
-(id)renderResourceForRasterizerState:(C3DRasterizerStatesRef)arg1 reverseZ:(BOOL)arg2 ;
-(id)renderResourceForTessellatedGeometry:(_C3DGeometry*)arg1 ;
-(id)wireframeResourceForRendererElement:(_C3DRendererElement*)arg1 engineContext:(C3DEngineContextRef)arg2 passInstance:(_C3DFXPassInstance*)arg3 hashPass:(unsigned long long)arg4 ;
-(id)newIndexBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)renderResourceForMaterial:(C3DMaterialRef)arg1 geometry:(_C3DGeometry*)arg2 renderPipeline:(id)arg3 engineContext:(C3DEngineContextRef)arg4 ;
-(void)dispatchForTexture:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3 ;
-(void)dispatchForCubemap:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3 ;
-(id)depthAndStencilStateWithReadWriteDepthDisabled;
-(void)setLibraryManager:(SCNMTLLibraryManager *)arg1 ;
-(void)reloadPipelinesIfNeeded;
-(id)irradianceTextureForEnvironmentTexture:(id)arg1 renderContext:(id)arg2 applySH:(/*^block*/id)arg3 ;
-(id)radianceTextureForEnvironmentTexture:(id)arg1 engineContext:(C3DEngineContextRef)arg2 commandBuffer:(id)arg3 ;
-(id)renderResourceForProgramDesc:(SCD_Struct_SC40*)arg1 renderPassDescriptor:(id)arg2 ;
-(id)renderResourceForImage:(C3DImageRef)arg1 sampler:(_C3DTextureSampler*)arg2 options:(int)arg3 engineContext:(C3DEngineContextRef)arg4 ;
-(id)defaultTexture;
-(id)specularDFGTextureWithRenderContext:(id)arg1 ;
-(id)defaultCubeTexture;
-(id)defaultLightingEnvironmentIrradianceTexture;
-(C3DFXProgramRef)defaultProgramUsingTessellation:(BOOL)arg1 ;
-(id)newTextureUsingMTKTextureLoaderWithURL:(id)arg1 options:(id)arg2 ;
-(void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 renderContext:(id)arg3 applySH:(/*^block*/id)arg4 ;
-(id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned long long)arg2 commandBuffer:(id)arg3 ;
-(id)newRadianceTextureForEnvironmentTexture:(id)arg1 engineContext:(C3DEngineContextRef)arg2 cpuAccessible:(BOOL)arg3 commandBuffer:(id)arg4 ;
-(void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned long long)arg3 useTextureView:(BOOL)arg4 renderContext:(id)arg5 ;
-(id)reflectionProbeTextureForScene:(C3DSceneRef)arg1 engineContext:(C3DEngineContextRef)arg2 commandBuffer:(id)arg3 ;
-(id)textureForSamplingTexture:(id)arg1 atSize:(unsigned long long)arg2 mipmapLevelCount:(unsigned long long*)arg3 renderContext:(id)arg4 ;
-(id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2 ;
-(id)unstageTexture:(id)arg1 commandBuffer:(id)arg2 ;
-(id)shFromCPU:(id)arg1 commandBuffer:(id)arg2 ;
-(id)iesTextureForProfile:(id)arg1 renderContext:(id)arg2 ;
-(id)cubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 engineContext:(C3DEngineContextRef)arg3 needsMipmap:(BOOL)arg4 ;
-(id)renderResourceForImageProxy:(_C3DImageProxy*)arg1 sampler:(_C3DTextureSampler*)arg2 engineContext:(C3DEngineContextRef)arg3 ;
-(id)_textureDescriptorFromImage:(C3DImageRef)arg1 needsMipMap:(BOOL)arg2 textureOptions:(int)arg3 ;
-(BOOL)_copyImage:(C3DImageRef)arg1 toTexture:(id)arg2 desc:(id)arg3 textureOptions:(int)arg4 needsMipMapGeneration:(BOOL)arg5 ;
-(id)convertTextureToCubeMapIfApplicable:(id)arg1 engineContext:(C3DEngineContextRef)arg2 needsMipmap:(BOOL)arg3 ;
-(void)_enqueueCopyFromTexture:(id)arg1 toTexture:(id)arg2 blitEncoder:(SCNMTLBlitCommandEncoder*)arg3 generateMipMaps:(BOOL)arg4 ;
-(id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned long long)arg2 renderContext:(id)arg3 needsMipmap:(BOOL)arg4 ;
-(id)defaultTexture3D;
-(void)_createPipelineStateWithDescriptor:(id)arg1 desc:(SCD_Struct_SC44*)arg2 pipeline:(id)arg3 ;
-(id)_newComputeDescriptorForPipelineDesc:(SCD_Struct_SC45)arg1 library:(id)arg2 ;
-(void)_configureComputePipeline:(id)arg1 withDescriptor:(id)arg2 ;
-(id)newComputePipelineStateForDesc:(SCD_Struct_SC45)arg1 library:(id)arg2 ;
-(id)getUniqueStageDescriptor:(id)arg1 ;
-(id)computePipelineStateForKernel:(id)arg1 threadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg2 ;
-(id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 constantValues:(id)arg3 ;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(void)flush;
@end

