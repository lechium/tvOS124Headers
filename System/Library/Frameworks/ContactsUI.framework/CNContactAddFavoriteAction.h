/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/CNUIFavoritesEntryPickerDelegate.h>

@class CNUIFavoritesEntryPicker, NSString;

@interface CNContactAddFavoriteAction : CNPropertyAction <CNUIFavoritesEntryPickerDelegate> {

	CNUIFavoritesEntryPicker* _favoritesEntryPicker;

}

@property (nonatomic,retain) CNUIFavoritesEntryPicker * favoritesEntryPicker;              //@synthesize favoritesEntryPicker=_favoritesEntryPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionWithSender:(id)arg1 ;
-(void)setFavoritesEntryPicker:(CNUIFavoritesEntryPicker *)arg1 ;
-(CNUIFavoritesEntryPicker *)favoritesEntryPicker;
-(void)_saveFavorite:(id)arg1 ;
-(void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2 ;
-(BOOL)canPerformAction;
@end

