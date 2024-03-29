/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAPBTLECentralManagerDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CUBLEAdvertiser, HMFTimer, HMDHAPAccessory, HAPBTLECentralManager, HMFUnfairLock, NSString, NSArray;

@interface HMDBTLEAdvertiser : HMFObject <HAPBTLECentralManagerDelegate, HMFTimerDelegate> {

	NSObject*<OS_dispatch_queue> workQueue;
	CUBLEAdvertiser* leAdvertiser;
	HMFTimer* advertisementTimer;
	HMFTimer* waitForReachableTimer;
	HMDHAPAccessory* accessory;
	HAPBTLECentralManager* centralManager;
	HMFUnfairLock* _lock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,retain) HMFUnfairLock * lock;                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) CUBLEAdvertiser * leAdvertiser; 
@property (nonatomic,retain) HMFTimer * advertisementTimer; 
@property (nonatomic,retain) HMFTimer * waitForReachableTimer; 
@property (nonatomic,retain) HMDHAPAccessory * accessory; 
@property (nonatomic,retain) HAPBTLECentralManager * centralManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)sharedAdvertiser;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHAPAccessory *)accessory;
-(void)timerDidFire:(id)arg1 ;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(void)stopAdvertisement:(id)arg1 ;
-(CUBLEAdvertiser *)leAdvertiser;
-(void)setLeAdvertiser:(CUBLEAdvertiser *)arg1 ;
-(void)_stopAdvertisement:(id)arg1 ;
-(HMFTimer *)advertisementTimer;
-(void)setAdvertisementTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)waitForReachableTimer;
-(void)setWaitForReachableTimer:(HMFTimer *)arg1 ;
-(void)_completePendingPowerOnRequest;
-(void)_cancelOn:(id)arg1 ;
-(HAPBTLECentralManager *)centralManager;
-(void)_advertisementTimeout;
-(void)_wirelessReachabilityTimeout;
-(void)didUpdateBTLEState:(long long)arg1 ;
-(void)cancelOn:(id)arg1 ;
-(void)powerOn:(id)arg1 macAddress:(id)arg2 ;
-(BOOL)isAdvertisingForAccessory:(id)arg1 ;
-(void)setCentralManager:(HAPBTLECentralManager *)arg1 ;
-(void)setLock:(HMFUnfairLock *)arg1 ;
-(id)init;
-(HMFUnfairLock *)lock;
@end

