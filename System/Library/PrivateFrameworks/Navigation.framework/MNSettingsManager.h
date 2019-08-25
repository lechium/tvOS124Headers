/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNSettings, MNObserverHashTable;

@interface MNSettingsManager : NSObject {

	MNSettings* _settings;
	MNObserverHashTable* _observers;

}

@property (nonatomic,readonly) MNSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)sharedInstance;
-(void)updateForSettings:(id)arg1 ;
-(void)_setVolumeFromDefaults;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(MNSettings *)settings;
@end

