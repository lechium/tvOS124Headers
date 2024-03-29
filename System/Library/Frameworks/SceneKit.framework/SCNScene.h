/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNSceneSource, SCNPhysicsWorld, SCNNode, SCNMaterialProperty, NSMutableDictionary, NSURL, SCNAuthoringEnvironment;

@interface SCNScene : NSObject <NSSecureCoding> {

	C3DSceneRef _scene;
	SCNSceneSource* _sceneSource;
	SCNPhysicsWorld* _physicsWorld;
	SCNNode* _rootNode;
	SCNNode* _layerRootNode[4];
	SCNMaterialProperty* _background;
	SCNMaterialProperty* _environment;
	NSMutableDictionary* _userAttributes;
	double _fogStartDistance;
	double _fogEndDistance;
	double _fogDensityExponent;
	id _fogColor;
	BOOL _paused;
	NSURL* _sourceURL;
	BOOL _pausedForEditing;
	BOOL _allowsDefaultLightingEnvironmentFallback;
	SCNAuthoringEnvironment* _authoringEnvironment;

}

@property (nonatomic,readonly) SCNNode * rootNode; 
@property (nonatomic,readonly) SCNPhysicsWorld * physicsWorld; 
@property (nonatomic,readonly) SCNMaterialProperty * background; 
@property (nonatomic,readonly) SCNMaterialProperty * lightingEnvironment; 
@property (assign,nonatomic) double fogStartDistance; 
@property (assign,nonatomic) double fogEndDistance; 
@property (assign,nonatomic) double fogDensityExponent; 
@property (nonatomic,retain) id fogColor; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
+(id)sceneWithMDLAsset:(id)arg1 options:(id)arg2 ;
+(id)sceneWithMDLAsset:(id)arg1 ;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3 ;
+(id)sceneWithData:(id)arg1 options:(id)arg2 ;
+(BOOL)canImportFileExtension:(id)arg1 ;
+(id)sceneNamed:(id)arg1 ;
+(id)sceneNamed:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 atIndex:(long long)arg2 options:(id)arg3 ;
+(id)sceneWithData:(id)arg1 atIndex:(long long)arg2 options:(id)arg3 ;
+(id)sceneWithSceneRef:(C3DSceneRef)arg1 ;
+(BOOL)canImportFileUTI:(id)arg1 ;
+(id)supportedFileUTIsForImport;
+(id)supportedFileUTIsForExport;
+(id)_indexPathForNode:(id)arg1 ;
+(SEL)jsConstructor;
+(BOOL)supportsSecureCoding;
+(id)scene;
-(SCNNode *)rootNode;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(float)playbackSpeed;
-(void)setPlaybackSpeed:(float)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(SCNVector3)upAxis;
-(void)_resetSceneTimeRange;
-(const void*)__CFObject;
-(SCNPhysicsWorld *)physicsWorld;
-(C3DSceneRef)sceneRef;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)particleSystems;
-(void)removeParticleSystem:(id)arg1 ;
-(id)_physicsWorldCreateIfNeeded:(BOOL)arg1 ;
-(void)_syncObjCModel;
-(id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2 ;
-(void)removeAllParticleSystems;
-(void)_setRootNode:(id)arg1 ;
-(id)initWithSceneRef:(C3DSceneRef)arg1 ;
-(void)setUpAxis:(SCNVector3)arg1 ;
-(BOOL)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(/*^block*/id)arg4 ;
-(id)_nodeWithIndexPath:(id)arg1 ;
-(id)initForJavascript:(id)arg1 ;
-(SCNMaterialProperty *)lightingEnvironment;
-(void)set_allowsDefaultLightingEnvironmentFallback:(BOOL)arg1 ;
-(void)_customEncodingOfSCNScene:(id)arg1 ;
-(void)_didEncodeSCNScene:(id)arg1 ;
-(void)_customDecodingOfSCNScene:(id)arg1 ;
-(void)setRootNode:(SCNNode *)arg1 ;
-(void)setFogStartDistance:(double)arg1 ;
-(void)setFogEndDistance:(double)arg1 ;
-(void)setFogDensityExponent:(double)arg1 ;
-(void)setFogColor:(id)arg1 ;
-(void)_didDecodeSCNScene:(id)arg1 ;
-(void)_clearSceneRef;
-(void)_setSourceURL:(id)arg1 ;
-(id)_scenes;
-(void)setSceneSource:(id)arg1 ;
-(id)sceneSource;
-(void)setRootNode:(id)arg1 forLayer:(int)arg2 ;
-(id)rootNodeForLayer:(int)arg1 ;
-(void)_scaleSceneBy:(double)arg1 ;
-(BOOL)_allowsDefaultLightingEnvironmentFallback;
-(id)fogColor;
-(double)fogEndDistance;
-(double)fogDensityExponent;
-(double)fogStartDistance;
-(void)_dumpToDisk;
-(void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 ;
-(void)addParticleSystem:(id)arg1 withTransform:(SCNMatrix4)arg2 ;
-(void)setPausedForEditing:(BOOL)arg1 ;
-(BOOL)isPausedForEditing;
-(id)_subnodeFromIndexPath:(id)arg1 ;
-(void)_prettifyForPreview;
-(id)_exportAsMovieOperationWithDestinationURL:(id)arg1 size:(CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void*)arg6 ;
-(BOOL)writeToURL:(id)arg1 options:(id)arg2 ;
-(id)exportAsMovieOperationWithDestinationURL:(id)arg1 size:(CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void*)arg6 ;
-(id)debugQuickLookObjectWithPointOfView:(id)arg1 ;
-(double)frameRate;
-(void)setFrameRate:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)scene;
-(SCNMaterialProperty *)background;
-(void)lock;
-(void)unlock;
-(id)debugQuickLookObject;
-(void)setPaused:(BOOL)arg1 ;
-(id)root;
-(BOOL)isPaused;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

