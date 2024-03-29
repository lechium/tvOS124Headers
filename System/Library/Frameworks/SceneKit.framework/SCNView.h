/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SCNSceneRenderer.h>
#import <libobjc.A.dylib/SCNTechniqueSupport.h>

@protocol SCNEventHandler, MTLDevice;
@class NSString, SCNRenderer, SCNScene, SCNDisplayLink, CALayer, SCNJitterer, SCNRecursiveLock, UIColor, SCNSpriteKitEventHandler, NSArray, SCNCameraController, EAGLContext, SCNNode, SKScene, AVAudioEngine, AVAudioEnvironmentNode, SCNTechnique;

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport> {

	double _currentSystemTime;
	double _lastUpdate;
	NSString* __ibSceneName;
	unsigned long long __ibPreferredRenderingAPI;
	unsigned _ibNoMultisampling : 1;
	unsigned long long _renderingAPI;
	unsigned _isOpaque : 1;
	unsigned _rendersContinuously : 1;
	unsigned _firstDrawDone : 1;
	unsigned _drawOnMainThreadPending : 1;
	unsigned _appIsDeactivated : 1;
	unsigned _viewIsOffscreen : 1;
	unsigned _autoPausedScene : 1;
	unsigned _inRenderQueueForLayerBackedGLRendering : 1;
	unsigned _disableLinearRendering : 1;
	unsigned _isInLiveResize : 1;
	BOOL _didTriggerRedrawWhileRendering;
	id _delegate;
	SCNRenderer* _renderer;
	SCNScene* _scene;
	BOOL _displayLinkCreationRequested;
	SCNDisplayLink* _displayLink;
	long long _preferredFramePerSeconds;
	CALayer* _backingLayer;
	SCNJitterer* _jitterer;
	SCNRecursiveLock* _lock;
	UIColor* _backgroundColor;
	CGSize _boundsSize;
	char* _snapshotImageData;
	unsigned long long _snapshotImageDataLength;
	id<SCNEventHandler> _navigationCameraController;
	SCNSpriteKitEventHandler* _spriteKitEventHandler;
	id<MTLDevice> _device;
	NSArray* _controllerGestureRecognizers;

}

