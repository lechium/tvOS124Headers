/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFEraseDeviceRequest : DMFTaskRequest {

	BOOL _hideProximitySetupPane;
	unsigned long long _eraseDeviceType;
	unsigned long long _dataResetOptions;
	NSString* _pin;

}

@property (assign,nonatomic) unsigned long long eraseDeviceType;               //@synthesize eraseDeviceType=_eraseDeviceType - In the implementation block
@property (assign,nonatomic) unsigned long long dataResetOptions;              //@synthesize dataResetOptions=_dataResetOptions - In the implementation block
@property (nonatomic,copy) NSString * pin;                                     //@synthesize pin=_pin - In the implementation block
@property (assign,nonatomic) BOOL hideProximitySetupPane;                      //@synthesize hideProximitySetupPane=_hideProximitySetupPane - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(void)setPin:(NSString *)arg1 ;
-(NSString *)pin;
-(unsigned long long)eraseDeviceType;
-(unsigned long long)dataResetOptions;
-(BOOL)hideProximitySetupPane;
-(void)setEraseDeviceType:(unsigned long long)arg1 ;
-(void)setDataResetOptions:(unsigned long long)arg1 ;
-(void)setHideProximitySetupPane:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
