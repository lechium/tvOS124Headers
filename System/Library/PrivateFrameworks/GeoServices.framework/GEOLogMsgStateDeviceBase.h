/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying> {

	int _deviceBatteryState;
	int _deviceInterfaceOrientation;
	BOOL _deviceInVehicle;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasDeviceInterfaceOrientation; 
@property (assign,nonatomic) int deviceInterfaceOrientation;                  //@synthesize deviceInterfaceOrientation=_deviceInterfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceBatteryState; 
@property (assign,nonatomic) int deviceBatteryState;                          //@synthesize deviceBatteryState=_deviceBatteryState - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceInVehicle; 
@property (assign,nonatomic) BOOL deviceInVehicle;                            //@synthesize deviceInVehicle=_deviceInVehicle - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDeviceInterfaceOrientation;
-(BOOL)hasDeviceBatteryState;
-(BOOL)hasDeviceInVehicle;
-(int)deviceInterfaceOrientation;
-(void)setDeviceInterfaceOrientation:(int)arg1 ;
-(int)deviceBatteryState;
-(void)setDeviceBatteryState:(int)arg1 ;
-(BOOL)deviceInVehicle;
-(void)setDeviceInVehicle:(BOOL)arg1 ;
-(void)setHasDeviceInterfaceOrientation:(BOOL)arg1 ;
-(id)deviceInterfaceOrientationAsString:(int)arg1 ;
-(int)StringAsDeviceInterfaceOrientation:(id)arg1 ;
-(void)setHasDeviceBatteryState:(BOOL)arg1 ;
-(id)deviceBatteryStateAsString:(int)arg1 ;
-(int)StringAsDeviceBatteryState:(id)arg1 ;
-(void)setHasDeviceInVehicle:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

