/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore;

@interface AAiCloudTermsAgreeRequest : AARequest {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	BOOL _preferPassword;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL preferPassword;              //@synthesize preferPassword=_preferPassword - In the implementation block
-(BOOL)preferPassword;
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
-(void)setPreferPassword:(BOOL)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
@end

