/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStore/iTunesStore-Structs.h>
@class NSDictionary;

@interface ISUserNotification : NSObject {

	long long _allowedRetryCount;
	long long _currentRetryCount;
	NSDictionary* _dictionary;
	unsigned long long _optionFlags;
	NSDictionary* _userInfo;

}

@property (readonly) NSDictionary * dictionary; 
@property (readonly) unsigned long long optionFlags; 
@property (assign) long long allowedRetryCount;                   //@synthesize allowedRetryCount=_allowedRetryCount - In the implementation block
@property (assign) long long currentRetryCount;                   //@synthesize currentRetryCount=_currentRetryCount - In the implementation block
@property (retain) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
-(long long)allowedRetryCount;
-(CFUserNotificationRef)copyUserNotification;
-(long long)currentRetryCount;
-(void)setCurrentRetryCount:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setAllowedRetryCount:(long long)arg1 ;
-(unsigned long long)optionFlags;
-(id)init;
-(NSDictionary *)dictionary;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
@end

