/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UICoordinateSpace.h>
#import <UIKitCore/_UIContextBinderDelegate.h>
#import <libobjc.A.dylib/FBSSceneDelegate.h>
#import <UIKitCore/_UICanvasLifecycleStateMonitoring.h>

@protocol _UICanvasMetricsUpdating, _UICanvasDelegate;
@class _UIContextBinder, UIScreen, __UISceneSubstrate, FBSSceneSettings, NSPointerArray, FBSScene, NSArray, NSString;

@interface _UICanvas : UIResponder <UICoordinateSpace, _UIContextBinderDelegate, FBSSceneDelegate, _UICanvasLifecycleStateMonitoring> {

	_UIContextBinder* _binder;
	UIScreen* _screen;
	__UISceneSubstrate* _sceenSubstrate;
	_UICanvas* _settingsCanvas;
	FBSSceneSettings* _overrideSettings;
	id<_UICanvasMetricsUpdating> _metricsCalculator;
	NSPointerArray* _inheritingCanvases;
	BOOL _active;
	long long _avkitRequestedOverscanCompensation;
	BOOL suspendedEventsOnly;
	BOOL runningInTaskSwitcher;
	BOOL suspendedUnderLock;
	BOOL respondingToLifecycleEvent;
	long long state;
	long long _screenRequestedOverscanCompensation;
	FBSSceneSettings* _oldSettings;
	id<_UICanvasDelegate> _delegate;
	FBSScene* _scene;

}

