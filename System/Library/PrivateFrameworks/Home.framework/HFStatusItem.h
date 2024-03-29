/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@protocol HFCharacteristicValueSource;
@class HMRoom, HMHome;

@interface HFStatusItem : HFItem {

	HMRoom* _room;
	HMHome* _home;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,readonly) HMRoom * room;                                            //@synthesize room=_room - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
-(HMHome *)home;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)filteredServicesOfTypes:(id)arg1 ;
-(id)standardResultsForBatchReadResponse:(id)arg1 serviceTypes:(id)arg2 ;
-(id)initWithHome:(id)arg1 room:(id)arg2 ;
-(id)filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2 ;
-(id)initWithHome:(id)arg1 room:(id)arg2 valueSource:(id)arg3 ;
-(id)filteredServices;
-(id)_filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2 ;
-(HMRoom *)room;
-(id)init;
@end

