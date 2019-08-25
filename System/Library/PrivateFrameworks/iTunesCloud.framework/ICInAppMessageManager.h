/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ICInAppMessageManagerProtocol.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, ICInAppMessageStore, NSXPCListener, NSMutableSet, NSXPCConnection, NSString;

@interface ICInAppMessageManager : NSObject <NSXPCListenerDelegate, ICInAppMessageManagerProtocol, ICEnvironmentMonitorObserver> {

	NSOperationQueue* _operationQueue;
	NSOperationQueue* _downloadOperationQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	ICInAppMessageStore* _messageStore;
	BOOL _isSystemService;
	NSXPCListener* _xpcServiceListener;
	NSMutableSet* _xpcConnections;
	NSXPCConnection* _xpcClientConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)_removeConnection:(id)arg1 ;
-(id)initWithMessageStore:(id)arg1 ;
-(void)_handleICInAppMessagesDidChangeDistributedNotification:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)_schedulePeriodicUpdate;
-(id)_xpcClientConnection;
-(void)allMessageEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)messageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncMessagesWithCompletion:(/*^block*/id)arg1 ;
-(void)_performSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)resetMessagesWithCompletion:(/*^block*/id)arg1 ;
-(id)_resourceCacheDirectoryPath;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 flushImmediately:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)flushEventsWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateShouldDownloadResources:(BOOL)arg1 onMessageWithIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)clearCachedResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performCacheConsistencyCheck;
-(void)_loadConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)_processSyncResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performSyncRetryIfPending;
-(void)_addConnection:(id)arg1 ;
-(void)_checkForMessageResourcesNeedingDownload;
-(void)startSystemService;
-(void)stopSystemService;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(id)_storeRequestContext;
-(id)_init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end
