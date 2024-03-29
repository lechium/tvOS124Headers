/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@protocol TVLSectionedMenuElement;
@class NSString;

@interface TVLListViewDataSource : NSObject <UITableViewDataSource> {

	id<TVLSectionedMenuElement> _menuElement;

}

@property (nonatomic,retain) id<TVLSectionedMenuElement> menuElement;              //@synthesize menuElement=_menuElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerCellTypesWithListView:(id)arg1 ;
-(id)menuItemAtIndexPath:(id)arg1 ;
-(id<TVLSectionedMenuElement>)menuElement;
-(double)cellHeightForElementType:(id)arg1 ;
-(id)headerItemForSection:(long long)arg1 ;
-(id)reuseIdentifierForElementType:(id)arg1 ;
-(id)indexPathForInitialSelection;
-(double)heightForItemAtIndexPath:(id)arg1 ;
-(double)heightForHeaderAtSection:(long long)arg1 ;
-(Class)cellClassForElementType:(id)arg1 ;
-(void)setMenuElement:(id<TVLSectionedMenuElement>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
@end

