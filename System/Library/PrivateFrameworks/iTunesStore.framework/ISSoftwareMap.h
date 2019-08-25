/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ISSoftwareMap : NSObject {

	NSArray* _applications;

}

@property (nonatomic,readonly) NSArray * applications; 
+(BOOL)currentMapIsValid;
+(void)setCurrentMap:(id)arg1 ;
+(void)startObservingNotifications;
+(id)applicationForBundleIdentifier:(id)arg1 applicationType:(id)arg2 ;
+(id)currentMap;
+(id)applicationForBundleIdentifier:(id)arg1 ;
+(id)applicationForPluginBundleIdentifier:(id)arg1 extensionType:(id)arg2 ;
+(id)copySoftwareUpdatesPropertyListWithApplications:(id)arg1 updatesContext:(id)arg2 ;
+(id)_newSoftwareUpdateDictionaryForApplication:(id)arg1 ;
+(id)containerPathForApp:(id)arg1 homeDirectory:(id)arg2 systemMetadataDirectory:(id)arg3 ;
+(void)enumerateApplicationsOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
+(BOOL)haveApplicationsOfType:(id)arg1 ;
+(void)invalidateCurrentMap;
+(id)loadedMap;
+(id)applicationForPluginBundleIdentifier:(id)arg1 ;
+(void)enumerateApplicationsForProxies:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)removableSystemApplicationsWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)_startWatchingInstallationNotifications;
-(void)_loadFromMobileInstallation;
-(id)applicationForBundleIdentifier:(id)arg1 ;
-(id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1 ;
-(id)applicationForItemIdentifier:(id)arg1 ;
-(id)copySoftwareUpdatesPropertyList;
-(NSArray *)applications;
-(id)init;
-(void)dealloc;
@end

