/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTRoutineManagerRegistrant.h>

@class NSMutableDictionary, NSDictionary;

@interface RTRoutineManagerRegistrantScenarioTrigger : RTRoutineManagerRegistrant {

	NSMutableDictionary* __scenarioTriggerHandlers;
	BOOL _registered;
	unsigned long long _monitoredScenarioTriggerTypes;

}

@property (nonatomic,readonly) unsigned long long monitoredScenarioTriggerTypes;              //@synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * scenarioTriggerHandlers;                   //@synthesize _scenarioTriggerHandlers=__scenarioTriggerHandlers - In the implementation block
@property (nonatomic,readonly) BOOL registered;                                               //@synthesize registered=_registered - In the implementation block
-(NSDictionary *)scenarioTriggerHandlers;
-(id)startMonitoringForScenarioTriggerTypes:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)stopMonitoringForScenarioTriggerTypes:(unsigned long long)arg1 ;
-(void)onScenarioTriggers:(id)arg1 error:(id)arg2 ;
-(unsigned long long)monitoredScenarioTriggerTypes;
-(id)init;
-(BOOL)registered;
@end

