/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNView, SCNNode;

@interface SCNEventHandler : NSObject {

	SCNView* _view;
	BOOL _enableFreeCamera;
	BOOL _autoSwitchToFreeCamera;

}

@property (readonly) SCNView * view; 
@property (assign) BOOL enableFreeCamera; 
@property (assign) BOOL autoSwitchToFreeCamera; 
@property (readonly) SCNNode * freeCamera; 
-(void)sceneDidChange;
-(void)cameraDidChange;
-(BOOL)enableFreeCamera;
-(BOOL)autoSwitchToFreeCamera;
-(void)setAutoSwitchToFreeCamera:(BOOL)arg1 ;
-(void)sceneWillChange;
-(void)viewWillDrawAtTime:(double)arg1 ;
-(void)viewDidDrawAtTime:(double)arg1 ;
-(void)cameraWillChange;
-(BOOL)wantsRedraw;
-(void)activateFreeCamera;
-(void)setEnableFreeCamera:(BOOL)arg1 ;
-(SCNNode *)freeCamera;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(SCNView *)view;
-(void)setView:(SCNView *)arg1 ;
-(id)gestureRecognizers;
@end

