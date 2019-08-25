/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFAccessorySettingManagedConfigurationAdapter, HFAccessorySettingSiriLanguageAdapter, HFAccessorySettingAdapter, NSSet;

@interface HFAccessorySettingDefaultAdapterCollection : NSObject {

	HFAccessorySettingManagedConfigurationAdapter* _managedConfigurationAdapter;
	HFAccessorySettingSiriLanguageAdapter* _siriLanguageAdapter;
	HFAccessorySettingAdapter* _mobileTimerAdapter;

}

@property (nonatomic,retain) HFAccessorySettingManagedConfigurationAdapter * managedConfigurationAdapter;              //@synthesize managedConfigurationAdapter=_managedConfigurationAdapter - In the implementation block
@property (nonatomic,retain) HFAccessorySettingAdapter * mobileTimerAdapter;                                           //@synthesize mobileTimerAdapter=_mobileTimerAdapter - In the implementation block
@property (nonatomic,retain) HFAccessorySettingSiriLanguageAdapter * siriLanguageAdapter;                              //@synthesize siriLanguageAdapter=_siriLanguageAdapter - In the implementation block
@property (nonatomic,readonly) NSSet * allAdapters; 
-(HFAccessorySettingManagedConfigurationAdapter *)managedConfigurationAdapter;
-(HFAccessorySettingAdapter *)mobileTimerAdapter;
-(HFAccessorySettingSiriLanguageAdapter *)siriLanguageAdapter;
-(NSSet *)allAdapters;
-(void)setManagedConfigurationAdapter:(HFAccessorySettingManagedConfigurationAdapter *)arg1 ;
-(void)setSiriLanguageAdapter:(HFAccessorySettingSiriLanguageAdapter *)arg1 ;
-(void)setMobileTimerAdapter:(HFAccessorySettingAdapter *)arg1 ;
@end

