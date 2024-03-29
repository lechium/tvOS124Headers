/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/TUCallServicesXPCClient.h>
#import <libobjc.A.dylib/TUCallServicesProxyCallActions.h>
#import <libobjc.A.dylib/TUCallServicesClientCapabilitiesActions.h>
#import <libobjc.A.dylib/TUAudioDeviceControllerActions.h>
#import <libobjc.A.dylib/TURouteControllerActions.h>

@protocol TURouteControllerClient, TUCallServicesXPCServer, OS_dispatch_queue, OS_dispatch_semaphore;
@class NSDictionary, TUCallServicesClientCapabilities, TUCallCenter, NSObject, NSXPCConnection, NSArray, NSMapTable, TUCallNotificationManager, NSString;

@interface TUCallServicesInterface : NSObject <TUCallServicesXPCClient, TUCallServicesProxyCallActions, TUCallServicesClientCapabilitiesActions, TUAudioDeviceControllerActions, TURouteControllerActions> {

	BOOL _hasRequestedInitialState;
	BOOL _hasDaemonDelegateLaunched;
	int _connectionRequestNotificationToken;
	id<TURouteControllerClient> _routeControllerClient;
	id<TUCallServicesXPCServer> _daemonDelegate;
	TUCallServicesClientCapabilities* _callServicesClientCapabilities;
	TUCallCenter* _callCenter;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_semaphore> _initialStateSemaphore;
	NSArray* _currentCalls;
	NSMapTable* _uniqueProxyIdentifierToProxyCall;
	TUCallNotificationManager* _callNotificationManager;
	NSArray* _localProxyCalls;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) void* queueContext; 
