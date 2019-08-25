/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MREditingDelegate, MRFeatureDelegate, MZMediaManagement, MRRenderingDelegate;
#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MRLayerParallelizer, MRRendererInternal, NSDictionary, CADisplayLink, MCMontage, MRContext;

@interface MRRenderer : NSObject {

	MRLayerParallelizer* mTopMRLayer;
	CGSize mSize;
	MRRendererInternal* mInternal;
	id<MREditingDelegate> mEditingDelegate;
	id<MRFeatureDelegate> mFeatureDelegate;
	NSDictionary* mDescriptionsForRandomTransitionPresetIDs;
	CADisplayLink* mDisplayLink;
	double mDisplayLinkTimestamp;
	BOOL mIsEditing;
	BOOL mIsPlaying;
	BOOL mPushRendering;
	BOOL mRequestRenderingOnChanges;
	BOOL mDisplaysFPS;
	BOOL mDisplaysPlayingIDs;
	BOOL mDisplaysIsPreloadingImages;
	BOOL mIsCleanedUp;
	BOOL _asynchronousOperationsAreSuspended;
	BOOL _allowsThumbnails;
	int mMode;
	int mOrientation;
	float mVolume;
	MCMontage* mMontage;
	id<MZMediaManagement> mAssetManagementDelegate;
	id<MRRenderingDelegate> mRenderingDelegate;
	double mTimeQuantum;
	NSDictionary* mParameters;
	double _fadeInStartTime;
	double _fadeInDuration;
	double _fadeOutStartTime;
	double _fadeOutDuration;

}

