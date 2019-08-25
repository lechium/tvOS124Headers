/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TLAlertPlaybackBackEndController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, TLAlertQueuePlayerController, TLAlertSystemSoundController, NSMapTable;

@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	TLAlertQueuePlayerController* _queuePlayerController;
	TLAlertSystemSoundController* _systemSoundController;
	NSMapTable* _alertContexts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAlertController;
+(long long)_playbackBackEndForAlert:(id)arg1 ;
+(BOOL)_shouldStopAlertForUserInterruption:(id)arg1 ;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(BOOL)arg2 ;
-(void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2 ;
-(BOOL)stopAllAlerts;
-(BOOL)_stopAllAlertsInCurrentProcess;
-(id)_prepareForPlayingAlert:(id)arg1 ;
-(void)_didCompletePlaybackOfAlert:(id)arg1 ;
-(id)_controllerForPlaybackBackEnd:(long long)arg1 ;
-(void)_didReachTimeoutForAlert:(id)arg1 ;
-(id)_queuePlayerController;
-(id)_systemSoundController;
-(id)init;
-(void)dealloc;
@end
