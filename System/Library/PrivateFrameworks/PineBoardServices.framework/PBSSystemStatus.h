/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBSSystemStatus : NSObject
+(unsigned long long)systemWakeState;
+(BOOL)isVideoPlaying;
+(BOOL)isMusicPlaying;
+(BOOL)isInternetAvailable;
+(BOOL)isSystemUsingEthernet;
+(BOOL)isSystemUsingWiFi;
+(BOOL)isAppleRemoteConnected;
+(BOOL)isProximityPairingInProgress;
+(BOOL)isBluetoothKeyboardConnected;
+(unsigned long long)systemDisplayState;
+(unsigned long long)lateNightMode;
+(unsigned long long)systemThermalState;
+(BOOL)isSystemUpdating;
+(void)_setVideoPlaying:(BOOL)arg1 musicPlaying:(BOOL)arg2 ;
+(void)_setThermalState:(unsigned long long)arg1 ;
+(void)_setUpdatingOS:(BOOL)arg1 ;
+(void)load;
+(void)initialize;
-(id)init;
@end

