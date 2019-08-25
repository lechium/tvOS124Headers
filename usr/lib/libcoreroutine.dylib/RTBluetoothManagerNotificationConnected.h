/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString;

@interface RTBluetoothManagerNotificationConnected : RTNotification {

	NSString* _deviceName;
	NSString* _deviceAddress;

}

@property (nonatomic,readonly) NSString * deviceName;                 //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
-(NSString *)deviceName;
-(id)initWithDeviceName:(id)arg1 andDeviceAddress:(id)arg2 ;
-(NSString *)deviceAddress;
@end

