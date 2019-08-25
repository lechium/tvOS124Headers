/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICMediaApplicationBannerManagerServiceProtocol <NSObject>
@required
-(void)serviceResetWithCompletion:(/*^block*/id)arg1;
-(void)serviceSyncWithCompletion:(/*^block*/id)arg1;
-(void)serviceProcessSyncCommands:(id)arg1 completion:(/*^block*/id)arg2;
-(void)serviceAllBannersWithCompletion:(/*^block*/id)arg1;
-(void)serviceBannersForBundleIdentifier:(id)arg1 target:(id)arg2 completion:(/*^block*/id)arg3;
-(void)serviceUpdateBanner:(id)arg1 completion:(/*^block*/id)arg2;
-(void)serviceUpdateBanners:(id)arg1 completion:(/*^block*/id)arg2;

@end

