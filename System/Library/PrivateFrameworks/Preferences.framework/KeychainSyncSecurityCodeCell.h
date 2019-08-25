/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditableTableCell.h>

@class UILabel, NSString;

@interface KeychainSyncSecurityCodeCell : PSEditableTableCell {

	UILabel* _bulletTextLabel;
	int _securityCodeType;
	int _mode;
	NSString* _firstPasscodeEntry;

}

@property (assign,nonatomic) int securityCodeType;                       //@synthesize securityCodeType=_securityCodeType - In the implementation block
@property (assign,nonatomic) int mode;                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSString * firstPasscodeEntry;              //@synthesize firstPasscodeEntry=_firstPasscodeEntry - In the implementation block
-(void)setBulletText:(id)arg1 ;
-(int)securityCodeType;
-(void)setSecurityCodeType:(int)arg1 ;
-(NSString *)firstPasscodeEntry;
-(void)setFirstPasscodeEntry:(NSString *)arg1 ;
-(void)layoutSubviews;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(int)mode;
-(void)setMode:(int)arg1 ;
@end
