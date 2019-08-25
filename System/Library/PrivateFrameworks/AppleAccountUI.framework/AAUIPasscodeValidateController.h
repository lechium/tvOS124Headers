/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@class AAUICDPHelper, PSSetupController, NSString;

@interface AAUIPasscodeValidateController : NSObject <DevicePINControllerDelegate> {

	AAUICDPHelper* _helper;
	PSSetupController* _navController;
	/*^block*/id __passcodeValidationCompletion;

}

@property (nonatomic,copy) id _passcodeValidationCompletion;              //@synthesize _passcodeValidationCompletion=__passcodeValidationCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stingrayControllerWithPresenter:(id)arg1 forceInline:(BOOL)arg2 ;
+(id)stingrayControllerWithPresenter:(id)arg1 ;
-(void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2 ;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2 ;
-(void)didAcceptEnteredPIN;
-(void)didCancelEnteringPIN;
-(void)validateStingrayPasscodeStateWithCompletion:(/*^block*/id)arg1 ;
-(void)set_passcodeValidationCompletion:(id)arg1 ;
-(void)_showPasscodePromptWithMode:(int)arg1 ;
-(void)_setupNavController;
-(id)_specifierForMode:(int)arg1 ;
-(void)dismissFlowWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)_passcodeValidationCompletion;
-(id)_presentingViewController;
-(void)dealloc;
@end

