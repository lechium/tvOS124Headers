/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAccessory, NSString;

@interface HMDAccessoryRelaySetupEvent : HMDLogEvent <HMDAWDLogEvent> {

	HMDAccessory* _hmdAccessory;
	unsigned long long _actionType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HMDAccessory * hmdAccessory;              //@synthesize hmdAccessory=_hmdAccessory - In the implementation block
@property (nonatomic,readonly) unsigned long long actionType;                   //@synthesize actionType=_actionType - In the implementation block
+(id)stringForActionType:(unsigned long long)arg1 ;
+(id)relaySetupEventWithActionType:(unsigned long long)arg1 hmdAccessory:(id)arg2 ;
+(void)initialize;
+(id)uuid;
-(unsigned long long)actionType;
-(id)initWithActionType:(unsigned long long)arg1 hmdAccessory:(id)arg2 ;
-(HMDAccessory *)hmdAccessory;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

