/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSURLProtocolDialog.h>
#import <libobjc.A.dylib/AMSURLProtocolDialogHandling.h>

@class NSDictionary, ACAccount, NSError, NSString;

@interface AMSURLProtocolAuthorizationDialog : AMSURLProtocolDialog <AMSURLProtocolDialogHandling> {

	BOOL _authorizationIsForced;
	ACAccount* _authenticatedAccount;
	NSError* _error;

}

@property (nonatomic,readonly) ACAccount * authenticatedAccount;              //@synthesize authenticatedAccount=_authenticatedAccount - In the implementation block
@property (nonatomic,readonly) BOOL authorizationIsForced;                    //@synthesize authorizationIsForced=_authorizationIsForced - In the implementation block
@property (nonatomic,readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dialogDictionary; 
-(ACAccount *)authenticatedAccount;
-(id)_findActionableButton;
-(BOOL)_shouldAuthenticateForButton:(id)arg1 ;
-(id)_authenticateWithError:(id*)arg1 dialogOptions:(long long)arg2 ;
-(id)runDialog;
-(BOOL)authorizationIsForced;
-(NSError *)error;
@end
