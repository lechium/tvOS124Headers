/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class HMHome, NSMutableSet;

@interface HFMediaAccessoryItemProvider : HFItemProvider {

	BOOL _includeMediaSystems;
	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _mediaAccessoryItems;
	id<HFCharacteristicValueSource> _overrideValueSource;

}

@property (nonatomic,retain) NSMutableSet * mediaAccessoryItems;                               //@synthesize mediaAccessoryItems=_mediaAccessoryItems - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> overrideValueSource;              //@synthesize overrideValueSource=_overrideValueSource - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) BOOL includeMediaSystems;                                       //@synthesize includeMediaSystems=_includeMediaSystems - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource; 
@property (nonatomic,readonly) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(id)reloadItems;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id<HFCharacteristicValueSource>)overrideValueSource;
-(void)setOverrideValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id)initWithHome:(id)arg1 includeMediaSystems:(BOOL)arg2 ;
-(void)setMediaAccessoryItems:(NSMutableSet *)arg1 ;
-(BOOL)includeMediaSystems;
-(NSMutableSet *)mediaAccessoryItems;
-(id)initWithHome:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(id)items;
@end

