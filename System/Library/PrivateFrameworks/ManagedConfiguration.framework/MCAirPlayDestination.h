/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MCAirPlayDestination : NSObject {

	NSString* _deviceID;
	NSString* _deviceName;
	NSString* _password;

}

@property (nonatomic,retain) NSString * deviceID;                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * password;                //@synthesize password=_password - In the implementation block
-(NSString *)deviceName;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)password;
@end

