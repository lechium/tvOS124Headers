/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVServices/TVServices-Structs.h>
@interface TVSDevice : NSObject
+(BOOL)runningAnInternalBuild;
+(id)uniqueID;
+(id)systemReleaseType;
+(id)modelNumber;
+(id)getMobileGestaltString:(CFStringRef)arg1 ;
+(id)deviceName;
+(id)systemBuildVersion;
+(id)productType;
+(id)serialNumber;
+(id)regionInfo;
+(id)getMobileGestaltData:(CFStringRef)arg1 ;
+(id)marketingPartNumber;
+(id)HDMIFirmwareVersion;
+(BOOL)getMobileGestaltBoolean:(CFStringRef)arg1 ;
+(unsigned long long)_totalDiskCapacity;
+(unsigned long long)getMobileGestaltUnsignedLongLong:(CFStringRef)arg1 ;
+(id)inverseUniqueID;
+(id)bonjourID;
+(BOOL)supportsBluetoothLECapablity;
+(BOOL)supportsApplicationStorage;
+(BOOL)shouldEnforceBluetoothBandwidthLimits;
+(BOOL)runningACustomerBuild;
+(unsigned long long)applicationCapacity;
+(unsigned long long)deviceCapacity;
+(BOOL)isFactoryActivated;
+(id)valueForNVRAMVariable:(id)arg1 ;
+(BOOL)isActivated;
+(BOOL)supports1080p;
+(id)userDeviceName;
+(BOOL)supportsTouchRemote;
+(id)configurationInfo;
+(id)systemVersion;
+(BOOL)supportsUHDAndHDR;
+(id)uniqueIDData;
@end

