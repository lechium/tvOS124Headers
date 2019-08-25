/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyEditingCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface CNPropertySimpleEditingCell : CNPropertyEditingCell <UITextFieldDelegate> {

	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)variableConstraints;
-(id)constantConstraints;
-(id)firstResponderItem;
-(id)valueView;
-(void)textFieldChanged:(id)arg1 ;
-(void)updateValueWithPropertyItem:(id)arg1 ;
-(void)dealloc;
-(UITextField *)textField;
-(void)prepareForReuse;
@end

