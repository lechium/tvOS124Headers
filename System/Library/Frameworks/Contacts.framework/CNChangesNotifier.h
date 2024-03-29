/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject {

	CNChangesNotifierProxy* _notifierProxy;

}

@property (nonatomic,retain) CNChangesNotifierProxy * notifierProxy;              //@synthesize notifierProxy=_notifierProxy - In the implementation block
+(id)sharedNotifierWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 ;
+(void)flushSharedNotifier;
+(id)sharedNotifier;
-(void)willSaveChanges;
-(void)didSaveChangesSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3 ;
-(void)didChangeMeContactSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3 ;
-(BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
-(void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg1 ;
-(void)setExternalNotificationCoalescingDelay:(double)arg1 ;
-(void)waitForCurrentTasksToFinish;
-(id)initWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 ;
-(CNChangesNotifierProxy *)notifierProxy;
-(void)setNotifierProxy:(CNChangesNotifierProxy *)arg1 ;
-(id)init;
-(void)dealloc;
@end

