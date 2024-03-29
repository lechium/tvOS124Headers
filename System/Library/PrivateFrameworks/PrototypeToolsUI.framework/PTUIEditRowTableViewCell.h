/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeToolsUI/PrototypeToolsUI-Structs.h>
#import <PrototypeToolsUI/PTUIRowTableViewCell.h>
#import <libobjc.A.dylib/PTUINumericKeypadDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface PTUIEditRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate, UITextFieldDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyleForRow:(id)arg1 ;
-(void)numericKeypadDidUpdateValue:(id)arg1 ;
-(void)numericKeypadWillDismiss:(id)arg1 ;
-(void)updateDisplayedValue;
-(id)textForValue:(id)arg1 ;
-(id)valueForText:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
@end

