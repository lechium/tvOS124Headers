/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol BTDevicePickerDelegate;
@class UIAlertController, UIWindow, UITableView, NSMutableArray, NSString, NSPredicate, PSSpecifierStub, BluetoothManager;

@interface BTDevicePicker : NSObject <UITableViewDelegate, UITableViewDataSource> {

	UIAlertController* _alertView;
	UIWindow* _alertWindow;
	UITableView* _tableView;
	NSMutableArray* _deviceList;
	NSString* _title;
	unsigned _service;
	NSPredicate* _predicate;
	BOOL _showingAlert;
	BOOL _checkingPaired;
	PSSpecifierStub* _connectingSpec;
	BluetoothManager* _btManager;
	Class _btSSPRequestClass;
	Class _btAlertClass;
	id _btSSPAlert;
	id _btAlert;
	id<BTDevicePickerDelegate> _delegate;

}

@property (assign,nonatomic) id<BTDevicePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)powerChanged:(id)arg1 ;
-(void)deviceDiscoveryStoppedHandler:(id)arg1 ;
-(void)deviceFoundHandler:(id)arg1 ;
-(void)deviceLostHandler:(id)arg1 ;
-(void)deviceNameChangedHandler:(id)arg1 ;
-(void)authenticationRequestHandler:(id)arg1 ;
-(void)devicePairedHandler:(id)arg1 ;
-(void)deviceConnectionCompleteHandler:(id)arg1 ;
-(void)checkAttachTimeout;
-(void)showInternal;
-(void)cancelDevicePicker;
-(void)createAlertWindow;
-(void)cleanupPairing;
-(void)_btSSPConfirmationHandler:(id)arg1 ;
-(void)_btSSPNumericComparisonHandler:(id)arg1 ;
-(void)_btSSPPasskeyDisplayHandler:(id)arg1 ;
-(id)initWithTitle:(id)arg1 service:(unsigned)arg2 discoveryNameFilter:(id)arg3 ;
-(void)alertSheetDismissed:(id)arg1 ;
-(void)startScanning;
-(void)dealloc;
-(void)setDelegate:(id<BTDevicePickerDelegate>)arg1 ;
-(id<BTDevicePickerDelegate>)delegate;
-(void)show;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillResignActive:(id)arg1 ;
@end

