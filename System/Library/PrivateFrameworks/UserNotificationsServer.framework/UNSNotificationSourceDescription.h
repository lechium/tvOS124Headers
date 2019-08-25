/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray, UNSNotificationSourceSettingsDescription;

@interface UNSNotificationSourceDescription : NSObject {

	BOOL _allowCriticalAlerts;
	BOOL _allowPrivateProperties;
	BOOL _allowUnlimitedPendingNotifications;
	BOOL _allowUnlimitedContentBody;
	BOOL _hideSettings;
	BOOL _automaticallyShowSettings;
	BOOL _suppressDismissalSync;
	BOOL _suppressUserAuthorizationPrompt;
	BOOL _useDefaultDataProvider;
	BOOL _usesCloudKit;
	BOOL _supportsContentAvailableRemoteNotifications;
	BOOL _restricted;
	BOOL _daemonShouldReceiveBackgroundResponses;
	NSString* _bundleIdentifier;
	NSString* _universalApplicationIdentifier;
	NSString* _displayName;
	NSString* _pushEnvironment;
	NSString* _defaultIconFile;
	NSString* _settingsIconFile;
	NSString* _settingsSheetIconFile;
	NSString* _carPlayIconFile;
	NSString* _watchQuickLookSmallIconFile;
	NSString* _watchQuickLookLargeIconFile;
	NSString* _watchListSmallIconFile;
	NSString* _watchListLargeIconFile;
	NSString* _watchQuickLook394hIconFile;
	NSString* _watchQuickLook448hIconFile;
	NSString* _watchList394hIconFile;
	NSString* _watchList448hIconFile;
	NSURL* _bundleURL;
	NSURL* _dataContainerURL;
	NSArray* _defaultCategories;
	UNSNotificationSourceSettingsDescription* _defaultSettings;
	NSArray* _defaultTopics;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * universalApplicationIdentifier;                                 //@synthesize universalApplicationIdentifier=_universalApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pushEnvironment;                                                //@synthesize pushEnvironment=_pushEnvironment - In the implementation block
@property (nonatomic,copy) NSString * defaultIconFile;                                                //@synthesize defaultIconFile=_defaultIconFile - In the implementation block
@property (nonatomic,copy) NSString * settingsIconFile;                                               //@synthesize settingsIconFile=_settingsIconFile - In the implementation block
@property (nonatomic,copy) NSString * settingsSheetIconFile;                                          //@synthesize settingsSheetIconFile=_settingsSheetIconFile - In the implementation block
@property (nonatomic,copy) NSString * carPlayIconFile;                                                //@synthesize carPlayIconFile=_carPlayIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchQuickLookSmallIconFile;                                    //@synthesize watchQuickLookSmallIconFile=_watchQuickLookSmallIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchQuickLookLargeIconFile;                                    //@synthesize watchQuickLookLargeIconFile=_watchQuickLookLargeIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchListSmallIconFile;                                         //@synthesize watchListSmallIconFile=_watchListSmallIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchListLargeIconFile;                                         //@synthesize watchListLargeIconFile=_watchListLargeIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchQuickLook394hIconFile;                                     //@synthesize watchQuickLook394hIconFile=_watchQuickLook394hIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchQuickLook448hIconFile;                                     //@synthesize watchQuickLook448hIconFile=_watchQuickLook448hIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchList394hIconFile;                                          //@synthesize watchList394hIconFile=_watchList394hIconFile - In the implementation block
@property (nonatomic,copy) NSString * watchList448hIconFile;                                          //@synthesize watchList448hIconFile=_watchList448hIconFile - In the implementation block
@property (nonatomic,copy) NSURL * bundleURL;                                                         //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSURL * dataContainerURL;                                                  //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,retain) NSArray * defaultCategories;                                             //@synthesize defaultCategories=_defaultCategories - In the implementation block
@property (nonatomic,retain) UNSNotificationSourceSettingsDescription * defaultSettings;              //@synthesize defaultSettings=_defaultSettings - In the implementation block
@property (nonatomic,retain) NSArray * defaultTopics;                                                 //@synthesize defaultTopics=_defaultTopics - In the implementation block
@property (assign,nonatomic) BOOL automaticallyShowSettings;                                          //@synthesize automaticallyShowSettings=_automaticallyShowSettings - In the implementation block
@property (assign,nonatomic) BOOL hideSettings;                                                       //@synthesize hideSettings=_hideSettings - In the implementation block
@property (assign,nonatomic) BOOL useDefaultDataProvider;                                             //@synthesize useDefaultDataProvider=_useDefaultDataProvider - In the implementation block
@property (assign,nonatomic) BOOL suppressDismissalSync;                                              //@synthesize suppressDismissalSync=_suppressDismissalSync - In the implementation block
@property (assign,nonatomic) BOOL suppressUserAuthorizationPrompt;                                    //@synthesize suppressUserAuthorizationPrompt=_suppressUserAuthorizationPrompt - In the implementation block
@property (assign,nonatomic) BOOL allowCriticalAlerts;                                                //@synthesize allowCriticalAlerts=_allowCriticalAlerts - In the implementation block
@property (assign,nonatomic) BOOL allowPrivateProperties;                                             //@synthesize allowPrivateProperties=_allowPrivateProperties - In the implementation block
@property (assign,nonatomic) BOOL allowUnlimitedPendingNotifications;                                 //@synthesize allowUnlimitedPendingNotifications=_allowUnlimitedPendingNotifications - In the implementation block
@property (assign,nonatomic) BOOL allowUnlimitedContentBody;                                          //@synthesize allowUnlimitedContentBody=_allowUnlimitedContentBody - In the implementation block
@property (assign,nonatomic) BOOL usesCloudKit;                                                       //@synthesize usesCloudKit=_usesCloudKit - In the implementation block
@property (assign,nonatomic) BOOL supportsContentAvailableRemoteNotifications;                        //@synthesize supportsContentAvailableRemoteNotifications=_supportsContentAvailableRemoteNotifications - In the implementation block
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;                                     //@synthesize restricted=_restricted - In the implementation block
@property (assign,nonatomic) BOOL daemonShouldReceiveBackgroundResponses;                             //@synthesize daemonShouldReceiveBackgroundResponses=_daemonShouldReceiveBackgroundResponses - In the implementation block
+(id)systemSourceDescriptionWithBundleURL:(id)arg1 ;
+(id)applicationSourceDescriptionWithApplication:(id)arg1 ;
+(id)_validEnvironmentFromEnvironment:(id)arg1 ;
+(id)descriptionWithBundleIdentifier:(id)arg1 path:(id)arg2 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)defaultCategories;
-(void)setBundleURL:(NSURL *)arg1 ;
-(UNSNotificationSourceSettingsDescription *)defaultSettings;
-(NSString *)pushEnvironment;
-(void)setPushEnvironment:(NSString *)arg1 ;
-(BOOL)supportsContentAvailableRemoteNotifications;
-(BOOL)usesCloudKit;
-(BOOL)allowUnlimitedPendingNotifications;
-(BOOL)useDefaultDataProvider;
-(BOOL)suppressUserAuthorizationPrompt;
-(BOOL)allowCriticalAlerts;
-(void)setDataContainerURL:(NSURL *)arg1 ;
-(void)setUsesCloudKit:(BOOL)arg1 ;
-(void)setAllowCriticalAlerts:(BOOL)arg1 ;
-(void)setSupportsContentAvailableRemoteNotifications:(BOOL)arg1 ;
-(void)setSystemPropertiesFromDictionary:(id)arg1 bundle:(id)arg2 ;
-(void)setSuppressUserAuthorizationPrompt:(BOOL)arg1 ;
-(void)setAllowUnlimitedPendingNotifications:(BOOL)arg1 ;
-(void)setAllowPrivateProperties:(BOOL)arg1 ;
-(void)setUseDefaultDataProvider:(BOOL)arg1 ;
-(NSString *)defaultIconFile;
-(NSString *)settingsIconFile;
-(NSString *)settingsSheetIconFile;
-(NSString *)carPlayIconFile;
-(NSString *)watchQuickLookSmallIconFile;
-(NSString *)watchQuickLookLargeIconFile;
-(NSString *)watchListSmallIconFile;
-(NSString *)watchListLargeIconFile;
-(NSString *)watchQuickLook394hIconFile;
-(NSString *)watchQuickLook448hIconFile;
-(NSString *)watchList394hIconFile;
-(NSString *)watchList448hIconFile;
-(NSString *)universalApplicationIdentifier;
-(NSArray *)defaultTopics;
-(BOOL)automaticallyShowSettings;
-(BOOL)hideSettings;
-(BOOL)suppressDismissalSync;
-(BOOL)allowUnlimitedContentBody;
-(BOOL)allowPrivateProperties;
-(void)setDefaultCategoriesFromArray:(id)arg1 bundle:(id)arg2 ;
-(void)setDefaultSettings:(UNSNotificationSourceSettingsDescription *)arg1 ;
-(void)setDefaultTopicsFromArray:(id)arg1 bundle:(id)arg2 ;
-(void)setIconFilesFromDictionary:(id)arg1 ;
-(void)setAutomaticallyShowSettings:(BOOL)arg1 ;
-(void)setHideSettings:(BOOL)arg1 ;
-(void)setUniversalApplicationIdentifier:(NSString *)arg1 ;
-(void)setSuppressDismissalSync:(BOOL)arg1 ;
-(void)setAllowUnlimitedContentBody:(BOOL)arg1 ;
-(void)setDaemonShouldReceiveBackgroundResponses:(BOOL)arg1 ;
-(void)setDefaultIconFile:(NSString *)arg1 ;
-(void)setSettingsIconFile:(NSString *)arg1 ;
-(void)setSettingsSheetIconFile:(NSString *)arg1 ;
-(void)setCarPlayIconFile:(NSString *)arg1 ;
-(void)setWatchQuickLookSmallIconFile:(NSString *)arg1 ;
-(void)setWatchQuickLookLargeIconFile:(NSString *)arg1 ;
-(void)setWatchListSmallIconFile:(NSString *)arg1 ;
-(void)setWatchListLargeIconFile:(NSString *)arg1 ;
-(void)setWatchQuickLook394hIconFile:(NSString *)arg1 ;
-(void)setWatchQuickLook448hIconFile:(NSString *)arg1 ;
-(void)setWatchList394hIconFile:(NSString *)arg1 ;
-(void)setWatchList448hIconFile:(NSString *)arg1 ;
-(void)setDefaultCategories:(NSArray *)arg1 ;
-(void)setDefaultTopics:(NSArray *)arg1 ;
-(BOOL)daemonShouldReceiveBackgroundResponses;
-(void)setRestricted:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)bundleURL;
-(NSString *)displayName;
-(BOOL)isRestricted;
-(NSURL *)dataContainerURL;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

