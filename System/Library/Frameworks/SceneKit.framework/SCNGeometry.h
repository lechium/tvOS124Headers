/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNAnimatable.h>
#import <libobjc.A.dylib/SCNBoundingVolume.h>
#import <libobjc.A.dylib/SCNShadable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray, SCNOrderedDictionary, NSMutableDictionary, SCNGeometrySource, SCNGeometryElement, SCNShadableHelper, NSString, SCNGeometryTessellator, SCNMaterial, SCNProgram, NSDictionary;

@interface SCNGeometry : NSObject <SCNAnimatable, SCNBoundingVolume, SCNShadable, NSCopying, NSSecureCoding> {

	_C3DGeometry* _geometry;
	unsigned _isPresentationInstance : 1;
	NSMutableArray* _sources;
	NSMutableArray* _elements;
	NSArray* _sourceChannels;
	NSMutableArray* _materials;
	SCNOrderedDictionary* _animations;
	NSMutableDictionary* _bindings;
	NSArray* _levelsOfDetail;
	unsigned long long _subdivisionLevel;
	BOOL _subdivisionIsAdaptive;
	SCD_Struct_SC125 _subdivisionSettings;
	SCNGeometrySource* _edgeCreasesSource;
	SCNGeometryElement* _edgeCreasesElement;
	SCNShadableHelper* _shadableHelper;
	SCNVector3* _fixedBoundingBoxExtrema;
	NSString* _name;
	NSMutableDictionary* _valuesForUndefinedKeys;
	SCNGeometryTessellator* _tessellator;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * materials; 
@property (nonatomic,retain) SCNMaterial * firstMaterial; 
@property (nonatomic,readonly) NSArray * geometrySources; 
@property (nonatomic,readonly) NSArray * geometryElements; 
@property (nonatomic,readonly) long long geometryElementCount; 
@property (nonatomic,copy) NSArray * levelsOfDetail; 
@property (nonatomic,retain) SCNGeometryTessellator * tessellator; 
@property (assign,nonatomic) unsigned long long subdivisionLevel; 
@property (assign,nonatomic) BOOL wantsAdaptiveSubdivision; 
@property (nonatomic,retain) SCNGeometryElement * edgeCreasesElement; 
@property (nonatomic,retain) SCNGeometrySource * edgeCreasesSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * animationKeys; 
@property (nonatomic,retain) SCNProgram * program; 
@property (nonatomic,copy) NSDictionary * shaderModifiers; 
+(id)geometryWithMDLMesh:(id)arg1 ;
+(id)geometryWithMDLMesh:(id)arg1 submesh:(id)arg2 ;
+(id)geometryWithSources:(id)arg1 elements:(id)arg2 ;
+(id)geometryWithSources:(id)arg1 elements:(id)arg2 sourceChannels:(id)arg3 ;
+(id)morpherWithMDLMesh:(id)arg1 ;
+(id)geometryWithGeometryRef:(_C3DGeometry*)arg1 ;
+(id)planeWithWidth:(double)arg1 height:(double)arg2 options:(id)arg3 ;
+(id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 cornerRadius:(double)arg4 options:(id)arg5 ;
+(id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 options:(id)arg4 ;
+(id)sphereWithRadius:(double)arg1 options:(id)arg2 ;
+(id)cylinderWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3 ;
+(id)coneWithHeight:(double)arg1 topRadius:(double)arg2 bottomRadius:(double)arg3 options:(id)arg4 ;
+(id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3 options:(id)arg4 ;
+(id)capsuleWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3 ;
+(id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2 options:(id)arg3 ;
+(id)floorWithOptions:(id)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)geometry;
-(void)_expand;
-(void)setEdgeCreasesSource:(SCNGeometrySource *)arg1 ;
-(void)setEdgeCreasesElement:(SCNGeometryElement *)arg1 ;
-(long long)primitiveType;
-(id)geometrySourceChannels;
-(NSArray *)geometrySources;
-(id)geometrySourcesForSemantic:(id)arg1 ;
-(NSArray *)geometryElements;
-(SCNMaterial *)firstMaterial;
-(long long)geometryElementCount;
-(NSArray *)materials;
-(id)geometryElementAtIndex:(long long)arg1 ;
-(void)setMaterial:(id)arg1 ;
-(void)setSubdivisionLevel:(unsigned long long)arg1 ;
-(void)setWantsAdaptiveSubdivision:(BOOL)arg1 ;
-(void)setTessellator:(SCNGeometryTessellator *)arg1 ;
-(id)material;
-(void)setMaterials:(NSArray *)arg1 ;
-(const void*)__CFObject;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(C3DSceneRef)sceneRef;
-(SCNProgram *)program;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2 ;
-(id)_scnAnimationForKey:(id)arg1 ;
-(id)animationPlayerForKey:(id)arg1 ;
-(C3DAnimationManagerRef)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3 ;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_syncObjCAnimations;
-(void)_copyAnimationsFrom:(id)arg1 ;
-(id)_scnBindings;
-(void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4 ;
-(void)unbindAnimatablePath:(id)arg1 ;
-(void)removeAllBindings;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(_C3DGeometry*)geometryRef;
-(void)replaceMaterialAtIndex:(unsigned long long)arg1 withMaterial:(id)arg2 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(void)_syncObjCModel;
-(void)_syncEntityObjCModel;
-(C3DMaterialRef)materialRef;
-(void)setProgram:(SCNProgram *)arg1 ;
-(id)customMaterialProperties;
-(void)copyShaderModifiersFrom:(id)arg1 ;
-(void)_setupShadableHelperIfNeeded;
-(void)setShaderModifiers:(NSDictionary *)arg1 ;
-(NSDictionary *)shaderModifiers;
-(id)__shadableHelper;
-(id)shaderModifiersArgumentsNames;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_shadableSetValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)_setAttributes:(id)arg1 ;
-(C3DMaterialRef)materialRefCreateIfNeeded;
-(id)customMaterialPropertyNames;
-(id)customMaterialAttributeNames;
-(id)customMaterialAttributes;
-(id)presentationGeometry;
-(BOOL)simdGetBoundingSphereCenter:(1*)arg1 radius:(float*)arg2 ;
-(BOOL)isPresentationInstance;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(void)setGeometryRef:(_C3DGeometry*)arg1 ;
-(void)setBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)getBoundingSphere;
-(id)getBoundingBox;
-(void)setFirstMaterial:(SCNMaterial *)arg1 ;
-(void)setValueForKey:(id)arg1 optionKey:(id)arg2 options:(id)arg3 ;
-(id)initWithGeometryRef:(_C3DGeometry*)arg1 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(id)geometryDescription;
-(id)initPresentationGeometryWithGeometryRef:(_C3DGeometry*)arg1 ;
-(void)_setupGeometrySources;
-(void)_setupGeometryElements;
-(NSArray *)levelsOfDetail;
-(void)setLevelsOfDetail:(NSArray *)arg1 ;
-(unsigned long long)subdivisionLevel;
-(BOOL)wantsAdaptiveSubdivision;
-(SCD_Struct_SC125)_subdivisionSettings;
-(void)set_subdivisionSettings:(SCD_Struct_SC125)arg1 ;
-(SCNGeometryTessellator *)tessellator;
-(void)_copyAttributesTo:(id)arg1 ;
-(id)_materialWithName:(id)arg1 ;
-(id)mutableMaterials;
-(id)_firstMaterial;
-(void)removeMaterialAtIndex:(unsigned long long)arg1 ;
-(void)insertMaterial:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectInMaterialsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 inMaterialsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromMaterialsAtIndex:(unsigned long long)arg1 ;
-(void)removeAllMaterials;
-(BOOL)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id*)arg3 remainingPath:(id*)arg4 ;
-(void)replaceMaterial:(id)arg1 with:(id)arg2 ;
-(void)removeMaterial:(id)arg1 ;
-(void)_customEncodingOfSCNGeometry:(id)arg1 ;
-(void)_customDecodingOfSCNGeometry:(id)arg1 ;
-(void)_setGeometryRef:(_C3DGeometry*)arg1 ;
-(void)_releaseCachedSourcesAndElements;
-(id)geometrySourceForSemantic:(id)arg1 ;
-(BOOL)_hasFixedBoundingBoxExtrema;
-(id)interleavedCopy;
-(id)_renderableCopy;
-(id)keyForNodeAttributes;
-(id)materialWithName:(id)arg1 ;
-(unsigned long long)countOfMaterials;
-(id)objectInMaterialsAtIndex:(unsigned long long)arg1 ;
-(SCNGeometryElement *)edgeCreasesElement;
-(SCNGeometrySource *)edgeCreasesSource;
-(void)_unifyNormals;
-(id)_geometryByWeldingVerticesWithThreshold:(double)arg1 normalThreshold:(double)arg2 ;
-(id)_geometryByUnifyingNormalsWithCreaseThreshold:(double)arg1 ;
-(id)_geometryByAddingSourcesOfSkinner:(id)arg1 ;
-(id)_geometryByRemovingSkinnerSources;
-(void)_discardOriginalTopology;
-(id)debugQuickLookData;
-(id)mutableCopy;
-(id)init;
-(void)dealloc;
-(id)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(void)addAnimation:(id)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)animationKeys;
-(void)removeAllAnimations;
-(id)scene;
-(id)debugQuickLookObject;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

