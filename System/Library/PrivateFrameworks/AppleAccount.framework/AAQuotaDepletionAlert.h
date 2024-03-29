/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ACAccountStore, ACAccount;

@interface AAQuotaDepletionAlert : NSObject {

	NSString* _dataclass;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;

}
+(BOOL)_isDisabledDataclass:(id)arg1 ;
-(id)_deviceSpecificLocalizedString:(id)arg1 ;
-(id)_primaryAccount;
-(BOOL)showIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(id)initForDataclass:(id)arg1 ;
-(void)showWithHandler:(/*^block*/id)arg1 ;
-(id)init;
@end

