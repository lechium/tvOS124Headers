/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVSSiriViewControllerHosting <NSObject>
@optional
-(void)serviceDidPresentBugReporter;
-(void)serviceDidDismissBugReporter;
-(void)setTypeToSiriViewHidden:(BOOL)arg1;

@required
-(void)setStatusViewHidden:(BOOL)arg1;
-(void)setCarDisplaySnippetVisible:(BOOL)arg1;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
-(void)setBugReportingAvailable:(BOOL)arg1;
-(void)setHelpButtonEmphasized:(BOOL)arg1;
-(void)pulseHelpButton;
-(void)serviceRequestsActivationSourceWithReplyHandler:(/*^block*/id)arg1;
-(void)serviceRequestsDismissalWithDelayForTTS:(BOOL)arg1 userInfo:(id)arg2;
-(void)serviceStartGuidedAccess;
-(void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)serviceDidReadBulletinWithIdentifier:(id)arg1;
-(void)serviceStartRequestWithOptions:(id)arg1;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOptions:(long long)arg3 replyHandler:(/*^block*/id)arg4;
-(void)notifyOnNextUserInteraction;
-(void)siriIdleAndQuietStatusDidChange:(BOOL)arg1;
-(void)setCarDisplayGatekeeperVisible:(BOOL)arg1;
-(void)setStatusViewDisabled:(BOOL)arg1;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1;
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(/*^block*/id)arg3;
-(void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3;
-(void)getScreenshotWithReplyHandler:(/*^block*/id)arg1;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1;
-(void)serviceDidPresentUserInterface;
-(void)serviceDidPresentConversationFromBreadcrumb;
-(void)serviceDidDetectMicButtonTap;
-(void)serviceDidDetectMicButtonLongPressBegan;
-(void)serviceDidDetectMicButtonLongPressEnded;
-(void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
-(void)serviceWillStartTest:(id)arg1;
-(void)serviceDidFinishTest:(id)arg1;
-(void)serviceFailTest:(id)arg1 withReason:(id)arg2;
-(void)serviceDidEnterUITrackingMode;
-(void)serviceDidExitUITrackingMode;
-(void)serviceDidDetectAudioRoutePickerTap;
-(void)serviceDidRequestKeyboard:(BOOL)arg1 minimized:(BOOL)arg2;
-(void)serviceDidRequestKeyboard:(BOOL)arg1;
-(void)serviceDidResetTextInput;
-(void)serviceWillBeginTapToEdit;
-(void)serviceDidEndTaptoEdit;
-(void)serviceDidRequestCurrentTextInput:(/*^block*/id)arg1;
-(void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;

@end

