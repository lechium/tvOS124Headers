/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UNSKeyedDictionaryRepository, NSObject;

@interface UNSNotificationScheduleRepository : NSObject {

	UNSKeyedDictionaryRepository* _repository;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)performMigration;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_performMigration;
-(id)allBundleIdentifiers;
-(id)initWithDirectory:(id)arg1 ;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(id)scheduleForBundleIdentifier:(id)arg1 ;
-(void)setSchedule:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_queue_scheduleForBundleIdentifier:(id)arg1 ;
-(void)_queue_setSchedule:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_removeScheduleForBundleIdentifier:(id)arg1 ;
-(void)removeScheduleForBundleIdentifier:(id)arg1 ;
-(id)_dateFormatter;
@end

