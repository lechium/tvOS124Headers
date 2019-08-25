/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, UNSNotificationRepositoryDelegate;
@class FBSSystemService, UNSKeyedDataStoreRepository, UNSKeyedObservable, NSObject;

@interface UNSNotificationRepository : NSObject {

	FBSSystemService* _systemService;
	UNSKeyedDataStoreRepository* _repository;
	UNSKeyedObservable* _observable;
	NSObject*<OS_dispatch_queue> _queue;
	id<UNSNotificationRepositoryDelegate> _delegate;

}

@property (assign,nonatomic) id<UNSNotificationRepositoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)performMigration;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)notificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)_queue_performMigration;
-(void)saveNotificationRecord:(id)arg1 shouldRepost:(BOOL)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)allBundleIdentifiers;
-(id)initWithDirectory:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 systemService:(id)arg2 ;
-(long long)_maxObjectsPerKey;
-(id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 ;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeStoreForBundleIdentifier:(id)arg1 ;
-(void)removeAllNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)badgeNumberForBundleIdentifier:(id)arg1 ;
-(void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 systemService:(id)arg3 ;
-(id)_queue_notificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)_queue_saveNotificationRecord:(id)arg1 shouldRepost:(BOOL)arg2 withOptions:(unsigned long long)arg3 forBundleIdentifier:(id)arg4 ;
-(void)_queue_removeAllNotificationRecordsForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeNotificationRecordsPassingTest:(/*^block*/id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_performValidation;
-(id)_notificationsForObjects:(id)arg1 ;
-(void)_logNotification:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_notifyObserversNotificationsDidAddNotifications:(id)arg1 replaceNotifications:(id)arg2 replacementNotifications:(id)arg3 removedNotifications:(id)arg4 shouldRepost:(BOOL)arg5 forBundleIdentifier:(id)arg6 ;
-(id)_queue_badgeNumberForBundleIdentifier:(id)arg1 ;
-(void)_queue_setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_setBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_queue_performMigrationForUserNotificationsStore;
-(void)_queue_performMigrationForPushStore;
-(void)_queue_performMigrationForPushStoreAtPath:(id)arg1 ;
-(void)removeNotificationRepository;
-(void)setDelegate:(id<UNSNotificationRepositoryDelegate>)arg1 ;
-(id<UNSNotificationRepositoryDelegate>)delegate;
-(void)performValidation;
@end

