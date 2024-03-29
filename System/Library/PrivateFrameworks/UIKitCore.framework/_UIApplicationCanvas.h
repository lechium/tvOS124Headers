/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UICanvas.h>
#import <UIKitCore/_UICanvasUILifecycleStateMonitoring.h>
#import <UIKitCore/_UICanvasLifecycleStateTransitioning.h>

@class UIStatusBarWindow, _UICanvasLifecycleMonitor, NSString;

@interface _UIApplicationCanvas : _UICanvas <_UICanvasUILifecycleStateMonitoring, _UICanvasLifecycleStateTransitioning> {

	_UICanvasLifecycleMonitor* _lifecycleMonitor;
	BOOL _suspendedEventsOnly;
	BOOL _suspendedUnderLock;
	BOOL _respondingToLifecycleEvent;
	BOOL runningInTaskSwitcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long state; 
@property (getter=_hasLifecycle,nonatomic,readonly) BOOL hasLifecycle; 
@property (assign,setter=_setIsRespondingToLifecycleEvent:,getter=_isRespondingToLifecycleEvent,nonatomic) BOOL respondingToLifecycleEvent;              //@synthesize respondingToLifecycleEvent=_respondingToLifecycleEvent - In the implementation block
@property (assign,setter=_setIsActive:,getter=_isActive,nonatomic) BOOL active; 
@property (assign,setter=_setSuspendedEventsOnly:,getter=_suspendedEventsOnly,nonatomic) BOOL suspendedEventsOnly;                                       //@synthesize suspendedEventsOnly=_suspendedEventsOnly - In the implementation block
@property (assign,setter=_setRunningInTaskSwitcher:,getter=_runningInTaskSwitcher,nonatomic) BOOL runningInTaskSwitcher; 
@property (assign,setter=_setSuspendedUnderLock:,getter=_suspendedUnderLock,nonatomic) BOOL suspendedUnderLock;                                          //@synthesize suspendedUnderLock=_suspendedUnderLock - In the implementation block
@property (nonatomic,readonly) UIStatusBarWindow * statusBarWindow; 
+(id)canvases;
+(id)_settingsDiffActions;
+(id)mostActiveCanvas;
-(long long)state;
-(BOOL)_hasLifecycle;
-(BOOL)_suspendedEventsOnly;
-(BOOL)_isRespondingToLifecycleEvent;
-(void)_setIsRespondingToLifecycleEvent:(BOOL)arg1 ;
-(BOOL)_suspendedUnderLock;
-(void)_willResignActive;
-(void)_willAttach;
-(id)initWithScene:(id)arg1 ;
-(void)_setSuspendedEventsOnly:(BOOL)arg1 ;
-(BOOL)_runningInTaskSwitcher;
-(void)_setRunningInTaskSwitcher:(BOOL)arg1 ;
-(void)_setSuspendedUnderLock:(BOOL)arg1 ;
-(void)_transitionLifecycleStateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceDeactivateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(UIStatusBarWindow *)statusBarWindow;
-(BOOL)_isMainSceneCanvas;
@end

