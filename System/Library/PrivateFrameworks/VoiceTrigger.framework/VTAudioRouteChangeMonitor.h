/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VoiceTrigger-Structs.h>
#import <VoiceTrigger/VTEventMonitor.h>

@interface VTAudioRouteChangeMonitor : VTEventMonitor {

	unsigned long long _hearstConnection;
	opaqueCMSessionRef _cmSession;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)updateActiveAudioRouteStatus;
-(unsigned long long)hearstConnectionStatus;
-(unsigned long long)_updateHearstConnectionStatus;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 ;
-(id)init;
@end
