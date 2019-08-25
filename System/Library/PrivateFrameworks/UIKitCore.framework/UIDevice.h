/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSUUID;

@interface UIDevice : NSObject {

	long long _numDeviceOrientationObservers;
	float _batteryLevel;
	struct {
		unsigned batteryMonitoringEnabled : 1;
		unsigned proximityMonitoringEnabled : 1;
		unsigned expectsFaceContactInLandscape : 1;
		unsigned orientation : 3;
		unsigned batteryState : 2;
		unsigned proximityState : 1;
		unsigned hasTouchPadOverride : 1;
		unsigned hasTouchPad : 1;
	}  _deviceFlags;

}

@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) BOOL _supportsPencil; 
@property (assign,setter=_setBacklightLevel:,nonatomic) float _backlightLevel; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * localizedModel; 
@property (nonatomic,readonly) NSString * systemName; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,readonly) NSUUID * identifierForVendor; 
@property (getter=isGeneratingDeviceOrientationNotifications,nonatomic,readonly) BOOL generatesDeviceOrientationNotifications; 
@property (assign,getter=isBatteryMonitoringEnabled,nonatomic) BOOL batteryMonitoringEnabled; 
@property (nonatomic,readonly) long long batteryState; 
@property (nonatomic,readonly) float batteryLevel; 
@property (assign,getter=isProximityMonitoringEnabled,nonatomic) BOOL proximityMonitoringEnabled; 
@property (nonatomic,readonly) BOOL proximityState; 
@property (getter=isMultitaskingSupported,nonatomic,readonly) BOOL multitaskingSupported; 
@property (nonatomic,readonly) long long userInterfaceIdiom; 
+(BOOL)currentIsIPad;
+(id)platform;
+(id)currentDevice;
+(BOOL)_hasHomeButton;
+(BOOL)_isWatchCompanion;
+(BOOL)_isWatch;
+(long long)currentDeviceOrientationAllowingAmbiguous:(BOOL)arg1 ;
+(id)modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
+(BOOL)_isLowEnd;
-(BOOL)enoughMemoryForRendering12MPPhoto;
-(long long)memorySize;
-(BOOL)screenCanShow2160P;
-(BOOL)enoughMemoryFor2160P;
-(int)numberOfCPU;
-(BOOL)hasPlentyOfMemory;
-(BOOL)hasMoreThan1GBOfMemory;
-(BOOL)enoughPowerFor2160P;
-(id)orientationString;
-(BOOL)isLargePhone;
-(BOOL)isWidePhone;
-(long long)freeMemory;
-(BOOL)enoughPowerForLargerPhotoThumbnails;
-(BOOL)sufficientOomphForZoomedRenderScale;
-(BOOL)canEncode2160P;
-(BOOL)osVersionAtLeast:(id)arg1 ;
-(BOOL)_isDevice2;
-(BOOL)hasRemoteControl;
-(BOOL)supportsMediaSelection;
-(id)userDeviceName;
-(NSString *)name;
-(long long)userInterfaceIdiom;
-(id)_tapticEngine;
-(long long)_keyboardGraphicsQuality;
-(long long)_graphicsQuality;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isSystemSoundEnabled;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(long long)orientation;
-(BOOL)_supportsForceTouch;
-(void)_registerForSystemSounds:(id)arg1 ;
-(void)_unregisterForSystemSounds:(id)arg1 ;
-(BOOL)_supportsDeepColor;
-(void)_enableDeviceOrientationEvents:(BOOL)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)_playSystemSound:(unsigned)arg1 ;
-(void)_updateSystemSoundActiveStatus:(id)arg1 ;
-(void)_setActiveUserInterfaceIdiom:(long long)arg1 ;
-(NSString *)model;
-(NSString *)localizedModel;
-(NSString *)systemName;
-(NSString *)systemVersion;
-(NSString *)buildVersion;
-(NSUUID *)identifierForVendor;
-(void)beginGeneratingDeviceOrientationNotifications;
-(void)endGeneratingDeviceOrientationNotifications;
-(BOOL)isGeneratingDeviceOrientationNotifications;
-(BOOL)isBatteryMonitoringEnabled;
-(void)setBatteryMonitoringEnabled:(BOOL)arg1 ;
-(long long)batteryState;
-(float)batteryLevel;
-(BOOL)isProximityMonitoringEnabled;
-(void)setProximityMonitoringEnabled:(BOOL)arg1 ;
-(void)_setExpectsFaceContactInLandscape:(BOOL)arg1 ;
-(BOOL)proximityState;
-(BOOL)isMultitaskingSupported;
-(void)playInputClick;
-(void)_setBacklightLevel:(float)arg1 ;
-(float)_backlightLevel;
-(float)_softwareDimmingAlpha;
-(void)_playInputSelectSound;
-(void)_playInputDeleteSound;
-(BOOL)_supportsPencil;
-(void)_setProximityState:(BOOL)arg1 ;
-(void)_setBatteryState:(long long)arg1 ;
-(void)_setBatteryLevel:(float)arg1 ;
-(BOOL)_hasTouchPad;
-(void)_setHasTouchPad:(BOOL)arg1 ;
-(void)_setGraphicsQualityOverride:(long long)arg1 ;
-(void)_clearGraphicsQualityOverride;
-(BOOL)_hasGraphicsQualityOverride;
-(long long)_predictionGraphicsQuality;
-(long long)_nativeScreenGamut;
@end

