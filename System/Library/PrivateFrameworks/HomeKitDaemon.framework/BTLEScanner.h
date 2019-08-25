/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HAPBTLECentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFTimer, HMDHAPAccessory, CUBLEScanner, HAPBTLECentralManager, NSString, NSArray;

@interface BTLEScanner : HMFObject <HMFTimerDelegate, HAPBTLECentralManagerDelegate> {

	NSObject*<OS_dispatch_queue> workQueue;
	HMFTimer* scanTimer;
	HMDHAPAccessory* accessory;
	CUBLEScanner* cubleScanner;
	HAPBTLECentralManager* centralManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,retain) HMFTimer * scanTimer; 
@property (nonatomic,retain) HMDHAPAccessory * accessory; 
@property (nonatomic,retain) CUBLEScanner * cubleScanner; 
@property (nonatomic,retain) HAPBTLECentralManager * centralManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)sharedScanLock;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHAPAccessory *)accessory;
-(void)timerDidFire:(id)arg1 ;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(HAPBTLECentralManager *)centralManager;
-(void)didUpdateBTLEState:(long long)arg1 ;
-(void)setCentralManager:(HAPBTLECentralManager *)arg1 ;
-(void)stopScan;
-(HMFTimer *)scanTimer;
-(void)setScanTimer:(HMFTimer *)arg1 ;
-(void)setCubleScanner:(CUBLEScanner *)arg1 ;
-(CUBLEScanner *)cubleScanner;
-(void)_stopScanWithAccessoryFound:(BOOL)arg1 suspended:(BOOL)arg2 ;
-(BOOL)startScan:(id)arg1 timeout:(double)arg2 ;
-(id)init;
-(void)_stopTimer;
@end
