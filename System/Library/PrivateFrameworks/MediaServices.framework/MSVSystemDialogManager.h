/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaServices/MediaServices-Structs.h>
@class NSObject;

@interface MSVSystemDialogManager : NSObject {

	CFDictionaryRef _registeredSystemDialogs;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedManager;
-(void)registerSystemDialog:(id)arg1 forUserNotification:(CFUserNotificationRef)arg2 ;
-(id)systemDialogForUserNotification:(CFUserNotificationRef)arg1 ;
-(void)unregisterSystemDialogWithUserNotification:(CFUserNotificationRef)arg1 ;
-(id)init;
-(void)dealloc;
@end
