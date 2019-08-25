/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@class NSString;

@interface PSSystemPolicyForApp : NSObject {

	unsigned long long _policyOptions;
	BOOL _forcePolicyOptions;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(id)specifiers;
-(id)specifiersForPolicyOptions:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(id)privacySpecifiers;
-(id)assistantAndSearchSpecifiers;
-(id)notificationSpecifier;
-(id)privacySpecifierForService:(CFStringRef)arg1 ;
-(id)backgroundAppRefreshSpecifier;
-(id)wirelessDataSpecifierWithAppName:(id)arg1 ;
-(id)documentsSpecifier;
-(id)dataUsageWorkspaceInfo;
-(BOOL)isCellularBundleID:(id)arg1 ;
-(BOOL)_isWirelessDataRestricted;
-(BOOL)_supportsBackgroundAppRefresh;
-(void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isBackgroundRefreshEnabled:(id)arg1 ;
-(BOOL)_isBackgroundAppRefreshAllowed;
-(id)_privacyAccessForService:(CFStringRef)arg1 ;
-(Class)photosDetailClass;
-(id)photosStatus:(id)arg1 ;
-(id)photosAuthDescriptionForAppBundle:(CFBundleRef)arg1 ;
-(id)photosLocalizedStringForAuthType:(id)arg1 ;
-(id)locationStatus:(id)arg1 ;
-(BOOL)_isLocationServicesRestricted;
-(id)authLevelStringForStatus:(int)arg1 ;
-(id)locationServicesSpecifier;
-(id)photosServicesSpecifier;
-(void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)privacyAccessForSpecifier:(id)arg1 ;
-(CFBundleRef)copyTCCBundleForService:(CFStringRef)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

