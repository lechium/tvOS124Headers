/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class CNAccountsAndGroupsItem;

@interface CNAccountsAndGroupsTableViewCell : UITableViewCell {

	CNAccountsAndGroupsItem* _item;

}

@property (nonatomic,retain) CNAccountsAndGroupsItem * item;              //@synthesize item=_item - In the implementation block
-(void)updateFromItem;
-(void)dealloc;
-(void)setItem:(CNAccountsAndGroupsItem *)arg1 ;
-(CNAccountsAndGroupsItem *)item;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