@property (nonatomic,readonly) NSArray * _allWindows; 
@property (nonatomic,readonly) NSArray * _visibleWindows; 
@property (getter=_oldSettings,nonatomic,readonly) FBSSceneSettings * oldSettings;                                                                                                      //@synthesize oldSettings=_oldSettings - In the implementation block
@property (getter=_effectiveSettings,nonatomic,readonly) FBSSceneSettings * effectiveSettings; 
@property (nonatomic,__weak,readonly) _UICanvas * settingsCanvas; 
@property (nonatomic,readonly) id<_UIAnimationFenceCoordinating> animationFencingCoordinator; 
@property (assign,setter=_setScreenRequestedDisplayNativePixelSize:,getter=_screenRequestedDisplayNativePixelSize,nonatomic) CGSize screenRequestedDisplayNativePixelSize; 
@property (assign,setter=_setScreenRequestedOverscanCompensation:,getter=_screenRequestedOverscanCompensation,nonatomic) long long screenRequestedOverscanCompensation;                 //@synthesize screenRequestedOverscanCompensation=_screenRequestedOverscanCompensation - In the implementation block
@property (nonatomic,retain) id<_UICanvasDelegate> delegate;                                                                                                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBSScene * scene;                                                                                                                                        //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace; 
@property (assign,nonatomic) BOOL keepContextAssociationInBackground; 
@property (nonatomic,readonly) UIEdgeInsets _peripheryInsets; 
@property (nonatomic,readonly) double _systemMinimumMargin; 
@property (nonatomic,readonly) UIScreen * screen; 
@property (nonatomic,readonly) NSArray * windows; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) long long state; 
@property (getter=_hasLifecycle,nonatomic,readonly) BOOL hasLifecycle; 
@property (assign,setter=_setIsRespondingToLifecycleEvent:,getter=_isRespondingToLifecycleEvent,nonatomic) BOOL respondingToLifecycleEvent; 
@property (assign,setter=_setIsActive:,getter=_isActive,nonatomic) BOOL active; 
@property (assign,setter=_setSuspendedEventsOnly:,getter=_suspendedEventsOnly,nonatomic) BOOL suspendedEventsOnly; 
@property (assign,setter=_setRunningInTaskSwitcher:,getter=_runningInTaskSwitcher,nonatomic) BOOL runningInTaskSwitcher; 
@property (assign,setter=_setSuspendedUnderLock:,getter=_suspendedUnderLock,nonatomic) BOOL suspendedUnderLock; 
+(id)canvases;
+(id)_settingsDiffActions;
+(id)_unassociatedCanvasForScreen:(id)arg1 create:(BOOL)arg2 ;
+(void)_enqueuePostSettingUpdateTransactionBlock:(/*^block*/id)arg1 ;
+(BOOL)activeSettingsTransaction;
+(id)canvasForScene:(id)arg1 ;
+(id)_keyboardCanvasForScreen:(id)arg1 ;
+(id)_canvasForScene:(id)arg1 create:(BOOL)arg2 ;
+(id)_actionsHandlers;
+(void)setActiveSettingsTransaction:(BOOL)arg1 ;
+(void)_updateVisibleCanvasAndWindowOrderWithTest:(/*^block*/id)arg1 ;
+(void)_enumerateAllWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 asCopy:(BOOL)arg3 withBlock:(/*^block*/id)arg4 ;
-(CGRect)bounds;
-(UIScreen *)screen;
-(NSString *)description;
-(void)setDelegate:(id<_UICanvasDelegate>)arg1 ;
-(long long)state;
-(id<_UICanvasDelegate>)delegate;
-(id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 ;
-(BOOL)_isActive;
-(id)_displayEdgeInfoProvider;
-(UIEdgeInsets)_peripheryInsets;
-(CGRect)_referenceBounds;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(void)enrolledBindablesDidChangeForBinder:(id)arg1 ;
-(BOOL)_hasLifecycle;
-(BOOL)_suspendedEventsOnly;
-(BOOL)_isRespondingToLifecycleEvent;
-(FBSScene *)scene;
-(void)_setIsRespondingToLifecycleEvent:(BOOL)arg1 ;
-(BOOL)_suspendedUnderLock;
-(id<_UIAnimationFenceCoordinating>)animationFencingCoordinator;
-(void)_willResignActive;
-(NSArray *)_visibleWindows;
-(void)_willAttach;
-(id)initWithScene:(id)arg1 ;
-(void)_computeMetrics:(BOOL)arg1 ;
-(void)_setIsActive:(BOOL)arg1 ;
-(void)_setSuspendedEventsOnly:(BOOL)arg1 ;
-(BOOL)_runningInTaskSwitcher;
-(void)_setRunningInTaskSwitcher:(BOOL)arg1 ;
-(void)_setSuspendedUnderLock:(BOOL)arg1 ;
-(void)_prepareCanvasForResumeWithTest:(/*^block*/id)arg1 ;
-(void)_prepareCanvasForSuspend;
-(_UICanvas *)settingsCanvas;
-(void)_invalidateScreen;
-(id)_effectiveSettings;
-(void)inheritSettingsFromCanvas:(id)arg1 ;
-(void)setKeepContextAssociationInBackground:(BOOL)arg1 ;
-(void)detachWindow:(id)arg1 ;
-(NSArray *)_allWindows;
-(void)_invalidate;
-(void)_didBecomeActive;
-(NSArray *)windows;
-(void)_removeInheritingCanvas:(id)arg1 ;
-(void)_addInheritingCanvas:(id)arg1 ;
-(UIEdgeInsets)_canvasSafeAreaInsetsForInterfaceOrientation:(long long)arg1 ;
-(UIEdgeInsets)_canvasPeripheryInsets;
-(double)_canvasSystemMinimumMargin;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(void)_updateVisibleWindowOrderWithTest:(/*^block*/id)arg1 ;
-(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 asCopy:(BOOL)arg3 stopped:(BOOL*)arg4 withBlock:(/*^block*/id)arg5 ;
-(id)_inheritingWindowsIncludingInvisible:(BOOL)arg1 ;
-(id)_displayConfigurationRequest;
-(void)_setDisplayConfigurationRequest:(id)arg1 ;
-(long long)_resolvedOverscanCompensation;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)attachWindow:(id)arg1 ;
-(BOOL)keepContextAssociationInBackground;
-(UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1 ;
-(double)_systemMinimumMargin;
-(id<UICoordinateSpace>)coordinateSpace;
-(void)_performActions:(/*^block*/id)arg1 withOverrideSettings:(id)arg2 ;
-(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 asCopy:(BOOL)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)_windowUpdatedVisibility:(id)arg1 ;
-(void)_windowUpdatedProperties:(id)arg1 ;
-(BOOL)_windowIsFront:(id)arg1 ;
-(CGRect)_referenceBoundsForOrientation:(long long)arg1 ;
-(id)sceneLayerForWindow:(id)arg1 ;
-(void)_recycleAttachmentForWindow:(id)arg1 ;
-(CGSize)_screenRequestedDisplayNativePixelSize;
-(void)_setScreenRequestedDisplayNativePixelSize:(CGSize)arg1 ;
-(long long)_screenRequestedOverscanCompensation;
-(void)_setScreenRequestedOverscanCompensation:(long long)arg1 ;
-(void)_setAVKitRequestedRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3 ;
-(id)_oldSettings;
@end

