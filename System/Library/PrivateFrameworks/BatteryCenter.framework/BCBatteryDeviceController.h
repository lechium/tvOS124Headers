/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BatteryCenter/BatteryCenter-Structs.h>
@class NSMutableDictionary, NSArray, NSMapTable, NSObject, NSString;

@interface BCBatteryDeviceController : NSObject {

	NSMutableDictionary* _devicesByIdentifier;
	NSArray* _sortedDevices;
	CFRunLoopSourceRef _powerSourcesChangedRunLoopSource;
	CFRunLoopSourceRef _accessoriesChangedRunLoopSource;
	CFRunLoopSourceRef _accessoriesLimitedPowerRunLoopSource;
	NSMapTable* _handlersByIdentifier;
	BOOL _batterySaverModeActive;
	BOOL _chargeChangeHandlingDisabled;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * connectedDevicesDidChangeNotificationName; 
@property (nonatomic,__weak,readonly) NSArray * connectedDevices; 
+(id)_internalBatteryDeviceGlyph;
+(id)_glyphForBatteryDeviceWithTransport:(long long)arg1 accessoryCategory:(unsigned long long)arg2 vendor:(long long)arg3 productIdentifier:(long long)arg4 parts:(unsigned long long)arg5 ;
+(id)_glyphForBatteryDevice:(id)arg1 ;
+(id)sharedInstance;
-(void)_postDidChangeNotification;
-(void)_queue_handleBatterySaverModeChanged:(int)arg1 ;
-(void)_handleBatterySaverModeChanged:(int)arg1 ;
-(void)_handlePSChange;
-(void)_reenableChargeChangeHandling;
-(id)_queue_connectedDevices;
-(void)_queue_addDeviceChangeHandler:(/*^block*/id)arg1 withIdentifier:(id)arg2 ;
-(void)_queue_removeDeviceChangeHandlerWithIdentifier:(id)arg1 ;
-(void)_queue_invalidateConnectedDevices;
-(void)_queue_handlePSChange;
-(void)_queue_performUpdateWithPowerSourcesBlob:(void*)arg1 andPowerSourcesList:(CFArrayRef)arg2 ;
-(BOOL)_isDevicePartOfPair:(id)arg1 ;
-(BOOL)_shouldConsiderDeviceWithPowerSourceDescription:(id)arg1 ;
-(id)_identifierFromPowerSourceDescription:(id)arg1 ;
-(long long)_transportTypeFromPowerSourceTransportTypeString:(id)arg1 ;
-(long long)_vendorFromPowerSourceDescriptionVendorIdentifier:(id)arg1 transportType:(long long)arg2 ;
-(unsigned long long)_partFromPowerSourcePartIdentifier:(id)arg1 ;
-(id)_queue_batteryDeviceWithIdentifier:(id)arg1 ;
-(unsigned long long)_accessoryCategoryFromPowerSourceAccessoryCategory:(id)arg1 partType:(unsigned long long)arg2 transportType:(long long)arg3 vendor:(long long)arg4 productIdentifier:(long long)arg5 ;
-(void)_queue_setBatteryDevice:(id)arg1 forIdentifier:(id)arg2 ;
-(long long)_powerSourceStateFromPowerSourceStateString:(id)arg1 ;
-(id)_nameForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 name:(id)arg3 partName:(id)arg4 ;
-(int)_displayChargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(BOOL)arg3 ;
-(long long)_lowBatteryLevelForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 transportType:(long long)arg3 ;
-(void)_queue_callHandlersForDevice:(id)arg1 ;
-(BOOL)_shouldCoalesceDevices:(id)arg1 minimumPercentCharge:(long long*)arg2 ;
-(id)_deviceByCoalescingDevice:(id)arg1 ;
-(void)_queue_removeBatteryDevicesWithIdentifiers:(id)arg1 ;
-(NSString *)connectedDevicesDidChangeNotificationName;
-(void)addDeviceChangeHandler:(/*^block*/id)arg1 withIdentifier:(id)arg2 ;
-(void)removeDeviceChangeHandlerWithIdentifier:(id)arg1 ;
-(CGSize)_largestBatteryDeviceGlyphSize;
-(void)_incrementPercentChargeForConnectedDevices:(BOOL)arg1 ;
-(void)_incrementNumberOfConnectedDevices:(BOOL)arg1 ;
-(void)connectedDevicesWithResult:(/*^block*/id)arg1 ;
-(NSArray *)connectedDevices;
-(id)init;
-(void)dealloc;
@end

