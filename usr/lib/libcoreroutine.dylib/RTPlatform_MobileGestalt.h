/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPlatform.h>

@class NSUserDefaults;

@interface RTPlatform_MobileGestalt : RTPlatform {

	NSUserDefaults* _userDefaults;

}
-(BOOL)internalInstall;
-(id)deviceClass;
-(id)productType;
-(BOOL)supportsCoreRoutineCapability;
-(BOOL)supportsRoutes;
-(BOOL)supportsMagicalMomentsCapability;
-(BOOL)supportsMicroLocations;
-(id)userAssignedDeviceName;
-(id)systemModel;
-(BOOL)iPhonePlatform;
-(BOOL)watchPlatform;
-(BOOL)macOSPlatform;
-(BOOL)simulatorPlatform;
-(BOOL)lowEndHardware;
-(BOOL)supportsMultiUser;
-(BOOL)iPhoneDevice;
-(id)init;
-(id)systemVersion;
-(id)initWithUserDefaults:(id)arg1 ;
@end

