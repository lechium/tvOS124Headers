/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertyPhoneNumberCell.h>

@interface CNStarkContactPropertyCell : CNPropertyPhoneNumberCell {

	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
+(BOOL)wantsHorizontalLayout;
-(id)variableConstraints;
-(id)constantConstraints;
-(void)_cnui_applyContactStyle;
-(void)performDefaultAction;
-(void)transportButtonClicked:(id)arg1 ;
-(double)bottomBaselineConstant;
-(id)standardTransportIcon;
-(id)standardStarView;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

