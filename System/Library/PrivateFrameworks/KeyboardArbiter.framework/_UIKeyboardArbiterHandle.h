/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UIKeyboardArbitration.h>

@class NSString, _UIKeyboardArbiter, FBSCAContextSceneLayer, NSMutableSet, BKSProcessAssertion, NSArray, NSXPCConnection;

@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration> {

	BOOL _invalidated;
	NSString* _bundleIdentifier;
	_UIKeyboardArbiter* _owner;
	BOOL _running;
	FBSCAContextSceneLayer* _sceneLayer;
	NSString* _remoteSceneID;
	BOOL _active;
	BOOL _wantedActive;
	double _level;
	NSMutableSet* _hostedPids;
	BOOL _checkingShowability;
	int _suppressionCount;
	BOOL _wantsFence;
	BKSProcessAssertion* _remoteKeepAliveAssertion;
	unsigned long long _remoteKeepAliveAssertionCount;
	unsigned long long _remoteKeepAliveTimerCount;
	NSArray* _cachedContext;
	NSXPCConnection* _connection;

}

@property (readonly) int processIdentifier; 
@property (retain,readonly) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL running;                                              //@synthesize running=_running - In the implementation block
@property (retain,readonly) FBSCAContextSceneLayer * sceneLayer;              //@synthesize sceneLayer=_sceneLayer - In the implementation block
@property (retain,readonly) NSString * remoteSceneID;                         //@synthesize remoteSceneID=_remoteSceneID - In the implementation block
@property (readonly) BOOL active;                                             //@synthesize active=_active - In the implementation block
@property (readonly) BOOL wantedActive;                                       //@synthesize wantedActive=_wantedActive - In the implementation block
@property (readonly) double level;                                            //@synthesize level=_level - In the implementation block
@property (readonly) BOOL wantsFence;                                         //@synthesize wantsFence=_wantsFence - In the implementation block
+(id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2 ;
-(FBSCAContextSceneLayer *)sceneLayer;
-(void)takeProcessAssertionOnRemoteWithQueue:(id)arg1 ;
-(void)releaseProcessAssertion;
-(BOOL)isHandlerShowableWithHandler:(id)arg1 ;
-(NSString *)remoteSceneID;
-(BOOL)wantedActive;
-(BOOL)wantsFence;
-(void)checkActivation:(BOOL)arg1 ;
-(void)uncacheWindowContext;
-(void)cacheWindowContext;
-(void)_deactivateScene;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)description;
-(void)invalidate;
-(BOOL)active;
-(double)level;
-(NSXPCConnection *)connection;
-(void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 usingFence:(BOOL)arg3 withSuppression:(int)arg4 onConnected:(/*^block*/id)arg5 ;
-(void)setWantsFencing:(BOOL)arg1 ;
-(void)setWindowContextID:(unsigned)arg1 sceneIdentifier:(id)arg2 forKeyboard:(BOOL)arg3 withLevel:(double)arg4 ;
-(void)signalKeyboardChanged:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)signalKeyboardChangeComplete;
-(void)setWindowHostingPID:(int)arg1 active:(BOOL)arg2 ;
-(void)notifyHostedPIDsOfSuppression:(BOOL)arg1 ;
-(void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3 ;
-(int)processIdentifier;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(void)retrieveDebugInformation:(/*^block*/id)arg1 ;
-(void)retrieveMoreDebugInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)setKeyboardTotalDisable:(BOOL)arg1 withFence:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

