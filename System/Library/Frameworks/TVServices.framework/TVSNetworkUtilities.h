/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVServices/TVServices-Structs.h>
@interface TVSNetworkUtilities : NSObject
+(id)proxies;
+(void)setupNetworkMonitoring;
+(BOOL)internetAvailable;
+(id)_networkServices;
+(void)_setupDynamicStoreInterfaceStateNotifications;
+(id)_safeNameForInterface:(SCNetworkInterfaceRef)arg1 ;
+(SCDynamicStoreRef)_dynamicStoreSingleton;
+(id)_mergedStateForService:(CFStringRef)arg1 ;
+(void)_setupDynamicStoreSingleton;
+(void)_updateDynamicStoreObservers:(BOOL)arg1 ;
+(void)_setupReachabilityCallback;
+(void)_setNeedsUpdateNetworkState;
+(void)_updatePhysicalNetworkState;
+(void)_updateDynamicStoreAvailabilityWithDelay:(double)arg1 ;
+(void)_handleSysConfigUpdate;
+(void)_handleNetworkAvailabilityUpdate;
+(BOOL)physicalNetworkAvailable;
@end

