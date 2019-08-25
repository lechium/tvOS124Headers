/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KeychainSyncPhoneSettingsFragmentDelegate;
@class NSArray, PSPhoneNumberSpecifier, PSSpecifier, PSListController, NSString, KeychainSyncCountryInfo, PSEditableTableCell;

@interface KeychainSyncPhoneSettingsFragment : NSObject {

	NSArray* _specifiers;
	PSPhoneNumberSpecifier* _phoneNumberSpecifier;
	PSSpecifier* _countrySpecifier;
	PSListController* _listController;
	NSString* _phoneNumber;
	KeychainSyncCountryInfo* _countryInfo;
	id<KeychainSyncPhoneSettingsFragmentDelegate> _delegate;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * specifiers; 
@property (nonatomic,retain) NSString * phoneNumber;                                                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) KeychainSyncCountryInfo * countryInfo;                                      //@synthesize countryInfo=_countryInfo - In the implementation block
@property (nonatomic,readonly) PSEditableTableCell * phoneNumberCell; 
@property (assign,nonatomic,__weak) id<KeychainSyncPhoneSettingsFragmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * title;                                                           //@synthesize title=_title - In the implementation block
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(void)setDialingCountryInfo:(id)arg1 forSpecifier:(id)arg2 ;
-(id)dialingCountryInfoForSpecifier:(id)arg1 ;
-(void)setPhoneNumber:(id)arg1 forSpecifier:(id)arg2 ;
-(id)phoneNumberForSpecifier:(id)arg1 ;
-(PSEditableTableCell *)phoneNumberCell;
-(id)unformattedPhoneNumber;
-(KeychainSyncCountryInfo *)countryInfo;
-(id)initWithListController:(id)arg1 ;
-(NSArray *)specifiers;
-(void)reloadSpecifiers;
-(void)setCountryInfo:(KeychainSyncCountryInfo *)arg1 ;
-(void)textFieldChanged:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<KeychainSyncPhoneSettingsFragmentDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<KeychainSyncPhoneSettingsFragmentDelegate>)delegate;
-(void)resignFirstResponder;
@end

