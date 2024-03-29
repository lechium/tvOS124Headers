/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSSettingsRecord.h>

@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSScheduleSettingsRecord;

@interface DNDSMutableSettingsRecord : DNDSSettingsRecord

@property (nonatomic,copy) DNDSBehaviorSettingsRecord * behaviorSettings; 
@property (nonatomic,copy) DNDSBypassSettingsRecord * phoneCallBypassSettings; 
@property (nonatomic,copy) DNDSScheduleSettingsRecord * scheduleSettings; 
-(void)setBehaviorSettings:(DNDSBehaviorSettingsRecord *)arg1 ;
-(void)setPhoneCallBypassSettings:(DNDSBypassSettingsRecord *)arg1 ;
-(void)setScheduleSettings:(DNDSScheduleSettingsRecord *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

