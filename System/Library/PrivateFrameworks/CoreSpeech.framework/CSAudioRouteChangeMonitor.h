/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSAudioRouteChangeMonitor : CSEventMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isHearstConnected;
	BOOL _isJarvisConnected;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)getHearstConnected:(/*^block*/id)arg1 ;
-(void)getJarvisConnected:(/*^block*/id)arg1 ;
-(BOOL)hearstConnected;
-(BOOL)jarvisConnected;
-(BOOL)_fetchHearstConnectionState;
-(void)_notifyHearstConnectionState:(BOOL)arg1 ;
-(BOOL)_fetchJarvisConnectionState;
-(void)_notifyJarvisConnectionState:(BOOL)arg1 ;
-(void)preferredExternalRouteDidChange:(id)arg1 ;
-(void)jarvisAudioRouteDidChange:(id)arg1 ;
-(id)init;
@end

