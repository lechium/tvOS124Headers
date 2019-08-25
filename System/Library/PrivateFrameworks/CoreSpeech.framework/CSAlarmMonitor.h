/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSAlarmMonitor : CSEventMonitor {

	long long _alarmFiringState;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)initializeAlarmState;
-(long long)alarmState;
-(id)init;
@end

