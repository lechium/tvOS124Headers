/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DNDSBaseLifetimeMonitor.h>

@class PCPersistentTimer;

@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor {

	PCPersistentTimer* _lifetimeTimer;

}
+(BOOL)willMonitorLifetime:(id)arg1 ;
-(void)_timerFired:(id)arg1 ;
-(id)updateForModeAssertionDetails:(id)arg1 date:(id)arg2 ;
@end
