/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, _UIKeyboardArbiterLink;
@class NSObject, NSXPCListener, NSMutableArray, _UIKeyboardArbiterHandle, NSString, FBSWorkspace, FBSScene, BKSApplicationStateMonitor, _UIKeyboardChangedInformation;

@interface _UIKeyboardArbiter : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableArray* _clients;
	_UIKeyboardArbiterHandle* _activeHandle;
	_UIKeyboardArbiterHandle* _previouslyActiveHandle;
	NSString* _currentBundleIdForHardwareKeyboard;
	_UIKeyboardArbiterHandle* _keyboardFocusHandle;
	_UIKeyboardArbiterHandle* _commandFocusHandle;
	FBSWorkspace* _workspace;
	FBSScene* _scene;
	int _updateCounter;
	BKSApplicationStateMonitor* _stateMonitor;
	_UIKeyboardArbiterHandle* _disablingHandle;
	id<_UIKeyboardArbiterLink> _sceneLink;
	_UIKeyboardChangedInformation* _lastUpdate;

}

@property (nonatomic,retain) _UIKeyboardChangedInformation * lastUpdate;              //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (nonatomic,readonly) id<_UIKeyboardArbiterLink> sceneLink;                  //@synthesize sceneLink=_sceneLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLastUpdate:(_UIKeyboardChangedInformation *)arg1 ;
-(id<_UIKeyboardArbiterLink>)sceneLink;
-(void)attemptConnection;
-(void)processWithPID:(int)arg1 foreground:(BOOL)arg2 suspended:(BOOL)arg3 ;
-(id)_descriptionWithScene:(BOOL)arg1 ;
-(void)retrieveClientDebugInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)runOperations:(/*^block*/id)arg1 onHandler:(id)arg2 ;
-(void)scheduleWindowTimeout;
-(void)captureStateForDebug;
-(void)updateKeyboardStatus:(id)arg1 fromHandler:(id)arg2 ;
-(void)handlerRequestedFocus:(id)arg1 ;
-(void)reevaluateHardwareKeyboardClient;
-(void)reevaluateSceneSettings;
-(id)handlerForPID:(int)arg1 ;
-(BOOL)handler:(id)arg1 activateSceneLayer:(id)arg2 ;
-(void)completeKeyboardStatusChangedFromHandler:(id)arg1 ;
-(void)updateInterestedBundleIDs;
-(id)initWithLink:(id)arg1 ;
-(void)retrieveDebugInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)newClientConnected:(id)arg1 withExpectedState:(id)arg2 onConnected:(/*^block*/id)arg3 ;
-(void)checkHostingState;
-(BOOL)handler:(id)arg1 deactivateSceneLayer:(id)arg2 ;
-(void)handleUnexpectedDeallocForHandler:(id)arg1 ;
-(void)updateSceneSettings:(id)arg1 ;
-(void)updateSuppression:(BOOL)arg1 ofPIDs:(id)arg2 ;
-(void)activateClients;
-(id)handlerForBundleID:(id)arg1 ;
-(void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3 fromHandler:(id)arg4 ;
-(void)setKeyboardTotalDisable:(BOOL)arg1 withFence:(id)arg2 fromHandler:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSString *)description;
-(void)resume;
-(_UIKeyboardChangedInformation *)lastUpdate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end
