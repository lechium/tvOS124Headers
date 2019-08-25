/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPAVController;

@interface MPAVPolicyEnforcer : NSObject {

	int _screenRecordingNotifyToken;
	BOOL _lastKnownScreenRecordingState;
	MPAVController* _controller;

}

@property (nonatomic,__weak,readonly) MPAVController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)initWithAVController:(id)arg1 ;
-(void)_registerForScreenRecordingNotifications;
-(void)_unregisterForScreenRecordingNotifications;
-(void)_updateScreenRecordingState;
-(void)_isScreenRecordingDidChange:(BOOL)arg1 ;
-(void)dealloc;
-(MPAVController *)controller;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end
