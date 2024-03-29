/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSDevice.h>
@class NSString;


@protocol IKJSDevice <JSExport>
@property (nonatomic,readonly) NSString * vendorIdentifier; 
@property (nonatomic,readonly) NSString * advertisingIdentifier; 
@property (nonatomic,readonly) BOOL isAdvertisingTrackingEnabled; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) BOOL isNetworkReachable; 
@required
-(BOOL)isNetworkReachable;
-(NSString *)appIdentifier;
-(NSString *)advertisingIdentifier;
-(BOOL)isAdvertisingTrackingEnabled;
-(NSString *)productType;
-(NSString *)appVersion;
-(NSString *)vendorIdentifier;
-(NSString *)model;
-(NSString *)systemVersion;

@end

#import <libobjc.A.dylib/_IKJSDeviceProxy.h>

@protocol IKAppDeviceConfig;
@class NSString;

@interface IKJSDevice : IKJSObject <NSObject, IKJSDevice, _IKJSDeviceProxy> {

	id _networkPropertiesChangedToken;
	id<IKAppDeviceConfig> _deviceConfig;

}

@property (assign,nonatomic,__weak) id<IKAppDeviceConfig> deviceConfig;              //@synthesize deviceConfig=_deviceConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * vendorIdentifier; 
@property (nonatomic,readonly) NSString * advertisingIdentifier; 
@property (nonatomic,readonly) BOOL isAdvertisingTrackingEnabled; 
@property (nonatomic,readonly) NSString * appVersion; 
@property (nonatomic,readonly) NSString * appIdentifier; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) BOOL isNetworkReachable; 
+(id)getMobileGestaltString:(CFStringRef)arg1 ;
-(BOOL)runningAnInternalBuild;
-(id)networkType;
-(BOOL)isNetworkReachable;
-(NSString *)appIdentifier;
-(id)pixelRatio;
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(id<IKAppDeviceConfig>)deviceConfig;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
-(NSString *)advertisingIdentifier;
-(BOOL)isAdvertisingTrackingEnabled;
-(id)capacity:(id)arg1 ;
-(BOOL)isInAirplaneMode;
-(double)lastNetworkChangedTime;
-(BOOL)isInRetailDemoMode;
-(id)osBuildNumber;
-(id)asPrivateIKJSDevice;
-(id)vendorID;
-(NSString *)productType;
-(NSString *)appVersion;
-(NSString *)vendorIdentifier;
-(void)dealloc;
-(NSString *)model;
-(NSString *)systemVersion;
@end

