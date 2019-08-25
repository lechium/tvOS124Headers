/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSPreferences;

@interface TVHSSettings : NSObject {

	id _preferencesDomainObserver;
	TVSPreferences* _preferences;

}

@property (nonatomic,retain) id preferencesDomainObserver;              //@synthesize preferencesDomainObserver=_preferencesDomainObserver - In the implementation block
@property (nonatomic,retain) TVSPreferences * preferences;              //@synthesize preferences=_preferences - In the implementation block
-(id)initWithPreferencesDomain:(id)arg1 ;
-(void)_updateSettingWithBlock:(/*^block*/id)arg1 shouldNotify:(BOOL)arg2 forKey:(id)arg3 ;
-(void)_refreshSettingsFromPreferencesAndShouldNotify:(BOOL)arg1 ;
-(id)preferencesDomainObserver;
-(void)setPreferencesDomainObserver:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setPreferences:(TVSPreferences *)arg1 ;
-(TVSPreferences *)preferences;
@end
