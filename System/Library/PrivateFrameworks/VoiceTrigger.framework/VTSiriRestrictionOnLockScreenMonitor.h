/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface VTSiriRestrictionOnLockScreenMonitor : VTEventMonitor <MCProfileConnectionObserver> {

	BOOL _isRestricted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_checkSiriRestrictedOnLockScreen;
-(void)_notifyObserver:(id)arg1 withRestricted:(BOOL)arg2 ;
-(void)_didReceiveRestrictionChanged:(BOOL)arg1 ;
-(void)_didReceiveRestrictionChangedInQueue:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(id)init;
-(BOOL)isRestricted;
@end
