/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncTextEntryController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIButton, NSString, PSKeychainSyncManager;

@interface KeychainSyncSMSVerificationController : PSKeychainSyncTextEntryController <UIAlertViewDelegate> {

	UIButton* _footerButton;
	NSString* _phoneNumber;
	NSString* _dialingPrefix;
	NSString* _countryCode;
	PSKeychainSyncManager* _keychainSyncManager;

}

@property (nonatomic,retain) NSString * phoneNumber;                                          //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * dialingPrefix;                                        //@synthesize dialingPrefix=_dialingPrefix - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                                          //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic,__weak) PSKeychainSyncManager * keychainSyncManager;              //@synthesize keychainSyncManager=_keychainSyncManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(void)setDialingPrefix:(NSString *)arg1 ;
-(NSString *)dialingPrefix;
-(id)specifiers;
-(void)dismissAlerts;
-(void)setKeychainSyncManager:(PSKeychainSyncManager *)arg1 ;
-(void)showSupportVerification;
-(PSKeychainSyncManager *)keychainSyncManager;
-(id)init;
-(void)loadView;
-(void)viewDidLayoutSubviews;
@end

