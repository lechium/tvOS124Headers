/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/DNDSBackingStoreRecord.h>

@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSScheduleSettingsRecord, NSString;

@interface DNDSSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord> {

	DNDSBehaviorSettingsRecord* _behaviorSettings;
	DNDSBypassSettingsRecord* _phoneCallBypassSettings;
	DNDSScheduleSettingsRecord* _scheduleSettings;

}

@property (nonatomic,copy,readonly) DNDSBehaviorSettingsRecord * behaviorSettings;                   //@synthesize behaviorSettings=_behaviorSettings - In the implementation block
@property (nonatomic,copy,readonly) DNDSBypassSettingsRecord * phoneCallBypassSettings;              //@synthesize phoneCallBypassSettings=_phoneCallBypassSettings - In the implementation block
@property (nonatomic,copy,readonly) DNDSScheduleSettingsRecord * scheduleSettings;                   //@synthesize scheduleSettings=_scheduleSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
+(id)backingStoreWithFileURL:(id)arg1 ;
+(id)recordWithEncodedInfo:(id)arg1 error:(id*)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_initWithRecord:(id)arg1 ;
-(DNDSBehaviorSettingsRecord *)behaviorSettings;
-(DNDSBypassSettingsRecord *)phoneCallBypassSettings;
-(DNDSScheduleSettingsRecord *)scheduleSettings;
-(id)_initWithBehaviorSettings:(id)arg1 phoneCallBypassSettings:(id)arg2 scheduleSettings:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

