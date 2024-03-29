/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIApplicationRouter : NSObject
+(id)topPresentedViewController;
+(void)dismissPresentedViewController;
+(id)currentNavigationController;
+(id)topMostVisibleViewController;
+(id)eventDataSourceForEvent:(id)arg1 viewElement:(id)arg2 ;
+(void)_performForType:(long long)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 eventDataSource:(id)arg4 ;
+(BOOL)_handleDocumentDataSource:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)_handleAccountSettingsPresentationWithViewController:(id)arg1 ;
+(void)_amsBagURLForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)_dismissPresentedViewControllerWithCompletion:(/*^block*/id)arg1 ;
+(id)_viewControllerWithIdentifier:(id)arg1 ;
+(BOOL)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id*)arg4 ;
+(BOOL)handleAccountSettingsEvent:(id)arg1 urlString:(id)arg2 amsBagKey:(id)arg3 ;
+(void)dismissOrPopViewControllerWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)dismissOrPopLastViewControllerWithCompletion:(/*^block*/id)arg1 ;
@end

