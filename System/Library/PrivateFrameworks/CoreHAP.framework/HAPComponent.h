/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPBTLECentralManagerDelegate;
@interface HAPComponent : HMFObject {

	id<HAPBTLECentralManagerDelegate> centralManagerDelegate;

}

@property (assign,nonatomic,__weak) id<HAPBTLECentralManagerDelegate> centralManagerDelegate; 
-(void)setCentralManagerDelegate:(id<HAPBTLECentralManagerDelegate>)arg1 ;
-(id<HAPBTLECentralManagerDelegate>)centralManagerDelegate;
-(id)initWithDelegate:(id)arg1 ;
@end
