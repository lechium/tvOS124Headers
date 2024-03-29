/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSString;

@interface UNNotificationServiceExtension : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)didReceiveNotificationRequest:(id)arg1 withContentHandler:(/*^block*/id)arg2 ;
-(void)serviceExtensionTimeWillExpire;
-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
@end

