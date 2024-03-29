/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextEffectsWindow.h>
#import <UIKitCore/_UIContextCustomBinding.h>

@class FBSSceneLayer, FBSScene, NSString, CAContext, _UIContextBinder;

@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding> {

	BOOL _arePlaceholdersInitialised;
	FBSSceneLayer* _externalSceneLayer;
	FBSScene* _activeScene;
	BOOL _resetRequired;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_UI70 _bindingDescription; 
@property (assign,setter=_setBoundContext:,nonatomic,__weak) CAContext * _boundContext; 
@property (assign,setter=_setContextBinder:,nonatomic,__weak) _UIContextBinder * _contextBinder; 
+(id)remoteKeyboardWindowForScreen:(id)arg1 create:(BOOL)arg2 ;
-(void)dealloc;
-(void)setWindowLevel:(double)arg1 ;
-(BOOL)_isHostedInAnotherProcess;
-(void)invalidate;
-(BOOL)shouldAttachBindable;
-(BOOL)shouldDetachBindable;
-(void)attachBindable;
-(void)detachBindable;
-(BOOL)_isWindowServerHostingManaged;
-(void)endDisablingInterfaceAutorotation;
-(void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(BOOL)_isTextEffectsWindowNotificationOwner;
-(BOOL)_isFullscreen;
-(CGAffineTransform)_viewTransformForInterfaceOrientation:(long long)arg1 ;
-(void)_resetScene;
-(id)_initBasicWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_wantsSceneAssociation;
-(BOOL)_alwaysGetsContexts;
-(BOOL)_canIgnoreInteractionEvents;
-(BOOL)_usesWindowServerHitTesting;
-(double)_adjustedWindowLevelFromLevel:(double)arg1 ;
-(void)resetScene;
-(long long)_orientationForClassicPresentation;
@end

