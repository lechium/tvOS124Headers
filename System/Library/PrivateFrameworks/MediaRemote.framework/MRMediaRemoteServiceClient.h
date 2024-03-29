/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MRAVRoutingClientController, _MRNowPlayingPlayerPathProtobuf, NSString, NSMutableSet, MRNotificationServiceClient, MRMediaRemoteService, MRNotificationClient, NSArray;

@interface MRMediaRemoteServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _registeredOrigins;
	MRAVRoutingClientController* _routingClientController;
	_MRNowPlayingPlayerPathProtobuf* _activePlayerPath;
	int _notifyRestoreClientStateForLaunch;
	NSString* _preparedBundleID;
	NSMutableSet* _playerPathInvalidationHandlers;
	MRNotificationServiceClient* _notificationService;
	MRMediaRemoteService* _service;
	MRNotificationClient* _notificationClient;
	NSObject*<OS_dispatch_queue> _playbackQueueDispatchQueue;

}

@property (nonatomic,readonly) MRMediaRemoteService * service;                                     //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) MRNotificationClient * notificationClient;                          //@synthesize notificationClient=_notificationClient - In the implementation block
@property (nonatomic,readonly) NSArray * registeredOrigins; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workerQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> playbackQueueDispatchQueue;              //@synthesize playbackQueueDispatchQueue=_playbackQueueDispatchQueue - In the implementation block
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * activePlayerPath; 
+(id)sharedServiceClient;
-(MRMediaRemoteService *)service;
-(NSObject*<OS_dispatch_queue>)workerQueue;
-(void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1 ;
-(void)setPlaybackQueueDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_onQueue_setActivePlayerPath:(id)arg1 ;
-(void)_onQueue_processPlayerPathInvalidationHandlersWithBlock:(/*^block*/id)arg1 ;
-(void)_callInvalidationHandler:(id)arg1 ;
-(void)processPlayerPathInvalidationHandlersWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)registeredOrigins;
-(void)setActivePlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)activePlayerPath;
-(void)registerOrigin:(id)arg1 withDeviceInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unregisterOrigin:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)unregisterAllOriginsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isOriginRegistered:(id)arg1 ;
-(void)fetchPickableRoutesWithCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)addPlayerPathInvalidationHandler:(id)arg1 ;
-(void)removeInvalidationHandler:(id)arg1 ;
-(void)_processPlayerPathInvalidationHandlersWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)playbackQueueDispatchQueue;
-(MRNotificationClient *)notificationClient;
-(id)init;
-(void)dealloc;
@end

