/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSSetupController.h>

@interface DevicePINSetupController : PSSetupController {

	BOOL _success;
	BOOL _allowOptionsButton;

}

@property (assign,nonatomic) BOOL allowOptionsButton;              //@synthesize allowOptionsButton=_allowOptionsButton - In the implementation block
-(BOOL)usePopupStyle;
-(BOOL)popupStyleIsModal;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setAllowOptionsButton:(BOOL)arg1 ;
-(BOOL)allowOptionsButton;
-(BOOL)success;
-(id)init;
-(CGSize)preferredContentSize;
@end
