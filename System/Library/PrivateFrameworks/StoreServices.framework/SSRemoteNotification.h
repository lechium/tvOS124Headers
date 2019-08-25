/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSDictionary, NSString, NSArray, NSDate;

@interface SSRemoteNotification : NSObject <SSXPCCoding> {

	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) NSDictionary * notificationUserInfo; 
@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,readonly) NSString * alertBodyString; 
@property (nonatomic,readonly) NSString * alertCancelString; 
@property (nonatomic,readonly) NSString * alertOKString; 
@property (nonatomic,readonly) NSString * alertTitleString; 
@property (nonatomic,readonly) id badgeValue; 
@property (nonatomic,readonly) NSString * soundFileName; 
@property (nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) NSString * artworkUrl; 
@property (nonatomic,readonly) NSArray * buttons; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) NSDictionary * metrics; 
@property (nonatomic,readonly) NSString * tapUrl; 
@property (nonatomic,readonly) long long version; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSDate *)expirationDate;
-(long long)actionType;
-(id)initWithNotificationUserInfo:(id)arg1 ;
-(NSArray *)buttons;
-(id)_valueForAlertKey:(id)arg1 ;
-(id)_valueForAPSKey:(id)arg1 ;
-(NSString *)alertBodyString;
-(NSString *)alertCancelString;
-(NSString *)alertOKString;
-(NSString *)alertTitleString;
-(BOOL)explicitContent;
-(NSString *)artworkUrl;
-(NSString *)soundFileName;
-(NSString *)tapUrl;
-(NSDictionary *)notificationUserInfo;
-(void)dealloc;
-(id)valueForKey:(id)arg1 ;
-(long long)version;
-(NSDictionary *)metrics;
-(id)badgeValue;
-(NSString *)category;
@end