@property (readonly) MRContext * context; 
@property (assign,nonatomic) CGPoint contextOffset; 
@property (assign) BOOL dontShowDRMUI; 
@property (assign) double masterClock; 
@property (readonly) BOOL isFlipped; 
@property (retain) id<MRLiveSlideshowDelegate> liveSlideshowDelegate; 
@property (retain) id<MRAsynchronousOperationsDelegate> asynchronousOperationsDelegate; 
@property (assign) BOOL screenBurnTest; 
@property (assign) BOOL hideTextWhileEditing; 
@property (readonly) BOOL isCleanedUp; 
@property (setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;              //@synthesize asynchronousOperationsAreSuspended=_asynchronousOperationsAreSuspended - In the implementation block
@property (assign) BOOL slaveFrameMode; 
@property (nonatomic,retain) MCMontage * montage; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) double timeQuantum; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) int mode; 
@property (readonly) BOOL isOffscreen; 
@property (assign,nonatomic) BOOL displaysFPS; 
@property (assign,nonatomic) BOOL displaysPlayingIDs; 
@property (assign,nonatomic) BOOL displaysIsPreloadingImages; 
@property (assign,nonatomic) BOOL isEditing; 
@property (readonly) BOOL isPlaying; 
@property (assign,nonatomic) BOOL pushRendering; 
@property (assign,nonatomic) BOOL requestRenderingOnChanges; 
@property (assign,nonatomic) BOOL allowsThumbnails;                                                     //@synthesize allowsThumbnails=_allowsThumbnails - In the implementation block
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (assign,nonatomic) float volume; 
@property (readonly) NSDictionary * parameters; 
@property (nonatomic,retain) id<MZMediaManagement> assetManagementDelegate; 
@property (retain) id<MRFeatureDelegate> featureDelegate; 
@property (retain) id<MRRenderingDelegate> renderingDelegate; 
@property (retain) id<MREditingDelegate> editingDelegate; 
@property (assign) BOOL usesNewImageManager; 
@property (assign,nonatomic) double fadeInStartTime;                                                    //@synthesize fadeInStartTime=_fadeInStartTime - In the implementation block
@property (assign,nonatomic) double fadeInDuration;                                                     //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) double fadeOutStartTime;                                                   //@synthesize fadeOutStartTime=_fadeOutStartTime - In the implementation block
@property (assign,nonatomic) double fadeOutDuration;                                                    //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
+(double)textScaleForResolution:(CGSize)arg1 ;
+(void)enableDiskImageCache;
+(BOOL)isDiskImageCacheEnabled;
-(void)setMasterClock:(double)arg1 ;
-(double)masterClock;
-(void)finalize;
-(double)time;
-(void)setTime:(double)arg1 ;
-(BOOL)isFlipped;
-(void)_pause;
-(void)setMontage:(MCMontage *)arg1 ;
-(BOOL)isPlaying;
-(void)setVolume:(float)arg1 ;
-(void)addAudioPlayer:(id)arg1 ;
-(void)removeAudioPlayer:(id)arg1 ;
-(float)volume;
-(MCMontage *)montage;
-(void)endMorphing;
-(BOOL)usesNewImageManager;
-(BOOL)asynchronousOperationsAreSuspended;
-(void)suspendAsynchronousOperations:(BOOL)arg1 ;
-(void)imagePreloadingBegan;
-(void)imagePreloadingEnded;
-(BOOL)isOffscreen;
-(void)goForth;
-(void)doAction:(id)arg1 ;
-(id<MZMediaManagement>)assetManagementDelegate;
-(id)actionHitAtPoint:(CGPoint)arg1 layer:(id*)arg2 ;
-(void)effect:(id)arg1 requestedNumberOfSlides:(unsigned long long)arg2 firstSlideIndexStillNeeded:(unsigned long long)arg3 ;
-(unsigned char)currentLayoutIndex;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(void)addIDToDisplay:(id)arg1 :(id)arg2 ;
-(void)requestRendering:(BOOL)arg1 ;
-(void)stall;
-(BOOL)hideTextWhileEditing;
-(double)timeQuantum;
-(void)moveNavigatorFromBackToForthHistory:(id)arg1 ;
-(void)removeNavigatorFromForthHistory:(id)arg1 ;
-(void)addNavigatorToBackHistory:(id)arg1 ;
-(void)moveNavigatorFromForthToBackHistory:(id)arg1 ;
-(id)chooseTransitionIDForRandomTransitionPresetID:(id)arg1 ;
-(void)nearingEndForSerializer:(id)arg1 ;
-(void)lockRendering;
-(void)unlockRendering;
-(void)transitionToNextPlugInContainerOfPlug:(id)arg1 ;
-(void)transitionToPreviousPlugInContainerOfPlug:(id)arg1 ;
-(id)layerHitAtPoint:(CGPoint)arg1 onlyIfHitElement:(BOOL)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)beginTextEditingOfElement:(id)arg1 inLayer:(id)arg2 callDelegate:(BOOL)arg3 ;
-(void)endTextEditing:(BOOL)arg1 ;
-(void)setUsesNewImageManager:(BOOL)arg1 ;
-(void)setContextOffset:(CGPoint)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)setAssetManagementDelegate:(id<MZMediaManagement>)arg1 ;
-(void)setFeatureDelegate:(id<MRFeatureDelegate>)arg1 ;
-(void)setEAGLContext:(id)arg1 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)setLiveSlideshowDelegate:(id<MRLiveSlideshowDelegate>)arg1 ;
-(void)setAsynchronousOperationsDelegate:(id<MRAsynchronousOperationsDelegate>)arg1 ;
-(void)setRequestRenderingOnChanges:(BOOL)arg1 ;
-(void)setMasterStartTime:(double)arg1 andDuration:(double)arg2 mode:(int)arg3 ;
-(void)pauseWhenStill;
-(BOOL)displaysFPS;
-(void)setDisplaysFPS:(BOOL)arg1 ;
-(void)setTimeQuantum:(double)arg1 ;
-(void)warmupVideo:(BOOL)arg1 ;
-(void)beginMorphingToAspectRatio:(double)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 ;
-(CGImageRef)currentFrameAsCGImage;
-(void)touchesBegan:(id)arg1 ;
-(void)touchesMoved:(id)arg1 ;
-(BOOL)touchesEnded:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 ;
-(BOOL)requestRenderingWithin:(double)arg1 ;
-(BOOL)beginTextEditingOfElement:(id)arg1 inPlug:(id)arg2 callDelegate:(BOOL)arg3 ;
-(void)_renderThreadMain;
-(void)resetFadeInAndOut;
-(void)setScreenBurnTest:(BOOL)arg1 ;
-(void)_setTime:(double)arg1 isResyncing:(BOOL)arg2 ;
-(void)_syncIsPlayingToOuter;
-(void)_resume;
-(double)_unalteredTime;
-(void)_stopRenderTimer;
-(void)_startRenderTimer;
-(void)_renderWithPassParameters:(id)arg1 ;
-(void)updateTimeWithDisplayLinkTimestamp:(double)arg1 ;
-(void)_renderOnDisplayLink:(id)arg1 ;
-(void)_doActions;
-(void)processAudioPlayers;
-(void)_renderForScreenBurnTestAtTime:(double)arg1 ;
-(void)_doSnapshot;
-(void)_displayFPS:(double)arg1 actuallyDisplay:(BOOL)arg2 ;
-(void)_displayPlayingIDs;
-(void)_displayIsPreloadingImages;
-(void)sendNotification:(id)arg1 ;
-(void)sendMCAction:(id)arg1 fromSender:(id)arg2 ;
-(void)_syncTimeToOuter;
-(void)sendMCAction:(id)arg1 fromSender:(id)arg2 toTarget:(id)arg3 ;
-(void)_nearingEndForSerializer:(id)arg1 ;
-(void)_effectRequestedSlides:(id)arg1 ;
-(BOOL)slaveFrameMode;
-(void)setSlaveFrameMode:(BOOL)arg1 ;
-(void)warmupAudio:(BOOL)arg1 ;
-(void)stepForward;
-(void)stepBackward;
-(BOOL)canGoForth;
-(void)addNavigatorToForthHistory:(id)arg1 ;
-(void)removeNavigatorFromBackHistory:(id)arg1 ;
-(void)setUsesExternalDisplayLink:(BOOL)arg1 ;
-(void)setTemporarySize:(CGSize)arg1 ;
-(CGPoint)contextOffset;
-(void)disableFadeInAndOut;
-(id)layerForPlug:(id)arg1 ;
-(id)layerForPlugObjectID:(id)arg1 ;
-(id)plugForCurrentSublayerInNavigatorForPlug:(id)arg1 ;
-(void)gotoState:(id)arg1 ;
-(id)snapshotOfStates:(id)arg1 atSize:(CGSize)arg2 ;
-(void)dumpActiveHierarchy;
-(BOOL)pushRendering;
-(void)setPushRendering:(BOOL)arg1 ;
-(BOOL)requestRenderingOnChanges;
-(BOOL)displaysPlayingIDs;
-(void)setDisplaysPlayingIDs:(BOOL)arg1 ;
-(BOOL)displaysIsPreloadingImages;
-(void)setDisplaysIsPreloadingImages:(BOOL)arg1 ;
-(id<MRFeatureDelegate>)featureDelegate;
-(id<MRRenderingDelegate>)renderingDelegate;
-(void)setRenderingDelegate:(id<MRRenderingDelegate>)arg1 ;
-(BOOL)isCleanedUp;
-(BOOL)allowsThumbnails;
-(void)setAllowsThumbnails:(BOOL)arg1 ;
-(double)fadeInStartTime;
-(void)setFadeInStartTime:(double)arg1 ;
-(double)fadeOutStartTime;
-(void)setFadeOutStartTime:(double)arg1 ;
-(void)updateSelectionLayer;
-(void)_undimAllLayersInLayer:(id)arg1 ;
-(void)_dimLayersExceptForPathTo:(id)arg1 ;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 andSize:(CGSize)arg2 ;
-(BOOL)dontShowDRMUI;
-(void)setDontShowDRMUI:(BOOL)arg1 ;
-(void)setFreezeSizeOfImageRequests:(BOOL)arg1 ;
-(void)selectLayer:(id)arg1 ;
-(void)deselectLayer:(id)arg1 ;
-(void)deselectAllLayers;
-(id)selectedLayers;
-(void)dimLayersExceptForPathTo:(id)arg1 ;
-(void)undimAllLayers;
-(id)layerAtPath:(id)arg1 fromLayer:(id)arg2 ;
-(CGImageRef)copyCGSnapshotAtTime:(double)arg1 andSize:(CGSize)arg2 ;
-(void)setMasterStartTime:(double)arg1 andDuration:(double)arg2 loop:(BOOL)arg3 ;
-(id<MRLiveSlideshowDelegate>)liveSlideshowDelegate;
-(id<MRAsynchronousOperationsDelegate>)asynchronousOperationsDelegate;
-(BOOL)screenBurnTest;
-(void)setHideTextWhileEditing:(BOOL)arg1 ;
-(void)setUseCGLFlushDrawableWorkaround:(BOOL)arg1 ;
-(void)_sendNotificationMainThread:(id)arg1 ;
-(long long)_maxLinesForCurrentEditingTextElement;
-(CGSize)_maxSizeForCurrentEditingTextElement;
-(BOOL)getVerticesCoordinatesForCurrentlyEditedTextElement:(CGPoint*)arg1 ;
-(BOOL)sendStandardAction:(id)arg1 ;
-(id)actionByEvaluatingConditionalAction:(id)arg1 withStates:(id)arg2 ;
-(double)_doAction:(id)arg1 ;
-(void)_cleanupGestureRecognizers;
-(id)_computeMatrixChainForLayer:(id)arg1 ;
-(void)_doLayerTrackingAtLocation:(CGPoint)arg1 ;
-(CGSize)size;
-(id)init;
-(void)dealloc;
-(MRContext *)context;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isEditing;
-(void)setSize:(CGSize)arg1 ;
-(void)cleanup;
-(id)currentState;
-(int)orientation;
-(int)mode;
-(void)resume;
-(void)setOrientation:(int)arg1 ;
-(void)setMode:(int)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(NSDictionary *)parameters;
-(void)setEditingDelegate:(id<MREditingDelegate>)arg1 ;
-(id<MREditingDelegate>)editingDelegate;
-(void)pause;
-(BOOL)canGoBack;
-(void)goBack;
@end

