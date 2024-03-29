/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AAUIDeviceLocatorConfirmationUtilities : NSObject
+(void)showDisableAlertForAccount:(id)arg1 presentingViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_performFMIPAuthenticationForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_handleFMIPAuthenticationResponse:(id)arg1 withError:(id)arg2 forAccount:(id)arg3 message:(id)arg4 confirmationButtonTitle:(id)arg5 presentingViewController:(id)arg6 completion:(/*^block*/id)arg7 ;
+(id)_titleForError:(id)arg1 account:(id)arg2 ;
+(id)_messageForError:(id)arg1 account:(id)arg2 ;
+(void)showEnableAlertWithCompletion:(/*^block*/id)arg1 ;
+(void)checkIfWatchHasAppleIDAccount:(/*^block*/id)arg1 ;
+(void)showDisableAlertForAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