@property (assign,nonatomic) int connectionRequestNotificationToken;                                         //@synthesize connectionRequestNotificationToken=_connectionRequestNotificationToken - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedInitialState;                                                  //@synthesize hasRequestedInitialState=_hasRequestedInitialState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> initialStateSemaphore;                         //@synthesize initialStateSemaphore=_initialStateSemaphore - In the implementation block
@property (nonatomic,copy) NSArray * currentCalls;                                                           //@synthesize currentCalls=_currentCalls - In the implementation block
@property (nonatomic,retain) NSMapTable * uniqueProxyIdentifierToProxyCall;                                  //@synthesize uniqueProxyIdentifierToProxyCall=_uniqueProxyIdentifierToProxyCall - In the implementation block
@property (nonatomic,retain) TUCallServicesClientCapabilities * callServicesClientCapabilities;              //@synthesize callServicesClientCapabilities=_callServicesClientCapabilities - In the implementation block
@property (nonatomic,retain) TUCallNotificationManager * callNotificationManager;                            //@synthesize callNotificationManager=_callNotificationManager - In the implementation block
@property (nonatomic,copy) NSArray * localProxyCalls;                                                        //@synthesize localProxyCalls=_localProxyCalls - In the implementation block
@property (nonatomic,readonly) BOOL daemonDelegateIsLocal; 
@property (assign,nonatomic) BOOL hasDaemonDelegateLaunched;                                                 //@synthesize hasDaemonDelegateLaunched=_hasDaemonDelegateLaunched - In the implementation block
@property (assign,nonatomic,__weak) TUCallCenter * callCenter;                                               //@synthesize callCenter=_callCenter - In the implementation block
@property (assign,nonatomic,__weak) id<TUCallServicesXPCServer> daemonDelegate;                              //@synthesize daemonDelegate=_daemonDelegate - In the implementation block
@property (nonatomic,readonly) id<TUCallContainerPrivate> callContainer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<TURouteControllerClient> routeControllerClient;                              //@synthesize routeControllerClient=_routeControllerClient - In the implementation block
@property (nonatomic,readonly) NSDictionary * routesByUniqueIdentifier; 
-(oneway void)setClientCapabilities:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setRouteControllerClient:(id<TURouteControllerClient>)arg1 ;
-(NSDictionary *)routesByUniqueIdentifier;
-(oneway void)pickRouteWithUniqueIdentifier:(id)arg1 ;
-(oneway void)handleRoutesByUniqueIdentifierUpdated:(id)arg1 ;
-(oneway void)routesByUniqueIdentifier:(/*^block*/id)arg1 ;
-(void)handleServerReconnect;
-(void)handleServerDisconnect;
-(oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1 ;
-(oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1 ;
-(void*)queueContext;
-(void)_tearDownXPCConnection;
-(BOOL)daemonDelegateIsLocal;
-(int)connectionRequestNotificationToken;
-(void)_setUpXPCConnection;
-(void)performBlockOnQueue:(/*^block*/id)arg1 ;
-(id)_proxyCallWithCall:(id)arg1 ;
-(void)setLocalProxyCalls:(NSArray *)arg1 ;
-(void)setCurrentCalls:(NSArray *)arg1 ;
-(void)_registerCall:(id)arg1 ;
-(void)_updateCurrentCalls:(id)arg1 ;
-(TUCallNotificationManager *)callNotificationManager;
-(id)_proxyCallWithUniqueProxyIdentifier:(id)arg1 ;
-(NSMapTable *)uniqueProxyIdentifierToProxyCall;
-(void)performBlockOnQueue:(/*^block*/id)arg1 andWait:(BOOL)arg2 ;
-(void)setHasRequestedInitialState:(BOOL)arg1 ;
-(TUCallServicesClientCapabilities *)callServicesClientCapabilities;
-(void)_updateCurrentCallsWithoutNotifications:(id)arg1 ;
-(oneway void)_handleCurrentCallsChanged:(id)arg1 callsDisconnected:(id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)initialStateSemaphore;
-(id<TUCallServicesXPCServer>)daemonDelegate;
-(BOOL)hasDaemonDelegateLaunched;
-(id)daemonDelegateWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)hasRequestedInitialState;
-(void)requestCurrentStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)synchronousDaemonDelegateWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setHasDaemonDelegateLaunched:(BOOL)arg1 ;
-(id<TURouteControllerClient>)routeControllerClient;
-(oneway void)resetCallProvisionalStates;
-(void)waitForInitialStateIfNecessary;
-(void)registerCall:(id)arg1 ;
-(TUCallCenter *)callCenter;
-(id)joinConversationWithRequest:(id)arg1 ;
-(oneway void)answerCallWithRequest:(id)arg1 ;
-(oneway void)holdCallWithUniqueProxyIdentifier:(id)arg1 ;
-(oneway void)unholdCallWithUniqueProxyIdentifier:(id)arg1 ;
-(oneway void)disconnectCallWithUniqueProxyIdentifier:(id)arg1 ;
-(oneway void)groupCallWithUniqueProxyIdentifier:(id)arg1 withOtherCallWithUniqueProxyIdentifier:(id)arg2 ;
-(oneway void)ungroupCallWithUniqueProxyIdentifier:(id)arg1 ;
-(oneway void)swapCalls;
-(oneway void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2 ;
-(oneway void)disconnectCurrentCallAndActivateHeld;
-(oneway void)disconnectAllCalls;
-(oneway void)setTTYType:(int)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 ;
-(oneway void)pullRelayingCallsFromClient;
-(oneway void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1 ;
-(oneway void)pushHostedCallsToDestination:(id)arg1 ;
-(oneway void)pullHostedCallsFromPairedHostDevice;
-(oneway void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1 ;
-(oneway void)updateCallWithProxy:(id)arg1 ;
-(oneway void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1 ;
-(oneway void)willEnterBackgroundForAllCalls;
-(oneway void)enteredBackgroundForAllCalls;
-(oneway void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)arg1 size:(CGSize)arg2 ;
-(oneway void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)arg1 presentationState:(int)arg2 ;
-(oneway void)sendMMIOrUSSDCodeWithRequest:(id)arg1 ;
-(oneway void)setUplinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 ;
-(oneway void)setDownlinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 ;
-(void)_updateCurrentCalls:(id)arg1 withNotificationsUsingUpdatedCalls:(id)arg2 ;
-(oneway void)handleFrequencyChangedTo:(id)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3 ;
-(oneway void)handleMeterLevelChangedTo:(float)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3 ;
-(oneway void)handleCurrentCallsChanged:(id)arg1 callDisconnected:(id)arg2 ;
-(oneway void)handleNotificationName:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithQueue:(id)arg1 callCenter:(id)arg2 ;
-(void)tearDownXPCConnection;
-(id<TUCallContainerPrivate>)callContainer;
-(id)dialWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDaemonDelegate:(id<TUCallServicesXPCServer>)arg1 ;
-(void)setCallServicesClientCapabilities:(TUCallServicesClientCapabilities *)arg1 ;
-(void)setCallCenter:(TUCallCenter *)arg1 ;
-(void)setConnectionRequestNotificationToken:(int)arg1 ;
-(void)setInitialStateSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setUniqueProxyIdentifierToProxyCall:(NSMapTable *)arg1 ;
-(void)setCallNotificationManager:(TUCallNotificationManager *)arg1 ;
-(NSArray *)localProxyCalls;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)debugDescription;
-(NSArray *)currentCalls;
-(NSObject*<OS_dispatch_queue>)queue;
@end

