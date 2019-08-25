/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSDisplayConfiguration;

@interface XBApplicationController : NSObject {

	FBSDisplayConfiguration* _mainDisplayConfiguration;

}
+(id)sharedInstance;
-(void)_migrateDataIfNeeded;
-(void)removeAllGeneratedLaunchImages;
-(void)removeAllGeneratedLaunchImagesAndSnapshots;
-(id)_allApplicationsFilteredBySystem:(BOOL)arg1 bySplashBoard:(BOOL)arg2 ;
-(id)allSplashBoardApplications;
-(void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(BOOL)arg3 ;
-(id)_allApplications;
-(void)_removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(BOOL)arg2 ;
-(void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 ;
-(id)allSplashBoardSystemApplications;
-(void)resetEverything;
-(void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(/*^block*/id)arg2 ;
-(id)init;
@end

