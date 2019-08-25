/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXSpeechAssetServices/AXSpeechAssetServices-Structs.h>
@interface AXSpeechAssetMonitorHelper : NSObject {

	double _lastVoiceAssetUpdateTime;
	SCNetworkReachabilityRef _reachability;

}
+(id)sharedInstance;
-(id)_speechAssetUpdaterClient;
-(void)_monitorSpeechAssetChanges;
-(BOOL)_areMobileAssetsPresent;
-(void)_monitorForNetworkChanges;
-(void)_registerForReachabilityNotifications;
-(void)_clientUpdateAvailableSpeechAssets;
-(void)_checkClientForUpdates:(BOOL)arg1 ;
-(void)updateAvailableSpeechAssets;
-(void)_checkForAssetUpdatesNowAndNextWeek;
-(id)speechAssetUpdaterClient;
-(void)_unregisterForReachabilityNotifications;
-(void)clearCurrentVoicesAndRefreshTTSVoiceList;
-(id)init;
@end

