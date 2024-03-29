/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSRequestDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, NSObject, SSKeyValueStore, SSURLBag, SSPromise;

@interface SSDevice : NSObject <SSRequestDelegate> {

	NSString* _appleTVProductVersion;
	NSSet* _automaticDownloadKinds;
	id _cloudMediaLibraryIdentifier;
	long long _deviceType;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSKeyValueStore* _keyValueStore;
	NSString* _legacyUserAgent;
	NSString* _localStoreFrontIdentifier;
	id _mediaLibraryIdentifier;
	NSString* _phoneNumber;
	NSString* _productType;
	NSString* _productVersion;
	id _softwareLibraryIdentifier;
	NSString* _udid;
	SSURLBag* _urlBag;
	NSString* _userAgent;
	NSString* _clientName;
	double _batteryLevel;
	unsigned _batteryMonitorNotification;
	IONotificationPortRef _batteryMonitorPort;
	BOOL _pluggedIn;
	int _pluggedInToken;
	long long _powerMonitorCount;

}

@property (readonly) NSString * compatibleProductType; 
@property (readonly) long long deviceType; 
@property (readonly) unsigned deviceTypeIdentifier; 
@property (readonly) NSString * phoneNumber; 
@property (readonly) NSString * productType; 
@property (readonly) NSString * productVersion; 
@property (readonly) float screenScale; 
@property (readonly) NSString * serialNumber; 
@property (nonatomic,readonly) SSPromise * storeFrontIdentifierPromise; 
@property (readonly) NSString * thinnedApplicationVariantIdentifier; 
@property (readonly) NSString * uniqueDeviceIdentifier; 
@property (getter=isPluggedIn,readonly) BOOL pluggedIn; 
@property (readonly) double batteryLevel; 
@property (copy) NSString * cloudMediaLibraryIdentifier; 
@property (copy) NSString * mediaLibraryIdentifier; 
@property (copy) NSString * softwareLibraryIdentifier; 
@property (readonly) NSString * clientVersion; 
@property (readonly) NSString * clientName; 
@property (readonly) NSString * storeFrontIdentifier; 
@property (readonly) NSString * legacyUserAgent; 
@property (readonly) NSString * userAgent; 
@property (readonly) NSSet * automaticDownloadKinds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deviceIsInternalBuild;
+(BOOL)deviceIsAudioAccessory;
+(BOOL)deviceIsAppleWatch;
+(BOOL)deviceIsiPhone;
+(id)copyCachedAvailableItemKinds;
+(BOOL)promptNeedsDisplay:(id)arg1 ;
+(BOOL)setCachedAvailableItemKinds:(id)arg1 ;
+(void)setLastPromptAttemptDate:(id)arg1 forPromptWithIdentifier:(id)arg2 ;
+(void)setPromptWithIdentifier:(id)arg1 needsDisplay:(BOOL)arg2 ;
+(BOOL)deviceIsAppleTV;
+(BOOL)deviceIsiPad;
+(BOOL)deviceIsiPod;
+(BOOL)deviceIsSeedBuild;
+(id)currentDevice;
-(long long)_deviceType;
-(NSString *)phoneNumber;
-(void)setStoreFrontIdentifier:(id)arg1 forRequest:(id)arg2 response:(id)arg3 account:(id)arg4 ;
-(NSString *)cloudMediaLibraryIdentifier;
-(NSString *)mediaLibraryIdentifier;
-(NSString *)softwareLibraryIdentifier;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(NSSet *)automaticDownloadKinds;
-(id)_userAgentClientNameForInfoPlist:(id)arg1 ;
-(id)_userAgentClientVersionForInfoPlist:(id)arg1 clientName:(id)arg2 ;
-(void)_cacheKeyValueStoreValues;
-(BOOL)_getDeviceType:(unsigned*)arg1 error:(id*)arg2 ;
-(SSPromise *)storeFrontIdentifierPromise;
-(id)_newLegacyUserAgent:(BOOL*)arg1 ;
-(id)userAgentWithBundleRef:(CFBundleRef)arg1 isCachable:(BOOL*)arg2 ;
-(id)_newModernUserAgentWithClientName:(id)arg1 version:(id)arg2 isCachable:(BOOL*)arg3 ;
-(id)_copyCarrierBundleEligibilityWithStatus:(id)arg1 ;
-(void)_updateAutomaticDownloadKinds:(id)arg1 withValue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_copyProductType;
-(long long)_deviceTypeForProductType:(id)arg1 ;
-(id)_productVersion;
-(void)_updateBatteryLevelFromService:(unsigned)arg1 ;
-(void)_reloadPluggedInState;
-(BOOL)_is720pCapable;
-(BOOL)_is1080pCapable;
-(id)_userAgentClientNameForBundleID:(id)arg1 ;
-(id)userAgentWithClientName:(id)arg1 version:(id)arg2 ;
-(void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2 ;
-(long long)_deviceTypeForUnknownIPad:(id)arg1 ;
-(long long)_deviceTypeForUnknownIPhone:(id)arg1 ;
-(long long)_deviceTypeForUnknownIPod:(id)arg1 ;
-(long long)_deviceTypeForUnknownAppleTV:(id)arg1 ;
-(int)_screenClass;
-(int)_deviceClass;
-(id)_diskCapacityString;
-(id)_fairPlayDeviceTypeString;
-(id)_appleTVProductVersion;
-(id)_userAgentClientNameForAppleTVBundleID:(id)arg1 ;
-(void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2 ;
-(id)copyStoreFrontRequestHeaders;
-(unsigned)deviceTypeIdentifier;
-(void)getAvailableItemKindsWithBlock:(/*^block*/id)arg1 ;
-(void)getCellularNetworkingAllowedWithBlock:(/*^block*/id)arg1 ;
-(void)loadStoreFrontWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sdk_loadStorefrontCountryCode:(/*^block*/id)arg1 ;
-(void)sdk_loadStoreFrontIdentifier:(/*^block*/id)arg1 ;
-(void)setCellularNetworkingAllowed:(BOOL)arg1 ;
-(void)setStoreFrontWithResponseHeaders:(id)arg1 ;
-(void)showPromptWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)legacyUserAgent;
-(id)carrierBundleStatusForService:(long long)arg1 ;
-(void)getCarrierBundleStatusForService:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)getMachineIdentifier:(id*)arg1 otp:(id*)arg2 forAccountIdentifier:(id)arg3 ;
-(BOOL)isPluggedIn;
-(void)enableAllAutomaticDownloadKindsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)minusAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setCloudMediaLibraryIdentifier:(NSString *)arg1 ;
-(void)setMediaLibraryIdentifier:(NSString *)arg1 ;
-(void)setSoftwareLibraryIdentifier:(NSString *)arg1 ;
-(void)startPowerMonitoring;
-(void)stopPowerMonitoring;
-(void)synchronizeAutomaticDownloadKinds;
-(void)unionAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)userAgentWithBundleIdentifier:(id)arg1 version:(id)arg2 ;
-(id)_copyKeyValueStoreValueForDomain:(id)arg1 key:(id)arg2 ;
-(void)_invalidateAutomaticDownloadKinds;
-(void)_invalidatePhoneNumber;
-(void)_invalidateSoftwareCUID;
-(void)_postStoreFrontDidChangeNotification;
-(BOOL)isStoreFrontIdentifierTransient;
-(void)reloadStoreFrontIdentifier;
-(void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2 isTransient:(BOOL)arg3 ;
-(void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2 isTransient:(BOOL)arg3 ;
-(void)setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2 ;
-(id)synchedStoreFrontIdentifier;
-(NSString *)clientVersion;
-(NSString *)userAgent;
-(NSString *)storeFrontIdentifier;
-(BOOL)supportsDeviceCapability:(long long)arg1 ;
-(NSString *)productType;
-(NSString *)uniqueDeviceIdentifier;
-(NSString *)productVersion;
-(long long)deviceType;
-(NSString *)serialNumber;
-(NSString *)clientName;
-(id)init;
-(void)dealloc;
-(double)batteryLevel;
-(float)screenScale;
-(NSString *)thinnedApplicationVariantIdentifier;
-(NSString *)compatibleProductType;
@end

