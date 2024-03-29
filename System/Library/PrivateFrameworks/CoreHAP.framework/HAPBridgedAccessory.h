/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessory.h>
#import <libobjc.A.dylib/HAPAccessoryServerInternalDelegate.h>

@class HAPCharacteristic, NSString;

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate> {

	HAPCharacteristic* _reachabilityCharacteristic;

}

@property (assign,nonatomic,__weak) HAPCharacteristic * reachabilityCharacteristic;              //@synthesize reachabilityCharacteristic=_reachabilityCharacteristic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 ;
-(id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg1 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 ;
-(BOOL)mergeWithAccessory:(id)arg1 ;
-(BOOL)__parseServices;
-(BOOL)__isReachable;
-(HAPCharacteristic *)reachabilityCharacteristic;
-(BOOL)__parseBridgeService:(id)arg1 ;
-(void)setReachabilityCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)isPrimary;
-(BOOL)mergeObject:(id)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(id)shortDescription;
@end

