/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/WPHomeKitDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HAPAccessoryServerBrowserWiProxBTLEDelegate;
@class NSObject, WPHomeKit, NSMutableSet, NSString;

@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject <WPHomeKitDelegate, HMFLogging> {

	BOOL _scanInBackground;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HAPAccessoryServerBrowserWiProxBTLEDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	WPHomeKit* _wpHomeKit;
	long long _currentScanState;
	NSMutableSet* _trackedIdentifiers;
	NSMutableSet* _trackedPeripherals;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) id<HAPAccessoryServerBrowserWiProxBTLEDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) WPHomeKit * wpHomeKit;                                              //@synthesize wpHomeKit=_wpHomeKit - In the implementation block
@property (assign,nonatomic) long long currentScanState;                                           //@synthesize currentScanState=_currentScanState - In the implementation block
@property (assign,nonatomic) BOOL scanInBackground;                                                //@synthesize scanInBackground=_scanInBackground - In the implementation block
@property (nonatomic,readonly) NSMutableSet * trackedIdentifiers;                                  //@synthesize trackedIdentifiers=_trackedIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * trackedPeripherals;                                  //@synthesize trackedPeripherals=_trackedPeripherals - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)resetLastSeenForTrackedAccessories:(id)arg1 ;
-(void)startBrowsingForHAPBLEAccessories;
-(void)pauseScans;
-(void)stopBrowsingForHAPBLEAccessories;
-(void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)retrieveStateForTrackedAccessoryWithIdentifier:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)probeReachabilityForTrackedAccessories;
-(WPHomeKit *)wpHomeKit;
-(void)_stopScanning;
-(void)setCurrentScanState:(long long)arg1 ;
-(void)_startBrowsingForHAPBLEAccessories;
-(void)_startScanningWithData:(id)arg1 ;
-(void)_stopBrowsingForHAPBLEAccessories;
-(NSMutableSet *)trackedIdentifiers;
-(BOOL)scanInBackground;
-(void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 restartScan:(BOOL)arg2 ;
-(long long)currentScanState;
-(void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)_removeTrackedPeripheral:(id)arg1 ;
-(NSMutableSet *)trackedPeripherals;
-(id)_getTrackedPeripheralWithIdentifier:(id)arg1 ;
-(unsigned long long)_getLinkQuality:(id)arg1 ;
-(void)_probeReachabilityForTrackedAccessories;
-(void)_reportHAPPeripheral:(id)arg1 ;
-(void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 ;
-(id)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 RSSI:(id)arg3 ;
-(void)homeKitDidUpdateState:(id)arg1 ;
-(void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 type:(long long)arg5 ;
-(void)homeKitStartedScanning:(id)arg1 ;
-(void)homeKitStoppedScanning:(id)arg1 ;
-(void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)setScanInBackground:(BOOL)arg1 ;
-(void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id<HAPAccessoryServerBrowserWiProxBTLEDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end

