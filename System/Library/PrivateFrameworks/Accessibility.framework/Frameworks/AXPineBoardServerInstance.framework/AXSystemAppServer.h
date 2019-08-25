/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXPineBoardServerInstance.framework/AXPineBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXSystemAppServer <NSObject>
@optional
-(BOOL)isPasscodeLockVisible;
-(BOOL)isScreenshotWindowVisible;

@required
+(id)server;
-(void)rebootDevice;
-(void)pid:(/*^block*/id)arg1;
-(BOOL)isSiriVisible;
-(BOOL)isAppSwitcherVisible;
-(BOOL)isScreenSaverVisible;
-(BOOL)isNowPlayingUIVisible;
-(BOOL)isReceivingAirPlay;
-(BOOL)isSoftwareUpdateUIVisible;
-(BOOL)isMediaPlaying;
-(int)pid;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1;
-(BOOL)openSiri;
-(BOOL)dismissSiri;
-(BOOL)isDockVisible;
-(BOOL)isNotificationCenterVisible;
-(BOOL)isControlCenterVisible;
-(BOOL)isNotificationVisible;
-(BOOL)isSiriTalkingOrListening;
-(BOOL)isSystemSleeping;
-(void)wakeUpDeviceIfNecessary;
-(long long)activeInterfaceOrientation;

@end

