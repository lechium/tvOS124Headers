/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVOneUpSection
@property (nonatomic,readonly) long long autoHighlightIndex; 
@required
-(void)loadIndex:(long long)arg1;
-(void)unloadIndex:(long long)arg1;
-(long long)autoHighlightIndex;
-(void)resetAutoHighlightIndex;
-(void)configureItemsChangeSetWithSection:(id)arg1;
-(BOOL)itemsChangeSetContainsMovedAddedOrRemovedItems;
-(long long)newItemIndexForOldItemIndex:(long long)arg1;
-(long long)numberOfItems;
-(id)elementForItemAtIndex:(long long)arg1;

@end

