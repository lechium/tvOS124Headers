/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, UNNotificationTrigger;

@interface RMUserNotificationContext : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSArray* _localizedUserNotificationBodyArguments;
	UNNotificationTrigger* _trigger;

}

@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * localizedUserNotificationBodyArguments;              //@synthesize localizedUserNotificationBodyArguments=_localizedUserNotificationBodyArguments - In the implementation block
@property (nonatomic,copy) UNNotificationTrigger * trigger;                               //@synthesize trigger=_trigger - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTrigger:(UNNotificationTrigger *)arg1 ;
-(void)setLocalizedUserNotificationBodyArguments:(NSArray *)arg1 ;
-(NSArray *)localizedUserNotificationBodyArguments;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)notificationBundleIdentifier;
-(void)notificationContentWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(UNNotificationTrigger *)trigger;
-(id)destinations;
@end

