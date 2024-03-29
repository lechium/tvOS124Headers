/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLCameraEffectsRendererDelegate;
#import <CameraKit/CameraKit-Structs.h>
@class EAGLContext, CIContext, NSObject, CMKEffectsFullsizeView, CMKEffectsGridView, CMKVideoPreviewView;

@interface CMKEffectsRenderer : NSObject {

	EAGLContext* _eaglContext;
	CIContext* _ciContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _isShowingGrid;
	BOOL _gridTransitionInFlight;
	BOOL _gridTransitionIsAnimated;
	id<PLCameraEffectsRendererDelegate> _delegate;
	double _lastReportedFrameDropTime;
	unsigned long long _totalFramesSinceLastReportedFrameDrop;
	unsigned long long _droppedFramesSinceLastReportedFrameDrop;
	BOOL __atomicPreviewStartedNotificationNeeded;
	BOOL _atomicMirrorFilterRendering;
	BOOL __previewLayerEnabled;
	BOOL __inBackground;
	CMKEffectsFullsizeView* __renderEffectsFullsizeView;
	CMKEffectsGridView* __renderGridView;
	CMKVideoPreviewView* _atomicVideoPreviewView;
	unsigned long long _atomicFilterIndex;
	/*^block*/id __atomicPreviewStartedBlock;
	long long _atomicCameraMode;

}

