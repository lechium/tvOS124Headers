/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocation, CLLocationManager, NSMutableArray, NSString;

@interface CMKLocationController : NSObject <CLLocationManagerDelegate> {

	BOOL _enabled;
	BOOL _headingEnabled;
	BOOL __monitoringLocation;
	CLLocation* _currentLocation;
	CLLocationManager* __locationManager;
	NSMutableArray* __assetsWaitingForLocation;

}

@property (getter=_isMonitoringLocation,nonatomic,readonly) BOOL _monitoringLocation;              //@synthesize _monitoringLocation=__monitoringLocation - In the implementation block
@property (nonatomic,readonly) CLLocationManager * _locationManager;                               //@synthesize _locationManager=__locationManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _assetsWaitingForLocation;                         //@synthesize _assetsWaitingForLocation=__assetsWaitingForLocation - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHeadingEnabled,nonatomic) BOOL headingEnabled;                          //@synthesize headingEnabled=_headingEnabled - In the implementation block
@property (nonatomic,readonly) CLLocation * currentLocation;                                       //@synthesize currentLocation=_currentLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedGPSTimestampFormatter;
+(id)_sharedGPSDatestampFormatter;
+(BOOL)usesEffectiveBundleIdentifier;
+(void)setUsesEffectiveBundleIdentifier:(BOOL)arg1 ;
+(id)sharedInstance;
-(CLLocation *)currentLocation;
-(void)setHeadingEnabled:(BOOL)arg1 ;
-(void)_stopMonitoringLocationUpdates;
-(void)_updateLocationMonitoring;
-(BOOL)_isMonitoringLocation;
-(void)_authorizeOrStartLocationManager;
-(BOOL)isHeadingEnabled;
-(void)_startMonitoringLocationUpdates;
-(NSMutableArray *)_assetsWaitingForLocation;
-(BOOL)_updateLocationMetadataForAsset:(id)arg1 ;
-(id)_currentLocationMetadataWithDeviceOrientation:(long long)arg1 forDevice:(long long)arg2 ;
-(void)_updateAssetsWaitingOnLocation;
-(BOOL)addLocationToMetadata:(id)arg1 withOrientation:(long long)arg2 device:(long long)arg3 ;
-(void)addLocationToAssetWhenAvailable:(id)arg1 ;
-(CLLocationManager *)_locationManager;
-(void)_applicationStateChanged:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
@end

