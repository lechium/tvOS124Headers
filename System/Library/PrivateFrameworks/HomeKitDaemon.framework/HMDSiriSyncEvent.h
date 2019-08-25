/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSArray, NSString;

@interface HMDSiriSyncEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _duration;
	NSArray* _notificationReasons;
	unsigned long long _lastSyncedConfigurationVersion;
	unsigned long long _configurationVersion;
	unsigned long long _serverConfigurationVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSArray * notificationReasons;                                  //@synthesize notificationReasons=_notificationReasons - In the implementation block
@property (nonatomic,readonly) unsigned long long lastSyncedConfigurationVersion;              //@synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long configurationVersion;                        //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long serverConfigurationVersion;                  //@synthesize serverConfigurationVersion=_serverConfigurationVersion - In the implementation block
+(id)syncRequestWithStartTime:(unsigned long long)arg1 serverConfigurationVersion:(unsigned long long)arg2 configurationVersion:(unsigned long long)arg3 lastSyncedConfigurationVersion:(unsigned long long)arg4 notificationReasons:(id)arg5 ;
+(void)initialize;
+(id)uuid;
-(unsigned long long)configurationVersion;
-(unsigned long long)lastSyncedConfigurationVersion;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithStartTime:(unsigned long long)arg1 serverConfigurationVersion:(unsigned long long)arg2 configurationVersion:(unsigned long long)arg3 lastSyncedConfigurationVersion:(unsigned long long)arg4 notificationReasons:(id)arg5 ;
-(NSArray *)notificationReasons;
-(unsigned long long)serverConfigurationVersion;
-(unsigned long long)duration;
@end