@property (retain) CMKVideoPreviewView * atomicVideoPreviewView;                                                           //@synthesize atomicVideoPreviewView=_atomicVideoPreviewView - In the implementation block
@property (assign) unsigned long long atomicFilterIndex;                                                                   //@synthesize atomicFilterIndex=_atomicFilterIndex - In the implementation block
@property (setter=_setRenderEffectsFullsizeView:,retain) CMKEffectsFullsizeView * _renderEffectsFullsizeView;              //@synthesize _renderEffectsFullsizeView=__renderEffectsFullsizeView - In the implementation block
@property (setter=_setRenderGridView:,retain) CMKEffectsGridView * _renderGridView;                                        //@synthesize _renderGridView=__renderGridView - In the implementation block
@property (setter=_setPreviewStartedBlock:,copy) id _previewStartedBlock;                                                  //@synthesize _atomicPreviewStartedBlock=__atomicPreviewStartedBlock - In the implementation block
@property (setter=_setPreviewStartedNotificationNeeded:) BOOL _previewStartedNotificationNeeded;                           //@synthesize _atomicPreviewStartedNotificationNeeded=__atomicPreviewStartedNotificationNeeded - In the implementation block
@property (assign,setter=_setPreviewLayerEnabled:,nonatomic) BOOL _previewLayerEnabled;                                    //@synthesize _previewLayerEnabled=__previewLayerEnabled - In the implementation block
@property (setter=_setInBackground:,getter=_isInBackground) BOOL _inBackground;                                            //@synthesize _inBackground=__inBackground - In the implementation block
@property (nonatomic,retain) CMKVideoPreviewView * videoPreviewView; 
@property (assign,nonatomic) unsigned long long filterIndex; 
@property (assign,getter=isShowingGrid,nonatomic) BOOL showGrid; 
@property (assign) BOOL mirrorFilterRendering;                                                                             //@synthesize atomicMirrorFilterRendering=_atomicMirrorFilterRendering - In the implementation block
@property (assign) long long cameraMode;                                                                                   //@synthesize atomicCameraMode=_atomicCameraMode - In the implementation block
@property (assign,nonatomic) id<PLCameraEffectsRendererDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)_previewStarted:(id)arg1 ;
-(void)setCameraMode:(long long)arg1 ;
-(long long)cameraMode;
-(void)_setInBackground:(BOOL)arg1 ;
-(void)_createContextIfNecessary;
-(void)_setPreviewLayerEnabled:(BOOL)arg1 ;
-(void)_setVideoDataOutputEnabled:(BOOL)arg1 ;
-(void)_setPreviewStartedNotificationNeeded:(BOOL)arg1 ;
-(void)_deviceStarted:(id)arg1 ;
-(CMKVideoPreviewView *)videoPreviewView;
-(void)_tearDownEffectsView:(id)arg1 removeFromSuperview:(BOOL)arg2 ;
-(BOOL)_isInBackground;
-(CMKEffectsFullsizeView *)_renderEffectsFullsizeView;
-(CMKEffectsGridView *)_renderGridView;
-(void)_setupEffectsView:(id)arg1 ;
-(unsigned long long)atomicFilterIndex;
-(void)setFilterIndex:(unsigned long long)arg1 forceStateChange:(BOOL)arg2 renderNotifyBlock:(/*^block*/id)arg3 ;
-(unsigned long long)filterIndex;
-(void)setAtomicFilterIndex:(unsigned long long)arg1 ;
-(void)_updateEffectsFullsizeView;
-(void)_setPreviewStartedBlock:(/*^block*/id)arg1 ;
-(void)_forceResetToFilteredRendering:(BOOL)arg1 ;
-(void)_runOnMainThreadImmediatelyIfPossibleWithBlock:(/*^block*/id)arg1 ;
-(void)setFilterIndex:(unsigned long long)arg1 ;
-(CMKVideoPreviewView *)atomicVideoPreviewView;
-(void)_destroyEffectsFullsizeView;
-(void)_destroyEffectsGridView;
-(void)setAtomicVideoPreviewView:(CMKVideoPreviewView *)arg1 ;
-(id)_setupEffectsGridView;
-(id)_setupEffectsFullsizeView;
-(void)_setRenderEffectsFullsizeView:(id)arg1 ;
-(void)_setRenderGridView:(id)arg1 ;
-(BOOL)mirrorFilterRendering;
-(void)_notifyOfRenderIfNecessary;
-(void)_renderWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateStatsForFrameWasDropped:(BOOL)arg1 ;
-(void)_reportStatsForFrameDrops;
-(void)_resumeRendering;
-(BOOL)_previewStartedNotificationNeeded;
-(void)_handlePreviewStartedFiltered:(BOOL)arg1 ;
-(id)_previewStartedBlock;
-(void)setShowGrid:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_gridTransitionInFlight;
-(void)_setGridTransitionIsInFlight:(BOOL)arg1 ;
-(void)_transitionToGrid:(/*^block*/id)arg1 ;
-(void)_transitionFromGrid:(/*^block*/id)arg1 ;
-(id)_animatedLayerForView:(id)arg1 ;
-(CGRect)_gridFrameForCurrentFilters;
-(void)_animateToGrid:(BOOL)arg1 layer:(id)arg2 fadeOutLayer:(id)arg3 startFrame:(CGRect)arg4 endFrame:(CGRect)arg5 completion:(/*^block*/id)arg6 ;
-(void)_animateGridLayerZoomToGrid:(BOOL)arg1 ;
-(CGRect)_frameToZoomFromFrame:(CGRect)arg1 toFrame:(CGRect)arg2 withinFrame:(CGRect)arg3 ;
-(void)_animateLayer:(id)arg1 startFrame:(CGRect)arg2 endFrame:(CGRect)arg3 viewTransform:(CGAffineTransform)arg4 animationDuration:(double)arg5 animationTimingFunction:(id)arg6 animationDelegate:(id)arg7 ;
-(CGRect)_zoomedFrameForRect:(CGRect)arg1 fromFullFrame:(CGRect)arg2 toZoomFrame:(CGRect)arg3 ;
-(void)setVideoPreviewView:(CMKVideoPreviewView *)arg1 ;
-(void)renderWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)didDropSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)isShowingGrid;
-(void)setShowGrid:(BOOL)arg1 ;
-(void)setMirrorFilterRendering:(BOOL)arg1 ;
-(BOOL)_previewLayerEnabled;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PLCameraEffectsRendererDelegate>)arg1 ;
-(id<PLCameraEffectsRendererDelegate>)delegate;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end

