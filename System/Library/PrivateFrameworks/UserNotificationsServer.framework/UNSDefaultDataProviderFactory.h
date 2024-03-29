/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSMutableArray, UNSApplicationLauncher, UNSDaemonLauncher, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationTopicRepository, UNSAttachmentsService, BBDataProviderConnection, BBSettingsGateway, BBObserver, NSObject, NSString;

@interface UNSDefaultDataProviderFactory : NSObject <BBObserverDelegate> {

	NSMutableDictionary* _dataProvidersByBundleIdentifier;
	NSMutableDictionary* _descriptionsByBundleIdentifier;
	NSMutableSet* _authorizedBundleIdentifiers;
	NSMutableArray* _observers;
	UNSApplicationLauncher* _appLauncher;
	UNSDaemonLauncher* _daemonLauncher;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSNotificationRepository* _notificationRepository;
	UNSNotificationTopicRepository* _topicRepository;
	UNSAttachmentsService* _attachmentsService;
	BBDataProviderConnection* _dataProviderConnection;
	BBSettingsGateway* _settingsGateway;
	BBObserver* _settingsObserver;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(id)notificationSettingsForBundleIdentifier:(id)arg1 ;
-(void)notificationSourcesDidInstall:(id)arg1 ;
-(void)_queue_notificationSourcesDidInstall:(id)arg1 ;
-(id)initWithApplicationLauncher:(id)arg1 daemonLauncher:(id)arg2 categoryRepository:(id)arg3 notificationRepository:(id)arg4 attachmentsService:(id)arg5 topicRepository:(id)arg6 ;
-(id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 ;
-(void)updateAuthorizationWithOptions:(unsigned long long)arg1 topics:(id)arg2 forBundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)requestAuthorizationStatus:(long long)arg1 withOptions:(unsigned long long)arg2 topics:(id)arg3 forBundleIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setCriticalAlertAuthorization:(BOOL)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_queue_notificationSettingsForBundleIdentifier:(id)arg1 ;
-(void)_queue_updateSettingsWithAuthorizationStatus:(long long)arg1 options:(unsigned long long)arg2 topics:(id)arg3 forBundleIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_queue_setCriticalAlertAuthorization:(BOOL)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_queue_authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 ;
-(void)_queue_addObserver:(id)arg1 ;
-(void)_queue_removeObserver:(id)arg1 ;
-(void)_queue_applicationDidEnableNotificationSettings:(id)arg1 ;
-(void)_queue_applicationDidDisableNotificationSettings:(id)arg1 ;
-(id)_queue_dataProviderForBundleIdentifier:(id)arg1 ;
-(id)_queue_effectiveSectionInfoForBundleIdentifier:(id)arg1 ;
-(void)_queue_setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_queue_sectionInfoForBundleIdentifier:(id)arg1 ;
-(void)_queue_setSectionInfo:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_createDataProviderWithBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_queue_createDataProviderWithBundleIdentifier:(id)arg1 ;
-(void)_queue_notificationSourceDidUninstall:(id)arg1 ;
-(void)_queue_notificationSourceDidInstall:(id)arg1 ;
-(void)_queue_createNewDefaultDataProviders;
-(void)_queue_removeDataProviderWithBundleIdentifier:(id)arg1 ;
-(void)_queue_sectionInfoDidChange:(id)arg1 ;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

