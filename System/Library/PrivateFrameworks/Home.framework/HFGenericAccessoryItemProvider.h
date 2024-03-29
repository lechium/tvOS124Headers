/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFGenericAccessoryItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _genericItems;

}

@property (nonatomic,retain) NSMutableSet * genericItems;              //@synthesize genericItems=_genericItems - In the implementation block
@property (nonatomic,copy) id filter;                                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                          //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)invalidationReasons;
-(id)reloadItems;
-(BOOL)_isAccessorySupported:(id)arg1 ;
-(NSMutableSet *)genericItems;
-(void)setGenericItems:(NSMutableSet *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(id)items;
@end

