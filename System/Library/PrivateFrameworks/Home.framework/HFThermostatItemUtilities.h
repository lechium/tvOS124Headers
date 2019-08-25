/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HFThermostatItemUtilities : NSObject
+(void)getDescription:(out id*)arg1 controlDescription:(out id*)arg2 optionalDescriptions:(out id*)arg3 forResponse:(id)arg4 primaryService:(id)arg5 temperatureFormatter:(id)arg6 ;
+(id)currentHeatingCoolingModeValueInResponse:(id)arg1 ;
+(id)targetHeatingCoolingModeValueInResponse:(id)arg1 ;
+(long long)_heatingCoolingValueForCurrentHeaterCoolerState:(long long)arg1 isActive:(BOOL)arg2 ;
+(long long)_heatingCoolingValueForTargetHeaterCoolerState:(long long)arg1 isActive:(BOOL)arg2 ;
+(id)targetTemperatureValueInResponse:(id)arg1 ;
@end
