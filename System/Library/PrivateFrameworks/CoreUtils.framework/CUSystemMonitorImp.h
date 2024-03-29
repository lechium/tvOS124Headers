/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSData, CUBluetoothClient, NSArray, CUSystemMonitor, CUNetInterfaceMonitor, NSString, CUWiFiManager;

@interface CUSystemMonitorImp : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _monitors;
	SCD_Struct_CU3 _bluetoothAddress48;
	NSData* _bluetoothAddressData;
	CUBluetoothClient* _bluetoothClient;
	BOOL _familyFailed;
	NSArray* _familyMembers;
	BOOL _familyObserving;
	CUSystemMonitor* _familyPrimaryIPMonitor;
	int _familyUpdatedToken;
	BOOL _manateeAvailable;
	BOOL _manateeObserving;
	CUNetInterfaceMonitor* _netInterfaceMonitor;
	unsigned _netFlags;
	SCD_Union_CU21 _primaryIPv4Addr;
	SCD_Union_CU21 _primaryIPv6Addr;
	NSString* _primaryNetworkSignature;
	int _powerSourceToken;
	BOOL _powerUnlimited;
	BOOL _primaryAppleIDActive;
	BOOL _primaryAppleIDIsHSA2;
	int _primaryAppleIDNotifyToken;
	BOOL _primaryAppleIDObserving;
	SCD_Struct_CU3 _rotatingIdentifier48;
	NSData* _rotatingIdentifierData;
	NSObject*<OS_dispatch_source> _rotatingIdentifierTimer;
	BOOL _screenLocked;
	int _screenLockedToken;
	BOOL _screenOn;
	int _screenBlankedToken;
	int _screenSaverToken;
	BOOL _screenSaverActive;
	int _systemLockState;
	int _systemLockStateToken;
	BOOL _firstUnlocked;
	int _firstUnlockToken;
	CUWiFiManager* _wifiManager;
	unsigned _wifiFlags;
	int _wifiState;

}
-(void)removeMonitor:(id)arg1 ;
-(void)addMonitor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_hasMonitorPassingTest:(/*^block*/id)arg1 ;
-(void)_invokeBlock:(/*^block*/id)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)updateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_bluetoothAddressMonitorStart;
-(void)_bluetoothAddressMonitorStop;
-(void)_familyMonitorStart;
-(void)_familyMonitorStop;
-(void)_familyGetMembers:(BOOL)arg1 ;
-(void)_familyNetworkChanged;
-(void)_familyUpdated:(id)arg1 ;
-(void)_manateeMonitorStart;
-(void)_manateeMonitorStop;
-(void)_manateeChanged:(id)arg1 ;
-(void)_meDeviceMonitorStart;
-(void)_meDeviceMonitorStop;
-(void)_netInterfaceMonitorStart;
-(void)_netInterfaceMonitorStop;
-(void)_powerUnlimitedMonitorStart;
-(void)_powerUnlimitedMonitorStop;
-(void)_primaryAppleIDMonitorStart;
-(void)_primaryAppleIDMonitorStop;
-(id)_primaryAppleIDAccount;
-(void)_primaryAppleIDChanged:(id)arg1 ;
-(void)_rotatingIdentifierMonitorStart;
-(void)_rotatingIdentifierMonitorStop;
-(void)_rotatingIdentifierTimerFired;
-(void)_screenLockedMonitorStart;
-(void)_screenLockedMonitorStop;
-(void)_screenLockedChanged;
-(void)_screenOnMonitorStart;
-(void)_screenOnMonitorStop;
-(void)_screenSaverMonitorStart;
-(void)_screenSaverMonitorStop;
-(void)_systemLockStateMonitorStart;
-(void)_systemLockStateMonitorStop;
-(void)_systemLockStateUpdate:(BOOL)arg1 ;
-(void)_firstUnlockMonitorStart;
-(void)_firstUnlockMonitorStop;
-(void)_firstUnlockMonitorCheck:(BOOL)arg1 ;
-(void)_wifiMonitorStart;
-(void)_wifiMonitorStop;
-(void)_wifiMonitorStateChanged:(BOOL)arg1 ;
-(id)init;
-(void)_update;
-(void)_screenChanged:(BOOL)arg1 ;
@end

