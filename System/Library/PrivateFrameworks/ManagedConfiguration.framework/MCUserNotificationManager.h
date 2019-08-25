/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCUserNotificationManager : NSObject

@property (nonatomic,readonly) BOOL hasOutstandingNotifications; 
+(id)sharedManager;
-(void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 otherButtonText:(id)arg5 displayOnLockScreen:(BOOL)arg6 displayInAppWhitelistModes:(BOOL)arg7 dismissAfterTimeInterval:(double)arg8 assertion:(id)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)mainQueueDidReceiveAppWhitelistChangedNotification;
-(void)cancelAllNotificationsCompletionBlock:(/*^block*/id)arg1 ;
-(void)displayUserNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonText:(id)arg4 alternateButtonText:(id)arg5 otherButtonText:(id)arg6 displayOnLockScreen:(BOOL)arg7 displayInAppWhitelistModes:(BOOL)arg8 dismissAfterTimeInterval:(double)arg9 assertion:(id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(void)cancelNotificationEntriesMatchingPredicate:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)hasOutstandingNotifications;
-(void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)inviteUserToVPPWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)cancelNotificationsWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

