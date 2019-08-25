/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface ICUserNotificationBuilder : NSObject <NSCopying> {

	NSMutableDictionary* _userNotificationDictionary;
	long long _alertLevel;
	double _timeoutInterval;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * alternateButtonTitle; 
@property (nonatomic,copy) NSString * defaultButtonTitle; 
@property (nonatomic,copy) NSString * otherButtonTitle; 
@property (assign,nonatomic) BOOL allowInCar; 
@property (assign,nonatomic) BOOL displaysActionButtonOnLockScreen; 
@property (assign,nonatomic) BOOL displaysAsTopMost; 
@property (assign,nonatomic) BOOL forcesModalAppearance; 
@property (assign,nonatomic) long long alertLevel;                               //@synthesize alertLevel=_alertLevel - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                             //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(double)timeoutInterval;
-(void)_setBoolValue:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
-(BOOL)allowInCar;
-(BOOL)displaysActionButtonOnLockScreen;
-(BOOL)displaysAsTopMost;
-(BOOL)forcesModalAppearance;
-(void)setDisplaysActionButtonOnLockScreen:(BOOL)arg1 ;
-(void)setDisplaysAsTopMost:(BOOL)arg1 ;
-(void)setForcesModalAppearance:(BOOL)arg1 ;
-(long long)alertLevel;
-(void)setAlertLevel:(long long)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(id)initWithStoreDialog:(id)arg1 ;
-(void)setAllowInCar:(BOOL)arg1 ;
-(CFUserNotificationRef)createCFUserNotification;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(NSString *)defaultButtonTitle;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSString *)otherButtonTitle;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end

