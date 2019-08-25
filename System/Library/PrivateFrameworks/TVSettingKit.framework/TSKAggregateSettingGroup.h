/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKSettingGroup.h>
#import <libobjc.A.dylib/TSKSettingGroupDelegate.h>

@class NSArray, NSString;

@interface TSKAggregateSettingGroup : TSKSettingGroup <TSKSettingGroupDelegate> {

	NSArray* _settingGroups;

}

@property (nonatomic,copy) NSArray * settingGroups;                 //@synthesize settingGroups=_settingGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupWithTitle:(id)arg1 settingItems:(id)arg2 ;
+(id)groupWithTitle:(id)arg1 settingGroups:(id)arg2 ;
-(void)_prepareSettingItems;
-(void)_removeSettingItems:(id)arg1 ;
-(void)_insertSettingItems:(id)arg1 afterItem:(id)arg2 ;
-(void)_updateSettingItemsWithValue:(id)arg1 ;
-(id)observableSettingItems;
-(NSArray *)settingGroups;
-(void)_pruneDeletedItems;
-(void)settingGroup:(id)arg1 didInsertItems:(id)arg2 ;
-(void)settingGroup:(id)arg1 willRemoveItems:(id)arg2 ;
-(void)setSettingGroups:(NSArray *)arg1 ;
-(void)_refreshSettingItemsWithGroups:(id)arg1 ;
-(id)initWithTitle:(id)arg1 ;
@end

