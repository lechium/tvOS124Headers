/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSPushParsable.h>
#import <libobjc.A.dylib/AMSUserNotificationIntentDelegate.h>

@class NSString;

@interface AMSPushParsableFollowUp : NSObject <AMSPushParsable, AMSUserNotificationIntentDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldSkipAccountCheck;
+(void)handleNotificationPayload:(id)arg1 config:(id)arg2 bagContract:(id)arg3 ;
+(void)userNotification:(id)arg1 selectedButtonAction:(id)arg2 ;
+(void)removeDeviceOfferWithPayload:(id)arg1 logKey:(id)arg2 bagContract:(id)arg3 ;
+(BOOL)isDeviceOfferNotification:(id)arg1 ;
+(BOOL)_shouldAllowFollowUp:(id)arg1 ;
+(BOOL)_shouldClearFollowUpFromPayload:(id)arg1 ;
+(void)_performClearWithPayload:(id)arg1 ;
+(void)_performPostWithPayload:(id)arg1 ;
+(id)_createFollowUpItemFromNotification:(id)arg1 ;
+(id)_createFollowUpItemFromPayload:(id)arg1 ;
+(id)_createNotificationFromFollowUpItem:(id)arg1 ;
@end

