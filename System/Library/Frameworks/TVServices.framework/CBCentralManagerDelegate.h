/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBCentralManagerDelegate <NSObject>
@optional
-(void)centralManager:(id)arg1 willRestoreState:(id)arg2;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;

@required
-(void)centralManagerDidUpdateState:(id)arg1;

@end

