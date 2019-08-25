/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, TVLAppliance, NSString, TVLScreenSaverPhotoService, NSXPCListener, NSDictionary, UIAlertController;

@interface TVLAppDelegate : UIResponder <UIApplicationDelegate> {

	TVLAppliance* _appliance;
	NSString* _merchantName;
	BOOL _restartApplianceOnActivate;
	TVLScreenSaverPhotoService* _screenSaverService;
	BOOL _terminateApplianceOnResign;
	UIWindow* _window;
	TVLAppliance* _headlessAppliance;
	NSXPCListener* _serviceListener;
	NSDictionary* _launchOptions;
	UIAlertController* _applianceUnavailableAlertController;
	UIAlertController* _networkUnavailableAlertController;

}

@property (nonatomic,retain) TVLAppliance * appliance;                                                    //@synthesize appliance=_appliance - In the implementation block
@property (nonatomic,retain) TVLAppliance * headlessAppliance;                                            //@synthesize headlessAppliance=_headlessAppliance - In the implementation block
@property (retain) NSXPCListener * serviceListener;                                                       //@synthesize serviceListener=_serviceListener - In the implementation block
@property (copy) NSDictionary * launchOptions;                                                            //@synthesize launchOptions=_launchOptions - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * applianceUnavailableAlertController;              //@synthesize applianceUnavailableAlertController=_applianceUnavailableAlertController - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * networkUnavailableAlertController;                //@synthesize networkUnavailableAlertController=_networkUnavailableAlertController - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                           //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) NSDictionary * appDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setupLogging;
-(NSXPCListener *)serviceListener;
-(BOOL)_isInBackground;
-(NSDictionary *)launchOptions;
-(TVLAppliance *)appliance;
-(BOOL)_supportsScreenSaver;
-(BOOL)_shouldLaunchForServiceOnlyModeWithOptions:(id)arg1 ;
-(BOOL)_shouldCreateHeadlessContextForLaunchModeWithOptions:(id)arg1 ;
-(void)_internetAvailabilityChanged:(id)arg1 ;
-(void)_registerScreenSaverService;
-(void)_startAppliance;
-(void)_startForegroundApplicationWithCompletion:(/*^block*/id)arg1 ;
-(void)setAppliance:(TVLAppliance *)arg1 ;
-(NSDictionary *)appDictionary;
-(void)resignActiveWithRestartOnActive:(BOOL)arg1 ;
-(void)setNetworkUnavailableAlertController:(UIAlertController *)arg1 ;
-(void)setApplianceUnavailableAlertController:(UIAlertController *)arg1 ;
-(void)_showAppLoadingErrorMessage;
-(BOOL)_checkThatNetworkIsAvailableAndReachable;
-(void)_createHeadlessAppliance;
-(BOOL)_displayApplianceViewControllerForInfoPlist;
-(void)exitAppWithResign:(BOOL)arg1 ;
-(id)_merchantName;
-(TVLAppliance *)headlessAppliance;
-(void)setHeadlessAppliance:(TVLAppliance *)arg1 ;
-(UIAlertController *)applianceUnavailableAlertController;
-(UIAlertController *)networkUnavailableAlertController;
-(void)setServiceListener:(NSXPCListener *)arg1 ;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setLaunchOptions:(NSDictionary *)arg1 ;
@end

