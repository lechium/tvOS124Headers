/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WatchListKit-Structs.h>
#import <libobjc.A.dylib/WLKInstallable.h>

@class NSString, NSArray, WLKArtworkVariantListing, NSDictionary, NSURL;

@interface WLKChannelDetails : NSObject <WLKInstallable> {

	BOOL _subscribed;
	BOOL _itunes;
	BOOL _firstParty;
	BOOL _watchListEnabled;
	BOOL _consented;
	BOOL _apSubscription;
	BOOL _shouldTrackPlayActivity;
	BOOL _appInstalled;
	BOOL _requiresAccountLevelConsent;
	BOOL _requiresSubscriptionForConsent;
	BOOL _shouldPromptForConsentOnSubscriptionChange;
	BOOL _shouldIncludeInConsent;
	NSString* _channelID;
	NSString* _name;
	NSArray* _appAdamIDs;
	NSArray* _appBundleIDs;
	NSString* _appName;
	WLKArtworkVariantListing* _images;
	NSDictionary* _rateLimit;
	unsigned long long _channelType;
	NSString* _minRequiredAppVersion;
	NSString* _appStoreURLString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * appBundleIDs; 
@property (nonatomic,copy,readonly) NSArray * appAdamIDs; 
@property (nonatomic,copy,readonly) NSURL * appStoreURL; 
@property (nonatomic,copy) NSString * appStoreURLString;                                     //@synthesize appStoreURLString=_appStoreURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                                    //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * appAdamIDs;                                    //@synthesize appAdamIDs=_appAdamIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * appBundleIDs;                                  //@synthesize appBundleIDs=_appBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * appName;                                      //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariantListing * images;                            //@synthesize images=_images - In the implementation block
@property (getter=isSubscribed,nonatomic,readonly) BOOL subscribed;                          //@synthesize subscribed=_subscribed - In the implementation block
@property (getter=isiTunes,nonatomic,readonly) BOOL itunes;                                  //@synthesize itunes=_itunes - In the implementation block
@property (getter=isFirstParty,nonatomic,readonly) BOOL firstParty;                          //@synthesize firstParty=_firstParty - In the implementation block
@property (getter=isWatchListEnabled,nonatomic,readonly) BOOL watchListEnabled;              //@synthesize watchListEnabled=_watchListEnabled - In the implementation block
@property (getter=isConsented,nonatomic,readonly) BOOL consented;                            //@synthesize consented=_consented - In the implementation block
@property (getter=isApSubscription,nonatomic,readonly) BOOL apSubscription;                  //@synthesize apSubscription=_apSubscription - In the implementation block
@property (nonatomic,readonly) NSDictionary * rateLimit;                                     //@synthesize rateLimit=_rateLimit - In the implementation block
@property (nonatomic,readonly) BOOL shouldTrackPlayActivity;                                 //@synthesize shouldTrackPlayActivity=_shouldTrackPlayActivity - In the implementation block
@property (nonatomic,readonly) unsigned long long channelType;                               //@synthesize channelType=_channelType - In the implementation block
@property (nonatomic,readonly) NSString * minRequiredAppVersion;                             //@synthesize minRequiredAppVersion=_minRequiredAppVersion - In the implementation block
@property (getter=isAppInstalled,nonatomic,readonly) BOOL appInstalled;                      //@synthesize appInstalled=_appInstalled - In the implementation block
@property (nonatomic,readonly) BOOL requiresAccountLevelConsent;                             //@synthesize requiresAccountLevelConsent=_requiresAccountLevelConsent - In the implementation block
@property (nonatomic,readonly) BOOL requiresSubscriptionForConsent;                          //@synthesize requiresSubscriptionForConsent=_requiresSubscriptionForConsent - In the implementation block
@property (nonatomic,readonly) BOOL shouldPromptForConsentOnSubscriptionChange;              //@synthesize shouldPromptForConsentOnSubscriptionChange=_shouldPromptForConsentOnSubscriptionChange - In the implementation block
@property (nonatomic,readonly) BOOL shouldIncludeInConsent;                                  //@synthesize shouldIncludeInConsent=_shouldIncludeInConsent - In the implementation block
-(BOOL)isSubscribed;
-(BOOL)isAppInstalled;
-(id)sui_channelName;
-(BOOL)isApSubscription;
-(NSDictionary *)rateLimit;
-(BOOL)shouldTrackPlayActivity;
-(unsigned long long)channelType;
-(BOOL)requiresAccountLevelConsent;
-(BOOL)requiresSubscriptionForConsent;
-(BOOL)shouldPromptForConsentOnSubscriptionChange;
-(BOOL)shouldIncludeInConsent;
-(NSString *)appStoreURLString;
-(void)setAppStoreURLString:(NSString *)arg1 ;
-(id)init;
-(NSString *)name;
-(NSString *)description;
-(WLKArtworkVariantListing *)images;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)appName;
-(NSArray *)appBundleIDs;
-(NSURL *)appStoreURL;
-(NSString *)channelID;
-(NSArray *)appAdamIDs;
-(BOOL)isWatchListEnabled;
-(BOOL)isFirstParty;
-(id)appIconURLForSize:(CGSize)arg1 ;
-(BOOL)isConsented;
-(BOOL)isiTunes;
-(NSString *)minRequiredAppVersion;
@end

