/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactActionsViewControllerDelegate.h>

@protocol CNUIFavoritesEntryPickerDelegate;
@class CNContact, UIAlertController, NSString;

@interface CNUIFavoritesEntryPicker : NSObject <CNContactActionsViewControllerDelegate> {

	id<CNUIFavoritesEntryPickerDelegate> _delegate;
	CNContact* _contact;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) UIAlertController * alertController;                               //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<CNUIFavoritesEntryPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                             //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(void)contactActionsViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(void)setDelegate:(id<CNUIFavoritesEntryPickerDelegate>)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(id<CNUIFavoritesEntryPickerDelegate>)delegate;
-(UIAlertController *)alertController;
-(id)viewController;
@end

