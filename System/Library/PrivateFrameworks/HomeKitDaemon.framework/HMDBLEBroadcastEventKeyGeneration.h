/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAccessory, NSString;

@interface HMDBLEBroadcastEventKeyGeneration : HMDLogEvent <HMDAWDLogEvent> {

	int _reason;
	HMDAccessory* _accessory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) int reason;                            //@synthesize reason=_reason - In the implementation block
+(id)broadcastKeyGenerationEventForAccessory:(id)arg1 reason:(int)arg2 ;
+(void)initialize;
+(id)uuid;
-(HMDAccessory *)accessory;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initBroadcastKeyGenerationEventForAccessory:(id)arg1 reason:(int)arg2 ;
-(int)reason;
@end

