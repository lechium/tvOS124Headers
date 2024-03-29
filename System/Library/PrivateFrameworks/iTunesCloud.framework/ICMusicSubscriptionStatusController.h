/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICMusicSubscriptionStatusRemoteRequestingClient.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSOperationQueue, NSXPCConnection, NSMutableDictionary, NSString;

@interface ICMusicSubscriptionStatusController : NSObject <ICMusicSubscriptionStatusRemoteRequestingClient> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned long long _numberOfActiveRemoteRequests;
	NSOperationQueue* _operationQueue;
	NSXPCConnection* _remoteRequestingClientConnection;
	NSObject*<OS_dispatch_source> _remoteRequestingClientConnectionInvalidationTimer;
	NSMutableDictionary* _statusHandlers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_hasEntitlementForMusicSubscriptionStatusService;
+(id)sharedStatusController;
-(void)getSubscriptionStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_subscriptionStatusCacheDidChangeNotification:(id)arg1 ;
-(void)_cancelRemoteRequestingClientConnectionInvalidationTimer;
-(void)_invalidateRemoteRequestingClientConnection;
-(void)getSubscriptionStatusForUserIdentity:(id)arg1 bypassingCache:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)performSubscriptionStatusRequest:(id)arg1 withStatusHandler:(/*^block*/id)arg2 ;
-(void)_willBeginRemoteRequestForUniqueIdentifier:(id)arg1 statusHandler:(/*^block*/id)arg2 ;
-(id)_remoteRequestingClientConnection;
-(void)deliverSubscriptionStatusResponse:(id)arg1 forUniqueIdentifier:(id)arg2 error:(id)arg3 ;
-(void)enableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)disableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)refreshSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)refreshSubscriptionUsingRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)_statusHandlerForUniqueIdentifier:(id)arg1 ;
-(void)_didEndRemoteRequestForUniqueIdentifier:(id)arg1 ;
-(void)_scheduleInvalidationOfRemoteRequestingClientConnection;
-(void)_remoteRequestingClientConnectionInvalidationTimerDidExpire;
-(void)enableSubscriptionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableSubscriptionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)refreshSubscriptionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)invalidateCachedSubscriptionStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)invalidateCachedSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)enablePeriodicSubscriptionRefresh;
-(void)performSubscriptionStatusRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

