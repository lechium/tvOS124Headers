/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSError;

@interface HAPCharacteristicResponseTuple : HMFObject {

	HAPCharacteristic* _characteristic;
	NSError* _error;

}

@property (nonatomic,retain) HAPCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
+(id)responseTupleForCharacteristic:(id)arg1 error:(id)arg2 ;
-(HAPCharacteristic *)characteristic;
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

