/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUserNotificationContext.h>

@class NSString;

@interface RMDeviceDowntimeUserNotificationContext : RMUserNotificationContext {

	NSString* _localizedUserNotificationBodyKey;

}

@property (nonatomic,copy) NSString * localizedUserNotificationBodyKey;              //@synthesize localizedUserNotificationBodyKey=_localizedUserNotificationBodyKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 locale:(id)arg3 ;
-(void)setLocalizedUserNotificationBodyKey:(NSString *)arg1 ;
-(NSString *)localizedUserNotificationBodyKey;
-(void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 ;
-(id)notificationBundleIdentifier;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)destinations;
@end

