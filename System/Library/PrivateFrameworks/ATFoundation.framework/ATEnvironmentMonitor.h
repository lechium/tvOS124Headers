/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ATFoundation/ATFoundation-Structs.h>
@class NSObject, NSHashTable;

@interface ATEnvironmentMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	unsigned _powerNotification;
	int _thermalNotificationToken;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	BOOL _power;
	BOOL _internetReachable;
	BOOL _internetReachableViaOnlyWWAN;
	unsigned long long _thermalPressureLevel;

}

@property (assign,getter=getThermalPressureLevel,nonatomic) unsigned long long thermalPressureLevel;                 //@synthesize thermalPressureLevel=_thermalPressureLevel - In the implementation block
@property (getter=hasPower,nonatomic,readonly) BOOL power;                                                           //@synthesize power=_power - In the implementation block
@property (getter=isInternetReachable,nonatomic,readonly) BOOL internetReachable;                                    //@synthesize internetReachable=_internetReachable - In the implementation block
@property (getter=isInternetReachableViaOnlyWWAN,nonatomic,readonly) BOOL internetReachableViaOnlyWWAN;              //@synthesize internetReachableViaOnlyWWAN=_internetReachableViaOnlyWWAN - In the implementation block
+(id)sharedMonitor;
-(unsigned long long)getThermalPressureLevel;
-(void)setThermalPressureLevel:(unsigned long long)arg1 ;
-(BOOL)isInternetReachable;
-(BOOL)isInternetReachableViaOnlyWWAN;
-(BOOL)hasPower;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)stop;
-(void)addObserver:(id)arg1 ;
-(void)start;
@end
