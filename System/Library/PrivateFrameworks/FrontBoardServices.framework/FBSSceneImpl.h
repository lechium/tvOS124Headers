/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSScene.h>
#import <libobjc.A.dylib/FBSSceneSnapshotRequestDelegate.h>
#import <libobjc.A.dylib/FBSSceneHandle.h>
#import <libobjc.A.dylib/FBSSceneAgentProxy.h>

@protocol FBSSceneDelegate, FBSSceneUpdater, FBSSceneClientAgent, OS_dispatch_queue;
@class NSString, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings, FBSSerialQueue, NSObject, NSMutableArray;

@interface FBSSceneImpl : FBSScene <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy> {

	id<FBSSceneDelegate> _delegate;
	NSString* _identifier;
	FBSSceneSpecification* _specification;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	id<FBSSceneUpdater> _updater;
	id<FBSSceneClientAgent> _agent;
	/*^block*/id _agentMessageHandler;
	FBSSerialQueue* _callOutQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _layers;
	BOOL _shouldObserveLayers;
	NSMutableArray* _agentSessions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)snapshotRequestAllowSnapshot:(id)arg1 ;
-(BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2 ;
-(void)_performDelegateCallOut:(/*^block*/id)arg1 ;
-(void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(BOOL)sceneLayerShouldObserveUpdates:(id)arg1 ;
-(void)sceneLayerDidUpdate:(id)arg1 ;
-(void)sceneLayerDidInvalidate:(id)arg1 ;
-(BOOL)_hasAgent;
-(void)_didCreateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_willDestroyWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithQueue:(id)arg1 callOutQueue:(id)arg2 identifier:(id)arg3 specification:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6 ;
-(void)_updateLayer:(id)arg1 ;
-(void)_queue_configureReceivedActions:(id)arg1 ;
-(void)_queue_invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)specification;
-(id)_initWithInternalQueue:(id)arg1 callOutQueue:(id)arg2 updater:(id)arg3 identifier:(id)arg4 specification:(id)arg5 settings:(id)arg6 clientSettings:(id)arg7 ;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updater:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)hostProcess;
-(id)clientProcess;
-(id)callOutQueue;
-(id)counterpartAgent;
-(id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2 ;
-(void)closeSession:(id)arg1 ;
-(void)agent:(id)arg1 registerMessageHandler:(/*^block*/id)arg2 ;
-(void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(id)snapshotRequest;
-(id)sessionForIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)identifier;
-(NSString *)description;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)detachContext:(id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(id)settings;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(id)clientSettings;
-(id)layers;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5 ;
-(id)parameters;
-(id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3 ;
-(void)sendActions:(id)arg1 ;
-(BOOL)invalidateSnapshotWithContext:(id)arg1 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
@end

