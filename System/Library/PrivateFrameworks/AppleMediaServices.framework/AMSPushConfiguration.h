/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface AMSPushConfiguration : NSObject {

	NSString* _userNotificationExtensionId;
	NSSet* _enabledActionTypes;

}

@property (nonatomic,retain) NSString * userNotificationExtensionId;              //@synthesize userNotificationExtensionId=_userNotificationExtensionId - In the implementation block
@property (nonatomic,retain) NSSet * enabledActionTypes;                          //@synthesize enabledActionTypes=_enabledActionTypes - In the implementation block
-(NSSet *)enabledActionTypes;
-(id)initWithEnabledActionTypes:(id)arg1 ;
-(NSString *)userNotificationExtensionId;
-(void)setUserNotificationExtensionId:(NSString *)arg1 ;
-(void)setEnabledActionTypes:(NSSet *)arg1 ;
@end
