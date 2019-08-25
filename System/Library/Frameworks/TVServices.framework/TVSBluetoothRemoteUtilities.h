/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVServices/TVServices-Structs.h>
@interface TVSBluetoothRemoteUtilities : NSObject
+(void)startConnectionMonitoring;
+(void)startListeningForPowerSources;
+(void)stopConnectionMonitoring;
+(void)stopListeningForPowerSources;
+(void)setAdvertiseNonConnectable:(BOOL)arg1 ;
+(long long)batteryLevelForRemoteName:(id)arg1 ;
+(BOOL)chargingStateForRemoteName:(id)arg1 ;
+(BOOL)isAnyRemoteConnected;
+(id)powerSourceInfoForRemoteName:(id)arg1 ;
+(id)bluetoothRemoteWithName:(id)arg1 ;
+(id)existingBluetoothRemoteWithName:(id)arg1 ;
+(void)setConnectionKeepAliveTimeInSeconds:(double)arg1 ;
+(void)disconnectRemoteWithName:(id)arg1 ;
+(void)disconnectAllRemotesAndKeepPaired;
+(void)setPresenceDetectionEnabled:(BOOL)arg1 ;
+(void)resetToFactoryDefault;
+(BOOL)isB239ButtonEvent:(IOHIDEventRef)arg1 ;
@end
