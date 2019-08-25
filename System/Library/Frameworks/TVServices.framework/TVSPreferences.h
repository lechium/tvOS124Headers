/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface TVSPreferences : NSObject {

	NSString* _domain;

}

@property (getter=isInspectorEnabled,nonatomic,readonly) BOOL inspectorEnabled; 
@property (nonatomic,readonly) BOOL pbs_shouldShowInternalApps; 
@property (nonatomic,readonly) BOOL pbs_shouldShowNonDefaultSystemApps; 
@property (nonatomic,readonly) BOOL pbs_isTVBarEnabled; 
@property (assign,nonatomic) BOOL pbs_shouldObliterateOnLaunch; 
@property (assign,nonatomic) BOOL pbs_shouldShowUnconfiguredVolumeButtonsAlert; 
@property (assign,nonatomic) BOOL pbs_watchListButtonBehaviorEnabled; 
@property (assign,nonatomic) BOOL pbs_shouldShowWatchListButtonBehaviorAlert; 
@property (assign,setter=pbs_setNeedsHomeKitAutoOnboarding:,nonatomic) BOOL pbs_needsHomeKitAutoOnboarding; 
@property (setter=pbs_setBuddySelectedRoomName:,nonatomic,retain) NSString * pbs_buddySelectedRoomName; 
@property (assign,setter=pbs_setTopShelfDifferentApps:,nonatomic) BOOL pbs_topShelfDifferentApps; 
@property (assign,nonatomic) BOOL tvs_allDisplayModeRefreshRatesAllowed; 
@property (assign,nonatomic) BOOL shouldDisplayApplicationsQuotaExceededMessage; 
@property (nonatomic,readonly) NSDictionary * photoSourceInfo; 
@property (assign,nonatomic) BOOL repeatPhotos; 
@property (assign,nonatomic) BOOL shufflePhotos; 
@property (assign,nonatomic) BOOL shuffleMusic; 
@property (assign,nonatomic) long long timePerSlide; 
@property (nonatomic,retain) NSString * slideshowStyle; 
@property (nonatomic,retain) NSString * slideshowTransitionStyle; 
@property (nonatomic,readonly) NSString * screenSaverPhotoSourceIdentifier; 
@property (nonatomic,readonly) NSString * screenSaverPhotoCollectionIdentifier; 
@property (nonatomic,readonly) NSString * screenSaverName; 
@property (nonatomic,readonly) NSDictionary * screenSaverUserInfo; 
@property (assign,nonatomic) BOOL allowsScreenSaverOverMusic; 
@property (assign,nonatomic) long long activationDelay; 
@property (nonatomic,copy) NSString * screenSaverStyle; 
@property (assign,nonatomic) BOOL idleScreenEnabled; 
@property (nonatomic,copy) NSString * domain;                                                                            //@synthesize domain=_domain - In the implementation block
+(id)sharedTVInspectorPreferences;
+(id)sharedPineBoardServicesPreferences;
+(id)keyPathsForValuesAffectingTvs_allDisplayModeRefreshRatesAllowed;
+(BOOL)automaticallyNotifiesObserversOfTvs_allDisplayModeRefreshRatesAllowed;
+(id)sharedCacheDeletePreferences;
+(BOOL)_isValidStyle:(id)arg1 ;
+(void)synchronizeAllDomains;
+(id)sharedSlideshowPreferences;
+(id)sharedScreenSaverPreferences;
+(id)addObserverForDomain:(id)arg1 withDistributedSynchronizationHandler:(/*^block*/id)arg2 ;
+(void)removeDomainObserver:(id)arg1 ;
+(id)sharedAppleTVServicesPreferences;
+(id)preferencesWithDomain:(id)arg1 ;
-(BOOL)isInspectorEnabled;
-(BOOL)pbs_shouldShowInternalApps;
-(BOOL)pbs_shouldShowNonDefaultSystemApps;
-(BOOL)pbs_isTVBarEnabled;
-(BOOL)pbs_shouldObliterateOnLaunch;
-(void)setPbs_shouldObliterateOnLaunch:(BOOL)arg1 ;
-(BOOL)pbs_shouldShowUnconfiguredVolumeButtonsAlert;
-(void)setPbs_shouldShowUnconfiguredVolumeButtonsAlert:(BOOL)arg1 ;
-(BOOL)pbs_watchListButtonBehaviorEnabled;
-(void)setPbs_watchListButtonBehaviorEnabled:(BOOL)arg1 ;
-(BOOL)pbs_shouldShowWatchListButtonBehaviorAlert;
-(void)setPbs_shouldShowWatchListButtonBehaviorAlert:(BOOL)arg1 ;
-(BOOL)pbs_needsHomeKitAutoOnboarding;
-(void)pbs_setNeedsHomeKitAutoOnboarding:(BOOL)arg1 ;
-(NSString *)pbs_buddySelectedRoomName;
-(void)pbs_setBuddySelectedRoomName:(id)arg1 ;
-(void)pbs_setTopShelfDifferentApps:(BOOL)arg1 ;
-(BOOL)pbs_topShelfDifferentApps;
-(BOOL)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)setInteger:(int)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(BOOL)setDouble:(double)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 defaultValue:(double)arg2 ;
-(int)integerForKey:(id)arg1 defaultValue:(int)arg2 ;
-(float)floatForKey:(id)arg1 defaultValue:(float)arg2 ;
-(id)tvs_userDefaults;
-(BOOL)tvs_allDisplayModeRefreshRatesAllowed;
-(void)setTvs_allDisplayModeRefreshRatesAllowed:(BOOL)arg1 ;
-(void)setShouldDisplayApplicationsQuotaExceededMessage:(BOOL)arg1 ;
-(BOOL)shouldDisplayApplicationsQuotaExceededMessage;
-(NSDictionary *)photoSourceInfo;
-(BOOL)shuffleMusic;
-(void)setShuffleMusic:(BOOL)arg1 ;
-(id)slideshowMenuSettings;
-(void)setScreenSaverStyle:(NSString *)arg1 ;
-(void)setScreenSaverWithPhotoSource:(id)arg1 collection:(id)arg2 name:(id)arg3 style:(id)arg4 userInfo:(id)arg5 ;
-(void)setScreenSaverWithPhotoSource:(id)arg1 collection:(id)arg2 ;
-(void)setScreenSaverDisplayStatusForBundleIdentifier:(id)arg1 isEnabled:(BOOL)arg2 appInfo:(id)arg3 ;
-(id)getScreenSaverDisplayStatusForBundleIdentifier:(id)arg1 ;
-(NSString *)screenSaverPhotoSourceIdentifier;
-(NSString *)screenSaverPhotoCollectionIdentifier;
-(NSString *)screenSaverName;
-(NSDictionary *)screenSaverUserInfo;
-(BOOL)allowsScreenSaverOverMusic;
-(void)setAllowsScreenSaverOverMusic:(BOOL)arg1 ;
-(long long)activationDelay;
-(void)setActivationDelay:(long long)arg1 ;
-(NSString *)screenSaverStyle;
-(BOOL)idleScreenEnabled;
-(void)setIdleScreenEnabled:(BOOL)arg1 ;
-(id)slideshowThemeTransitionSettings;
-(NSString *)slideshowTransitionStyle;
-(BOOL)shufflePhotos;
-(BOOL)repeatPhotos;
-(NSString *)slideshowStyle;
-(long long)timePerSlide;
-(void)setSlideshowTransitionStyle:(NSString *)arg1 ;
-(void)setShufflePhotos:(BOOL)arg1 ;
-(void)setRepeatPhotos:(BOOL)arg1 ;
-(id)slideshowThemeSettings;
-(void)setTimePerSlide:(long long)arg1 ;
-(void)setSlideshowStyle:(NSString *)arg1 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)synchronize;
-(NSString *)domain;
-(BOOL)boolForKey:(id)arg1 ;
-(BOOL)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
-(int)integerForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(id)initWithDomain:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
@end

