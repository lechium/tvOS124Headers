/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSSystemPolicyManager : NSObject
+(id)_thirdPartyApplicationProxies;
+(id)_thirdPartyApplicationProxyForBundleID:(id)arg1 ;
+(void)_populateBBSectionIDs;
+(BOOL)_shouldIncludeProxy:(id)arg1 ;
+(BOOL)_systemSettingsNeededForProxy:(id)arg1 ;
+(BOOL)_privacySettingsNeededForProxy:(id)arg1 ;
+(BOOL)_locationSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1 ;
+(BOOL)_cellularDataSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_notificationSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_documentSettingsNeededForBundleID:(id)arg1 ;
+(id)_dataUsageWorkspaceInfo;
+(id)thirdPartyApplications;
+(id)thirdPartyApplicationForBundleID:(id)arg1 ;
+(id)thirdPartyApplicationProxies;
+(id)thirdPartyApplicationProxyForBundleID:(id)arg1 ;
@end
