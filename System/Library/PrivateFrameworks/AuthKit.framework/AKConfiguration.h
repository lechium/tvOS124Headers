/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDate;

@interface AKConfiguration : NSObject {

	NSMutableDictionary* _cachedSettings;
	int _notificationToken;
	NSObject*<OS_dispatch_queue> _settingsQueue;

}

@property (assign,nonatomic) long long shouldDisablePETs; 
@property (assign,nonatomic) long long shouldFakeAuthSuccess; 
@property (assign,nonatomic) long long shouldDisablePiggybacking; 
@property (assign,nonatomic) long long shouldSuppressHSA2Suggestions; 
@property (assign,nonatomic) long long shouldAddHSA2CreateHeader; 
@property (assign,nonatomic) long long shouldAllowPhoneNumberAccounts; 
@property (assign,nonatomic) long long shouldAllowExperimentalMode; 
@property (assign,nonatomic) long long shouldSuppressModalSheetsInMacBuddy; 
@property (nonatomic,copy) NSDate * lastCheckInAttemptDate; 
@property (nonatomic,copy) NSDate * lastCheckInSuccessDate; 
@property (assign,nonatomic) unsigned long long lastKnownIDMSEnvironment; 
+(id)sharedConfiguration;
-(id)configurationValueForKey:(id)arg1 ;
-(void)setConfigurationValue:(id)arg1 forKey:(id)arg2 ;
-(long long)shouldDisablePETs;
-(void)setShouldDisablePETs:(long long)arg1 ;
-(long long)shouldFakeAuthSuccess;
-(void)setShouldFakeAuthSuccess:(long long)arg1 ;
-(long long)shouldDisablePiggybacking;
-(void)setShouldDisablePiggybacking:(long long)arg1 ;
-(long long)shouldSuppressHSA2Suggestions;
-(void)setShouldSuppressHSA2Suggestions:(long long)arg1 ;
-(long long)shouldAddHSA2CreateHeader;
-(void)setShouldAddHSA2CreateHeader:(long long)arg1 ;
-(long long)shouldAllowPhoneNumberAccounts;
-(void)setShouldAllowPhoneNumberAccounts:(long long)arg1 ;
-(long long)shouldAllowExperimentalMode;
-(void)setShouldAllowExperimentalMode:(long long)arg1 ;
-(long long)shouldSuppressModalSheetsInMacBuddy;
-(void)setShouldSuppressModalSheetsInMacBuddy:(long long)arg1 ;
-(unsigned long long)lastKnownIDMSEnvironment;
-(void)setLastKnownIDMSEnvironment:(unsigned long long)arg1 ;
-(NSDate *)lastCheckInAttemptDate;
-(void)setLastCheckInAttemptDate:(NSDate *)arg1 ;
-(NSDate *)lastCheckInSuccessDate;
-(void)setLastCheckInSuccessDate:(NSDate *)arg1 ;
-(id)init;
-(void)dealloc;
@end

