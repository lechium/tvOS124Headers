/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTransformItem.h>

@class HFRoomItem;

@interface HFSelectableRoomTransformItem : HFTransformItem

@property (nonatomic,readonly) HFRoomItem * roomItem; 
-(id)initWithRoomItem:(id)arg1 accessoryVendor:(id)arg2 ;
-(id)initWithSourceItem:(id)arg1 updateOptionsTransformBlock:(/*^block*/id)arg2 resultsTransformBlock:(/*^block*/id)arg3 ;
-(HFRoomItem *)roomItem;
@end