@property (nonatomic,retain) SCNScene * scene; 
@property (assign,nonatomic) BOOL rendersContinuously; 
@property (assign,nonatomic) BOOL allowsCameraControl; 
@property (nonatomic,readonly) id<SCNCameraControlConfiguration> cameraControlConfiguration; 
@property (nonatomic,readonly) SCNCameraController * defaultCameraController; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
@property (nonatomic,retain) EAGLContext * eaglContext; 
@property (assign,nonatomic) unsigned long long antialiasingMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic,__weak) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) BOOL jitteringEnabled; 
@property (assign,nonatomic) BOOL showsStatistics; 
@property (assign,nonatomic) unsigned long long debugOptions; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) unsigned long long renderingAPI; 
@property (nonatomic,readonly) void* context; 
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long colorPixelFormat; 
@property (nonatomic,readonly) unsigned long long depthPixelFormat; 
@property (nonatomic,readonly) unsigned long long stencilPixelFormat; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,readonly) AVAudioEnvironmentNode * audioEnvironmentNode; 
@property (nonatomic,retain) SCNNode * audioListener; 
@property (nonatomic,copy) SCNTechnique * technique; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)currentUIFocusEnvironment;
+(id)deviceForOptions:(id)arg1 ;
+(id)_kvoKeysForwardedToRenderer;
+(unsigned long long)renderingAPIForOptions:(id)arg1 ;
+(BOOL)_isMetalSupported;
+(Class)layerClass;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)lowLatency;
-(void)stop:(id)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)play:(id)arg1 ;
-(void)setScene:(SCNScene *)arg1 ;
-(void)_enterForeground:(id)arg1 ;
-(void)_enterBackground:(id)arg1 ;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setEventHandler:(id)arg1 ;
-(BOOL)loops;
-(const void*)__CFObject;
-(void)setLoops:(BOOL)arg1 ;
-(BOOL)_canJitter;
-(id)renderer;
-(SKScene *)overlaySKScene;
-(BOOL)showsStatistics;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(id)_authoringEnvironment;
-(void)updateAtTime:(double)arg1 ;
-(unsigned long long)debugOptions;
-(id)currentRenderPassDescriptor;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(void)setDebugOptions:(unsigned long long)arg1 ;
-(double)_superSamplingFactor;
-(SCNMatrix4)_screenTransform;
-(BOOL)_disableLinearRendering;
-(BOOL)_showsAuthoringEnvironment;
-(void)SCN_displayLinkCallback:(double)arg1 ;
-(id)_renderingQueue;
-(double)_renderThreadPriority;
-(void)_initializeDisplayLink;
-(void)setTechnique:(SCNTechnique *)arg1 ;
-(SCNTechnique *)technique;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(unsigned long long)renderingAPI;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1 ;
-(unsigned long long)antialiasingMode;
-(SCNNode *)pointOfView;
-(id)scn_backingLayer;
-(BOOL)_isEditor;
-(void)_sceneDidUpdate:(id)arg1 ;
-(unsigned long long)colorPixelFormat;
-(void)set_showsAuthoringEnvironment:(BOOL)arg1 ;
-(void)_drawAtTime:(double)arg1 ;
-(BOOL)isJitteringEnabled;
-(SCNVector4)_viewport;
-(void)setOverlaySKScene:(SKScene *)arg1 ;
-(void)setJitteringEnabled:(BOOL)arg1 ;
-(BOOL)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(void)set_superSamplingFactor:(double)arg1 ;
-(void)set_screenTransform:(SCNMatrix4)arg1 ;
-(void)_jitterRedisplay;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 ;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1 ;
-(SCNVector3)projectPoint:(SCNVector3)arg1 ;
-(SCNVector3)unprojectPoint:(SCNVector3)arg1 ;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2 ;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setShowsStatistics:(BOOL)arg1 ;
-(unsigned long long)depthPixelFormat;
-(unsigned long long)stencilPixelFormat;
-(AVAudioEngine *)audioEngine;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNNode *)audioListener;
-(void)setAudioListener:(SCNNode *)arg1 ;
-(void)setPointOfCulling:(id)arg1 ;
-(id)pointOfCulling;
-(void)setRendersContinuously:(BOOL)arg1 ;
-(BOOL)_enablesDeferredShading;
-(void)set_enablesDeferredShading:(BOOL)arg1 ;
-(void)set_disableLinearRendering:(BOOL)arg1 ;
-(void)_updateProbes:(id)arg1 withProgress:(id)arg2 ;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
-(void)pause:(id)arg1 ;
-(void)pauseDisplayLink;
-(void)resumeDisplayLink;
-(void)_systemTimeAnimationStarted:(id)arg1 ;
-(BOOL)scn_inLiveResize;
-(BOOL)_supportsJitteringSyncRedraw;
-(SCNCameraController *)defaultCameraController;
-(void)switchToNextCamera;
-(void)scn_setBackingLayer:(id)arg1 ;
-(EAGLContext *)eaglContext;
-(id)_defaultBackgroundColor;
-(void)setAllowsCameraControl:(BOOL)arg1 ;
-(void)setNavigationCameraController:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 options:(id)arg2 ;
-(void)_selectRenderingAPIWithOptions:(id)arg1 ;
-(void)_commonInit:(id)arg1 ;
-(void)set_ibPreferredRenderingAPI:(int)arg1 ;
-(void)set_ibWantsMultisampling:(BOOL)arg1 ;
-(BOOL)_ibWantsMultisampling;
-(void)set_ibSceneName:(id)arg1 ;
-(BOOL)allowsCameraControl;
-(id)_ibSceneName;
-(int)_ibPreferredRenderingAPI;
-(void)_flushDisplayLink;
-(void)_setNeedsDisplay;
-(void)_updateContentsScaleFactor;
-(CGSize)_updateBackingSize;
-(id)navigationCameraController;
-(double)_flipY:(double)arg1 ;
-(void)_updateGestureRecognizers;
-(void)_adjustBackingLayerPixelFormat;
-(void)_backgroundDidChange;
-(void)_createDisplayLinkIfNeeded;
-(void)setPointOfView:(id)arg1 animate:(BOOL)arg2 ;
-(id)_getFocusableNodes;
-(CGRect)_focusFrameForSCNNode:(id)arg1 ;
-(void)set_renderOptions:(unsigned long long)arg1 ;
-(unsigned long long)_renderOptions;
-(void)_resetContentsScaleFactor;
-(id<SCNCameraControlConfiguration>)cameraControlConfiguration;
-(BOOL)rendersContinuously;
-(void)eventHandlerWantsRedraw;
-(BOOL)_wantsSceneRendererDelegationMessages;
-(void)set_wantsSceneRendererDelegationMessages:(BOOL)arg1 ;
-(void)switchToCameraNamed:(id)arg1 ;
-(int)ibPreferredRenderingAPI;
-(void)setIbPreferredRenderingAPI:(int)arg1 ;
-(id)ibSceneName;
-(void)setIbSceneName:(id)arg1 ;
-(BOOL)ibWantsMultisampling;
-(void)setIbWantsMultisampling:(BOOL)arg1 ;
-(double)_runFPSTestWithDuration:(double)arg1 ;
-(void)setEaglContext:(EAGLContext *)arg1 ;
-(id)_focusedItemRegionContainer;
-(id)eventHandler;
-(id<MTLDevice>)device;
-(long long)preferredFramesPerSecond;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setDelegate:(id<SCNSceneRendererDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id<SCNSceneRendererDelegate>)delegate;
-(void*)context;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)backgroundColor;
-(void)safeAreaInsetsDidChange;
-(void)didMoveToWindow;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_setGestureRecognizers:(id)arg1 ;
-(void)_updateOpacity;
-(BOOL)isOpaque;
-(void)drawRect:(CGRect)arg1 ;
-(SCNScene *)scene;
-(long long)_preferredFocusMovementStyle;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(id)snapshot;
-(void)lock;
-(void)unlock;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setDisplayLink:(id)arg1 ;
-(id)displayLink;
-(BOOL)_controlsOwnScaleFactor;
@end

