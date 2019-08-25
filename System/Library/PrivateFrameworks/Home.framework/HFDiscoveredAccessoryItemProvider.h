/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class HFAccessoryBrowsingManager, NSMutableSet;

@interface HFDiscoveredAccessoryItemProvider : HFItemProvider {

	HFAccessoryBrowsingManager* _accessoryBrowsingManager;
	/*^block*/id _filter;
	NSMutableSet* _discoveredAccessoryItems;

}

@property (nonatomic,retain) NSMutableSet * discoveredAccessoryItems;                              //@synthesize discoveredAccessoryItems=_discoveredAccessoryItems - In the implementation block
@property (nonatomic,readonly) HFAccessoryBrowsingManager * accessoryBrowsingManager;              //@synthesize accessoryBrowsingManager=_accessoryBrowsingManager - In the implementation block
@property (nonatomic,copy) id filter;                                                              //@synthesize filter=_filter - In the implementation block
-(id)invalidationReasons;
-(id)reloadItems;
-(id)initWithAccessoryBrowsingManager:(id)arg1 ;
-(HFAccessoryBrowsingManager *)accessoryBrowsingManager;
-(NSMutableSet *)discoveredAccessoryItems;
-(void)setDiscoveredAccessoryItems:(NSMutableSet *)arg1 ;
-(id)init;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(id)items;
@end

